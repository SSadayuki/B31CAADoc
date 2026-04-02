#ifndef CATITPSShiftedProfileTolerance_H
#define CATITPSShiftedProfileTolerance_H

// COPYRIGHT DASSAULT SYSTEMES 2001 - 2018

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATTPSItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATTPSToleranceValueType.h"

class CATITTRS;
class CATMathPoint;
class CATICkeParm_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATTPSItfCPP IID IID_CATITPSShiftedProfileTolerance;
#else
extern "C" const IID IID_CATITPSShiftedProfileTolerance ;
#endif

/**
 * Interface for accessing shifted tolerance zone informations of a TPS.
 */
class ExportedByCATTPSItfCPP CATITPSShiftedProfileTolerance : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Retrieves shift value of tolerance zone (in millimeters); in case of tabulated type, returned value is the resolved value.
     *<br />The shift value is the distance between the toleranced surface and the median surface of tolerance zone.
     *<br />The index optional argument is interesting for linear non uniform tolerance to manage
     * the "lower" (IndexOfBound = 1, default) and "upper" (IndexOfBound = 2) bounds of the linear non uniform tolerance zone.
     *   @param oValue
     *     Always positive because shift side is given by @href GetShiftSide method.
     */
    virtual HRESULT GetShiftValue ( double* oValue, int IndexOfBound = 1 ) const = 0;

    /**
    * Retrieves shift value of tolerance zone.
    *<br />Complements method @href CATITPSShiftedProfileTolerance#GetShiftValue for CATTPSTolTabulatedValue value; in this context,
    * parameter type is String while in the other situations Length parameter is employed.
    *<br />Second parameter is an optional argument; when specified (not null) it addresses linear non uniform tolerance,
    * CATTPSTolLinearNonUniformValue, to manage the "upper" bound of the linear non uniform tolerance zone.
    */
    virtual HRESULT GetShiftValue ( CATICkeParm_var & ospTolValue, CATICkeParm_var * opspLinearNonUniUpperLimitTolValue = NULL ) const = 0;

    /**
     * Retrieves shift side.
     *   @param opPoint
     *     a mathematical point located on the shift side of surface.
     */
    virtual HRESULT GetShiftSide (CATMathPoint ** opPoint) const = 0;

    /**
     * Retrieves the shift direction by two points.
     *   @param opOrigin
     *     a mathematical point located on the surface.
     *   @param opEnd
     *     a mathematical point located that define the shift direction.
     */
    virtual HRESULT GetShiftDirection ( CATMathPoint ** opOrigin, 
                                        CATMathPoint ** opEnd) const = 0;

    /**
    * Retrieve the value type of tolerance zone.     
    *  @param oType
    *   value type.
    *  returns S_OK when the value type has been correctly retrieved, 
    *  returns E_FAIL otherwise.
    */
    virtual HRESULT GetToleranceValueType (CATTPSToleranceValueType& oType) const = 0;

    /**
    * Retrieves boundaries of Linear Non Uniform tolerance zone.  
    *  @param opFirstSideBoundary [out, CATITTRS#Release]
    *   First side boundary. 
    *  @param opSecondBoundary [out, CATITTRS#Release]
    *   Second side boundary.
    *  returns S_OK when the boundaries have been correctly retrieved, 
    *  returns E_FAIL otherwise.
    */
    virtual HRESULT GetNonUniformToleranceZone( CATITTRS ** opFirstSideBoundary, CATITTRS ** opSecondBoundary ) const = 0;
};

CATDeclareHandler (CATITPSShiftedProfileTolerance, CATBaseUnknown);

#endif

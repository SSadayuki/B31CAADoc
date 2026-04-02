#ifndef CATITPSToleranceZone_H
#define CATITPSToleranceZone_H

// COPYRIGHT DASSAULT SYSTEMES 1999 - 2018

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATTPSToleranceZoneForm.h"
#include "CATTPSToleranceValueType.h"

class CATITTRS;
class CATMathAxis;
class CATMathVector;
class CATICkeParm_var;

extern "C" const IID IID_CATITPSToleranceZone;

/**
 * Interface for accessing tolerance zone informations of a TPS.
 * Warning <tt>CATMathSetOfVectors</tt> is a protected interface (not exposed)
 * of Mathematics framework. Subject to change.
 *   @see CATTPSToleranceZoneForm
 */
class CATITPSToleranceZone : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
    * Sets tolerance zone value (in millimeters).
    * For tabulated value, use @href CATITPSToleranceZone#SetValue with parameter signature.
    *<br />The index optional argument is interesting for linear non uniform tolerance to manage
    * the "lower" (IndexOfBound = 1, default) and "upper" (IndexOfBound = 2) bounds of the linear non uniform tolerance zone.
    */
    virtual HRESULT SetValue ( const double iValue, int IndexOfBound = 1 ) = 0;

    /**
    * Retrieves tolerance zone value (in millimeters); in case of tabulated type, returned value is
    * the resolved value.
    *<br />The index optional argument is interesting for linear non uniform tolerance to manage
    * the "lower" (IndexOfBound = 1, default) and "upper" (IndexOfBound = 2) bounds of the linear non uniform tolerance zone.
    */
    virtual HRESULT GetValue ( double* oValue, int IndexOfBound = 1 ) const = 0;

    /**
     * Sets tolerance zone value. 
     *<br/> Complements method @href CATITPSToleranceZone#SetValue for CATTPSTolTabulatedValue value; in this context,
     * parameter type is String while in the other situations Length parameter is employed.
     *<br />Second parameter is an optional argument; when specified (not null) it addresses linear non uniform tolerance,
     * CATTPSTolLinearNonUniformValue, to manage the "upper" bound of the linear non uniform tolerance zone.
     */
    virtual HRESULT SetValue ( CATICkeParm_var & ispTolValue, CATICkeParm_var * ipspLinearNonUniUpperLimitTolValue = NULL ) = 0;

    /**
     * Retrieves tolerance zone value.
     *<br />Complements method @href CATITPSToleranceZone#GetValue for CATTPSTolTabulatedValue value; in this context,
     * parameter type is String while in the other situations Length parameter is employed.
     *<br />Second parameter is an optional argument; when specified (not null) it addresses linear non uniform tolerance,
     * CATTPSTolLinearNonUniformValue, to manage the "upper" bound of the linear non uniform tolerance zone.
     */
    virtual HRESULT GetValue ( CATICkeParm_var & ospTolValue, CATICkeParm_var * opspLinearNonUniUpperLimitTolValue = NULL ) const = 0;

    /**
     * Sets tolerance zone form.
     */
    virtual HRESULT SetForm (const CATTPSToleranceZoneForm iForm) = 0;

    /**
     * Retrieves tolerance zone form.
     *   @param oForm [out, CATTPSToleranceZoneForm#Release]
     *     The tolerance zone form.
     */
    virtual HRESULT GetForm (CATTPSToleranceZoneForm * oForm) const = 0;

    /**
     * Get the direction in which we must apply the tolerance zone.
     * If the class of the TTRS is cylindrical, the normal is the direction of the cylindre.
     * If the class of the TTRS is planar, the normal is the normal of the plane.
     *   @param opiDirection [out, CATITTRS#Release]
     *     The the direction in which we must apply the tolerance zone.
     */
    virtual HRESULT GetDirection (CATMathVector * oNormal, CATITTRS ** opiDirection) const = 0;

    /**
     * Sets the value type of tolerance zone.     
     *<br /><em>Notice:<em/> Local enumeration type <em>"enum ValueType {Numerical,Tabulated,NonUniform};"<em/> whose definition is reminded
     * in this comment has been substituted by global enum @href CATTPSToleranceValueType with same values. For existing code, just replace
     * <em>"ValueType"<em/> by <em>"CATTPSToleranceValueType"<em/> to pass successfully the compilation.
     *<br/>Behavioral upward compatibility is guaranteed.
     *  @param iType
     *   value type.
     *  returns S_OK when the value type has been correctly set, 
     *  returns E_FAIL otherwise.
     */
    virtual HRESULT SetToleranceValueType (const CATTPSToleranceValueType iType) = 0;

    /**
     * Retrieve the value type of tolerance zone.     
     *<br /><em>Notice:<em/> Local enumeration type <em>"enum ValueType {Numerical,Tabulated,NonUniform};"<em/> whose definition is reminded
     * in this comment has been substituted by global enum @href CATTPSToleranceValueType with same values. For existing code, just replace
     * <em>"ValueType"<em/> by <em>"CATTPSToleranceValueType"<em/> to pass successfully the compilation.
     *<br/>Behavioral upward compatibility is guaranteed.
     *  @param oType
     *   value type.
     *  returns S_OK when the value type has been correctly retrieved, 
     *  returns E_FAIL otherwise.
     */
    virtual HRESULT GetToleranceValueType (CATTPSToleranceValueType& oType) const = 0;

    /**
     * Sets boundaries of Non Uniform and Linear Non Uniform tolerance zone.
     *  @param ipMMBoundary
     *   Maximum material boundary.
     *  @param ipLMBoundary
     *   Least material boundary.
     *  returns S_OK when the boundaries have been correctly set,
     *  returns E_FAIL otherwise.
     */
    virtual HRESULT SetNonUniformToleranceZone (const CATITTRS* ipMMBoundary, const CATITTRS* ipLMBoundary) = 0;

    /**
     * Retrieves boundaries of Non Uniform and Linear Non Uniform  tolerance zone.  
     *  @param opMMBoundary [out, CATITTRS#Release]
     *   Maximum material boundary. 
     *  @param opLMBoundary [out, CATITTRS#Release]
     *   Least material boundary.
     *  returns S_OK when the boundaries have been correctly retrieved, 
     *  returns E_FAIL otherwise.
     */
    virtual HRESULT GetNonUniformToleranceZone (CATITTRS ** opMMBoundary, CATITTRS ** opLMBoundary) const = 0;

    /**
     * Sets Any Cross Section symbol.
     *  @param iValue
     *   Any Cross Section.
     *  returns S_OK when the value has been correctly set, 
     *  returns E_FAIL otherwise.
     */
    virtual HRESULT SetAnyCrossSection (const CATBoolean iValue) = 0;

    /**
     * Retrieves Any Cross Section symbol.
     *  @param oValue
     *   Any Cross Section.
     *  returns S_OK when the value has been correctly retrieved, 
     *  returns E_FAIL otherwise.
     */
    virtual HRESULT GetAnyCrossSection (CATBoolean& oValue) const = 0;

    /**
     * Checks if the options for ACS will be proposed of not
     *  @param obACSCreation     
     *  returns S_OK when the ACS can be proposed
     *  returns E_FAIL otherwise.
     */
    virtual HRESULT CheckACSCreation (CATBoolean &obACSCreation) = 0;


};

CATDeclareHandler (CATITPSToleranceZone, CATBaseUnknown);

#endif

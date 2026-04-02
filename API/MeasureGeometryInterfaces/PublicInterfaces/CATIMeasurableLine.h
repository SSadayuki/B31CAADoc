// COPYRIGHT Dassault Systemes 2001
//===================================================================
//
// CATIMeasurableLine.h
//   This interface allows to get measurements on a line.
//
//===================================================================
#ifndef CATIMeasurableLine_H
#define CATIMeasurableLine_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATMeasureGeometryInterfaces.h"
#include "CATIMeasurableCurve.h"

class CATMathPoint;
class CATMathVector;

extern ExportedByCATMeasureGeometryInterfaces IID IID_CATIMeasurableLine ;

//------------------------------------------------------------------

/**
 * Get measurements on a line.
 */
class ExportedByCATMeasureGeometryInterfaces CATIMeasurableLine: public CATIMeasurableCurve
{
  CATDeclareInterface;

  public:

    /**
     * Get the position of the origin of the line.
     * @param ioOrigin
     *    The position with respect to absolute axis system.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetOrigin (CATMathPoint & ioOrigin) const=0;

    /**
     * Get the direction of the line.
     * @param ioDirection
     *    The direction with respect to absolute axis system.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetDirection (CATMathVector & oVector) const=0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATIMeasurableLine, CATBaseUnknown );

#endif

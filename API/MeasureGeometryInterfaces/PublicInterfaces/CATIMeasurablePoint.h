// COPYRIGHT Dassault Systemes 2001
//===================================================================
//
// CATIMeasurablePoint.h
//   This interface allows to get measurements on a point.
//
//===================================================================
#ifndef CATIMeasurablePoint_H
#define CATIMeasurablePoint_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATMeasureGeometryInterfaces.h"
#include "CATIMeasurable.h"

class CATMathPoint;

extern ExportedByCATMeasureGeometryInterfaces IID IID_CATIMeasurablePoint ;

//------------------------------------------------------------------

/**
 * Get measurements on a point.
 */
class ExportedByCATMeasureGeometryInterfaces CATIMeasurablePoint: public CATIMeasurable
{
  CATDeclareInterface;

  public:

    /**
     * Get the position of the point.
     * @param ioPoint
     *    The position with respect to absolute axis system.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetPoint (CATMathPoint & ioPoint) const=0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATIMeasurablePoint, CATBaseUnknown );

#endif

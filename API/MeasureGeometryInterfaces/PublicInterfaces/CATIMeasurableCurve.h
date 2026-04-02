// COPYRIGHT Dassault Systemes 2001
//===================================================================
//
// CATIMeasurableCurve.h
//   This interface allows to get measurements on a curve.
//
//===================================================================
#ifndef CATIMeasurableCurve_H
#define CATIMeasurableCurve_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATMeasureGeometryInterfaces.h"
#include "CATIMeasurable.h"

class CATMathPoint;

extern ExportedByCATMeasureGeometryInterfaces IID IID_CATIMeasurableCurve;

//------------------------------------------------------------------

/**
 * Get measurements on a curve.
 */
class ExportedByCATMeasureGeometryInterfaces CATIMeasurableCurve: public CATIMeasurable
{
  CATDeclareInterface;

  public:

    /**
     * Get the length of the curve.
     * @param oLength
     *    The length.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetLength (double & oLength) const=0;

    /**
     * Get the characteristic points of the curve.
     * @param ioStartPoint
     *    The position of the start point with respect to absolute axis system.
     * @param ioMidPoint
     *    The position of the mid point with respect to absolute axis system.
     * @param ioEndPoint
     *    The position of the end point with respect to absolute axis system.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetPoints (CATMathPoint & ioStartPoint, CATMathPoint & ioMidPoint, CATMathPoint & ioEndPoint) const=0;

    /**
     * Get the position of the center of gravity of the curve.
     * @param ioPoint
     *    The position with respect to absolute axis system.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetCOG (CATMathPoint & ioPoint) const=0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATIMeasurableCurve, CATBaseUnknown );

#endif

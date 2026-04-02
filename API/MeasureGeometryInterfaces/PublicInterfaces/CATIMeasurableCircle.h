// COPYRIGHT Dassault Systemes 2001
//===================================================================
//
// CATIMeasurableCircle.h
//   This interface allows to get measurements on a circle.
//
//===================================================================
#ifndef CATIMeasurableCircle_H
#define CATIMeasurableCircle_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATMeasureGeometryInterfaces.h"
#include "CATIMeasurableCurve.h"

class CATMathPoint;
class CATMathVector;

extern ExportedByCATMeasureGeometryInterfaces IID IID_CATIMeasurableCircle ;

//------------------------------------------------------------------

/**
 * Get measurements on a circle.
 */
class ExportedByCATMeasureGeometryInterfaces CATIMeasurableCircle: public CATIMeasurableCurve
{
  CATDeclareInterface;

  public:

    /**
     * Get the radius of the circle.
     * @param oARadius
     *    The radius.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetRadius (double & oRadius) const=0;

    /**
     * Get the position of the center of the circle.
     * @param ioPoint
     *    The position with respect to absolute axis system.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetCenter (CATMathPoint & ioPoint) const=0;

    /**
     * Get the angle of the arc.
     * @param oAngle
     *    The angle of the arc.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetAngle (double & oAngle) const=0;

    /**
     * Get the axis vector of the circle.
     * @param ioVector
     *    The axis vector with respect to absolute axis system.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetAxis (CATMathVector & ioVector) const=0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATIMeasurableCircle, CATBaseUnknown );

#endif

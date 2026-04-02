// COPYRIGHT Dassault Systemes 2001
//===================================================================
//
// CATIMeasurableCylinder.h
//   This interface allows to get measurements on a cylinder.
//
//===================================================================
#ifndef CATIMeasurableCylinder_H
#define CATIMeasurableCylinder_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATMeasureGeometryInterfaces.h"
#include "CATIMeasurableSurface.h"

class CATMathPoint;
class CATMathVector;

extern ExportedByCATMeasureGeometryInterfaces IID IID_CATIMeasurableCylinder;

//------------------------------------------------------------------

/**
 * Get measurements on a cylinder.
 */
class ExportedByCATMeasureGeometryInterfaces CATIMeasurableCylinder: public CATIMeasurableSurface
{
  CATDeclareInterface;

  public:

    /**
     * Get the radius of the cylinder.
     * @param oARadius
     *    The radius.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetRadius (double & oRadius) const=0;

    /**
     * Get the position of a point on the axis of the cylinder.
     * @param ioPoint
     *    The position with respect to absolute axis system.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetPoint (CATMathPoint & ioPoint) const=0;

    /**
     * Get the position of the two limit points on the axis of the cylinder.
     * The distance between these points fit with the heigth of the cylinder
     * @param ioPoint
     *    The position with respect to absolute axis system.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetPoints (CATMathPoint & ioStartPoint, CATMathPoint & ioEndPoint) const=0;

    /**
     * Get the axis vector of the cylinder.
     * @param ioVector
     *    The axis vector with respect to absolute axis system.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetAxis (CATMathVector & ioVector) const=0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATIMeasurableCylinder, CATBaseUnknown );

#endif

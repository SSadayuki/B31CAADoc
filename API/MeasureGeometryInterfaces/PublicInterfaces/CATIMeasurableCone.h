// COPYRIGHT Dassault Systemes 2001
//===================================================================
//
// CATIMeasurableCone.h
//   This interface allows to get measurements on a cone.
//
//===================================================================
#ifndef CATIMeasurableCone_H
#define CATIMeasurableCone_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATMeasureGeometryInterfaces.h"
#include "CATIMeasurableSurface.h"

class CATMathPoint;
class CATMathVector;

extern ExportedByCATMeasureGeometryInterfaces IID IID_CATIMeasurableCone ;

//------------------------------------------------------------------

/**
 * Get measurements on a cone.
 */
class ExportedByCATMeasureGeometryInterfaces CATIMeasurableCone: public CATIMeasurableSurface
{
  CATDeclareInterface;

  public:

    /**
     * Get the half angle of the cone.
     * @param oAngle
     *    The angle.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetAngle (double & oAngle) const=0;

    /**
     * Get the position of a point on the axis of the cylinder.
     * @param ioPoint
     *    The position with respect to absolute axis system.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetPoint (CATMathPoint & ioPoint) const=0;

    /**
     * Get the position of the two limit points on the axis of the cone.
     * The distance between these points fit with the heigth of the cone
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

CATDeclareHandler( CATIMeasurableCone, CATBaseUnknown );

#endif

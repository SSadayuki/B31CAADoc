// COPYRIGHT Dassault Systemes 2001
//===================================================================
//
// CATIMeasurableSphere.h
//   This interface allows to get measurements on a sphere.
//
//===================================================================
#ifndef CATIMeasurableSphere_H
#define CATIMeasurableSphere_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATMeasureGeometryInterfaces.h"
#include "CATIMeasurableSurface.h"

class CATMathPoint;

extern ExportedByCATMeasureGeometryInterfaces IID IID_CATIMeasurableSphere ;

//------------------------------------------------------------------

/**
 * Get measurements on a sphere.
 */
class ExportedByCATMeasureGeometryInterfaces CATIMeasurableSphere: public CATIMeasurableSurface
{
  CATDeclareInterface;

  public:

    /**
     * Get the radius of the sphere.
     * @param oARadius
     *    The radius.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetRadius (double & oRadius) const=0;

    /**
     * Get the position of the center of the sphere.
     * @param ioPoint
     *    The position with respect to absolute axis system.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetCenter (CATMathPoint & ioPoint) const=0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATIMeasurableSphere, CATBaseUnknown );

#endif

// COPYRIGHT Dassault Systemes 2001
//===================================================================
//
// CATIMeasurablePlane.h
//   This interface allows to get measurements on a surface.
//
//===================================================================
#ifndef CATIMeasurablePlane_H
#define CATIMeasurablePlane_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATMeasureGeometryInterfaces.h"
#include "CATIMeasurableSurface.h"

class CATMathPlane;

extern ExportedByCATMeasureGeometryInterfaces IID IID_CATIMeasurablePlane ;

//------------------------------------------------------------------

/**
 * Get measurements on a plane.
 */
class ExportedByCATMeasureGeometryInterfaces CATIMeasurablePlane: public CATIMeasurableSurface
{
  CATDeclareInterface;

  public:

    /**
     * Get the position of the plane.
     * @param ioPlane
     *    The position with respect to absolute axis system.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetPlane (CATMathPlane & ioPlane) const=0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATIMeasurablePlane, CATBaseUnknown );

#endif

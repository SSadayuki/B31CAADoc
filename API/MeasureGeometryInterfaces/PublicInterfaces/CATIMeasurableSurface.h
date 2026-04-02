// COPYRIGHT Dassault Systemes 2001
//===================================================================
//
// CATIMeasurableSurface.h
//   This interface allows to get measurements on a surface.
//
//===================================================================
#ifndef CATIMeasurableSurface_H
#define CATIMeasurableSurface_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATMeasureGeometryInterfaces.h"
#include "CATIMeasurable.h"

class CATMathPoint;

extern ExportedByCATMeasureGeometryInterfaces IID IID_CATIMeasurableSurface ;

//------------------------------------------------------------------

/**
 * Get measurements on a surface.
 */
class ExportedByCATMeasureGeometryInterfaces CATIMeasurableSurface: public CATIMeasurable
{
  CATDeclareInterface;

  public:

    /**
     * Get the Area and the Center Of Gravity of the volume.
     * Use for better performance
     * @param oArea
     *    The area.
     * @param oCOfG
     *    The position with respect to absolute axis system.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetArea_COfG (double & oSurface, CATMathPoint & oCOfG) const=0;

    /**
     * Get the area of the surface.
     * @param oArea
     *    The area.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetArea (double & oArea) const=0;

    /**
     * Get the position of the center of gravity of the surface.
     * @param ioPoint
     *    The position with respect to absolute axis system.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetCOG (CATMathPoint & ioPoint) const=0;

    /**
     * Get the perimeter of the surface.
     * @param oPerimeter
     *    The Perimeter 
     * @return
     *    HRESULT
     */
    virtual HRESULT GetPerimeter (double & oPerimeter) const=0;


};

//------------------------------------------------------------------

CATDeclareHandler( CATIMeasurableSurface, CATBaseUnknown );

#endif

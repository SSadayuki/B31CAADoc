// COPYRIGHT Dassault Systemes 2001
//===================================================================
//
// CATIMeasurableVolume.h
//   This interface allows to get measurements on a volume.
//
//===================================================================
#ifndef CATIMeasurableVolume_H
#define CATIMeasurableVolume_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATMeasureGeometryInterfaces.h"
#include "CATIMeasurable.h"

class CATMathPoint;

extern ExportedByCATMeasureGeometryInterfaces IID IID_CATIMeasurableVolume ;

//------------------------------------------------------------------

/**
 * Get measurements on a volume.
 */
class ExportedByCATMeasureGeometryInterfaces CATIMeasurableVolume: public CATIMeasurable
{
  CATDeclareInterface;

  public:

    /**
     * Get the volume, the Area and the Center Of Gravity of the volume.
     * Use for better performance
     * @param oVolume
     *    The volume.
     * @param oArea
     *    The area.
     * @param oCOfG
     *    The position with respect to absolute axis system.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetVolume_Area_COfG (double & oVolume, double & oSurface, CATMathPoint & oCOfG) const = 0;

    /**
     * Get the volume of the volume.
     * @param oVolume
     *    The volume.
     * @return
     *    HRESULT
     */
    virtual HRESULT GetVolume (double & oVolume) const=0;

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

};

//------------------------------------------------------------------

CATDeclareHandler( CATIMeasurableVolume, CATBaseUnknown );

#endif


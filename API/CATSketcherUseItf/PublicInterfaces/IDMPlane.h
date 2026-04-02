/* -*-c++-*- */
#ifndef IDMPlane_H
#define IDMPlane_H

// COPYRIGHT Dassault Systemes 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATSketcherUseItf.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSketcherUseItf IID IID_IDMPlane ;
#else
extern "C" const IID IID_IDMPlane ;
#endif


/**
 * This interface describes the planar surface.
 * The single method defined here provides access to the plane’s parameters. If this is 
 * the geometry type of the object, this interface’s REFIID serves as its geometry typing
 * information.
 */
class ExportedByCATSketcherUseItf IDMPlane: public CATBaseUnknown
{
  CATDeclareInterface;

  public:


/**
 * Provides the Client access to the plane’s parameters.
 * @param <tt>double iRootPoint[3]</tt>
 * [out] Outputs a point on the plane.
 * @param <tt>double oNormalVector[3]</tt>
 * [out] Outputs a unit vector perpendicular to the plane.
 */
    virtual HRESULT GetPlaneData( double iRootPoint[3], double oNormalVector[3] ) = 0;

};

#endif


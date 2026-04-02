#ifndef CATITPSThread_H
#define CATITPSThread_H

// COPYRIGHT DASSAULT SYSTEMES 2007

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

class CATITPSPlane;
class CATITPSCylinder;

extern "C" const IID IID_CATITPSThread;

/**
 * Interface implemented by Constructed Geometry (CG) type thread.
 * <br><b>Role</b> this interface allows to manipulate a contructed geometry
 * type thread.
 * To retrieve topology linked to a constructed geometry uses CATITTRSGeometry
 * @see CATITTRSGeometry.
 */
class CATITPSThread : public IUnknown
{
  public:

   /**
    * Gets upper plane of thread.
    * <br><b>Role</b> Gets the upper plane of the thread corresponding to one
    * extremity of the thread.
    * @param opiTPSPlane [out, IUnknown#Release]
    * CG plane
    */
    virtual HRESULT GetUpperPlane (CATITPSPlane ** opiTPSPlane) = 0;

    /**
     * Get lower plane of thread.
     * <br><b>Role</b> Gets the lower plane of the thread corresponding to one
     * extremity of the thread.
     * @param opiTPSPlane [out, IUnknown#Release]
     * CG plane
     */
    virtual HRESULT GetLowerPlane (CATITPSPlane ** opiTPSPlane) = 0;

    /**
     * Get cylinder of thread.
     * <br><b>Role</b> Gets the cylinder of the thread corresponding to the
     * body of the thread.
     * @param opiTPSCylinder [out, IUnknown#Release]
     * CG cylinder. 
     */
    virtual HRESULT GetCylinder (CATITPSCylinder ** opiTPSCylinder) = 0;
};

#endif

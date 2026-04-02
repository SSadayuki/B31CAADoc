#ifndef CATITPSPlane_H
#define CATITPSPlane_H

// COPYRIGHT DASSAULT SYSTEMES 2007

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"

class CATITPSThread;
class CATMathPoint;

extern "C" const IID IID_CATITPSPlane;

/**
 * Interface implemented by Constructed Geometry (CG) type plane.
 * <br><b>Role</b> this interface allows to manipulate a contructed geometry
 * type plane.
 * To retrieve topology linked to a constructed geometry uses CATITTRSGeometry
 * @see CATITTRSGeometry.
 */
class CATITPSPlane : public IUnknown
{
  public:

    /**
     * Gets the thread of plane.
     * <br><b>Role</b> this method returns the thread of the plane.
     * <br><b>Precondition</b> Only available for constructed geometry type
     * plane aggregated by a constructed geometry type “thread”.
     * @param opiTPSThread [out, IUnknown#Release]
     * CG thread. 
     * @return
     * <dt><tt>S_OK</tt> <dd>The thread is retrieved.
     * <dt><tt>E_FAIL</tt> <dd>if the operation failed.
     */
    virtual HRESULT GetAssocThread (CATITPSThread ** opiTPSThread) = 0;

    /**
     * @nodoc
     */
    virtual HRESULT GetPosition (CATMathPoint &ioPoint) const = 0;

    /**
     * @nodoc
     */
    virtual HRESULT SetPosition (const CATMathPoint &iPoint) = 0;

    /**
     * @nodoc
     */
    virtual HRESULT GetLeftDownPoint (CATMathPoint &ioPoint) const = 0;

    /**
     * @nodoc
     */
    virtual HRESULT SetLeftDownPoint (const CATMathPoint &iPoint) = 0;

    /**
     * @nodoc
     */
    virtual HRESULT GetLeftUpPoint (CATMathPoint &ioPoint) const = 0;

    /**
     * @nodoc
     */
    virtual HRESULT SetLeftUpPoint (const CATMathPoint &iPoint) = 0;

    /**
     * @nodoc
     */
    virtual HRESULT GetRightDownPoint (CATMathPoint &ioPoint) const = 0;

    /**
     * @nodoc
     */
    virtual HRESULT SetRightDownPoint (const CATMathPoint &iPoint) = 0;

    /**
     * @nodoc
     */
    virtual HRESULT GetRightUpPoint (CATMathPoint &ioPoint) const = 0;

    /**
     * @nodoc
     */
    virtual HRESULT SetRightUpPoint (const CATMathPoint &iPoint) = 0;

    /**
     * @nodoc
     */
    virtual HRESULT GetAngle (double &ioAngle) const = 0;

    /**
     * @nodoc
     */
    virtual HRESULT SetAngle (const double &iAngle) = 0;
};

#endif

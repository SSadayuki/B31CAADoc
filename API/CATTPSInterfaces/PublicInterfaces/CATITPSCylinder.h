#ifndef CATITPSCylinder_H
#define CATITPSCylinder_H

// COPYRIGHT DASSAULT SYSTEMES 2007

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"
#include "CATBoolean.h"

class CATITTRS;
class CATITPSThread;
class CATMathPoint;

extern "C" const IID IID_CATITPSCylinder;

/**
 * Interface implemented by Constructed Geometry (CG) type cylinder.
 * <br><b>Role</b> this interface allows to manipulate a contructed geometry
 * type cylinder.
 * To retrieve topology linked to a constructed geometry uses CATITTRSGeometry
 * @see CATITTRSGeometry.
 */
class CATITPSCylinder : public IUnknown
{
  public:

    /**
     * Retrieves type of cylinder from which the constructed geometry has been
     * created.
     * @param obRefCylinder [out]
     * True: if the cylinder is defined from two parallel axis, the first one
     * is the axis of the cylinder.
     * False: if the cylinder is defined from three parallel axis.
     */
    virtual HRESULT TestRefCylinder (CATITTRS ** opiTTRS,
                                     CATBoolean  &obRefCylinder) = 0;

    /**
     * Gets the thread of cylinder.
     * <br><b>Role</b> this method returns the thread of the cylinder.
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
     * Gets diameter of the contructed geometry
     * <br><b>Role</b> this method returns the diameter of the constructed
     * geometry type “cylinder”.
     * @param ioDiameter [out]
     * diamter of the CG cylinder. 
     */
    virtual HRESULT GetDiameter (double &ioDiameter) = 0;

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
    virtual HRESULT GetStartPoint (CATMathPoint &ioStartPoint) const = 0;

    /**
     * @nodoc
     */
    virtual HRESULT SetStartPoint (const CATMathPoint &iStartPoint) = 0;

    /**
     * @nodoc
     */
    virtual HRESULT GetEndPoint (CATMathPoint &ioEndPoint) const = 0;

    /**
     * @nodoc
     */
    virtual HRESULT SetEndPoint (const CATMathPoint &iEndPoint) = 0;
};

#endif

#ifndef CATITPSCapture_H
#define CATITPSCapture_H

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "IUnknown.h"
#include "CATBoolean.h"

class CATITPSSet;
class CATITPSList;
class CATITPSView;
class CATITPSViewList;
class CATI3DCamera;
class CATIUnknownList;

extern "C" const IID IID_CATITPSCapture ;

/**
 * Interface to the Capture object.
 * <b>Role</b>: A Capture allows to define a group of TPS annotations ,and to 
 * manage their visualisation (Hide/Show state, overloaded graphical properties).
 * When a capture is displayed , the associated TPS annotations get overloaded
 * according their properties.
 * All the TPSs which are grouped in the capture do not necesarily belong to 
 * the same annotations set.
 */
class CATITPSCapture : public IUnknown
{
  public:

    /**
     * Retrieves tolerancing set the Capture belongs too.
     */
    virtual HRESULT GetSet (CATITPSSet ** opiSet) const = 0;

    /**
     * Retrieves the Capture state, current or Not. 
     *   @param oCurrentState
     *     Capture state. if TRUE the capture is current.that means that after
     *     the creation of the capture, the future TPSs that would be added to 
     *     the CATIA document will belong to the capture.
     *      
     */
    virtual HRESULT GetCurrent (CATBoolean * oCurrentState) const = 0;

    /**
     * Sets the Capture state, current or Not. 
     *   @param iCurrentState
     *     The new Capture state.
     */
    virtual HRESULT SetCurrent (const CATBoolean iCurrentState) = 0;

    /**
     * Retrieves the TPSs that are visualy managed by this Capture.
     *   @param opiList
     *     List of managed TPSs.
     */
    virtual HRESULT GetTPSs (CATITPSList** opiList) const = 0;

    /**
     * Sets the TPSs that are visualy managed by this Capture.
     *   @param ipiList
     *     List of managed TPSs.
     */
    virtual HRESULT SetTPSs (const CATITPSList* ipiList) = 0;

    /**
     * Retrieves the TPS Views that are visualy managed by this Capture.
     *   @param opiList
     *     List of managed Views.
     */
    virtual HRESULT GetTPSViews (CATITPSViewList** opiList) const = 0;

    /**
     * Sets the TPS Views that are visualy managed by this Capture.
     *   @param ipiList
     *     List of managed Views.
     */
    virtual HRESULT SetTPSViews (const CATITPSViewList* ipiList) = 0;

    /**
     * Retrieves the active view for the capture.
     *   @param opiActiveView
     *     The View.
     */
    virtual HRESULT GetActiveView (CATITPSView** opiActiveView) const = 0;

    /**
     * Sets the active view for the capture.
     *   @param ipiActiveView
     *     The new View.
     */
    virtual HRESULT SetActiveView (const CATITPSView* ipiActiveView)  = 0;

    /**
     * Retrieves the Active View state, saved or Not. 
     * The Active View state describes what happens when Capture is displayed,
     * if TRUE, the active view of the tolerancing set is replaced by the 
     * active view of the capture.
     *   @param oActiveState
     *     The Active View state.
     */
    virtual HRESULT GetActiveViewState (CATBoolean * oActiveState) const = 0;

    /**
     * Sets the Active View state, saved or Not. 
     *   @param iActiveState
     *     The new Active View state.
     */
    virtual HRESULT SetActiveViewState (
                                      const CATBoolean iActiveState) = 0;

    /**
     * Retrieves the clipping plane state, activated or Not. 
     * The Clipping plane state describes what happens when Capture is 
     * displayed, if TRUE, the active view is used to define a clipping plane.
     * If FALSE, there is no clipping plane applied.
     *   @param oClipPlane
     *     The clipping plane state.
     */
    virtual HRESULT GetClippingPlane (CATBoolean * oClipPlane) const = 0;

    /**
     * Sets the clipping plane state, activated or Not. 
     *   @param iClipPlane
     *     The new Clipping plane state.
     */
    virtual HRESULT SetClippingPlane (const CATBoolean iClipPlane) = 0;

    /**
     * Retrieves the Camera that stores the viewpoint of the Capture.
     *   @param opiCamera
     *     The Camera.
     */
    virtual HRESULT GetCamera (CATI3DCamera** opiCamera) const = 0;

    /**
     * Sets the Camera that stores the viewpoint of the Capture.
     *   @param ipiCamera
     *     The Camera.
     */
    virtual HRESULT SetCamera (const CATI3DCamera* ipiCamera)  = 0;

    /**
     * Retrieves the ViewPoint state, saved or Not. 
     * The ViewPoint state describes what happens when Capture is displayed,
     * if TRUE, the 3D Camera of the Capture is used to change the 3D
     * ViewPoint.
     *   @param oVPState
     *     The View Point state.
     */
    virtual HRESULT GetViewPoint (CATBoolean * oVPState) const = 0;

    /**
     * Sets the ViewPoint state, saved or Not. 
     *   @param iVPState
     *     The new View Point state.
     */
    virtual HRESULT SetViewPoint (const CATBoolean iVPState) = 0;

    /**
     * Retrieves the Constructed Geometries that are visually managed by 
     * this Capture.
     *   @param opiList
     *     List of managed TPSs.
     */
    virtual HRESULT GetConstructedGeometry (
                                         CATIUnknownList ** opiList) const = 0;

    /**
     * Sets the Constructed Geometries that are visualy managed by this Capture.
     *   @param ipiList
     *     List of managed TPSs.
     */
    virtual HRESULT SetConstructedGeometry (const CATIUnknownList * ipiList) = 0;

    /**
     * Retrieves the Part Instance & Geometrical Feature Set 
     * that are visually managed by this Capture.
     *   @param opiList
     *     List of managed PartInstance & Geometrical Feature Set.
     */
    
    virtual HRESULT GetPartInstAndBody (CATIUnknownList ** opiList) const =0;

    /**
     * Sets the Part Instance & Geometrical Feature Set 
     * that are visually managed by this Capture.
     *   @param opiList
     *     List of managed PartInstance & Geometrical Feature Set.
     */

    virtual HRESULT SetPartInstAndBody (const CATIUnknownList * ipiList)=0;

     /**
     * Retrieves the Setting Whether Part and Body Hide & Show 
     * that are visually managed by this Capture.
     *   @param obManageHideShowBody
     *    TRUE If Hide & Show of Body to be Managed
     *    FALSE If Hide & Show of Body is not to be Managed
     */
    
    virtual HRESULT GetManageHideShowBody (CATBoolean * obManageHideShowBody) const = 0;

    /**
     * Sets the Setting Whether Part and Body Hide & Show 
     * that are visually managed by this Capture.
     *   @param ibManageHideShowBody
     *    TRUE If Hide & Show of Body to be Managed
     *    FALSE If Hide & Show of Body is not to be Managed
     */

    virtual HRESULT SetManageHideShowBody(CATBoolean  ibManageHideShowBody) = 0;

    /**
     * Retrieves the 3D State : display or not the capture.
     * The 3D State describes the visualisation or not of the Capture in 3D
     *   @param o3DState
     *     The 3D State.
     */
    virtual HRESULT Get3DState (CATBoolean * ob3DState) const = 0;

    /**
     * Sets the 3D State : display or not the capture.
     *   @param i3DState
     *     The new 3D State.
     */
    virtual HRESULT Set3DState (const CATBoolean ib3DState) = 0;

    /**
     * Retrieves the Hidden Text.
     * The Hidden Text is show when the mouse is on the Capture (in 3D or in the graph).
     *   @param opText
     *     The Hidden Text.
     */
    virtual HRESULT GetHiddenText (wchar_t ** opText) const = 0;

    /**
     * Sets the Hidden Text.
     *   @param ipText
     *     The Hidden Text.
     */
    virtual HRESULT SetHiddenText (const wchar_t * ipText) = 0;

};
#endif

#ifndef CATITPSView_H
#define CATITPSView_H

// COPYRIGHT DASSAULT SYSTEMES 2000 - 2018

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBoolean.h"
#include "CATBaseUnknown.h"
#include "CATTPSViewType.h"

class CATRep;
class CATITPSSet;
class CATITPSList;
class CATIDftView;
class CATITTRSList;
class CATMathPlane;
class CATMathPoint2D;

extern "C" const IID IID_CATITPSView;

/**
 * Interface to TPS View object.
 * <b>Role</b>: Created and manipulated in 3D, a TPS View allows to define
 * support plane for TPS annotations.
 * <p>
 * A TPSView is associated with a drafting view.
 */
class CATITPSView : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Retrieves tolerancing set the TPSView belongs too.
     *   @param opiSet [out, CATITPSSet#Release]
     *     The tolerancing set the TPSView belongs too.
     */
    virtual HRESULT GetSet (CATITPSSet ** opiSet) const = 0;

    /**
     * Retrieves the TPS that are using this TPSView as support.
     *   @param ioList [inout, CATITPSList#Release]
     *     List of returned TPS
     */
    virtual HRESULT GetTPSs (CATITPSList** iopiList) const = 0;

    /**
     * Retrieves the drafting view associated to the TPSView.
     *   @param oView [out, CATIDftView#Release]
     *     Drafting view
     */
    virtual HRESULT GetDraftingView (CATIDftView ** opiView) const = 0;

    /**
     * Retrieves the view activity. Allows to known if the TPSView is the 
     * active one (or current) in the set.
     */
    virtual HRESULT IsActive (CATBoolean * oActivity) const = 0;

    /**
     * Sets the TTRS list associated to the Specification.
     */
    virtual HRESULT SetTTRS (const CATITTRSList * iTTRS) = 0;

    /**
     * Retrieves a CATITTRSList to read a list of features
     * upon which is applied the current specification.
     *
     * Note that this list may have a null count; in such a case,
     * we have to consider this specification as a TPS applied to
     * the whole part.
     *
     * Result of this call will mostly be a singleton, but it can
     * also happen situations where the list size is higher than 1;
     * this way, we have defined a specification related to
     * several surfaces (regarless the order in which the surfaces
     * are stored)
     *   @param oTTRS [out, CATITTRSList#Release]
     *     The TTRS list.
     */
    virtual HRESULT GetTTRS (CATITTRSList ** oTTRS) const = 0;

    /**
     * Retrieves the Associativity state, saved or Not. 
     * if TRUE, the view updates when referenced geometry moves 
     * if FALSE, there is no update of the view according geometry.
     *   @param oAssociativeState
     *     The Associativity state.
     */
    virtual HRESULT GetAssociativeState (CATBoolean * oAssociativeState) const = 0;

    /**
     * Sets the Associativity state, saved or Not. 
     *   @param iAssociativeState
     *     The new Associativity state.
     */
    virtual HRESULT SetAssociativeState( const CATBoolean iAssociativeState) = 0;

    /**
     * Retrieves Plane on which this item
     * lies on (The Plane of the annotation).
     *   @param oPlane
     *     The offset of the TPS.
     *   @return
     *      S_OK if succeded (oPlane must be deleted after use)
     *      E_FAIL if oPlane is not valuated.
     */
    virtual HRESULT GetMathPlane (CATMathPlane ** opPlane) const = 0;

    /**
     * Retrieves the type of the TPSView.
     *   @param oViewType
     *     The Type of the TPSView
     *   @return
     *      S_OK if succeded.
     *      E_FAIL if view type fails.
     */
    virtual HRESULT GetViewType (CATTPSViewType * oViewType) const = 0;

    /**
     * Sets the DisplayRatio for the TPSView.
     *   @param iDisplayRatio
     *     The display ratio of the View.
     *   @return
     *      S_OK if succeded
     *      E_FAIL otherwise
     */
    virtual HRESULT SetDisplayRatio (const double iDisplayRatio) = 0;

    /**
     * Retrieves DisplayRatio of the TPSView.
     *   @param oDisplayRatio
     *     The display ratio of the View.
     *   @return
     *      S_OK if succeded
     *      E_FAIL if the DisplayRatio is not valuated.
     */
    virtual HRESULT GetDisplayRatio (double * oDisplayRatio) const = 0;

    /**
     * Retrieves the ViewBound of the TPSView. ViewBound will include all the
     * annotations contained in the view.
     *   @param oBottomLeftCorner
     *     Position of the Bottom Left corner of the view bound in the form of
     *     CATMathPoint2D, in the view plane. This value will be with respect
     *     to the view coordinate system.
     *   @param oTopRightCorner
     *     Position of the Top Right corner of the view bound in the form of
     *     CATMathPoint2D, in the view plane. This value will be with respect
     *     to the view coordinate system.
     *   @return
     *      S_OK if succeded
     *      E_FAIL if the ViewBound failed to be computed.
     */
    virtual HRESULT GetViewBound(CATMathPoint2D &oBottomLeftCorner,
                                 CATMathPoint2D &oTopRightCorner) = 0;

    /**
    * Retrieves the graphical representation of the annotation sketch associated
    * to the FTA view.
    * User has to know that so called “annotation sketch associated to the FTA
    * view” is indeed a CAA CATI2DLayoutView regular exposed entity.
    * @href CATI2DLayoutView.
    * Either opiAnnotationSketch or opAnnotationSketchRep can be set NULL
    * to retrieve only the annotation sketch or the graphical representation.
    * Such a request is failing in case of result FTA model used in light forms
    * review (visualization mode, cgr, 3DXml, catback, step, ...).
    *
    *  @example Sample of code to show how to use this method:
    *  CATITPSView * piTPSView = NULL;
    *  ...
    *  // Retrieve interface
    *  ...
    *  // Invoke method and check consistency of the outcome
    *  CATRep         * pAnnotationSketchRep = NULL ;
    *  CATBaseUnknown * piAnnotationSketch   = NULL ;
    *  HRESULT rc = piTPSView -> GetAnnotationSketch ( &piAnnotationSketch, &pAnnotationSketchRep ) ;
    *  if ( FAILED( rc )) { // Error handling ... }
    *  ...
    *  // Code to use annotation sketch entity; for instance switch onto 2DLayout interface
    *  if ( piAnnotationSketch )
    *  {
    *     // Retrieve specialized interface
    *     CATI2DLayoutView * pi2DLView = NULL;
    *     rc = piAnnotationSketch -> QueryInterface ( IID_CATI2DLayoutView, (void **) &pi2DLView ) ;
    *     if ( SUCCEEDED( rc ) && pi2DLView )
    *     { // User code not forgetting Release management of pi2DLView ... }
    *  ...
    *     // Release annnotation when useless
    *     piAnnotationSketch->Release( ) ;
    *     piAnnotationSketch = NULL ;
    *  }
    *  ...
    *  // Code taking benefits of the given visualization
    *  if ( pAnnotationSketchRep )
    *  {
    *  ...
    *     // Delete representation pointer once achieved
    *     pAnnotationSketchRep->Destroy( ) ;
    *     pAnnotationSketchRep = NULL ;
    *  }
    *  ...
    *
    *   @param opiAnnotationSketch   [ out, IUnknown#Release ]
    *      Optional argument: The annotation sketch to be returned.
    *   @param opAnnotationSketchRep [ out, CATRep#Destroy ]
    *      Optional argument: The graphical representation of annotation sketch to be returned.
    *   @return
    *      S_OK in case of success, S_FALSE is given back if there is no annotation sketch under current view.
    *      E_FAIL otherwise (in particular with non-authoring annotation sets).
    */
    virtual HRESULT GetAnnotationSketch( CATBaseUnknown ** opiAnnotationSketch,
                                         CATRep         ** opAnnotationSketchRep = NULL ) const = 0 ;

    /**
    * Sets the graphical representation of the annotation sketch to the FTA view.
    *<br/>  User has to know that so called “annotation sketch associated to the FTA
    * view” is a CATI2DLayoutView object; check upon compliance of input argument against
    * this behavior is done within this call.
    * @href CATI2DLayoutView.
    * @param ipiAnnotationSketch [ in ]
    *      The annotation sketch to assign to the FTA View. Replace handling is the default
    *      way of working; in other words, any previous existing 2DLayoutView association is
    *      superseded by given argument.
    *<br/> ipiAnnotationSketch can be set NULL in case end user intends to remove the link
    *      the 2DLayoutView bound to this FTA View; caller has to understand that 2DLayoutView
    *      is not cleaned from the edited representation because it can contain useful objects for
    *      the layout it belongs to. Should the user wants to destroy it, he is advised to invoke
    *      @href GetAnnotationSketch before to manage whatever lifecycle operation afterwards.
    *<br/> This call is failing in case of result FTA model used in light forms review (visualization mode,
    *      cgr, 3DXml, catback, step, ...).
    *   @return
    *      S_OK in case of success.
    *<br/> E_FAIL otherwise (in particular with non-authoring annotation sets).
    */
    virtual HRESULT SetAnnotationSketch( const CATBaseUnknown * ipiAnnotationSketch ) = 0 ;
};

CATDeclareHandler(CATITPSView, CATBaseUnknown);

#endif

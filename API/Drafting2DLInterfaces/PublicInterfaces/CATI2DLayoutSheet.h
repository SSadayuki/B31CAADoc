// COPYRIGHT Dassault Systemes 2007
/**
* @CAA2Level L1
* @CAA2Usage U3
*/
//===================================================================
#ifndef CATI2DLayoutSheet_H
#define CATI2DLayoutSheet_H

#include "CATDrafting2DLInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"
#include "CATCollec.h"
#include "CATDftProjectionMethod.h"
#include "CAT2DLViewSide.h"
#include "CATDftViewType.h"

class CATLISTV(CATISpecObject_var);
class CATIUnknownList;
class CATI2DLayoutLayout;
class CATI2DLayoutSheet;
class CATI2DLayoutView;
class CATBaseUnknown;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATDrafting2DLItfCPP IID IID_CATI2DLayoutSheet;
#else
extern "C" const IID IID_CATI2DLayoutSheet ;
#endif

//------------------------------------------------------------------

/**
* This interface manages the 2DL Sheet.
*/
class ExportedByCATDrafting2DLItfCPP CATI2DLayoutSheet: public CATBaseUnknown
{
  CATDeclareInterface;

public:

  /**
  * Gets the layout root containing this sheet.
  * @param CATI2DLayoutLayout **opi2DLayout [out, CATBaseUnknown#Release]
  *  The 2DLayout root.
  */  
  virtual HRESULT GetLayout(CATI2DLayoutLayout **opi2DLayout)  = 0;

  /**
  * Used to know if a sheet can be used to as a detail sheet.
  * @param boolean *oDetSheet
  * TRUE if it is a detail sheet
  */ 
  virtual HRESULT IsDetail(boolean *oDetSheet)  = 0;

  /* Gets the global scale associated to the sheet. This scale is applied on the sheet views.
  * @param double *oScale
  * The global scale of the sheet
  */  
  virtual HRESULT GetScale(double *oScale) = 0;

  /**
  * Sets the global scale associated to the sheet. This scale is applied on the sheet views.
  * @param double iScale
  * The global scale of the sheet
  */ 
  virtual HRESULT SetScale(double iScale) = 0;

  /**
  * Gets the background view in the sheet. The background view contains the frame and title-blocks.
  * @param CATI2DLayoutView **oView [out, CATBaseUnknown#Release]
  * The background view in the sheet.
  */   
  virtual HRESULT GetBackgroundView(CATI2DLayoutView **opi2DLView)  = 0;


  /**
  * Gets the view which have to be activated in the sheet. By default, the active view is the view in edition.
  * @param CATI2DLayoutView **opi2DLView [out, CATBaseUnknown#Release]
  * The default active view in the sheet.
  */   
  virtual HRESULT GetDefaultActiveView(CATI2DLayoutView **opi2DLView)  = 0;

  /**
  * Validates that the given ordered list can be used as an input
  * for ReorderViews.
  * i.e. validates that:
  * iOrderedViews is the result of a permutation applied to 
  * the list of <b>all</b> the views of this sheet with the following
  * constraint: iOrderedViews[1] and iOrderedViews[2] must be 
  * respectively the sheet's mainview and background view. 
  * @param iOrderedSheets
  * The list of views to validate.
  * @return
  * An <tt>HRESULT</tt> value.
  * <br><b>Legal values</b>:
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd> iOrderedViews is a valid input.
  * <dt> <tt>E_XXX</tt>    <dd> iOrderedViews is not a valid input.
  * </dl>
  */
  virtual HRESULT ValidateViewOrder(const CATLISTV(CATISpecObject_var) &iOrderedViews)=0;


  /**
  * Change the positions of the views in a sheet according to the given 
  * ordered list.
  * @param <tt>const CATLISTV(CATISpecObject_var) &iOrderedViews</tt>
  * [in] The ordered list of the views in the sheet.
  * <b>Preconditions<b>:
  * <dl>
  * <dt> ValidateViewOrder(iOrderedViews) must succeed. @see ValidateViewOrder.  
  * </dl>

  * @return
  * A <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>         <dd> Views were reordered.
  * <dt> <tt>E_UNEXPECTED</tt> <dd> Preconditions not met.
  * <dt> <tt>E_FAIL</tt>       <dd> Internal error.
  * </dl>
  */
  virtual HRESULT ReorderViews(CATLISTV(CATISpecObject_var) &iOrderedViews)=0;

  /** 
  * Creates a primary View2DL.
  * The caracteristics (ex: type, the view plane etc) of this new view
  * are computed based on the caracteristics stored in the current embedded 
  * standard.
  * @param const double iCoord[2] [in] 
  * The coordinates in the Sheet2DL for the new View2DL.
  * @param iViewName [in]
  * Name of the view. (If iViewName is empty, the view name will calculated automaticaly).
  * @param CATI2DLayoutView **o2DLView [out, IUnknown#Release] 
  * The interface on the View2DL.
  * @return
  * a <tt> HRESULT </tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd> Success.
  * <dt> <tt>E_FAIL</tt>   <dd> Error. Internal error or a precondition was not satisfied.
  * </dl>
  */
  virtual HRESULT CreatePrimaryView2DL(const double iCoord[2],
                                       CATUnicodeString &iViewName,
                                       CATI2DLayoutView **opi2DLView)=0;

  /**
  * Creates a projection or isometric View2DL from a given View2DL.
  * The view will be created in the same Sheet2DL as the given 
  * View2DL, at the given position. 
  * @param CATI2DLayoutView *iReferenceView [in]
  * The reference View2DL from which the new View2DL is created.
  * @param const double iCoord[2] [in]
  * The coordinates in the Sheet2DL of the new View2DL.
  * @param CAT2DLViewSide iSide [in]
  * Used with the ViewBox and iReferenceView to give the related
  * view to create (type etc).
  * @see CAT2DLViewSide
  * @param iViewName [in]
  * Name of the view. (If iViewName is empty, the view name will calculated automaticaly).
  * @param CATI2DLayoutView **opi2DLView [out, IUnknown#Release] 
  * The interface on the View2DL.
  * @return
  * PRECONDITION1: the reference View2DL must be a projection view.
  * PRECONDITION3: a view with the same type must not already exist in the set of
  *                View2DLs the reference View2DL belongs to.
  * HRESULT:
  * S_OK: Success.
  * S_FALSE: The requested view already exists in the set of views to which iReferenceView    
  *          belongs. No view is created.
  * E_FAIL: Error. Internal error or a precondition was not satisfied.

  */
  virtual HRESULT CreateRelatedView2DL(CATI2DLayoutView *iReferenceView,
                                       const double iCoord[2],
                                       CAT2DLViewSide iSide,
                                       CATUnicodeString &iViewName,
                                       CATI2DLayoutView **opi2DLView)= 0;

  /**
  * Creates an auxiliary or a section View2DL from a given View2DL.
  * @param CATI2DLayoutView *iReferenceView [in]
  * The reference view. Must be a projection View.
  * @param double[4] iProfile [in]
  * The callout's segment gives the trace of the auxiliary View2DL's projection
  * plane in the reference View2DL.
  * @param CATBoolean ibOrient  [in]
  *  ibOrient = FALSE: the View2DL will be drawn as seen from the right of the segment 
  *                    in the reference view.
  *  ibOrient = TRUE: the View2DL will be drawn as seen from the left of the segment 
  *                   in the reference view.
  * @param CATDftViewType iViewType
  *   The admissible types are DftSectionView, DftSectionCutView and DftAuxiliaryView. 
  * @param const double iCoord[2] [in]
  * The coordinate in the Sheet2DL for the new View2DL.
  * @param iViewName [in]
  * Name of the view. (If iViewName is empty, the view name will calculated automaticaly).
  * @param CATI2DLayoutView *&opi2DLView [out, IUnknown#Release] 
  * The interface on the View2DL whose iid is iInterface
  * PRECONDITION1: the reference View2DL must be a projection view.
  * PRECONDITION2: the callout segment's length must not be 0.
  * @return
  *  HRESULT 
  *  S_OK = Success.
  *  E_FAIL = Error: Internal error or a precondition was not satisfied.
  */
  virtual HRESULT CreateAuxiliaryView2DL(CATI2DLayoutView *iReferenceView,
                                         double iProfile[4],
                                         CATBoolean ibOrient,
                                         CATDftViewType iViewType,
                                         const double iCoord[2], 
                                         CATUnicodeString &iViewName,
                                         CATI2DLayoutView **opi2DLView) = 0;	

  /**
  * Creates a viewFrom3D View2DL with the given 3Dplane 
  * @param const double iOrigin[3] [in]
  * The view's view plane origin in 3D space.
  * @param const double iFirstDirection[3] [in]
  * A direction which the view's viewplane H axis has to be colinear with 
  * @param const double iSecondDirection[3] [in]
  * A direction which the view's viewplane V axis has to be colinear with 
  * @param iViewType
  *   The view type: <tt>Auxiliary</tt> or <tt>SectionCut</tt> or <tt>SectionView</tt>
  * @param const double *iCoord [in]
  * The coordinate in the aggregating Sheet for the new View2DL.
  * @param <tt> const IID iInterface </tt>
  * [in] The IID of the interface by which the newly created View2DL
  *      will be retrieved.
  * @param <tt> IUnknown *&oView </tt>
  * [out] The interface on the View2DL whose iid is iInterface
  * PRECONDITION1: iViewType must be either auxiliary or section or section cut.
  * PRECONDITION2: iFirstDirection and iSecondDirection must be orthogonal.
  * @return
  *  HRESULT 
  * S_OK = Success.
  * E_FAIL = Error. Internal error or a precondition was not satisfied.
  */
  virtual HRESULT CreateView2DLFrom3DPlane(const double iOrigin[3],
                                           const double iFirstDirection[3],
                                           const double iSecondDirection[3],
                                           CATDftViewType iViewType,
                                           const double *iCoord,
                                           CATUnicodeString &iViewName,
                                           CATI2DLayoutView **opi2DLView)= 0;
  /** 
  * The active view is the view in edition.
  * <br><b>Note</b>: Do not use this service to activate the background view in UI context, 
  * because the command will be canceled by the background workshop activation. 
  * Only, in this particular case, it is recommended to edit the sketch by using Openedition   
  * and CloseEdition methods defined in CATISketchEditor interface implemented by the view.
  * These methods allow to manage geometry creation or modification in a view when it is not 
  * the active view of a drawing.
  * @param CATI2DLayoutView *ipi2DLView [out, CATBaseUnknown#Release]
  *  The default active view in the sheet.
  */ 
  virtual HRESULT SetDefaultActiveView(CATI2DLayoutView *ipi2DLView) = 0;

  /**
  * Returns the view referenced by the sheet.
  * @param CATIUnknownList *oLstResult [out, CATBaseUnknown#Release]
  * Founded views are added to the list.
  */
  virtual HRESULT GetViews(CATIUnknownList **oLstResult)  = 0;

  /**
  * This method is used to know if the sheet is the current one in the Layout.
  * The current sheet is the sheet containing the view in edition.
  * @return
  *   The status
  *   <br><b>Legal values</b>: 
  *   <dl> 
  *     <dt>0</dt> The sheet is not the current one
  *     <dt>1</dt> The sheet is the current one
  *   </dl>
  */
  virtual HRESULT IsCurrent(CATBoolean *oSheetStatus) = 0;

  /**
  * Creates a 2DL view from FTA Capture or View.
  * @param CATBasUnknown *iFTAComponent [in]
  * The FTA Component: A FTA Capture or View.
  * @param const double iCoord[2] [in]
  * The coordinate in the Sheet2DL for the new View2DL.
  * @param CATI2DLayoutView *&opi2DLView [out, IUnknown#Release] 
  * The interface on the View2DL whose iid is iInterface
  * PRECONDITION2: FTA Component and Sheet must be in the same document.
  * @return
  *  HRESULT 
  *  S_OK = Success.
  *  E_FAIL = Error: Internal error or a precondition was not satisfied.
  */
  virtual HRESULT CreateView2DLFromFTA (CATBaseUnknown *iFTAComponent, 
                                        const double iCoord[2], 
                                        CATI2DLayoutView **opi2DLView) =0;	

  /**
  * Gets the projection method in this sheet.
  * @param CATDftProjectionMethod *oProjMethod
  *  The projection method: 
  *  - CATFirstAngle: First angle standard.
  *  - CATThirdAngle: Third angle standard.
  */ 
  virtual HRESULT GetProjectionMethod(CATDftProjectionMethod *oProjMethod) = 0;

  /**
  * Sets the projection method in this sheet. 
  * @param const CATDftProjectionMethod oProjMethod
  *  The projection method: 
  *  - CATFirstAngle: First angle standard.
  *  - CATThirdAngle: Third angle standard.
  */ 
  virtual HRESULT SetProjectionMethod(const CATDftProjectionMethod oProjMethod) = 0;

  /**
  * Sets a set of coordinates to define a rectangle print area. 
  * @param <tt>const double * iAreaData</tt>
  * [in] A four double table describing the parameters of the area box:
  * <dl>
  * <dt> iAreaData[0] as the low x coordinate of the area.
  * <dt> iAreaData[1] as the low y coordinate of the area.
  * <dt> iAreaData[2] as the width of the area. The value must be strictly positive.
  * <dt> iAreaData[3] as the heigth of the area. The value must be strictly positive.
  * <dt> All the values in the table are given in mm.
  * </dl>
  * @return
  * Un <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>         <dd> The print area was successfully defined.
  * <dt> <tt>E_INVALIDARG</tt> <dd> The input arguments do not match with specified.
  * <dt> <tt>E_FAIL</tt>       <dd> No print area could be defined.
  * </dl>
  */
  virtual HRESULT SetPrintArea( const double * iAreaData ) = 0;

  /**
  * Activates or deactivates the print area.
  * @param <tt>in const boolean iActivated</tt>
  * [in] The activation state of the print area (TRUE means activated, FALSE means deactivated).
  * @return
  * Un <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd> The activation state could be valuated.
  * <dt> <tt>E_FAIL</tt>   <dd> No activation or deactivation possible.
  * </dl>
  */
  virtual HRESULT SetPrintAreaActivationState( const boolean iActivated ) = 0;

  /**
  * Gets the 3D visualization mode of the layout in the 3D Viewer
  * @param obVisuMode: 
  */
  virtual HRESULT GetVisuIn3DMode(CATBoolean &obVisuMode) = 0;

  /**
  * Sets the 3D visualization mode of the layout in the 3D Viewer
  * @param ibVisuMode: 
  */
  virtual HRESULT SetVisuIn3DMode(CATBoolean ibVisuMode) = 0;


  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

//------------------------------------------------------------------
CATDeclareHandler(CATI2DLayoutSheet, CATBaseUnknown);
#endif

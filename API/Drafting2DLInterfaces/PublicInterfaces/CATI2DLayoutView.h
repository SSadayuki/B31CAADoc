// COPYRIGHT Dassault Systemes 2007
/**
* @CAA2Level L1
* @CAA2Usage U3
*/
//===================================================================
//
// CATI2DLayoutView.h
// Define the CATI2DLayoutView interface
//
//===================================================================
#ifndef CATI2DLayoutView_H
#define CATI2DLayoutView_H

#include "CATDrafting2DLInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"
#include "CATDftViewType.h"
#include "CATDftViewLinkType.h"
#include "CatView2DModeVisu.h"
#include "CatVisuBackgroundMode.h"

class CATIUnknownList;
class CATI2DLayoutSheet;
class CATI2DLayoutView;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATDrafting2DLItfCPP IID IID_CATI2DLayoutView;
#else
extern "C" const IID IID_CATI2DLayoutView ;
#endif

//------------------------------------------------------------------

/**
* this interface manages the 2D Layout View.
*/
class ExportedByCATDrafting2DLItfCPP CATI2DLayoutView: public CATBaseUnknown
{
  CATDeclareInterface;

public:

  /**
  * Gets the view type.
  * @param oType
  *   The view type
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd> View type has been found
  * <dt> <tt>E_FAIL</tt>   <dd> No view type found.
  * </dl>
  */
  virtual HRESULT GetViewType(CATDftViewType *oType)  = 0;

  /**
  * Gets the view name as a string.
  * @param oName
  *   The view name
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd> View name has been found
  * <dt> <tt>E_FAIL</tt>   <dd> No view name found.
  * </dl>
  */
  virtual HRESULT GetViewName(wchar_t **oName) = 0;

  /**
  * Sets the view name as a string. This name can override an existing formula.
  * @param iName
  *   The view name
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd> View name has been modified
  * <dt> <tt>E_FAIL</tt>   <dd> No modification applied.
  * </dl>
  */
  virtual HRESULT SetViewName(wchar_t *iName) = 0;


  /**
  * Gets the 2DL sheet containing the view representation.
  * @param CATI2DLayoutSheet **opi2DLSheet [out, CATBaseUnknown#Release]
  *   The sheet containing the view.
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd> The Sheet has been found
  * <dt> <tt>E_FAIL</tt>   <dd> Execution failed.
  * </dl>
  */
  virtual HRESULT GetSheet(CATI2DLayoutSheet **opi2DLSheet)  = 0;


  /**
  * Used to get the view components (annotations, geometry, callout, ...).
  * @param IID
  *   The interface filter.
  * @param oElems [out, CATBaseUnknown#Release]
  * List of elements found.
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd> Elements found
  * <dt> <tt>E_FAIL</tt>   <dd> Execution failed.
  * </dl>
  */
  virtual HRESULT GetComponents(const IID interfaceID, CATIUnknownList **oElems) = 0;

  /**
  * Used to Activate the view.
  *   The active view is the view in edition. 
  *   There is only one active view per sheet in a Drawing.
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd> View is activated.
  * <dt> <tt>E_FAIL</tt>   <dd> View isn't activated.
  * </dl>
  */
  virtual HRESULT Activate()  = 0;

  /**
  * Used to know if this view is active.
  *   The active view is the view in edition. 
  *   There is only one active view in the 2DL.
  * @param oActive
  *   TRUE if the view is active.
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd> Execution successfully.
  * <dt> <tt>E_FAIL</tt>   <dd> Execution failed.
  * </dl>
  */
  virtual HRESULT IsActive(boolean *oActive)  = 0;

  /**
  * Gets the view name formula. This object is a CKE formula computing the view name.
  * from different inputs.
  * @param oVNameFormula [out, CATBaseUnknown#Release]
  *   The view name formula
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd> View name formula has been modified
  * <dt> <tt>E_FAIL</tt>   <dd> No view name formula found.
  * </dl>
  */
  virtual HRESULT GetViewNameFormula(IUnknown **oVNameFormula)= 0;

  /**
  * Gets the list of OLE sites of the views.
  * @return oOleElemsList [out, CATBaseUnknown#Release]
  *  The list of OleSite features
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd> Elements found
  * <dt> <tt>E_FAIL</tt>   <dd> Execution failed.
  * </dl>
  */
  virtual HRESULT GetOleSiteList(CATIUnknownList **oOleElemsList) = 0 ;


  /**
  * Gets the view scale.
  * @param oScale
  *   The view scale.
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd> Execution successfully.
  * <dt> <tt>E_FAIL</tt>   <dd> Execution failed.
  * </dl>
  */  
  virtual HRESULT GetScale(double *oScale)= 0;

  /**
  * Gets the view orientation in the sheet.
  * @param oOrientation
  *   The view orientation.
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd> Execution successfully.
  * <dt> <tt>E_FAIL</tt>   <dd> Execution failed.
  * </dl>
  */  
  virtual HRESULT GetAngle(double *oOrientation) = 0;

  /**
  * Sets the view scale.
  * @param iScale
  *   The view scale.
  *   <br><b>Legal Values</b>: The scale is greater than 0.
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd> Execution successfully.
  * <dt> <tt>E_FAIL</tt>   <dd> Execution failed.
  * </dl>
  */  
  virtual HRESULT SetScale(double iScale) = 0;

  /**
  * Sets the view orientation in the sheet.
  * @param iOrientation
  *   The view orientation
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd> Execution successfully.
  * <dt> <tt>E_FAIL</tt>   <dd> Execution failed.
  * </dl>
  */ 
  virtual HRESULT SetAngle(double iOrientation) = 0;

  /**
  * Used to know if the dynamic frame showing the view bounding box is visible.
  * @param oFVisu 
  *   The frame visibility. TRUE if the frame is vcisible.
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd> Execution successfully.
  * <dt> <tt>E_FAIL</tt>   <dd> Execution failed.
  * </dl>
  */ 
  virtual HRESULT IsFrameVisible(boolean *oFVisu) = 0;

  /**
  * Description : Sets the view frame visibility.
  * @param iFVisu
  *   The frame visibility. TRUE if the view is active.
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd> Execution successfully.
  * <dt> <tt>E_FAIL</tt>   <dd> Execution failed.
  * </dl>
  */ 
  virtual HRESULT SetFrameVisibility(boolean iFVisu)  = 0;


  /**
  * Used to link the view in position with an other one.
  * @param MotherView
  *   The mother view (concerning positioning).
  * @param iLinkType
  *   The link mode.
  * @param iPosRelation
  *   An user defined relation (not used yet).
  * @return 
  * <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd> Execution successfully.
  * <dt> <tt>E_FAIL</tt>   <dd> Execution failed.
  * </dl>
  */
  virtual HRESULT LinkWith(CATI2DLayoutView *iMotherView, 
     CATDftViewLinkType iLinkType = AUTOMATIC, 
     IUnknown * iPosRelation = NULL) = 0;

  /**
  * Gets the information concerning the view position rule.
  * @param <tt>CATI2DLayoutView **oMother</tt>
  * [out] The mother view (concerning positionning)
  * @param <tt>CATDftViewLinkType *oLinkType</tt>
  * [out] The link mode
  * @param <tt>IUnknown **oPosRelation</tt>
  * [out] The Poitioning relation
  * @return
  * Un <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd> if oMother is valuated
  * <dt> <tt>E_FAIL</tt>   <dd> 
  * </dl>
  */
  virtual HRESULT GetViewLink (CATI2DLayoutView **oMother, CATDftViewLinkType *oLinkType, 
    IUnknown **oPosRelation) = 0;


  /**
  * Returns the coordinates of the view coordinate system origin.
  * It is expressed with respect to the sheet coordinate system.
  * These coordinates, like any length, are measured in millimeters.
  * @param <tt>double * oX</tt>
  * [out] The x coordinate of the view.
  * @param <tt>double * oY</tt>
  * [out] The y coordinate of the view.
  * @return
  * Un <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd> Execution successfully.
  * <dt> <tt>E_FAIL</tt>   <dd> Execution failed.
  * </dl>
  */
  virtual HRESULT GetAxisData( double * oX, double * oY ) = 0;

  /**
  * Sets the coordinates of the view coordinate system origin.
  * It is expressed with respect to the sheet coordinate system.
  * These coordinates, like any length, are measured in millimeters.
  * @param <tt> double iX</tt>
  * [in] The x coordinate of the view.
  * @param <tt> double iY</tt>
  * [in] The y coordinate of the view.
  * @return
  * Un <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd> Execution successfully.
  * <dt> <tt>E_FAIL</tt>   <dd> Execution failed.
  * </dl>
  */
  virtual HRESULT SetAxisData(double iX, double iY ) = 0;

  /**
  * Gets the 3D visualization mode of the layout in the 3D Viewer.
  * @param obVisuMode: 
  * The 3D Visu mode: TRUE if the 3D is displayed
  * @return
  * Un <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd> Execution successfully.
  * <dt> <tt>E_FAIL</tt>   <dd> Execution failed.
  * </dl>
  */
  virtual HRESULT GetVisuIn3DMode(CATBoolean &obVisuMode) =0;

  /**
  * Sets the 3D visualization mode of the layout in the 3D Viewer.
  * @param ibVisuMode: 
  * The 3D Visu mode: TRUE to display the 3D 
  * @return
  * Un <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd> Execution successfully.
  * <dt> <tt>E_FAIL</tt>   <dd> Execution failed.
  * </dl>
  */
  virtual HRESULT SetVisuIn3DMode(CATBoolean ibVisuMode) =0;

  /**
  * Gets the 2D-3D background visu mode of the view
  * ie in the 3D windows and in the background of each view in every 2D context.
  * @param iVisuMode: 		
  * The background Visu mode: TRUE if the background is displayed
  * @return
  * Un <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd> Execution successfully.
  * <dt> <tt>E_FAIL</tt>   <dd> Execution failed.
  * </dl>
  */
  virtual HRESULT GetVisuBackgroundMode(CatVisuBackgroundMode &oVisuMode) =0;

  /**
  * Sets the 2D-3D background visu mode of the view.
  * ie in the 3D windows and in the background of each view in every 2D context
  * @param obVisuMode: 
  * The background Visu mode: TRUE to display the background 
  * @return
  * Un <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd> Execution successfully.
  * <dt> <tt>E_FAIL</tt>   <dd> Execution failed.
  * </dl>
  */
  virtual HRESULT SetVisuBackgroundMode(CatVisuBackgroundMode iVisuMode) =0;

  /**
  * Gets the 2D mode for background visualization of the view.
  * @param obVisuMode: 
  * The 2D Visu mode: TRUE if the 2D is displayed
  * @return
  * Un <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd> Execution successfully.
  * <dt> <tt>E_FAIL</tt>   <dd> Execution failed.
  * </dl>
  */
  virtual HRESULT GetVisu2DMode(CATBoolean &obVisu2DMode) = 0;

  /**
  * Sets the 2D mode for background visualization of the view.
  * @param ibVisuMode: 
  * The 2D Visu mode: TRUE to display the 2D
  * @return
  * Un <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>     <dd> Execution successfully.
  * <dt> <tt>E_FAIL</tt>   <dd> Execution failed.
  */
  virtual HRESULT SetVisu2DMode(CATBoolean ibVisu2DMode) =0;


  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

//------------------------------------------------------------------
CATDeclareHandler(CATI2DLayoutView, CATBaseUnknown);
#endif

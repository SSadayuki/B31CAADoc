#ifndef CATISHEET_H
#define CATISHEET_H
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATLISTV_CATISpecObject.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATIDrawing.h"
#include "CATIView.h"
#include "CATIDftViewMakeUp.h"
#include "CATUnicodeString.h"
#include "CatSheetProjectionMethod.h"
#include "CATBooleanDef.h"
class CATIFormatable_var;
class CATISheetFrame_var;
class CATIGenDimStorage_var;


#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATISheet ;
#else
extern "C" const IID IID_CATISheet ;
#endif
/**
 * Interface of the drawing sheet object.
 * <b>Role</b>: The sheets represents the paper sheets used in manual
 * drawing works.
 * The main role of the sheets is to manage formats and display views.
 * An empty sheet contains 2 views :
 *    The background view which is used for frames and title blocks
 *    The main view which contains the geometry directly created in the sheet.
 */
class ExportedByDraftingItfCPP CATISheet : public CATBaseUnknown
{
  CATDeclareInterface;
  
 public:
  
  /**
  * @nodoc
  */
  virtual CATUnicodeString GetComment()  = 0;

 /**
  * Gets the global scale associated to the sheet.
  * This scale is applied on the sheet views.
  * @return
  *   The global sheet scale.
  *   <br><b>Legal values</b>:
  *   <dl> 
  *     <dt>The scale is greater than 0.</dt> 
  *   </dl>
  */  
  virtual double GetScale()  = 0;

 /**
  * Gets the drawing containing this sheet.
  * @return 
  *   The drawing containing this sheet.
  */  
  virtual CATIDrawing_var GetDrawing()  = 0;

  /**
  * @nodoc
  * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
  */
  virtual HRESULT SetAsDetail() = 0;
  /**
  * @nodoc
  */
  virtual HRESULT IsDetail(boolean *oDetSheet)  = 0;

 /**
  * Gets the current view.
  * The current view is the view in edition when the sheet is current.
  * @return
  *   The current view.
  */   
  virtual CATIView_var GetCurrentView()  = 0;

 /**
  * Gets the make up of the current view.
  * The current view is the view in edition when the sheet is current.
  * @return
  *   The current view make up.
  */   
  virtual HRESULT GetCurrentViewMakeUp(CATIDftViewMakeUp **oViewMU)  = 0;

 /**
  * Gets the background view.
  * The background view is the view in the background of the sheet.
  * This view contains in general the frames and title blocks.
  * There is a background view per sheet.
  * @return
  *   The background view.
  */   
  virtual CATIView_var GetBackgroundView()  = 0;
  /**
  * @nodoc
  */
  virtual HRESULT GetBackgroundViewMakeUp(CATIDftViewMakeUp **oViewMU)  = 0;

 /**
  * Gets the main view.
  * The main view is the view suporting geometries and annotations for a sheet.
  * In other words, the main view is the default view of a sheet.
  * There is a main view per sheet.
  * @return
  *   The main view.
  */  
  virtual CATIView_var GetMainView()  = 0;
  /**
  * @nodoc
  */
  virtual HRESULT GetMainViewMakeUp(CATIDftViewMakeUp **oViewMU)  = 0;
 /**
  * Returns the views referenced by the sheet.
  * The list includes the background and main views.
  * @return
  *   The view list.
  */
  virtual CATLISTV(CATISpecObject_var) GetViewList()  = 0;

  /**
  * @nodoc
  */
  virtual CATISheetFrame_var GetSheetFrame() = 0;

  /**
  * @nodoc
  */
  virtual void SetSheetFrame(CATISheetFrame_var iFrame) = 0;

  /**
  * @nodoc
  * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
  */
  virtual CATLISTV(CATBaseUnknown_var) GetListGenDimStorage() = 0;
  /**
  * @nodoc
  */
  virtual void SetComment(const CATUnicodeString& a) = 0;
 /**
  * Sets the global scale associated to the sheet.
  * @param iScale
  *   The sheet global scale.
  *   <br><b>Legal Values</b>: The scale is greater than 0.
  */ 
  virtual void SetScale(const double& iScale) = 0;

  /**
  * Sets a view as the current view.
  * This view  become in edition when the sheet is current.
  * <br><b>Precondition</b>: The view have to be added to the sheet before calling this method.
  * <br><b>Note</b>:  Do not use this service to activate the background view in UI context, because
  * the command will be canceled by the background workshop activation. 
  * Only, in this particular case, it is recommended to edit the sketch by using Openedition and 
  * CloseEdition methods defined in CATISketchEditor interface implemented by the view.
  * These methods allow to manage geometry creation or modification in a view when it is not the
  * active view of a drawing.
  * @param iView
  *   The view to be current.
  */
  virtual void SetCurrentView(CATIView_var iView) = 0;
  /**
  * Sets a view as the current view.
  * This view  become in edition when the sheet is current.
  * <br><b>Precondition</b>: The view have to be added to the sheet before calling this method.
  * <br><b>Note</b>:  Do not use this service to activate the background view in UI context, because
  * the command will be canceled by the background workshop activation. 
  * Only, in this particular case, it is recommended to edit the sketch by using Openedition and 
  * CloseEdition methods defined in CATISketchEditor interface implemented by the view.
  * These methods allow to manage geometry creation or modification in a view when it is not the
  * active view of a drawing.
  * @param iViewMU
  *   The view make up pointing the view.
  */
  virtual HRESULT SetCurrentView(const CATIDftViewMakeUp *iViewMU) = 0;

  /**
  * @nodoc
  */
  virtual void SetPickMode(const int &imode) = 0;
  /**
  * @nodoc
  * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
  */
  virtual void AddGenDimStorage(CATIGenDimStorage_var st) = 0;
  /**
  * @nodoc
  * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
  */
  virtual void RemoveGenDimStorage(CATIGenDimStorage_var st) = 0;
  
 /**
  * This method is used to add a view in the sheet.
  * Use the CATIDrwFactory interface to create the view
  * @see CATIDrwFactory
  * @param iView 
  *   The view to be added
  * @param iPosition[2] 
  *   The view position in the sheet
  */
  virtual void AddView(CATIView_var iView, double iPosition[2]) = 0;

 /**
  * This method is used to add a view in the sheet
  * Use the CATIDrwFactory interface to create the view and view make-up.
  * @see CATIDrwFactory
  * @param iViewMU  
  *   The view make-up to be added
  * @param iEmbedView 
  *   Not used yet.
  */
  virtual HRESULT AddView(const CATIDftViewMakeUp *iViewMU, boolean iEmbedView = TRUE) = 0;


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
  * [in] The ordered list of the views in this sheet.
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
  * @nodoc
  */
  virtual void DuplicatePropertiesFrom(CATISheet_var OtherSheet) = 0;
  
 /**
  * @deprecated CXR27
  * This method is used to know if the sheet is up to date.
  * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
  */
  virtual int IsUpdated() = 0;

  /**
  * @nodoc
  * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
  */
  virtual void UpdateStatus(const int &st) = 0;
  
 /**
  * This method is used to know if the sheet is the current one in the drawing.
  * The current sheet is the sheet containing the view in edition.
  * @return
  *   The status
  *   <br><b>Legal values</b>: 
  *   <dl> 
  *     <dt>0</dt> The sheet is not the current one
  *     <dt>1</dt> The sheet is the current one
  *   </dl>
  */
  virtual int IsCurrent() = 0;
 /**
  * Gets the coordinates of the sheet frame.
  * The sheet frame is the graphical representation of the sheet format (A0, A1, ...)..
  * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
  * @param oBLx
  *   The bottom left x coordinate
  * @param oBLy
  *   The bottom left y coordinate
  * @param oTRx
  *   The top right x coordinate
  * @param oTRy
  *   The top right y coordinate
  */
  virtual int GetFramePoints(double & oBLx, double & oBLy, double & oTRx, double & oTRy ) = 0;
/**
 * @nodoc
 * This method is now replaced by 
 * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
 * Use @href CATIDftSheetFormat#GetSheetFormat
 */
  virtual CATIFormatable_var GetFormat()=0;
/**
 * @nodoc
 * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
 * Use @href CATIDftSheetFormat#SetSheetFormat
 */
  virtual void SetFormat(CATISpecObject_var format)=0;
 /**
  * Gets the projection method for the sheet.
  * The projection method may be first or third angle.
  * @return 
  *   The projection method.
  * <br><b>Legal values</b>: Possible values are catFirstAngle or catThirdAngle 
  */
  virtual CatSheetProjectionMethod GetProjectionMethod() = 0;
 /**
  * Sets the projection method for the sheet.
  * The projection method may be first or third angle.
  * @param iProjMethod
  *   The projection method
  * <br><b>Legal values</b>: Possible values are catFirstAngle or catThirdAngle 
  */
  virtual void SetProjectionMethod (CatSheetProjectionMethod iProjMethod) = 0;
  
};
CATDeclareHandler(CATISheet, CATBaseUnknown);
#endif



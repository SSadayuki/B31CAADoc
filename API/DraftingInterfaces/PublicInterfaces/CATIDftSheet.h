// COPYRIGHT DASSAULT SYSTEMES 1999
#ifndef CATIDftSheet_H
#define CATIDftSheet_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */


// System
#include "IUnknown.h"
#include "CATMacForIUnknown.h"
#include "CATBooleanDef.h"
#include "CATCollec.h"

// ObjectSpecsModeler
class CATLISTV(CATISpecObject_var);

// Drafting
#include "CATDftProjectionMethod.h"
#include "CATDftGenViewsPosMode.h"

// Forward declarations
class CATIDftDrawing;
class CATIDftView;
class CATIDftViewMakeUp;
class CATIUnknownList;

#include "CATDraftingInterfaces.h"
#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftSheet ;
#else
extern "C" const IID IID_CATIDftSheet ;
#endif

/**
 * Interface of the Sheet object.
 * <b>Role</b>: The Sheet aggregates view objects
 */

class ExportedByDraftingItfCPP CATIDftSheet : public IUnknown
{
public:

   /**
   * Gets the drawing containing this sheet.
   * @param CATIDftDrawing **oDrawing 
   *  The father drawing.
   */  
   virtual HRESULT GetDrawing(CATIDftDrawing **oDrawing) const = 0;

   /**
   * @deprecated V5R20 Use @href CATIDftDrawing#AddSheet
   * Sets the sheet as a detail sheet. All the views in this sheet will be details.
   */ 
   virtual HRESULT SetAsDetail() = 0;

   /**
   * Used to know if a sheet can be used to as a detail sheet.
   * @param boolean *oDetSheet
   * TRUE if it is a detail sheet
   */ 
   virtual HRESULT IsDetail(boolean *oDetSheet) const = 0;

   /**
   * Gets the global scale associated to the sheet. This scale is applied on the sheet views.
   * @param double *oScale
   * The global scale of the sheet
   */  
   virtual HRESULT GetScale(double *oScale) const = 0;

   /**
   * Sets the global scale associated to the sheet. This scale is applied on the sheet views.
   * @param const double iScale
   * The global scale of the sheet
   */ 
   virtual HRESULT SetScale(const double iScale) = 0;

   /**
   * Gets the main view in the sheet. The main view contains geometry associated to the sheet.
   * @param CATIDftView **oView
   * The main view in the sheet.
   */  
   virtual HRESULT GetMainView(CATIDftView **oView) const = 0;


   /**
   * Gets the background view in the sheet. The background view contains the frame and title-blocks.
   * @param CATIDftView **oView
   * The background view in the sheet.
   */   
   virtual HRESULT GetBackgroundView(CATIDftView **oView) const = 0;


   /**
   * Gets the view which have to be activated in the sheet. By default, the active view is the view in edition.
   * @param CATIDftView **oView
   * The default active view in the sheet.
   */   
   virtual HRESULT GetDefaultActiveView(CATIDftView **oView) const = 0;



   /**
   * Adds a view in the sheet.
   * @param const CATIDftView *iView
   * The view to be added.
   * @param const double iPosition[2] 
   * The view position in the sheet.
   */
   virtual HRESULT AddView(const CATIDftView *iView, double iPosition[2]) = 0; 

   /**
   * Adds a view in the sheet.
   * @param const CATIDftViewMakeUp *iViewMU  
   * The view make-up to be added.
   * @param const boolean iEmbedView
   * Embed or not the view in the sheet:
   *                        TRUE for basic views.
   *                        FALSE for Details and twin views.
   */
   virtual HRESULT AddView(const CATIDftViewMakeUp *iViewMU, const boolean iEmbedView = TRUE) = 0;

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
   *Sets the view which have to be activated in the sheet.
   *  By default:
   *               - The view have to be added in the sheet before.
   *               - The active view is the view in edition.
    * <br><b>Note</b>: Do not use this service to activate the background view in UI context, because
   * the command will be canceled by the background workshop activation. 
   * Only, in this particular case, it is recommended to edit the sketch by using Openedition and 
   * CloseEdition methods defined in CATISketchEditor interface implemented by the view.
   * These methods allow to manage geometry creation or modification in a view when it is not the
   * active view of a drawing.
   * @param const CATIDftView *iView 
   *  The default active view in the sheet.
   * @see CATISketchEditor#OpenEdition
   */ 
   virtual HRESULT SetDefaultActiveView(const CATIDftView *iView) = 0;

   /**
   * Returns the view make-ups referenced by the drawing.
   * @param CATIUnknownList *oLstResult
   * Founded Make-ups are added to the list.
   */
   virtual HRESULT GetViewMakeUps(CATIUnknownList **oLstResult) const = 0;

   /**
   * @deprecated V5R18 Use @href CATIDftSheetFormat#GetSheetDisplayMode
   * Gets the sheet frame.
   * @param int DisplaySheetFrame
   *  = 0 Sheet frame is not displayed.
   *  = 1 Sheet frame is displayed.
   */
   virtual HRESULT GetSheetFrame(int DisplaySheetFrame) const = 0;

   /**
   * Gets the projection method in this sheet.
   * @param CATDftProjectionMethod *oProjMethod
   *  The projection method: 
   *  - CATFirstAngle: First angle standard.
   *  - CATThirdAngle: Third angle standard.
   */ 
   virtual HRESULT GetProjectionMethod(CATDftProjectionMethod *oProjMethod) const = 0;

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
 * @param <tt>in boolean iActivated</tt>
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
 * Changes the stability mode for the position of generative views inside the sheet.
 * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
 * @param <tt>CATDftGenViewsPosMode iMode</tt>
 * [in] the stability mode for generative views.
 * <dl>
 * <dt> <tt>CATFixedCG  </tt>   <dd> the image of the center of gravity of the 3D data remains at the same position after an update.
 * <dt> <tt>CATFixedAxis</tt>   <dd> the image of the center of gravity of the 3D data moves after an update so that existing and
 *                                   unmodified geometries remain at the same position.
 * </dl>
 * @return
 * a <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>     <dd> Success.
 * <dt> <tt>S_FALSE</tt>  <dd> Success. Nothing was modified since the mode requested was the current mode.
 * <dt> <tt>E_FAIL</tt>   <dd> Failure.
 * </dl>
 * @see CATDftGenViewsPosMode
 */
  virtual HRESULT SetGenViewsPosMode(CATDftGenViewsPosMode iMode)= 0;


 /**
 * Gets the stability mode for the position of generative views inside the sheet.
 * <br><b>Warning</b>: This method is not available with 2D Layout for 3D Design.
 * @see CATIDftSheet#SetGenViewsPosMode
 * @param <tt>CATDftGenViewsPosMode &oPosMode</tt>
 * [out] the stability mode.
 * @return
 * Un <tt>HRESULT</tt>
 * <dl>
 * <dt> <tt>S_OK</tt>     <dd> Success.
 * <dt> <tt>E_FAIL</tt>   <dd> Failure.
 * </dl>
 */
  virtual HRESULT GetGenViewsPosMode(CATDftGenViewsPosMode &oPosMode)= 0;

};

#endif



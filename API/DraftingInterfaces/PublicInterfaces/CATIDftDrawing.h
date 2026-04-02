// COPYRIGHT DASSAULT SYSTEMES 1999 

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#ifndef CATIDftDrawing_H
#define CATIDftDrawing_H

#include "IUnknown.h"
#include "CATMacForIUnknown.h"
#include "CATCollec.h"
#include "CATBooleanDef.h"
class CATLISTV(CATISpecObject_var);

class CATIDftSheet;
class CATIDftView;
class CATIUnknownList;

#include "CATDraftingInterfaces.h"
#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDftDrawing ;
#else
extern "C" const IID IID_CATIDftDrawing ;
#endif

/**
 * Interface of the drawing object.
 * <b>Role</b>: The drawing is the root feature of a CATDrawing Document.
 * It manages the sheets.
 */
class ExportedByDraftingItfCPP CATIDftDrawing : public CATBaseUnknown
{
  CATDeclareInterface;

public:
   
   /**
   * This method is used to create a sheet in the drawing.
   * @param oSheet
   *   The new sheet to create
   * @param iName
   *   The sheet name, automatic if NULL pointer (default)
   * @param iSheetBefore
   *   The sheet XXXXXXXXXXXXXXXX: (NOT IMPLEMENTED)
   * @param iSheetAfter
   *   The sheet XXXXXXXXXXXXXXXX: (NOT IMPLEMENTED)
   * @param ibDetailSheet
   *   If true the sheet created is a detail sheet
   */
   virtual HRESULT AddSheet    (CATIDftSheet **oSheet,
                                const wchar_t *iName = NULL,
                                const CATIDftSheet *iSheetBefore = 0,
                                const CATIDftSheet *iSheetAfter  = 0,
								const CATBoolean ibDetailSheet = FALSE) = 0;

   /**
   * this method is used to remove a sheet in the drawing.
   * @param iSheet
   *   Sheet to remove
   */
   virtual HRESULT RemoveSheet (const CATIDftSheet *iSheet) = 0;

   /**
    * Validates that the given ordered list can be used as an input
    * for ReorderSheet.
    * i.e. validates that:
    * iOrderedSheets is the result of a permutation applied to 
    * the list of <b>all</b> the sheets of this drawing, with the following 
    * constraint: for every non-detail sheet, there isnt any detail sheet 
    * appearing before in iOrderedSheets.
    * @param iOrderedSheets
    * The list of sheets to validate.
    * @return
    * An <tt>HRESULT</tt> value.
    * <br><b>Legal values</b>:
    * <dl>
    * <dt> <tt>S_OK</tt>     <dd> iOrderedSheets is a valid input.
    * <dt> <tt>E_XXX</tt>   <dd> iOrderedSheet is not a valid input.
    * </dl>
    */
   virtual HRESULT ValidateSheetOrder(const CATLISTV(CATISpecObject_var) &iOrderedSheets)=0;

   
  /**
  * Change the positions of the sheets in a drawing according to the given 
  * ordered list.
  * @param <tt>const CATLISTV(CATISpecObject_var) &iOrderedSheets</tt>
  * [in] The ordered list of the sheets in this drawing.
  * <b>Preconditions<b>:
  * <dl>
  * <dt> ValidateSheetOrder(iOrderedSheets) must succeed. @see ValidateSheetOrder.
  * </dl>
  * @return
  * A <tt>HRESULT</tt>
  * <dl>
  * <dt> <tt>S_OK</tt>         <dd> Sheets were reordered.
  * <dt> <tt>E_UNEXPECTED</tt> <dd> Preconditions not met.
  * <dt> <tt>E_FAIL</tt>       <dd> Internal error.
  * </dl>
  */
  virtual HRESULT ReorderSheets(const CATLISTV(CATISpecObject_var) &iOrderedSheets)=0;

   /**
   * @deprecated V5R18 use #ReorderSheets
   * this method is used to move a sheet in the drawing.
   * @param iSheet
   *   Sheet to remove
   * @param iSheetBefore
   *   The sheet XXXXXXXXXXXXXXXX
   * @param iSheetBefore
   *   The sheet XXXXXXXXXXXXXXXX
   */
   virtual HRESULT MoveSheet (const CATIDftSheet *iSheet,
                              const CATIDftSheet *iSheetBefore = 0,
                              const CATIDftSheet *iSheetAfter  = 0) = 0;


   /**
   * Gets the active view in the drawing.
   * <BR>The active view is the view in edition.
   * @param oView
   *   The active view in the drawing.
   */
   virtual HRESULT GetActiveView(CATIDftView **oView) const = 0;

   /**
   * Gets the active sheet in the drawing.
   * <BR>The active sheet is the working sheet.
   * @param oSheet
   *   The active sheet in the drawing.
   */
   virtual HRESULT GetActiveSheet(CATIDftSheet **oView) const = 0;

   /**
   * Returns the sheets referenced by the drawing.
   * @param oLstResult
   *   Founded sheets are added to the list
   */
   virtual HRESULT GetSheets(CATIUnknownList **oLstResult) const = 0;

   /**
   * Description : returns the views referenced by the drawing.
   * @param oLstResult : 
   *   Founded views are added to the list
   */
   virtual HRESULT GetViews(CATIUnknownList **oLstResult) const = 0;

};
CATDeclareHandler(CATIDftDrawing, CATBaseUnknown);
#endif

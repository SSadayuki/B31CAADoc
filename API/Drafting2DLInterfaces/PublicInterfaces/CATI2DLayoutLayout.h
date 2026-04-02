// COPYRIGHT Dassault Systemes 2007
/**
* @CAA2Level L1
* @CAA2Usage U3
*/
//===================================================================
//
// CATI2DLayoutLayout.h
// Define the CATI2DLayoutLayout interface
//
//===================================================================
#ifndef CATI2DLayoutLayout_H
#define CATI2DLayoutLayout_H

#include "CATDrafting2DLInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATCollec.h"
#include "CATBooleanDef.h"

class CATLISTV(CATISpecObject_var);
class CATI2DLayoutLayout;
class CATI2DLayoutSheet;
class CATI2DLayoutView;
class CATIUnknownList;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATDrafting2DLItfCPP IID IID_CATI2DLayoutLayout;
#else
extern "C" const IID IID_CATI2DLayoutLayout ;
#endif

//------------------------------------------------------------------

/**
* This interface manages the 2D Layout.
*
* <br><b>Role</b>: The 2D Layout is the root object of the 2D Layout for 3D Design Application.
*
*/
class ExportedByCATDrafting2DLItfCPP CATI2DLayoutLayout: public CATBaseUnknown
{
  CATDeclareInterface;

public:

  /**
  * Gets the active view in the 2D Layout.
  * <BR>The active view is the view in edition.
  * @param o2DLView [out, CATBaseUnknown#Release]
  *   The active view in the 2D Layout.
  * @return
  * <dt><tt>S_OK</tt> <dd>if the view is retrieved.
  * <dt><tt>E_FAIL</tt> <dd>if the operation failed.
  * </dl>
  */
  virtual HRESULT GetActiveView(CATI2DLayoutView **o2DLView)  = 0;

  /**
  * Gets the active sheet in the 2D Layout.
  * <BR>The active sheet is the working sheet.
  * @param o2DLSheet [out, CATBaseUnknown#Release]
  *   The active sheet in the 2D Layout.
  * @return
  * <dt><tt>S_OK</tt> <dd>if the sheet is retrieved.
  * <dt><tt>E_FAIL</tt> <dd>if the operation failed.
  * </dl>
  */
  virtual HRESULT GetActiveSheet(CATI2DLayoutSheet **o2DLSheet)  = 0;

  /**
  * Sets the active sheet in the 2D Layout.
  * <BR>The active sheet is the working sheet.
  * @param iSheet
  *   The active sheet in the 2D Layout.
  * @return
  * <dt><tt>S_OK</tt> <dd>if the sheet is activated.
  * <dt><tt>E_FAIL</tt> <dd>if the operation failed.
  * </dl>
  */
  virtual HRESULT SetActiveSheet(const CATI2DLayoutSheet *i2DLSheet)  = 0;

  /**
  * Returns the sheets referenced by the 2D Layout.
  * @param oLstResult [out, CATBaseUnknown#Release]
  *   Founded sheets are added to the list
  * @return
  * <dt><tt>S_OK</tt> <dd>if the operation is successful.
  * <dt><tt>E_FAIL</tt> <dd>if the operation failed.
  * </dl>
  */
  virtual HRESULT GetSheets(CATIUnknownList **oLstResult)  = 0;

  /**
  * Returns the views referenced by the 2D Layout.
  * @param oLstResult [out, CATBaseUnknown#Release]
  *   Founded views are added to the list
  * @return
  * <dt><tt>S_OK</tt> <dd>if the operation is successful.
  * <dt><tt>E_FAIL</tt> <dd>if the operation failed.
  * </dl>
  */
  virtual HRESULT GetViews(CATIUnknownList **oLstResult)  = 0;

  /**
  * This method is used to create a 2DL sheet in the 2D Layout.
  * @param oSheet [out, CATBaseUnknown#Release]
  *   The new created sheet
  * @param iName
  *   The sheet name, automatic if NULL pointer (default)
  * @param iSheetBefore
  *   The sheet XXXXXXXXXXXXXXXX (NOT IMPLEMENTED)
  * @param iSheetAfter
  *   The sheet XXXXXXXXXXXXXXXX (NOT IMPLEMENTED)
  * @param ibDetailSheet
  *   If true the 2DL sheet created is a detail sheet
  * @return
  * <dt><tt>S_OK</tt> <dd>if the sheet is added.
  * <dt><tt>E_FAIL</tt> <dd>if the operation failed.
  * </dl>
  */
  
  virtual HRESULT AddSheet (CATI2DLayoutSheet **o2DLSheet,
                            wchar_t *iName = NULL,
                            CATI2DLayoutSheet *iSheetBefore = 0,
                            CATI2DLayoutSheet *iSheetAfter  = 0,
							CATBoolean ibDetailSheet = FALSE) = 0;
  /**
  * This method is used to remove a sheet in the 2D Layout.
  * @param iSheet
  *   Sheet to remove
  * @return
  * <dt><tt>S_OK</tt> <dd>if the sheet is removed.
  * <dt><tt>E_FAIL</tt> <dd>if the operation failed.
  * </dl>
  */
  virtual HRESULT RemoveSheet (CATI2DLayoutSheet *iSheet) = 0;

  /**
  * Validates that the given ordered list can be used as an input
  * for ReorderSheet.
  * <br><b>Role</b>: i.e. validates that:
  * iOrderedSheets is the result of a permutation applied to 
  * the list of <b>all</b> the sheets of this 2D Layout, with the
  * following constraint: for every non-detail sheet, there isnt any 
  * detail sheet appearing before in iOrderedSheets.
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
  virtual HRESULT ValidateSheetOrder(CATLISTV(CATISpecObject_var) &iOrderedSheets)=0;


  /**
  * Changes the positions of the sheets in a 2D Layout according to the given ordered list.
  * @param <tt>const CATLISTV(CATISpecObject_var) &iOrderedSheets</tt>
  * [in] The ordered list of the sheets in this 2D Layout.
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
  virtual HRESULT ReorderSheets(CATLISTV(CATISpecObject_var) &iOrderedSheets)=0;

  /**
  * Gets the 3D visualization mode of the layout in the 3D Viewer
  * @param obVisuMode: 
  * @return
  * <dt><tt>S_OK</tt> <dd>if the operation is successful.
  * <dt><tt>E_FAIL</tt> <dd>if the operation failed.
  * </dl>
  */
  virtual HRESULT GetVisuIn3DMode(CATBoolean &obVisuMode)= 0;

  /**
  * Sets the 3D visualization mode of the layout in the 3D Viewer
  * @param ibVisuMode: 
  * @return
  * <dt><tt>S_OK</tt> <dd>if the operation is successful.
  * <dt><tt>E_FAIL</tt> <dd>if the operation failed.
  * </dl>
  */
  virtual HRESULT SetVisuIn3DMode(CATBoolean ibVisuMode) = 0;
};
//------------------------------------------------------------------
CATDeclareHandler(CATI2DLayoutLayout, CATBaseUnknown);
#endif

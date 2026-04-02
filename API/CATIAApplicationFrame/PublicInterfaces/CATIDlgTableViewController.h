#ifndef CATIDlgTableViewController_h
#define CATIDlgTableViewController_h

// COPYRIGHT DASSAULT SYSTEMES 2007

/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATExtIDlgTableViewController
 */

#include "CATDlgView.h"
#include "CATBaseUnknown.h"
#include "CATString.h"

extern ExportedByCATDlgView IID IID_CATIDlgTableViewController;


/**
* Interface to retrieve data to be visualized through the CATDlgTableView component.
*
* <br><b>Role</b>: Interface to retrieve data to be visualized through the CATDlgTableView component
* <p>
* Do not directly implement the CATIDlgTableViewController interface, but use the
* CATExtIDlgTableViewController adapter and implement the needed methods.
*
* BOA information: this interface cannot be implemented using the BOA (Basic Object Adapter). 
* To know more about the BOA, refer to the CAA Encyclopedia home page. 
* Click Middleware at the bottom left, then click the Object Modeler tab page. 
* Several articles deal with the BOA.
*
*/
class ExportedByCATDlgView CATIDlgTableViewController : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

  // A revoir (mettre des HRESULT, verifier la pertinence)
  /** @nodoc
   * Implements this method to perform additional action before scrolling step
   * Default implementation is empty.
   */
  virtual void OnScrollStart() = 0;

  /** @nodoc
   * Implements this method to perform additional action during scrolling step
   * Default implementation is empty.
   */
  virtual void OnScroll() = 0;

  /** @nodoc
   * Implements this method to perform additional action after scrolling step
   * Default implementation is empty.
   */
  virtual void OnScrollStop() = 0;

  /**
   * Implements this method to perform additional action when updating highlight
   * Default implementation is empty.
   */
  //virtual void OnUpdateHighlight(CATBaseUnknown_var iRow ) = 0;
  
  /** 
  * Retrieves if the specified line is selected.
  *
  * <br><b>Role</b>: Retrieves if the specified line is selected.
  *
  * @param iRow [in]
  *   The line to check.
  * @param oSelected [out]
  *   Returns TRUE if the specified line is selected, FALSE otherwise.
  *
  * @return
  *   <code>S_OK</code> if everything ran ok, <code>E_FAIL</code> otherwise.
  *
  */
  virtual HRESULT IsSelected( CATBaseUnknown_var iRow, CATBoolean & oSelected) = 0;
  
  /** 
  * Retrieves if the specified cell is selected.
  *
  * <br><b>Role</b>: Retrieves if the specified cell is selected.
  *
  * @param iRow [in]
  *   The line containing the cell. This data must be serializable.
  * @param iColumn [in]
  *   ID of the column containing the cell.
  * @param oSelected [out]
  *   Returns TRUE if the cell is selected, FALSE otherwise.
  *
  * @return
  *   <code>S_OK</code> if everything ran ok, <code>E_FAIL</code> otherwise.
  *
  */
  virtual HRESULT IsSelected( CATBaseUnknown_var iRow, const CATString& iColumn, CATBoolean & oSelected) = 0;
  
  /** 
  * Retrieves if the specified cell is preselected.
  *
  * <br><b>Role</b>: Retrieves if the specified cell is preselected.
  *
  * @param iRow [in]
  *   The line containing the cell. This data must be serializable.
  * @param iColumn [in]
  *   ID of the column containing the cell.
  * @param oPreSelected [out]
  *   Returns TRUE if the cell is preselected, FALSE otherwise.
  *
  * @return
  *   <code>S_OK</code> if everything ran ok, <code>E_FAIL</code> otherwise.
  *
  */
  virtual HRESULT IsPreSelected( CATBaseUnknown_var iRow, const CATString& iColumn, CATBoolean & oPreSelected) = 0;
  
  /** 
  * Retrieves if the specified column contains a selected cell.
  *
  * <br><b>Role</b>: Retrieves if the specified column contains a selected cell.
  *
  * @param iColumn [in]
  *   The column to check.
  * @param oHasSelection [out]
  *   Returns TRUE if a cell is selected in the specified column, FALSE otherwise.
  *
  * @return
  *   <code>S_OK</code> if everything ran ok, <code>E_FAIL</code> otherwise.
  *
  */
  virtual HRESULT HasSelection( const CATString& iColumn, CATBoolean & oHasSelection ) = 0;
  
  /** 
  * Method launched on the selection of the cell specified by iRow and iColumn.
  *
  * <br><b>Role</b>: Method launched on the selection of the cell specified by iRow and iColumn.
  *
  * @param iRow [in]
  *   The line containing the cell. This data must be serializable.
  * @param iColumn [in]
  *   ID of the column containing the cell.
  *
  * @return
  *   <code>S_OK</code> if everything ran ok, <code>E_FAIL</code> otherwise.
  *
  */
  virtual HRESULT OnSelect( CATBaseUnknown_var iRow, const CATString& iColumn) = 0;
  
  /** 
  * Method launched on the move of the mouse over the cell specified by iRow and iColumn.
  *
  * <br><b>Role</b>: Method launched on the move of the mouse over the cell specified 
  *                  by iRow and iColumn.
  *
  * @param iRow [in]
  *   The line containing the cell. This data must be serializable.
  * @param iColumn [in]
  *   ID of the column containing the cell.
  *
  * @return
  *   <code>S_OK</code> if everything ran ok, <code>E_FAIL</code> otherwise.
  *
  */
  virtual HRESULT OnMoveOver( CATBaseUnknown_var iRow, const CATString& iColumn ) = 0;
  
  /** 
  * Method launched on the activation of the specified line.
  *
  * <br><b>Role</b>: Method launched on the activation of the specified line.
  *
  * @param iRow [in]
  *   The specified line. This data must be serializable.
  *
  * @return
  *   <code>S_OK</code> if everything ran ok, <code>E_FAIL</code> otherwise.
  *
  */
  virtual HRESULT OnActivate( CATBaseUnknown_var iRow ) = 0;
  
  /** 
  * Method launched on a right-click over the specified line.
  *
  * <br><b>Role</b>: Method launched on a right-click over the specified line.
  *
  * @param iRow [in]
  *   The specified line. This data must be serializable.
  *
  * @return
  *   <code>S_OK</code> if everything ran ok, <code>E_FAIL</code> otherwise.
  *
  */
  virtual HRESULT OnContext( CATBaseUnknown_var iRow ) = 0;
  
  /** 
  * Method launched on a right-click over the specified cell by iRow and iColumn.
  *
  * <br><b>Role</b>: Method launched on a right-click over the specified cell by iRow and iColumn.
  *
  * @param iRow [in]
  *   The line containing the cell. This data must be serializable.
  * @param iColumn [in]
  *   ID of the column containing the cell.
  *
  * @return
  *   <code>S_OK</code> if everything ran ok, <code>E_FAIL</code> otherwise.
  *
  */
  virtual HRESULT OnCellContext( CATBaseUnknown_var iRow, const CATString& iColumn ) = 0;
  
  /** 
  * Method launched on a right-click over the specified column header.
  *
  * <br><b>Role</b>: Method launched on a right-click over the specified column header.
  *
  * @param iColumn [in]
  *   ID of the specified column.
  *
  * @return
  *   <code>S_OK</code> if everything ran ok, <code>E_FAIL</code> otherwise.
  *
  */
  virtual HRESULT OnColumnHeaderContext( const CATString& iColumn ) = 0;
  
  /** 
  * Method launched on a right-click over the specified row header.
  *
  * <br><b>Role</b>: Method launched on a right-click over the specified row header.
  *
  * @param iRow [in]
  *   The specified line.
  *
  * @return
  *   <code>S_OK</code> if everything ran ok, <code>E_FAIL</code> otherwise.
  *
  */
  virtual HRESULT OnRowHeaderContext( CATBaseUnknown_var iRow ) = 0;
};

CATDeclareHandler(CATIDlgTableViewController, CATBaseUnknown);

#endif

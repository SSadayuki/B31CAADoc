#ifndef CATExtIDlgTableViewController_h
#define CATExtIDlgTableViewController_h

// COPYRIGHT DASSAULT SYSTEMES 2007

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

#include "CATCommand.h"
#include "CATDlgView.h"
#include "CATString.h"

/**
 * Adapter for the CATIDlgTableViewController interface.
 *
 * <br><b>Role :</b> Adapter for the CATIDlgTableViewController interface.
 * <p>
 * To implement the interface <tt>CATIDlgTableViewController</tt> for a class <tt>MyClass</tt>, 
 * write a class <tt>MyClassExtIDlgTableViewController</tt> subclassed from 
 * <tt>CATExtIDlgTableViewController</tt> and defined as an data extension of <tt>MyClass</tt>. 
 * <tt>MyClassExtIDlgTableViewController</tt> may override various methods, but in most case there
 * is nothing to do.
 */
class ExportedByCATDlgView CATExtIDlgTableViewController : public CATBaseUnknown
{
  CATDeclareClass;  

  public:
  /**
   * Constructs the class.
   **/
  CATExtIDlgTableViewController( void );
  virtual ~CATExtIDlgTableViewController( void );

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
  virtual HRESULT IsSelected( CATBaseUnknown_var iRow, CATBoolean & oSelected );

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
  virtual HRESULT IsSelected( CATBaseUnknown_var iRow, const CATString& iColumn, CATBoolean & oSelected );

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
  virtual HRESULT IsPreSelected( CATBaseUnknown_var iRow, const CATString& iColumn, CATBoolean & oPreSelected );

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
  virtual HRESULT HasSelection( const CATString& iColumn, CATBoolean & oHasSelection );

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
  virtual HRESULT OnSelect( CATBaseUnknown_var iRow, const CATString& iColumn);

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
  virtual HRESULT OnMoveOver( CATBaseUnknown_var iRow, const CATString& iColumn );

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
  virtual HRESULT OnActivate( CATBaseUnknown_var iRow );

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
  virtual HRESULT OnContext( CATBaseUnknown_var iRow );

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
  virtual HRESULT OnCellContext( CATBaseUnknown_var iRow, const CATString& iColumn );

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
  virtual HRESULT OnColumnHeaderContext( const CATString& iColumn );

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
  virtual HRESULT OnRowHeaderContext( CATBaseUnknown_var iRow );

  /** @nodoc
  *
  */
  //virtual void OnUpdateHighlight(CATBaseUnknown_var iLine );

  /** @nodoc
  *
  */
  //virtual void OnScrollStart();

  /** @nodoc
  *
  */
  //virtual void OnScroll();

  /** @nodoc
  *
  */
  //virtual void OnScrollStop();

private:
  // NOT implemented, only declared to prevent unexpected call to default constructors 
  // created by the compiler
  CATExtIDlgTableViewController (CATExtIDlgTableViewController &);
  CATExtIDlgTableViewController& operator=(CATExtIDlgTableViewController &);
};

#endif
 

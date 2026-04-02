
//===================================================================
//
// CATDlgTableView.h
// Header definition of CATDlgTableView
//
//===================================================================
//
// Usage notes:
//
//===================================================================
#ifndef CATDlgTableView_H
#define CATDlgTableView_H

// COPYRIGHT Dassault Systemes 2007

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATDlgView.h"
#include "CATCommand.h"

class CATDlgFrame;
class l_CATDlgTableView;
class CATDlgContextualMenu;
class CATDeviceEvent;

// Duplicated from CATScrollableView
#define CATLeftScroll               0x0001
#define CATRightScroll              0x0002
#define CATListSortable             0x08000

// Duplicated from CATListView
#define CATListHeaderFullWidth      0x02000
#define CATListHeaderAlwaysVisible  0x04000

#ifdef _WINDOWS_SOURCE
  typedef unsigned __int64 CATDlgTableStyle;
#else
  typedef unsigned long long CATDlgTableStyle;
#endif

#ifdef _WINDOWS_SOURCE
#define CATDlgTableLeftJustify         (((CATDlgTableStyle)1) <<  1)
#define CATDlgTableRightJustify        (((CATDlgTableStyle)1) <<  2)
#define CATDlgTableCenterJustify       (((CATDlgTableStyle)1) <<  3)

#define CATDlgTableTopJustify          (((CATDlgTableStyle)1) <<  4)
#define CATDlgTableBottomJustify       (((CATDlgTableStyle)1) <<  5)
#define CATDlgTableMiddleJustify       (((CATDlgTableStyle)1) <<  6)

#define CATDlgTableCellOK              (((CATDlgTableStyle)1) <<  7)
#define CATDlgTableCellNormal          (((CATDlgTableStyle)1) <<  8)
#define CATDlgTableCellWarning         (((CATDlgTableStyle)1) <<  9)
#define CATDlgTableCellError           (((CATDlgTableStyle)1) << 10)
#define CATDlgTableCellCustom          (((CATDlgTableStyle)1) << 11)

#define CATDlgTableColumnVisible       (((CATDlgTableStyle)1) << 12)
#define CATDlgTableColumnHidden        (((CATDlgTableStyle)1) << 13)

#define CATDlgTableNoSelection         (((CATDlgTableStyle)1) << 14)
#define CATDlgTableMultipleSelect      (((CATDlgTableStyle)1) << 15)
#define CATDlgTableSingleSelect        (((CATDlgTableStyle)1) << 16)

#define CATDlgTableLeftScroll          (((CATDlgTableStyle)1) << 17)
#define CATDlgTableRightScroll         (((CATDlgTableStyle)1) << 18)
#define CATDlgTableSortable            (((CATDlgTableStyle)1) << 19)
#define CATDlgTableHeaderFullWidth     (((CATDlgTableStyle)1) << 20)
#define CATDlgTableHeaderAlwaysVisible (((CATDlgTableStyle)1) << 21)
#else
#define CATDlgTableLeftJustify         (1LL <<  1)
#define CATDlgTableRightJustify        (1LL <<  2)
#define CATDlgTableCenterJustify       (1LL <<  3)

#define CATDlgTableTopJustify          (1LL <<  4)
#define CATDlgTableBottomJustify       (1LL <<  5)
#define CATDlgTableMiddleJustify       (1LL <<  6)

#define CATDlgTableCellOK              (1LL <<  7)
#define CATDlgTableCellNormal          (1LL <<  8)
#define CATDlgTableCellWarning         (1LL <<  9)
#define CATDlgTableCellError           (1LL << 10)
#define CATDlgTableCellCustom          (1LL << 11)

#define CATDlgTableColumnVisible       (1LL << 12)
#define CATDlgTableColumnHidden        (1LL << 13)

#define CATDlgTableNoSelection         (1LL << 14)
#define CATDlgTableMultipleSelect      (1LL << 15)
#define CATDlgTableSingleSelect        (1LL << 16)

#define CATDlgTableLeftScroll          (1LL << 17)
#define CATDlgTableRightScroll         (1LL << 18)
#define CATDlgTableSortable            (1LL << 19)
#define CATDlgTableHeaderFullWidth     (1LL << 20)
#define CATDlgTableHeaderAlwaysVisible (1LL << 21)
#endif

/**
* Class to create a table in a scrollable view.
*
* <br><b>Role</b>: This class constructs a table. 
* Individual cells edition is allowed.
* <p>
*
*/
class ExportedByCATDlgView CATDlgTableView: public CATCommand
{
  CATDeclareClass;

  public:

  // Standard constructors and destructors
  // -------------------------------------

  /**
  * Constructs a table view.
  *
  * <br><b>Role</b>: Constructs a table view.
  *
  * @param iFather [in]
  * The parent frame.
  * @param iName [in]
  * The internal name of the table view.
  * @param iStyle [in]
  * The style of the table view.
  * <b>Legal values:</b>
  * <dl>
  * <dt><tt>CATRightScroll</tt><dd> Style to display the scroll bar on the right of the view. </dd></dt>
  * <dt><tt>CATLeftScroll</tt><dd>  Style to display the scroll bar on the left of the view. </dd></dt>
  * <dt><tt>CATListHeaderFullWidth</tt><dd> Style to have a list header up to the right. Without it, the list header ends a last column </dd></dt>
  * <dt><tt>CATListHeaderAlwaysVisible</tt><dd> Style to display the list header even on empty list </dd></dt>
  * <dt><tt>CATListSortable</tt><dd> Style to allow sort </dd></dt>
  * </dl>
  */
  CATDlgTableView ( CATDlgFrame* iFather, const CATString &iName, int iStyle= CATRightScroll|CATListSortable );
  //CATDlgTableView ( CATVizViewer* iViewer, const CATString &iName, int iStyle= CATRightScroll|CATListSortable );
  virtual ~CATDlgTableView ();

  /** 
  * Sets the model of the table view.
  *
  * <br><b>Role</b>: Sets the model of the table view.
  * The model must implement CATIDlgTableViewModel. It represents the information 
  * on which the application operates.
  *
  * @param model [in]
  * The model implementing CATIDlgTableViewModel. 
  * This model contains the data displayed by the table view.
  *
  */
  void SetModel(CATBaseUnknown * model);

  /** 
  * Sets the column model of the table view.
  *
  * <br><b>Role</b>: Sets the model attached to the columns, 
  * the model may implement CATIDlgTableViewColumnModel.
  *
  * @param model [in]
  * The model implementing CATIDlgTableViewColumnModel.
  *
  */
  void SetColumnModel(CATBaseUnknown * model); // A merger avec SetModel ?

  /** @nodoc
  * Sets the line model of the table view.
  *
  * <br><b>Role</b>: Sets the model attached to the lines, 
  * the model may implement CATIDlgTableViewLineModel.
  *
  * @param model [in]
  *   The line model implementing CATIDlgTableViewLineModel.
  *
  */
  void SetLineModel(CATBaseUnknown * model); // A merger avec SetModel ?

  /** 
  * Sets the controller of the table view.
  *
  * <br><b>Role</b>: Sets the controller of the table view. The controller processes and responds 
  * to events, user actions, and invokes changes on the model.
  *
  * @param controller [in]
  *   The table view controller.
  *
  */
  void SetController(CATBaseUnknown * controller);

  /** 
  * Draws the table view.
  *
  * <br><b>Role</b>: Draws the table view.
  *
  */
  void Draw();

  /** 
  * Gets contextual menu.
  *
  * <br><b>Role</b>: Retrieves the view contextual menu, it can be accessed by right clicking 
  * the object. It offers context-dependent capabilities to the end-user.
  * <p>
  *
  * @return
  *   Returns the contextual menu 
  *
  */
  CATDlgContextualMenu * GetMenu();

  /** 
  * Highlight/prehighlight changed.
  *
  * <br><b>Role</b>: Update the highlighting status of the specified item.
  *
  * @param iItem [in]
  *   The item requiring an highlighting update.
  *
  */
  void UpdateHighlight(CATBaseUnknown_var iItem);

  /** 
  * Retrieves mouse events.
  *
  * <br><b>Role</b>: Gets event notification from the mouse.
  * Describes the nature of the event and provides additionnal 
  * information specific to that event.
  *
  * @return
  *   Returns the mouse event.
  *
  */
  CATDeviceEvent * GetDeviceEvent();

  /** 
  * Allows to draw row headers.
  * 
  * <br><b>Role</b>: If enabled, row headers are drawn on the left side.
  * They are disabled by default.
  *
  * @param enabled [in]
  *   TRUE to enable row headers, FALSE otherwise.
  *
  */
  void SetRowHeadersEnabled(CATBoolean enabled);

  /** 
  * Refreshes state and redraws view.
  *
  * <br><b>Role</b>: Refreshes state and redraws view.
  *
  */
  void Invalidate();

  /** 
  * Creates a text editor as an in-cell editor.
  *
  * <br><b>Role</b>: Allows to edit the cell specified by iRow and iColumn.
  *
  * @param iRow [in]
  *   The Row containing the cell to edit.
  * @param iColumn [in]
  *   ID of the column containing the cell.
  *
  */
  void Edit( CATBaseUnknown_var iRow, const CATString & iColumn);
  
  /** 
  * Gets row count of an item. 
  *
  * <br><b>Role</b>: Gets row count of an item. Item should be visible for the 
  *   method to work. This method must be used only on response to user interactions.
	*   
  * @param iRow [in]
  *   The input item to get row count.
  *
  * @return
  *   Returns the row count corresponding to the item. 
  *   Returns 0 if item not found (first row is 1).
  *
  */
  int GetRow(CATBaseUnknown_var iRow);

  /** @nodoc
  * Gets the horizontal scroll position.
  *
  * <br><b>Role</b>: Gets the horizontal scroll position.
  *
  * @return
  *   Returns the horizontal scroll position.
  *
  */
  float GetScrollX( void );

  /** @nodoc
  * Sets the horizontal scroll position.
  *
  * <br><b>Role</b>: Sets the horizontal scroll position.
  *
  * @param iX [in]
  *   The new horizontal scroll position.
  * @param iForce [in]
  *   iForce parameter.
  *
  */
  void SetScrollX( float iX, int iForce=0 );

  /** @nodoc
  * Gets the vertical scroll position.
  *
  * <br><b>Role</b>: Gets the vertical scroll position.
  *
  *
  * @return
  *   Returns the vertical scroll position.
  *
  */
  float GetScrollY( void );

  /** @nodoc
  * Sets the vertical scroll position.
  *
  * <br><b>Role</b>: Sets the vertical scroll position.
  *
  * @param iY [in]
  *   The new vertical scroll position.
  * @param iForce [in]
  *   The iForce parameter.
  *
  */
  void SetScrollY( float iY, int iForce=0 );

  /** @nodoc
  * Gets the horizontal scroll bar visibility.
  *
  * <br><b>Role</b>: Gets the horizontal scroll bar visibility.
  *
  *
  * @return
  *   Returns 0 if the horizontal scroll bar is not visible, otherwise 
  *   the horizontal scroll bar is visible.
  *
  */
  int GetScrollXVisibility();

  /** @nodoc
  * Gets the vertical scroll bar visibility.
  *
  * <br><b>Role</b>: Gets the vertical scroll bar visibility.
  *
  *
  * @return
  *   Returns 0 if the vertical scroll bar is not visible, otherwise 
  *   the vertical scroll bar is visible.
  *
  */
  int GetScrollYVisibility();

  /** @nodoc
  * Sets the horizontal scroll bar visibility.
  *
  * <br><b>Role</b>: Sets the horizontal scroll bar visibility.
  *
  * @param Visibility [in]
  *   Set to 0 if the horizontal scroll bar must be hidden, otherwise 
  *   the horizontal scroll bar is visible.
  *
  */
  void SetScrollXVisibility(int Visibility);

  /** @nodoc
  * Sets the vertical scroll bar visibility.
  *
  * <br><b>Role</b>: Sets the vertical scroll bar visibility.
  *
  * @param Visibility [in]
  *   Set to 0 if the vertical scroll bar must be hidden, otherwise 
  *   the vertical scroll bar is visible.
  *
  */
  void SetScrollYVisibility(int Visibility);

  /** @nodoc
  *
  */
  void OnScroll(void);
  
  /** @nodoc
  *
  */
  void OnScrollStart(void);
  
  /** @nodoc
  *
  */
  void OnScrollStop(void);

  private:

  l_CATDlgTableView * _letterObject;
  // Copy constructor and equal operator
  // -----------------------------------
  CATDlgTableView (CATDlgTableView &);
  CATDlgTableView& operator=(CATDlgTableView&);
};
#endif


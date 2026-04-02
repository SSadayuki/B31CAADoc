#ifndef CATExtIDlgTableViewColumnModel_h
#define CATExtIDlgTableViewColumnModel_h

// COPYRIGHT DASSAULT SYSTEMES 2007

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

#include "CATBaseUnknown.h"
#include "CATDlgView.h"
#include "CATDlgTableView.h" // Pour les styles
#include "CATString.h"
#include "CATListOfCATString.h"
#include "CATUnicodeString.h"

/**
 * Adapter for the CATIDlgTableViewColumnModel interface.
 *
 * <br><b>Role :</b> Adapter for the CATIDlgTableViewColumnModel interface.
 * <p>
 * To implement the interface <tt>CATIDlgTableViewColumnModel</tt> for a class <tt>MyClass</tt>, 
 * write a class <tt>MyClassExtIDlgTableViewColumnModel</tt> subclassed from 
 * <tt>CATExtIDlgTableViewColumnModel</tt> and defined as an data extension of <tt>MyClass</tt>. 
 * <tt>MyClassExtIDlgTableViewColumnModel</tt> may override various methods, but in most case there
 * is nothing to do.
 */
class ExportedByCATDlgView CATExtIDlgTableViewColumnModel : public CATBaseUnknown
{
  CATDeclareClass;  

public:

  /**
   * Constructs the class.
   **/
  CATExtIDlgTableViewColumnModel( void );
  virtual ~CATExtIDlgTableViewColumnModel( void );

  /** 
  * Retreives the list of columns to be displayed in the CATDlgTableView.
  *
  * <br><b>Role</b>: Gets columns order.
  *
  * @param oColumns [out]
  *   The list of the column ID in order. 
  *
  * @return
  *   <code>S_OK</code> if everything ran ok, <code>E_FAIL</code>otherwise.
  *
  */
  virtual HRESULT GetOrderedColumns( CATListOfCATString & oColumns );

  /** 
  * Sets the new order of the columns.
  *
  * <br><b>Role</b>: Sets columns order from the order of the CATListOfCATString parameter.
  * Needed when dragging and dropping columns.
  *
  * @param iColumns [in]
  *   The list of the column ID sorted in new order.
  *
  * @return
  *   <code>S_OK</code> if everything ran ok, <code>E_FAIL</code>otherwise.
  *
  */
  virtual HRESULT SetOrderedColumns( const CATListOfCATString & iColumns ); 

  /** 
  * Retrieves column header text.
  *
  * <br><b>Role</b>: Retrieves a column's label from the column's ID.
  *
  * @param iColumn [in]
  *   The column ID.
  * @param oLabel [out]
  *   The column's label.
  *
  * @return
  *   <code>S_OK</code> if everything ran ok, <code>E_FAIL</code> otherwise.
  *
  */
  virtual HRESULT GetLabel( const CATString & iColumn, CATUnicodeString & oLabel); 

  /** 
  * Retreives the column's label style.
  *
  * <br><b>Role</b>: Retrieves the column's label style from the column's ID.
  *
  * @param iColumn [in]
  *   The column ID.
  * @param oStyle [out]
  *   The style of the column's label, this style could be a combination of different styles:
  *   <ul>
  *       <li>CATDlgTableLeftJustify   | </li>
  *       <li>CATDlgTableRightJustify  |- Horizontal cell alignement</li>
  *       <li>CATDlgTableCenterJustify | </li>
  *
  *       <li>CATDlgTableTopJustify    | </li>
  *       <li>CATDlgTableBottomJustify |- Vertical cell alignement</li>
  *       <li>CATDlgTableMiddleJustify | </li>
  *
  *       <li>CATDlgTableColumnVisible |- for column visibility management</li>
  *       <li>CATDlgTableColumnHidden  |</li>
  *   </ul>
  *
  * @return
  *   <code>S_OK</code> if everything ran ok, <code>E_FAIL</code> otherwise.
  *
  */
  virtual HRESULT GetStyle( const CATString & iColumn, CATDlgTableStyle & oStyle);

  /** 
  * Retrieves the column's width.
  *
  * <br><b>Role</b>: Each column could have its own width. This method questions the column model 
  * in order to get the width of a particular column in pixel.
  *
  * @param iColumn [in]
  *   The column ID.
  * @param oWidth [out]
  *   The width of the specified column.
  *
  * @return
  *   <code>S_OK</code> if everything ran ok, <code>E_FAIL</code> otherwise.
  *
  */
  virtual HRESULT GetWidth( const CATString &iColumn, int & oWidth );

  /** 
  * Sets the column's width.
  *
  * <br><b>Role</b>: Applies the new column width after user resize.
  *
  * @param iColumn [in]
  *   The column ID
  * @param iWidth [in]
  *   The new width of the specified column.
  *
  * @return
  *   <code>S_OK</code> if everything ran ok, <code>E_FAIL</code> otherwise.
  *
  */
  virtual HRESULT SetWidth( const CATString &iColumn, int iWidth );

  /** 
  * Sets a column visibility.
  *
  * <br><b>Role</b>: Method called when the given column is made visible or invisible by the end user..
  *
  * @param iColumn [in]
  *   The column ID.
  * @param iStyle [in]
  *   The style to set the column visibility, possible values are:
  *   <ul>
  *     <li>CATDlgTableColumnVisible to show the column.</li>
  *     <li>CATDlgTableColumnHidden to hide the column.</li>
  *   </ul>
  *
  * @return
  *   <code>S_OK</code> if everything ran ok, <code>E_FAIL</code> otherwise.
  *
  */
  virtual HRESULT SetVisibility( const CATString & iColumn, CATDlgTableStyle iStyle);

  /** 
  * Retreives the background color for all column header of the given style.
  *
  * <br><b>Role</b>: Retreives the background color for all column header of the given style.
  *
  * input : Default color value
  * ouput : new color value. 
  * Leave value unchanged to keep default colors
  *
  * @param iStyle [in]
  *   The searched style. The possible values are:
  *   Normal, Highlight, SubHighlight.
  * @param ioRed [inout]
  *   It defines the red component of the border color.The value ranges from 0 to 255. 
  * @param ioGreen [inout]
  *   It defines the green component of the border color.The value ranges from 0 to 255. 
  * @param ioBlue [inout]
  *   It defines the blue component of the border color.The value ranges from 0 to 255. 
  * @param ioAlpha [inout]
  *   Not supported.
  *
  * @return
  *   <code>S_OK</code> if everything ran ok, <code>E_FAIL</code> otherwise.
  *
  */
  virtual HRESULT GetBackgroundColor(CATDlgTableStyle iStyle, unsigned int & ioRed, 
                                     unsigned int & ioGreen, unsigned int & ioBlue, 
                                     unsigned int & ioAlpha);

  /** 
  * Retreives the text color for all column header of the given style.
  *
  * <br><b>Role</b>: Retrieves the text color for all cells of a given style.
  *
  * input : Default color value
  * ouput : new color value. 
  * Leave value unchanged to keep default colors
  *
  * @param iStyle [in]
  *   The searched style, this style could be:
  *   Normal, Highlight, SubHighlight.
  * @param ioRed [inout]
  *   It defines the red component of the border color.The value ranges from 0 to 255. 
  * @param ioGreen [inout]
  *   It defines the green component of the border color.The value ranges from 0 to 255. 
  * @param ioBlue [inout]
  *   It defines the blue component of the border color.The value ranges from 0 to 255. 
  * @param ioAlpha [inout]
  *   Not supported.
  *
  * @return
  *   <code>S_OK</code> if everything ran ok, <code>E_FAIL</code> otherwise.
  *
  */
  virtual HRESULT GetTextColor(CATDlgTableStyle iStyle, unsigned int & ioRed, 
                               unsigned int & ioGreen, unsigned int & ioBlue, 
                               unsigned int & ioAlpha);

private:
  // NOT implemented, only declared to prevent unexpected call to default constructors 
  // created by the compiler
  CATExtIDlgTableViewColumnModel (CATExtIDlgTableViewColumnModel &);
  CATExtIDlgTableViewColumnModel& operator=(CATExtIDlgTableViewColumnModel &);
};

#endif
 
 

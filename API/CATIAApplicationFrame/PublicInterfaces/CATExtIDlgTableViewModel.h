#ifndef CATExtIDlgTableViewModel_h
#define CATExtIDlgTableViewModel_h

// COPYRIGHT DASSAULT SYSTEMES 2007

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

#include "CATBaseUnknown.h"
#include "CATDlgView.h"
#include "CATDlgTableView.h" // Included for styles definition
#include "CATListOfCATBaseUnknown.h"
#include "CATString.h"
#include "CATListOfCATString.h"
#include "CATUnicodeString.h"

typedef  CATLISTV(CATBaseUnknown_var) CATListOfCATBaseUnknown_var;

/**
 * Adapter for the CATIDlgTableViewModel interface.
 *
 * <br><b>Role :</b> Adapter for the CATIDlgTableViewModel interface.
 * <p>
 * To implement the interface <tt>CATIDlgTableViewModel</tt> for a class <tt>MyClass</tt>, 
 * write a class <tt>MyClassExtIDlgTableViewModel</tt> subclassed from 
 * <tt>CATExtIDlgTableViewModel</tt> and defined as an data extension of <tt>MyClass</tt>. 
 * <tt>MyClassExtIDlgTableViewModel</tt> may override various methods, but in most case there
 * is nothing to do.
 */

class ExportedByCATDlgView CATExtIDlgTableViewModel : public CATBaseUnknown
{
  CATDeclareClass;  

public:

  /**
   * Constructs the class.
   **/
  CATExtIDlgTableViewModel( void );
  virtual ~CATExtIDlgTableViewModel( void );

	/** 
	* Retrieves the event dispatched by the model when the view needs to be updated.
	*
	* <br><b>Role</b>: Retrieves the event dispatched by the model when the view needs to be updated.
	*
	* @param oUpdateEvent [out]
	*   The event dispatched by the model
	*
	* @return
	*   <code>S_OK</code> if everything ran ok, E_FAIL otherwise.
	*
	*/
	virtual HRESULT GetUpdateEvent(CATCallbackEvent * oUpdateEvent);

  /** 
  * retrieves the Event publisher that dispatches the update events when the view 
  * needs to be updated.
  *
  * <br><b>Role</b>: retrieves the Event publisher that dispatches the update events when the view 
   * needs to be updated. The view subscribes to this publiser on the UpdateEvent.
  *
  * @param oTableModelEventPublisher [out]
  *   The event publisher that dispatches the update events.
  *
  * @return
  *   <code>S_OK</code> if everything ran ok.
  *
  */
  virtual HRESULT GetEventPublisher(CATBaseUnknown ** oTableModelEventPublisher);

 

	/** 
	* Indicates if the pointed cell can be edited.
	*
	* <br><b>Role</b>: Indicates if the pointed cell can be edited.
	*
	* @param iLine [in]
	*   The line containing the cell. This data must be serializable.
	* @param iColumn [in]
	*   ID of the column containing the cell.
	* @param oEditable [out]
	*   CATBoolean indicating the pointed cell's editability.
  *   Returns true if the cell can be edited by user
	*
	* @return
	*   <code>S_OK</code> if everything ran ok.
	*
	*/
	virtual HRESULT IsEditable( CATBaseUnknown_var & iLine, const CATString& iColumn, 
                              CATBoolean & oEditable);
  
  /**
  * Retrieves the cell border color for all cells of a given style.
  *
  * <br><b>Role</b>: Retrieves the cell border color for all cells of given style.
  *
  * input : Default color value
  * ouput : New color value. Leave value unchanged to keep default colors
  *
  * @param iStyle [in]
  *   The searched cell style. The possible values are:
  *   <ul>
  *       <li>CATDlgTableLeftJustify   | </li>
  *       <li>CATDlgTableRightJustify  |- Horizontal cell alignement</li>
  *       <li>CATDlgTableCenterJustify | </li>
  *
  *       <li>CATDlgTableTopJustify    | </li>
  *       <li>CATDlgTableBottomJustify |- Vertical cell alignement</li>
  *       <li>CATDlgTableMiddleJustify | </li>
  *
  *       <li>CATDlgTableCellOK      | OK cell style</li>
  *       <li>CATDlgTableCellNormal  | Normal cell style</li>
  *       <li>CATDlgTableCellWarning | Warning cell style</li>
  *       <li>CATDlgTableCellError   | Error cell style</li>
  *       <li>CATDlgTableCellCustom  | Custom cell style</li>
  *   </ul>
  * @param ioRed [inout]
  *   It defines the red component of the border color.The value ranges from 0 to 255. 
  * @param ioGreen [inout]
  *   It defines the green component of the border color.The value ranges from 0 to 255. 
  * @param ioBlue [inout]
  *   It defines the blue component of the border color.The value ranges from 0 to 255. 
  * @param ioAlpha [inout]
  *   Not supported.
  */
	virtual HRESULT GetBorderColor(CATDlgTableStyle iStyle, unsigned int & ioRed, 
                                 unsigned int & ioGreen, unsigned int & ioBlue, 
                                 unsigned int & ioAlpha);

  /**
  * Retrieves the text color for all cells of a given style.
  * 
  * <br><b>Role</b>: Retrieves the cell background color for all cells of given style.
  *
  * input : Default color value
  * ouput : new color value. 
  * Leave value unchanged to keep default colors
  *
  * @param iStyle [in]
  *   The searched cell style. The possible values are:
  *   <ul>
  *       <li>CATDlgTableLeftJustify   | </li>
  *       <li>CATDlgTableRightJustify  |- Horizontal cell alignement</li>
  *       <li>CATDlgTableCenterJustify | </li>
  *
  *       <li>CATDlgTableTopJustify    | </li>
  *       <li>CATDlgTableBottomJustify |- Vertical cell alignement</li>
  *       <li>CATDlgTableMiddleJustify | </li>
  *
  *       <li>CATDlgTableCellOK      | OK cell style</li>
  *       <li>CATDlgTableCellNormal  | Normal cell style</li>
  *       <li>CATDlgTableCellWarning | Warning cell style</li>
  *       <li>CATDlgTableCellError   | Error cell style</li>
  *       <li>CATDlgTableCellCustom  | Custom cell style</li>
  *   </ul>
  * @param ioRed [inout]
  *   It defines the red component of the text color.The value ranges from 0 to 255.
  * @param ioGreen [inout]
  *   It defines the green component of the text color.The value ranges from 0 to 255.
  * @param ioBlue [inout]
  *   It defines the blue component of the text color.The value ranges from 0 to 255.
  * @param ioAlpha [inout]
  *   Not supported.
  */
	virtual HRESULT GetTextColor(CATDlgTableStyle iStyle, unsigned int & ioRed, 
                               unsigned int & ioGreen, unsigned int & ioBlue, 
                               unsigned int & ioAlpha);

	/** 
	* Retrieves the cell text color for the cell defined by iLine, iColumn.
	*
	* <br><b>Role</b>: Retrieves the cell text color for the cell defined by iLine, iColumn.
  * This method is not called if the cells does not have the style CustomColor
	*
  * input : Default color value
  * ouput : new color value. 
  * Leave value unchanged to keep default colors
  *
	* @param iLine [in]
	*   The line containing the cell. This data must be serializable.
	* @param iColumn [in]
	*   ID of the column containing the cell.
	* @param ioRed [inout]
	*   It defines the red component of the text color.The value ranges from 0 to 255. 
	* @param ioGreen [inout]
	*   It defines the green component of the text color.The value ranges from 0 to 255.
	* @param ioBlue [inout]
	*   It defines the blue component of the text color.The value ranges from 0 to 255.
	* @param ioAlpha [inout]
	*   Not supported
	*
	* @return
	*   <code>S_OK</code> if everything ran ok, otherwise...
	*
	*/
	virtual HRESULT GetTextColor(CATBaseUnknown_var iLine, const CATString &iColumn, 
                               unsigned int & ioRed, unsigned int & ioGreen, 
                               unsigned int & ioBlue, unsigned int & ioAlpha);

  /**
  * Retrieves the cell background color for all cells of a given style
  *
  * <br><b>Role</b>: Style possible value are : OK, Normal, Warning, Error, Highlight, SubHighlight
  * input : Default color value
  * ouput : new color value. 
  * Leave value unchanged to keep default colors
  *
  * @param iStyle [in]
  *   The searched cell style. The possible values are:
  *   <ul>
  *       <li>CATDlgTableLeftJustify   | </li>
  *       <li>CATDlgTableRightJustify  |- Horizontal cell alignement</li>
  *       <li>CATDlgTableCenterJustify | </li>
  *
  *       <li>CATDlgTableTopJustify    | </li>
  *       <li>CATDlgTableBottomJustify |- Vertical cell alignement</li>
  *       <li>CATDlgTableMiddleJustify | </li>
  *
  *       <li>CATDlgTableCellOK      | OK cell style</li>
  *       <li>CATDlgTableCellNormal  | Normal cell style</li>
  *       <li>CATDlgTableCellWarning | Warning cell style</li>
  *       <li>CATDlgTableCellError   | Error cell style</li>
  *       <li>CATDlgTableCellCustom  | Custom cell style</li>
  *   </ul>
  * @param ioRed [inout]
  *   It defines the red component of the background color.The value ranges from 0 to 255.
  * @param ioGreen [inout]
  *   It defines the green component of the background color.The value ranges from 0 to 255.
  * @param ioBlue [inout]
  *   It defines the blue component of the background color.The value ranges from 0 to 255.
  * @param ioAlpha [inout]
  *   Not supported.
  */
	virtual HRESULT GetBackgroundColor(CATDlgTableStyle iStyle, unsigned int & ioRed, 
                                     unsigned int & ioGreen, unsigned int & ioBlue, 
                                     unsigned int & ioAlpha);

  /** 
  * Retrieves the cell background color for the cell defined by iLine, iColumn.
  *
  * <br><b>Role</b>: This method is not called if the cells does not have the style CustomColor.
  *
  * input : Default color value
  * ouput : new color value. 
  * Leave value unchanged to keep default colors
  *
  * @param iLine [in]
  *   The line containing the cell.
  * @param iColumnID [in]
  *   ID of the column containing the cell.
  * @param ioRed [inout]
  *   It defines the red component of the background color.The value ranges from 0 to 255.
  * @param ioGreen [inout]
  *   It defines the green component of the background color.The value ranges from 0 to 255.
  * @param ioBlue [inout]
  *   It defines the blue component of the background color.The value ranges from 0 to 255.
  * @param ioAlpha [inout]
  *   Not supported.
  */
	virtual HRESULT GetBackgroundColor(CATBaseUnknown_var iLine , const CATString &iColumnID, 
                                     unsigned int & ioRed, unsigned int & ioGreen, 
                                     unsigned int & ioBlue, unsigned int & ioAlpha);

private:
  // NOT implemented, only declared to prevent unexpected call to default constructors 
  // created by the compiler
  CATExtIDlgTableViewModel (CATExtIDlgTableViewModel &);
  CATExtIDlgTableViewModel& operator=(CATExtIDlgTableViewModel &);

};

#endif
 

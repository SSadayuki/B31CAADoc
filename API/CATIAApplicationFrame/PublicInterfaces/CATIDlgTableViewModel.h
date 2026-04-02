#ifndef CATIDlgTableViewModel_h
#define CATIDlgTableViewModel_h

// COPYRIGHT DASSAULT SYSTEMES 2007

/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATExtIDlgTableViewModel
 */

#include "IUnknown.h"
#include "CATBaseUnknown.h"
#include "CATDlgView.h"
// Defines the styles
#include "CATDlgTableView.h" 
#include "CATEventSubscriberTypedefs.h" 
#include "CATListOfCATBaseUnknown.h"
#include "CATString.h"
#include "CATUnicodeString.h"
#include "CATListOfCATString.h"

typedef  CATLISTV(CATBaseUnknown_var) CATListOfCATBaseUnknown_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATDlgView IID IID_CATIDlgTableViewModel;
#else
extern "C" const IID IID_CATIDlgTableViewModel;
#endif


/**
 * Interface to retrieve data to be visualized through the CATDlgTableView component.
 * <b>Role</b>: . <br>
 * <br>
 * The goal of this interface is to provide 
 * 
 * You should implement the CATIDlgTableViewModel interface, for each model
 *
* BOA information: this interface cannot be implemented using the BOA (Basic Object Adapter). 
* To know more about the BOA, refer to the CAA Encyclopedia home page. 
* Click Middleware at the bottom left, then click the Object Modeler tab page. 
* Several articles deal with the BOA.
*
*/

class ExportedByCATDlgView CATIDlgTableViewModel : public CATBaseUnknown
{
  CATDeclareInterface;

public: 

  /** @nodoc
  *
  */
  //  virtual void Sort( const CATString &iColumn, int iReverse ) = 0;  //  ?
 
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
	virtual HRESULT GetUpdateEvent(CATCallbackEvent * oUpdateEvent) = 0;

  /** 
  * Retrieves the Event publisher that dispatches the update events when the view 
  * needs to be updated.
  *
  * <br><b>Role</b>: Retrieves the Event publisher that dispatches the update events when the view 
  * needs to be updated. The view subscribes to this publiser on the UpdateEvent.
  *
  * @param oTableModelEventPublisher [out]
  *   The event publisher that dispatches the update events.
  *
  * @return
  *   <code>S_OK</code> if everything ran ok.
  *
  */
  virtual HRESULT GetEventPublisher(CATBaseUnknown ** oTableModelEventPublisher) = 0;

  /** 
  * Retrieves the text content of the cell defined by iLine, iColumn.
  *
  * <br><b>Role</b>: Retrieves the text content of the cell defined by iLine, iColumn.
  *
  * @param iLine [in]
  *   The line containing the cell. This data must be serializable.
  * @param iColumn [in]
  *   ID of the column containing the cell.
  * @param oLabel [out]
  *   The text content of the pointed cell.
  *
  * @return
  *   <code>S_OK</code> if everything ran ok.
  *
  */
  virtual HRESULT GetLabel( CATBaseUnknown_var & iLine, const CATString & iColumn, 
                            CATUnicodeString & oLabel) = 0; 

  /** 
  * Sets the text entered by the user.
  *
  * <br><b>Role</b>: Sets the text entered by the user. This method is not 
  * called if the cell cannot be edited.
  *
  * @param iLine [in]
  *   The line containing the cell. This data must be serializable.
  * @param iColumn [in]
  *   ID of the column containing the cell.
  * @param iLabel [in]
  *   The text to set the content of the pointed cell.
  *
  * @return
  *   <code>S_OK</code> if everything ran ok.
  *
  */
  virtual HRESULT SetLabel( CATBaseUnknown_var & iLine, const CATString &iColumn, 
                            const CATUnicodeString& iLabel ) = 0;

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
                              CATBoolean & oEditable) = 0;

  /**
   * 
   * Quelle taille est admissible ??
   * C'est "icon + texte"
   */
  /** 
  * Retrieves the icon content of the cell defined by iLine, iColumn.
  *
  * <br><b>Role</b>: Retrieves the icon content of the cell defined by iLine, iColumn.
  *
  * @param iLine [in]
  *   The line containing the cell. This data must be serializable.
  * @param iColumn [in]
  *   ID of the column containing the cell.
  * @param oIcon [out]
  *   The Icon's ID.
  *
  * @return
  *   <code>S_OK</code> if everything ran ok.
  *
  */
  virtual HRESULT GetIcon( CATBaseUnknown_var iLine , const CATString &iColumn, 
                           CATUnicodeString & oIcon) = 0;

	/** 
	* Retrieves the cell style combination.
	*
	* <br><b>Role</b>: Retrieves the cell style combination. The style are cumulated by logical or.
	*
	* @param iLine [in]
	*   The line containing the cell. This data must be serializable.
	* @param iColumnID [in]
	*   ID of the column containing the cell.
	* @param oStyle [out]
	*   The cell style, available styles are :
  *   <ul>
  *       <li>CATDlgTableLeftJustify   | </li>
  *       <li>CATDlgTableRightJustify  |- for text horizontal alignement</li>
  *       <li>CATDlgTableCenterJustify | </li>
  *
  *       <li>CATDlgTableTopJustify    | </li>
  *       <li>CATDlgTableBottomJustify |- for text vertical alignement</li>
  *       <li>CATDlgTableMiddleJustify | </li>
  *
  *       <li>CATDlgTableCellOK      | OK cell style      | </li>
  *       <li>CATDlgTableCellNormal  | Normal cell style  | </li>
  *       <li>CATDlgTableCellWarning | Warning cell style | - for cell color</li>
  *       <li>CATDlgTableCellError   | Error cell style   | </li>
  *       <li>CATDlgTableCellCustom  | Custom cell style  | </li>
  *   </ul>
  *   Default value is: CATDlgTableLeftJustify | CATDlgTableMiddleJustify | CATDlgTableCellNormal
	*
	* @return
	*   <code>S_OK</code> if everything ran ok.
	*
	*/
	virtual HRESULT GetStyle( CATBaseUnknown_var iLine, const CATString &iColumnID, 
                            CATDlgTableStyle & oStyle) = 0;

	/** 
	* retrieves the total number of lines that can be displayed.
	*
	* <br><b>Role</b>: retrieves the total number of lines that can be displayed.
	*
	* @param oLineCount [out]
	*   The number of lines that can be displayed.
	*
	* @return
	*   <code>S_OK</code> if everything ran ok.
	*
	*/
	virtual HRESULT GetLineCount(int & oLineCount) = 0;

	/** 
	* Retrieves iCount lines from line number iStart.
	*
	* <br><b>Role</b>: Retrieves iCount lines from line number iStart.
	*
	* @param iStart [in]
	*   Number of the first line to be retrieved.
	* @param iCount [in]
	*   Integer, number of lines to be retrieved.
	* @param oLines [out]
	*   List of the retrieved iCount lines.
	*
	* @return
	*   <code>S_OK</code> if everything ran ok.
	*
	*/
	virtual HRESULT GetLines(int iStart, int iCount, CATListOfCATBaseUnknown_var & oLines) = 0;

  /** @nodoc
  * Retrieves the cell border color for all cells of given style.
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
                                 unsigned int & ioAlpha) = 0;

  /**
  * Retrieves the cell background color for all cells of given style.
  * 
  * <br><b>Role</b>: Retrieves the cell background color for all cells of given style.
  *
  * input : Default color value
  * ouput : new color value. Leave value unchanged to keep default colors
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
                               unsigned int & ioAlpha) = 0;

	/** 
	* Retrieves the cell text color for the cell defined by iLine, iColumn.
	*
	* <br><b>Role</b>: Retrieves the cell text color for the cell defined by iLine, iColumn.
  * This method is not called if the cells does not have the style CustomColor
	*
  * input : Default color value
  * ouput : new color value. Leave value unchanged to keep default colors
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
                               unsigned int & ioBlue, unsigned int & ioAlpha) = 0;

  /**
  * Retrieves the cell background color for all cells of given style
  *
  * <br><b>Role</b>: 
  * Style possible value are : OK, Normal, Warning, Error, Highlight, SubHighlight
  * input : Default color value
  * ouput : new color value. Leave value unchanged to keep default colors
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
                                     unsigned int & ioAlpha) = 0;

  /** 
  * Retrieves the cell background color for the cell defined by iLine, iColumn.
  *
  * <br><b>Role</b>: This method is not called if the cells does not have the style CustomColor.
  *
  * input : Default color value
  * ouput : New color value. Leave value unchanged to keep default colors
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
                                     unsigned int & ioBlue, unsigned int & ioAlpha) = 0;
};

// Traiter le menu contextuel ??
// Traiter le tooltip ??

// 	Le groupement de cellules.
// 	virtual void GetGroupCells( CATBaseUnknown_var iTopLineID, const CATString &i  iLeftColumnID, int & oNumberOfGroupedColumnToTheRight, int & oNumberOfGroupedLinesToTheBottom)

// 	- Prevoir un style pour dire qu'une cellule est groupe
// 	- Des styles de justfication horizontales : gauche, centre droit
// 	- Des styles de justification verticale : en haut, au milieu, en bas.
// 	- on ne fait pas d'appel aux Get pour les cellules du rectangle

CATDeclareHandler(CATIDlgTableViewModel, CATBaseUnknown);

#endif

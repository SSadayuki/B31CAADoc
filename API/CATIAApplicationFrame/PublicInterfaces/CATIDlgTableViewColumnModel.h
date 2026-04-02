#ifndef CATIDlgTableViewColumnModel_h
#define CATIDlgTableViewColumnModel_h

// COPYRIGHT DASSAULT SYSTEMES 2007

/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATExtIDlgTableViewColumnModel
 */

#include "CATBaseUnknown.h"
#include "CATDlgView.h"
#include "CATDlgTableView.h" // Included for styles definition
#include "CATString.h"
#include "CATUnicodeString.h"
#include "CATListOfCATString.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATDlgView IID IID_CATIDlgTableViewColumnModel;
#else
extern "C" const IID IID_CATIDlgTableViewColumnModel;
#endif

/**
* Interfaces to retreive informations about columns to be visualized through 
* the CATDlgTableView component.
*
* <br><b>Role</b>: Interfaces to retreive informations about columns to be 
* visualized through the CATDlgTableView component.
* <p>
* Do not directly implement the CATIDlgTableViewColumnModel interface, but use the
* CATExtIDlgTableViewColumnModel adapter and implement the needed methods.
*
* BOA information: this interface cannot be implemented using the BOA (Basic Object Adapter). 
* To know more about the BOA, refer to the CAA Encyclopedia home page. 
* Click Middleware at the bottom left, then click the Object Modeler tab page. 
* Several articles deal with the BOA.
*
*/
class ExportedByCATDlgView CATIDlgTableViewColumnModel : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

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
	virtual HRESULT GetOrderedColumns( CATListOfCATString & oColumns ) = 0;

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
	virtual HRESULT SetOrderedColumns( const CATListOfCATString & iColumns ) = 0; 

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
  virtual HRESULT GetLabel( const CATString & iColumn, CATUnicodeString & oLabel) = 0; 

  /**
   * @nodoc
   * Retrieves column header icon.
   * Quelle taille est admissible ??
   */
  // Aujourd'hui il n'y a que du texte
  // virtual HRESULT GetIcon( const CATString &iColumn, CATString & oIcon) = 0;

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
  virtual HRESULT GetStyle( const CATString & iColumn, CATDlgTableStyle & oStyle) = 0;

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
  virtual HRESULT GetWidth( const CATString &iColumn, int & oWidth ) = 0;

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
  virtual HRESULT SetWidth( const CATString &iColumn, int iWidth ) = 0;

  
  //Ne doit on pas remplacer ceci par qqc de plus generique comme l'appui sur le titre de la colonne ?

	/** 
	* Short role of the method.
	*
	* <br><b>Role</b>: Explain what this method does.
	*
	* @param iColumnID [in]
	*   The parameter role...
	* @param iReverse [in]
	*   The parameter role...
	*
	* @return
	*   Explain return values
	*
	*/
	virtual void SetSortDefinition( const CATString &iColumnID, int iReverse= 0 ) = 0;
	
  /** 
	* Short role of the method.
	*
	* <br><b>Role</b>: Explain what this method does.
	*
	* @param oColumnID [out]
	*   The parameter role...
	* @param oReverse [out]
	*   The parameter role...
	*
	* @return
	*   Explain return values
	*
	*/
  virtual void GetSortDefinition( CATString &oColumnID, int &oReverse ) = 0;

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
  virtual HRESULT SetVisibility( const CATString & iColumn, CATDlgTableStyle iStyle) = 0;

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
    virtual HRESULT GetBackgroundColor(CATDlgTableStyle iStyle, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha) = 0;

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
    virtual HRESULT GetTextColor(CATDlgTableStyle iStyle, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha) = 0;

  //	virtual void GetGroupColumn( CATString iTopLineID, const CATString &i  iLeftColumnID, int & oNumberOfGroupedColumnToTheRight, int & oNumberOfGroupedLinesToTheBottom)

  //Le groupement des colonnes.
	// A trouver une syntaxe permettant de definir un layout en i, j ? Ici, un groupe de cellules est regroupees sous un titre.
	// virtual void SetGroupColumns( CATListOfCATString &oIDs, const CATUnicodeString& iLabel ) = 0;
};

CATDeclareHandler(CATIDlgTableViewColumnModel, CATBaseUnknown);

#endif

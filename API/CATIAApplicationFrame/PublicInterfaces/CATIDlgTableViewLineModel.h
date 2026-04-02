#ifndef CATIDlgTableViewLineModel_h
#define CATIDlgTableViewLineModel_h

// COPYRIGHT DASSAULT SYSTEMES 2007

/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATExtIDlgTableViewLineModel
 */

#include "IUnknown.h"
#include "CATBaseUnknown.h"
#include "CATDlgView.h"
#include "CATString.h"
#include "CATUnicodeString.h"
#include "CATListOfCATString.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATDlgView IID IID_CATIDlgTableViewLineModel;
#else
extern "C" const IID IID_CATIDlgTableViewLineModel;
#endif

/**
* Interfaces to retreive informations about lines to be visualized through 
* the CATDlgTableView component.
*
* <br><b>Role</b>: Interfaces to retreive informations about lines to be 
* visualized through the CATDlgTableView component.
* <p>
* Do not directly implement the CATIDlgTableViewLineModel interface, but use the
* CATExtIDlgTableViewLineModel adapter and implement the needed methods.
*
* BOA information: this interface cannot be implemented using the BOA (Basic Object Adapter). 
* To know more about the BOA, refer to the CAA Encyclopedia home page. 
* Click Middleware at the bottom left, then click the Object Modeler tab page. 
* Several articles deal with the BOA.
*
*/
class ExportedByCATDlgView CATIDlgTableViewLineModel : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /** 
    * Retrieves the line header label.
    *
    * <br><b>Role</b>: Retrieves the line header label..
    *
    * @param iRow [in]
    *   The specified line.
    * @param oLabel [out]
    *   The line's label.
    *
    * @return
    *   <code>S_OK</code> if everything ran ok, <code>E_FAIL</code> otherwise.
    *
    */
    virtual HRESULT GetLabel(const CATBaseUnknown_var iRow, const CATUnicodeString & oLabel) = 0;

    /** 
    * Retreives the line header desired width.
    *
    * <br><b>Role</b>: Retreives the line header desired width.
    *
    * @param oWidth [out]
    *   The width of the line header.
    *
    * @return
    *   <code>S_OK</code> if everything ran ok, <code>E_FAIL</code> otherwise.
    *
    */
    virtual HRESULT GetWidth(int & oWidth) = 0;

    /** 
    * Sets the line header width.
    *
    * <br><b>Role</b>: Method called when the line header width is modified by the end-user.
    *
    * @param iwidth [in]
    *   The new width of the line header.
    *
    * @return
    *   <code>S_OK</code> if everything ran ok, <code>E_FAIL</code> otherwise.
    *
    */
    virtual HRESULT SetWidth(int iwidth) = 0;

    /** 
    * Retrieves the style of the line header.
    *
    * <br><b>Role</b>: Retrieves the style of the line header.
    *
    * @param iRow [in]
    *   The specified line.
    * @param oStyle [out]
    *   The style of the line header:
    *   <ul>
    *       <li>Left   | </li>
    *       <li>Right  |- Horizontal text alignement</li>
    *       <li>Center | </li>
    *
    *   </ul>
    *
    * @return
    *   <code>S_OK</code> if everything ran ok, <code>E_FAIL</code> otherwise.
    *
    */
    virtual HRESULT GetStyle( const CATBaseUnknown_var iRow, int & oStyle) = 0;
 
  /**
   * Retreives the background color for all lines header.
   * Available styles are : Normal, Highlight, SubHighlight
   */
    virtual HRESULT GetBackgroundColor( int iStyle, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha) = 0;

  /**
   * Retreives the text color for all lines header.
   * Available styles are : Normal, Highlight, SubHighlight
   */
    virtual HRESULT GetTextColor( int iStyle, unsigned int & ioRed, unsigned int & ioGreen, unsigned int & ioBlue, unsigned int & ioAlpha) = 0;

  /**
   * Retrieve the line header background color for a given style.
   * style possible values are : Normal, Highlight, SubHighlight
   * Veut -on pouvoir customiser la couleur de chaque ligne independemment ?
   */
	// virtual GetBackgroundColor(int iStyle, const CATBaseUnknown_var iRow, ioRGBA)
	// virtual GetTitleTextColor(state, CATBaseUnknown_var iRow, ioRGBA) // State = normal, highlight, subhighlight
};

CATDeclareHandler(CATIDlgTableViewLineModel, CATBaseUnknown);

#endif

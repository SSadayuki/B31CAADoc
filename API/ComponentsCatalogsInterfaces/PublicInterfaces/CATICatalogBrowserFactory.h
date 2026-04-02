/* -*-c++-*- */
#ifndef CATICatalogBrowserFactory_H
#define CATICatalogBrowserFactory_H
// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */


#include "CATCclInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATCatalogDisplayOptions.h"

class CATICatalogBrowser;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATCclInterfaces IID IID_CATICatalogBrowserFactory ;
#else
extern "C" const IID IID_CATICatalogBrowserFactory ;
#endif

/**
 * Interface to open a Components Catalog Browser.
 * <b>Role:</b>This interface enables to open a Catalog Browser Dialog box. This
 * Dialog object is handled by the @href CATICatalogBrowser interface.
 * <br>The editor of the document implements this interface. In others word, the
 * @href CATFrmEditor class implements this interface. You retrieve an instance of 
 * this class in using:
 * <ul>
 * <li>The <tt>GetEditor</tt> method of the <tt>CATStateCommand</tt> class 
 * if your are inside a <tt>CATStateCommand</tt> command.
 * <li>The static function @href CATFrmEditor#GetCurrentEditor method 
 * if your are inside a command which is not a <tt>CATStateCommand</tt> 
 *  (<tt>CATCommand</tt> or <tt>CATDlgDialog</tt>)</li>
 * </ul>
 */
class ExportedByCATCclInterfaces CATICatalogBrowserFactory: public CATBaseUnknown
{
  CATDeclareInterface;

public:

/**
  * Opens a new Catalog Browser Dialog box.
  * @param oBrowser [out, CATBaseUnknown#Release]
  *   The created catalog browser.
  * @param iOptions
  *   The  options to customize the display of the Catalog Browser.
  *   <br><b>Default value</b>:<tt>CATCatalogDisplayWndModal</tt> 
  * @param iAuthorizeDrag
  *   The option to authorize or not the instantiation by Drag and Drop for a component.
  *   <br>  Attention, the Drag and Drop is only possible if the current command is the Select
  *       command. So if the catalog browser is launched from a command which is exclusive,
  *       or shared, the instantiation by drag and drop is unavailable. 
  *
  *   <br><b>Legal value</b>: 
  *   <ul>
  *    <li><tt>1</tt>: Drag and Drop is possible (default value)</li>
  *    <li><tt>0</tt>: Drag and Drop is impossible </li>
  *   </ul>
  * @param iAuthorizeInstantiation
  *   The option to authorize or not the instantiation by contextual 
  *   menu or double click of a component.
  *   <br><b>Legal value</b>: 
  *   <ul>
  *    <li><tt>1</tt>: Instantiation is possible (default value)</li>
  *    <li><tt>0</tt>: Instantiation is impossible </li>
  *   </ul>
  */
  virtual HRESULT OpenCatalogBrowser(CATICatalogBrowser*& oBrowser,
                                     CATCciCatalogBrowserDisplayOptions  iOptions=CATCatalogDisplayWndModal,
                                     int                  iAuthorizeDrag=1,
                                     int                  iAuthorizeInstantiation=1) = 0;

  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

//------------------------------------------------------------------

CATDeclareHandler( CATICatalogBrowserFactory, CATBaseUnknown );

#endif


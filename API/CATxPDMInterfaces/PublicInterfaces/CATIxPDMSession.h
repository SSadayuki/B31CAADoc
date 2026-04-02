/* -*-c++-*- */
#ifndef CATIxPDMSession_H
#define CATIxPDMSession_H

// COPYRIGHT DASSAULT SYSTEMES  2001

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATIxPDMItem.h"
#include "CATListOfCATIxPDMItem.h" 
#include "ExportedByCATxPDMInterfaces.h"


/**
 * Interface to retrieve an item associated with a document in the current editor.
 * <b>Role</b>: This interface is used to retrieve an item from a document (a file) which is in 
 *  relationship with the current editor: 
 * <ul>
 * <li>The <b>root</b> file.
 * <p> The root file is those associated with the editor. An 
 * editor, a <tt>CATFrmEditor</tt> class instance, has only one document (a file). It is 
 *  those returned by the <tt>GetDocument</tt> method of the <tt>CATFrmEditor</tt> class. </p>
 * <li>The <b>current selected</b> file. </li>
 * <p>The current selected file is a file pointed by the root file, and selected (in the specification tree) 
 *  by the end user. </p> 
 * </ul>  
 * <p>Refer to the <tt>ApplicationFrame</tt> framework API for more details about the editor and its associated files. </p>
 * <p>This interface is implemented on the unique <tt>CATApplicationFrame</tt> instance. Use it only
 *  into an CATIA V5 interactive command. </p>
 * <!-- @sample -->
 * <dl>
 * <dt><b>Example:</b>
 * <dd>
 * This example returns the root item of the current editor
 * <pre>
 * CATApplicationFrame *pApplication = CATApplicationFrame::GetFrame();
 * CATIxPDMItem_var xPDMItem;
 * CATIxPDMSession_var xPDMSession(pApplication);
 * if ( NULL_var != xPDMSession )
 * {
 *    xPDMSession->GetRootItem(xPDMItem);
 *    ....
 * </pre>
 * </dl>
 * <p>All the methods pre-requisites the PX1 license </p>
 * @see CATIxPDMItem
 */

extern ExportedByCATxPDMInterfaces IID IID_CATIxPDMSession;
 

class ExportedByCATxPDMInterfaces CATIxPDMSession : public CATBaseUnknown
{
	CATDeclareInterface;

public :
	/**
	* Retrieves the item associated with the document (root file) of the current editor.
	* @param oxPDMItem
	*   The item created (or retrieved) from the document associated with the current editor. 
   * @return 
   *  <ul>
   *  <li>S_OK: The root item is successfully retrieved. </li>
   *	<li>E_FAIL: No editor in the session.</li>
   *  </ul>   
	*/
	virtual HRESULT GetRootItem(CATIxPDMItem_var &oRootItem) = 0;

	/**
	* Retrieves the item associated with the current selected file of the current editor.
	* @param oxPDMItem
	*   The item created (or retrieved) from the current selected document associated with the current editor. If no document is
   *   selected the root item is returned. 
   * @return 
   *  <ul>
   *  <li>S_OK: The item is successfully retrieved. </li>
   *	<li>E_FAIL: No editor in the session.</li>
   *  </ul>   
	*/
	virtual HRESULT GetCurrentItem(CATIxPDMItem_var &oCurrentItem) = 0;

};

CATDeclareHandler(CATIxPDMSession, CATBaseUnknown);

#endif

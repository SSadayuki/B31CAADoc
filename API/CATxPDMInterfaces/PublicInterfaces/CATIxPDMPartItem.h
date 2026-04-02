/* -*-c++-*- */
#ifndef CATIxPDMPartItem_h
#define CATIxPDMPartItem_h
// COPYRIGHT DASSAULT SYSTEMES 2006
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATIxPDMItem.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "ExportedByCATxPDMInterfaces.h"

/**
 * Interface to access any V5 Part item that can be stored in an external PDM system.
 * <b>Role</b>: Provide access to specific information on Part items.
 * <p>This interface is available only on items (@href CATIxPDMItem ) of type CATPart
 * loaded in session </p>
 * <p>All the methods pre-requisites the PX1 license </p>
 * @see CATIxPDMItem , CATxPDMSessionServices
 * 
 */
extern ExportedByCATxPDMInterfaces IID IID_CATIxPDMPartItem;

class ExportedByCATxPDMInterfaces CATIxPDMPartItem : public CATBaseUnknown
{
  CATDeclareInterface;
  
public:

  /**
	* Check if a Part has external links through imports (geometry or knowledge parameters).
   * <br><b>Role:</b>This method checks if there is some imported items (in a product context or without product context).
   * Geometry and Knowledge parameters imports are checked.
	* @param oHasExternalLinks
	*   TRUE if there is at least one imported item, FALSE if there is no imported item.
   *    
   * @return
   *   <ul>
   *   <li>S_OK: oHasContextualLinks is successfully computed. </li>
   *   <li>E_FAIL: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
   *   <ul>
   *      <li><tt>InputERR_1004:</tt></li>
   *       Internal error.
   *  </ul>
   *  </ul>
	*/
	virtual HRESULT HasExternalLinks(CATBoolean& oHasExternalLinks) = 0; 

   /**
	* Returns all imported items in this item. 
   * <br><b>Role:</b>This method retrieves all items pointed through an import (geometry or knowledge parameters) from the current one.
   * This method requires that the file associated with the
   * current item is loaded in session. To retrieve imported items, we have to load some complementary data (like Product Context) in session.
   * To avoid loading useless data in memory, use CATIxPDMPartItem#HasExternalLinks before.
	* @param oImportedList
	*   The imported item list, they could be loaded or not.
   *    
   * @return
   *   <ul>
   *   <li>S_OK: The children list is successfully computed. </li>
   *   <li>S_FALSE: There is no children. </li>
   *   <li>E_FAIL: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
   *   <ul>
   *      <li><tt>InputERR_1004:</tt></li>
   *       Internal error.
   *      <li><tt>InputERR_1124:</tt></li>
   *       This part has contextual link through a Product and it is impossible to load the Product context.
   *  </ul>
   *  </ul>
	*/
	virtual HRESULT GetImportedItems(CATListValCATIxPDMItem_var &oImportedList) = 0; 

/**
	* Returns all necessary items for contextual edition of links. 
   * <br><b>Role:</b>This method retrieves the list of items that are necessary for edition of contextual links.
   * <ul>
   *   <li>The documents associated to this Item list are of CATProduct type.</li>
   *   <li>In case the current item has multiple contextual links, the list will contain all the context CATProducts for all links.</li>
   *   <li>This method requires that the files associated with the current item are loaded in session.
   *       All CATProducts related to the context will be loaded in session to compute the list.</li>
   *   <li>There is no order in this list, order can change.</li>
   *   <li>This method must be used before CATxPDMSessionServices::SynchronizeAllExternalLink as all this items 
   *       should must be available in session for links synchronization .</li>
   *   <li>If this list is empty, it means that there is no contextual links on this item.</li>
   *  </ul>
   *
   * @param oContextList
	*   The Product item list, they could be loaded or not.
   *    
   * @return
   *   <ul>
   *   <li>S_OK: The context list is successfully computed. </li>
   *   <li>S_FALSE: There is no context or if there is a context without associated import link. </li>
   *   <li>E_FAIL: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
   *   <ul>
   *      <li><tt>InputERR_1004:</tt></li>
   *       Internal error.
   *      <li><tt>InputERR_1124:</tt></li>
   *       This part has contextual link(s) through Product(s) and it is impossible to load the Product context.
   *  </ul>
   *  </ul>
	*/
	virtual HRESULT GetContextItems(CATListValCATIxPDMItem_var &oContextList) = 0; 
};

CATDeclareHandler(CATIxPDMPartItem, CATBaseUnknown);

#endif

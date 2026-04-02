/* -*-c++-*- */
#ifndef CATIxPDMProductItem_h
#define CATIxPDMProductItem_h
// COPYRIGHT DASSAULT SYSTEMES 2006
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATIxPDMItem.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "ExportedByCATxPDMInterfaces.h"

class CATUnicodeString;
class CATIDocId;
/**
 * Interface to access any V5 Product item that can be stored in an external PDM system.
 * <b>Role</b>: Provide specific navigation and loading methods in Product items.
 * <p>This interface is available only on items (@href CATIxPDMItem ) of type CATProduct
 * loaded in session </p>
 * <p>All the methods pre-requisites the PX1 license </p>
 * @see CATIxPDMItem , CATxPDMSessionServices
 * 
 */
extern ExportedByCATxPDMInterfaces IID IID_CATIxPDMProductItem;

class ExportedByCATxPDMInterfaces CATIxPDMProductItem : public CATBaseUnknown
{
  CATDeclareInterface;
  
public:

  /**
	* Returns all children of the item with their pointing instance.
   * <br><b>Role:</b>This method retrieves all the child items from the current one.
   * You can retrieve instances pointing to missing or not loaded items.
	* @param oChildrenList
	*   The children list, those items could be loaded or not.
   *   All children are returned, included child pointed through a de-activated instance.
	* @param oInstanceChildrenList
	*   The list of pointing instances in Product Structure. The size of this list is always equal to the size of the children list.
   *   Pointing instance is returned even for de-activated instances.
   *   You can use <tt>CATIProduct</tt> to navigate on these instances.
   *   If an element of <tt>oChildrenList</tt> is not pointed through a Instance, the corresponding pointer is null.
   *    
   * @return
   *   <ul>
   *   <li>S_OK: The children list is successfully computed. </li>
   *   <li>E_FAIL: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
   *   <ul>
   *      <li><tt>InputERR_1004:</tt></li>
   *       Internal error.
   *  </ul>
   *  </ul>
	*/
	virtual HRESULT GetChildrenItems(CATListValCATIxPDMItem_var &oChildrenList, CATLISTV(CATBaseUnknown_var) &oInstanceChildrenList) = 0; 

  /**
	* Load a product child to allow properties edition.
   * <br><b>Role:</b>This method should be used in very specific cases:
   * <ul> 
   *    <li>You are working with 'Cache On'. If cache is not active, you always have a direct access to properties
   *        on children items of a Product.</li>
   *    <li>Child should be a CATPart. For other types, there is no available properties to read or modify.</li>
   * </ul>
   * <p> Don't forget to Save the modified items after properties edition through @href CATxPDMSessionServices#SaveSessionToDirectory .</p>
   *
	* @param iInstanceChildToLoad
	*   This child instance describes item you want to load, you can retrieve it through @href CATIxPDMProductItem#GetChildrenItems .
	* @param oLoadedChild
   *   The loaded item, you can use @href CATIxPDMItem#GetProperty or @href CATIxPDMItem#SetProperty .
   *    
   * @return
   *   <ul>
   *   <li>S_OK: The item is successfully loaded. </li>
   *   <li>E_FAIL: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
   *   <ul>
   *      <li><tt>InputERR_1002:</tt></li>
   *       Input instance is invalid.    
   *      <li><tt>InputERR_1004:</tt></li>
   *       Internal error.
   *  </ul>
   *  </ul>
	*/
	virtual HRESULT LoadChildForPropertiesEdition(const CATBaseUnknown_var &iInstanceChildToLoad, CATIxPDMItem_var &oLoadedChild) = 0; 

  /**
   * @nodoc
	* Rename a Product Structure Instance or Publication, rerouting automatically all pointing links loaded in session.
   * <br><b>Role:</b>This method allows renaming a Product Structure Instance or Publication keeping Product Structure links.
   * Only Product Structure links are rerouted (not reroute of Drawing links to CATProduct).
   * Only links of Product loaded in session are rerouted.
   *
	* @param iInstanceOrPublicationToRename
	*   The instance or publication to rename.
	* @param iNewName
   *   The new instance name.
   *    
   * @return
   *   <ul>
   *   <li>S_OK: The instance successfully renamed. </li>
   *   <li>E_FAIL: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
   *   <ul>
   *      <li><tt>InputERR_1002:</tt></li>
   *       Input instance is invalid.
   *      <li><tt>InputERR_1004:</tt></li>
   *       Internal error.
   *  </ul>
   *  </ul>
	*/
	virtual HRESULT ChangeNameWithSessionImpacts(const CATBaseUnknown_var &iInstanceOrPublicationToRename, const CATUnicodeString &iNewName) = 0; 

};

CATDeclareHandler(CATIxPDMProductItem, CATBaseUnknown);

#endif

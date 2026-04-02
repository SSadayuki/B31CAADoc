
#ifndef __CATOsmCatalogAccessServices_h__
#define __CATOsmCatalogAccessServices_h__


// COPYRIGHT DASSAULT SYSTEMES 2012  

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


// ObjectSpecsModeler forwards and headers.
#include "AC0SPBAS.h" // ExportedByAC0SPBAS

// Other forwards and headers.
class CATUnicodeString;
class CATIContainer;
#include "IUnknown.h" // HRESULT
#include "CATBoolean.h" // CATBoolean


/**
 * Class grouping Feature Modeler services related to Catalog access.
 * <b>Role</b>: This class allows to manage links between container and StartUp Catalogs.<br>
 * <b>Note</b>: It can be useful to remove from a document useless persistent links to StartUp Catalogs due to the use of @href AccessCatalog method, 
 * which is now deprecated. <br>
 * When opening a document holding a link to a StartUp Catalog, a warning message will be raised if this Catalog is not found. This warning
 * will appear even if there is no Feature instances in the document.
 *
 * <ul>
 * <li> All methods taking startup late types as argument, such as @href CATICatalog#RetrieveSU or @href CATIOsmExtendable#AddExtension, actually use 
 * the links between the container and StartUp Catalogs to find the startup in Catalogs. <br> 
 * Note that the more catalogs are linked to a container, the less efficient the search is. </li>
 *
 * <li> These links are useless for StartUp Catalogs saved after release CXR18. In later releases, there is indeed a new mecanism allowing to 
 * find startups in a more efficient way. <br>
 * This mecanism is implemented by @href CATOsmSUHandler class and it is recommended to use it, giving the catalog name as input argument to 
 * the @href CATOsmSUHandler constructor for maximum efficiency. </li>
 *
 * <li> The patterns @href AccessCatalog / @href CATICatalog#RetrieveSU / @href CATISpecObject#Instanciate, and @href AccessCatalog / 
 * @href CATIOsmExtendable#AddExtension must be replaced by @href CATOsmSUHandler#Instanciate and @href CATIOsmExtendable#AddExtension methods. </li>
 * </ul>
 * @see CATOsmSUHandler, CATICatalog, CATIOsmExtendable .
 */
class ExportedByAC0SPBAS CATOsmCatalogAccessServices
{
public :

  /**
   * Links a StartUp Catalog to a container.
   * <br><b>Role</b>: This method creates a link between the StartUp Catalog and the container, provided the right client identifier is supplied.
   * <br><b>Note</b>:
   *   A container can be linked to several StartUp Catalogs.<br>
   *   After its creation, the link will persist in the document until the method @href #UnlinkCatalogFromContainer is called. It means that the 
   *   link will still exists even if there is no Feature instances in the document.<br>
   *   The only way to remove the link is to call the method @href #UnlinkCatalogFromContainer .
   * @param iCatalogName [in]
   *   The name of the StartUp Catalog, with its extension.
   * @param iClientId [in]
   *   The client identifier of the StartUp Catalog.
   * @param ipiContainer [in]
   *   A container to which the StartUp Catalog will be linked. 
   * @param iIID [in]
   *   The interface identifier for which a pointer is requested.
   * @param oPtr [out, CATBaseUnknown#Release]
   *   The address where the returned pointer to the interface is located.
   * @return 
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The catalog has been successfully linked to the container.</dd>
   *     <dt>E_INVALIDARG</dt>
   *     <dd>The catalog is not a CAA catalog.</dd> 
   *     <dt>E_POINTER</dt>
   *     <dd>The input container or the output pointer is null, or both.</dd> 
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>The client identifier is not valid.</dd>
   *     <dt>E_UNEXPECTED</dt>
   *     <dd>There is no current session.</dd>
   *     <dt>E_FAIL</dt>
   *     <dd>Another failure has occured.</dd>
   *  </dl>
   */
  static HRESULT LinkCatalogToContainer(const CATUnicodeString & iCatalogName, const CATUnicodeString & iClientId, CATIContainer * ipiContainer,  const IID & iIID, void ** oPtr);

  /**
   * Unlinks a StartUp Catalog from a container.
   * <br><b>Role</b>: This method removes the link between the StartUp Catalog and the container if any, provided the right client identifier is supplied.
   * <br><b>Note</b>: This method must be used to remove the link created by the method @href #LinkCatalogToContainer .
   * @param iCatalogName [in]
   *   The name of the Fetaure Catalog, with its extension.
   * @param iClientId [in]
   *   The client identifier of the StartUp Catalog.
   * @param ipiContainer [in]
   *   A container to which the StartUp Catalog is linked. 
   * @return 
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The catalog has been successfully linked to the container.</dd>
   *     <dt>E_INVALIDARG</dt>
   *     <dd>The catalog is not a CAA catalog.</dd> 
   *     <dt>E_POINTER</dt>
   *     <dd>The input container is null.</dd> 
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>The client identifier is not valid.</dd>
   *     <dt>E_UNEXPECTED</dt>
   *     <dd>There is no current session.</dd>
   *     <dt>E_FAIL</dt>
   *     <dd>Another failure has occured.</dd>
   *  </dl>
   */
  static HRESULT UnlinkCatalogFromContainer(const CATUnicodeString & iCatalogName, const CATUnicodeString & iClientId, CATIContainer * ipiContainer);

  /**
   * Checks if a StartUp Catalog is linked to a container.
   * <br><b>Role</b>: This method checks if there is a link between the StartUp Catalog and the container.
   * @param iCatalogName [in]
   *   The name of the StartUp Catalog, with its extension.
   * @param iClientId [in]
   *   The client identifier of the StartUp Catalog.
   * @param ipiContainer [in]
   *   An input container. 
   * @param oIsLinked [out]
   *   A (caller provided) boolean value in which the result will be stored.
   *   <br><b>Legal values</b>:
   *   <ul><li><tt>TRUE</tt>: if the StartUp Catalog is linked with the container.</li>
   *       <li><tt>FALSE</tt>: if the StartUp Catalog is not linked with the container.</li></ul>
   *   <br>If the method fails <tt>oIsLinked</tt> is not modified, it is otherwise overwritten with the retrieved value.
   * @return 
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The catalog is linked to the container.</dd>
   *     <dt>S_FALSE</dt>
   *     <dd>The catalog is not linked to the container.</dd>
   *     <dt>E_INVALIDARG</dt>
   *     <dd>The catalog is not a CAA catalog.</dd> 
   *     <dt>E_POINTER</dt>
   *     <dd>The input container is null.</dd> 
   *     <dt>E_ACCESSDENIED</dt>
   *     <dd>The client identifier is not valid.</dd>
   *     <dt>E_UNEXPECTED</dt>
   *     <dd>There is no current session.</dd>
   *     <dt>E_FAIL</dt>
   *     <dd>Another failure has occured.</dd>
   *  </dl>
   */
  static HRESULT IsCatalogLinkedToContainer(const CATUnicodeString & iCatalogName, const CATUnicodeString & iClientId, CATIContainer * ipiContainer, CATBoolean & oIsLinked);

};

#endif // __CATOsmCatalogAccessServices_h__


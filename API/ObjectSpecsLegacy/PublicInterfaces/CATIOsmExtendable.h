// COPYRIGHT DASSAULT SYSTEMES 2004
//===================================================================
//
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#ifndef CATIOsmExtendable_H
#define CATIOsmExtendable_H

#include "AC0SPEXT.h"
#include "CATBaseUnknown.h"
#include "CATListOfCATUnicodeString.h"

extern ExportedByAC0SPEXT IID IID_CATIOsmExtendable;

class CATListPtrCATBaseUnknown;
class CATIOsmExtension;

//------------------------------------------------------------------

/**
 * Interface to manage extension features on a base feature.
 * <b>Role</b>: CATIOsmExtendable is implemented by all features except the extension features.</br>
 * The ressource file ExtensionName.CATRsc describes the properties of the extension.</br>
 * Its format is as follows:</br>
 * <ul>
 * <li>ExtensionFeature.IsLocal=<value>; whether or not the extension is local. A local extension is not instanciated when its base feature is instanciated. Allowable values are "TRUE" or "FALSE".</li>
 * <li>ExtensionFeature.Extends=<featureName>; name of the base feature(s) that this feature extends. Comma separated list of 1-n elements.</li>
 * <li>ExtensionFeature.Container=<container>; applicative container in which the extension is to be stored.</li>
 * <li>ExtensionFeature.ContType=<type>; type of the container.</li>
 * <li>ExtensionFeature.ContSuperType=<type>; supertype of the container.</li>
 * *</ul>
 * Refer to CAAOsmBiographicalNovel.CATRsc for a complete example.
 * An extension feature implements @href CATIOsmExtension to retrieve its unique base feature.</br>
 *
 */
class ExportedByAC0SPEXT CATIOsmExtendable : public CATBaseUnknown
{
  CATDeclareInterface;

public:

  /**
   * Creates and adds an extension.</br>
   * The catalog containing the startup of the extension should have previously been opened </br>
   * on the container which type is given by the resource file associated to the extension.</br>
   * The extension is created in that container.
   * @param iExtensionId
   *   The identifier type of the extension to be instantiated and added.</br>
   *   <br><b>Legal values</b>:
   *   <ul>
   *    <li>"`StartUpIdentifier`@`Catalog.(feat|CATfct)`"</li>
   *    <li>"`StartUpIdentifier`#<number>@`Catalog.(feat|CATfct)`"</li>
   *    <li>"0u???????-????-????-????????????????@`Catalog.(feat|CATfct)`"</li>
   *   </ul>
   * @return
   *      S_OK if succeeded <br>
   *			S_FALSE if extension already exists <br>
   *			E_INVALIDARG if creation failed because of a problem in the resource file associated to iExtensionId <br>
   *      E_FAIL if creation failed because startup of extension can not be found
   */
  virtual HRESULT AddExtension(const char *iExtensionId) = 0;


  /**
   * Removes an extension by its name.
   * @param iExtensionId
   *  The identifier type of the extension to be removed
   *   <br><b>Legal values</b>:
   *   <ul>
   *    <li>"`StartUpIdentifier`@`Catalog.(feat|CATfct)`"</li>
   *    <li>"`StartUpIdentifier`#<number>@`Catalog.(feat|CATfct)`"</li>
   *    <li>"0u???????-????-????-????????????????@`Catalog.(feat|CATfct)`"</li>
   *   </ul>
   * @return
   *      S_OK if succeeded <br>
   *      S_FALSE if extension not found <br>
   *      E_FAIL if extension could'nt be removed
   */
  virtual HRESULT RemoveExtension(const char * iExtensionId) = 0;

  /**
   * Removes an extension.
   * @param iExtensionToRemove
   *        The extension to be removed
   * @return
   *      S_OK if succeeded <br>
   *      S_FALSE if extension not valid <br>
   *      E_FAIL if extension could'nt be removed
   */
  virtual HRESULT RemoveExtension(CATIOsmExtension* iExtensionToRemove) = 0;

  /**
   * Removes all the extensions of a feature located in an applicative container.
   * @param iApplicationId
   *        The name of the applicative container containing the extensions to be removed
   * @return
   *      S_OK if succeeded <br>
   *      S_FALSE no extension found <br>
   *      E_FAIL if extensions could'nt be removed
   */
  virtual HRESULT RemoveApplicativeExtensions(const char * iApplicationId) = 0;

  /**
   * Returns the extension implementing the requested interface.
   * @param iExtensionId
   *   The identifier type of the extension to query on.
   *   <br><b>Legal values</b>:
   *   <ul>
   *    <li>"`StartUpIdentifier`@`Catalog.(feat|CATfct)`"</li>
   *    <li>"`StartUpIdentifier`#<number>@`Catalog.(feat|CATfct)`"</li>
   *    <li>"0u???????-????-????-????????????????@`Catalog.(feat|CATfct)`"</li>
   *   </ul>
   * @param iIID
   *        The IID of the requested interface
   * @param oResult [out, CATBaseUnknown#Release]
   *        The extension implementing the interface
   * @return
   *      S_OK if succeeded <br>
   *      E_FAIL no extension implementing the interface found
   */
  virtual HRESULT QueryExtension(const char* iExtensionId, const IID &iIID, void** oResult) const = 0;

  /**
   * Returns the extension implementing the requested interface in a given applicative container.</br>
   * If exists, this extension should be unique in the container.
   * @param iApplicationId
   *        The name of the applicative container containing the extensions
   * @param iIID
   *        The IID of the requested interface
   * @param oResult [out, CATBaseUnknown#Release]
   *        The extension implementing the interface.
   * @return
   *      S_OK if succeeded <br>
   *      E_FAIL no extension implementing the interface found <br>
   *      E_INVALIDARG several extensions implement the same interface in the container
   */
  virtual HRESULT QueryApplicativeExtension(const char* iApplicationId, const IID &iIID, void** oResult) const = 0;


  /**
   * Returns all the extensions implementing the requested interface.
   * @param iIID
   *        The IID of the requested interface
   * @param oLst
   *        The list of all the extensions implementing the requested interface.
   * @return
   *      S_OK if succeeded <br>
   *      E_FAIL no extension found <br>
   */
  virtual HRESULT QueryAllExtensions(const IID &iIID, CATListPtrCATBaseUnknown** oLst) const = 0;


  /**
   * Returns all the extensions' identifier types.
   * @param ioList
   *        List of extensions' identifier types added on the feature
   * @return
   *      S_OK if succeeded <br>
   *      E_FAIL problems during list composition
   */
  virtual HRESULT ListExtensions(CATListOfCATUnicodeString &ioList) const = 0;

};

//------------------------------------------------------------------

CATDeclareHandler(CATIOsmExtendable, CATBaseUnknown);

#endif

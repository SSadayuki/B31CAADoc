#ifndef CATOsmExtensionServices_H
#define CATOsmExtensionServices_H
// COPYRIGHT DASSAULT SYSTEMES 2004

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

// CATOsmExtensionServices Global Functions
// 

#include "IUnknown.h"
#include "AC0SPEXT.h"
class CATListValCATUnicodeString;
class CATUnicodeString;
class CATDocument;
class CATIContainer;
class CATUuid;
class CATBaseUnknown;

/**
 * Services to manage former extension features and user extensions.
 * <b>Role</b>: Class of service to activate all former extension features and retrieve user 
 * extensions associated to a base feature defined in a CATfct catalog.
 * If you have to manage existing documents containing former extension features you have to use the 
 * CATActivateExtensions services to activate your extensions.
 * Activation is not needed for new extension features created with @href CATIOsmExtendable .
 * User extensions are automatically created and added on a base feature when it is created.
 * This is not a part of the @href CATIOsmExtendable interface as it is not neccessary to have the base feature itself </br>
 * its type is sufficient to retrieve this informations.
 */
class ExportedByAC0SPEXT CATOsmExtensionServices
{
public:

/**
  * Uses only to activate former extension features.
  * Activate all extensions contained in an applicative container of the specified document.This container should have been initialized.
  * @param iDocument
  *        The document containing the initialized applicative container
  * @param iAppId
  *        The name of the initialized applicative container containing the extensions to be activated
  * @return HRESULT
  *		S_OK
  *			The activation succeeded <br>
  *		E_FAIL
  *			No container found or activation error <br>
  */
static HRESULT CATActivateExtensions(CATDocument* iDocument, const char *iAppId);

/**
  * Uses only to activate former extension features.
  * Activate all extensions contained in an applicative container. This container should have been initialized.
  * @param iAppliCont
  *        The initialized applicative container containing the extensions to be activated
  * @return HRESULT
  * 	S_OK
  *			The listing succeeded <br>
  *		E_FAIL
  *			No container found or activation error <br>
  */
static HRESULT CATActivateExtensions(CATIContainer* iAppliCont);


/**
  * Service to retrieve user extensions associated to a base feature and all its supertypes.
  * <b>Role</b>: Retrieve user extensions associated to a base feature defined in a CATfct catalog.
  * User extensions are automatically created and added on a base feature when it is created.
  * This is not a part of the @href CATIOsmExtendable interface as it is not neccessary to have the base feature itself </br>
  * its type is sufficient to retrieve this informations.
  *
  * CATOsmListUserExtensionsFromCatalog:
  * Given the type of a base feature in a CATfct Catalog, this method will list associated extensions (directly
  * or through its supertypes) and the associated containers
  *  @param iBaseFeatureType
  *		The pointer on Base Feature Type
  *  @param pListOfExtensions
  *		The list of extensions
  *  @param pListOfAssociatedContainers
  *		The list of Associated Containers
  *  @return HRESULT
  *		S_OK
  *			The listing succeeded <br>
  *		E_FAIL
  *			No user extensions in catalog <br>
  *		E_INVALIDARG
  *			iBaseFeatureType is NULL <br>
  *		E_UNEXPECTED
  *			Problem in listing  user extensions
  *
  */
	
static HRESULT CATOsmListUserExtensionsFromCatalog(const CATUnicodeString *iBaseFeatureType,
						   CATListValCATUnicodeString **pListOfExtensions,
						   CATListValCATUnicodeString **pListOfAssociatedContainers);

/**
  * Returns the invariant identifier of an extension
  * @param ipExtension
  *        The extension asked its identifier
  * @param oIdentifier
  *        The returned identifier
  * @param iClientId
  *        The catalog's client identifier that the extension comes from
  * @return HRESULT
  *		S_OK
  *			Identifier returned
  *		E_INVALIDARG
  *			The passed in pointer is not an extension
  *		E_ACCESSDENIED
  *			The passed in iClientId is not the one of the extension's catalog
  *		E_FAIL
  *			Non documented error
  */
 static HRESULT GetExtensionIdentifier(const CATBaseUnknown* ipExtension, CATUuid& oIdentifier,
					                            const CATUnicodeString& iClientId);
};

#endif

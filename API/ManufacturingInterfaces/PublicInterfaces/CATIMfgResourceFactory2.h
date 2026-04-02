/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
#ifndef CATIMfgResourceFactory2_H
#define CATIMfgResourceFactory2_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"
#include "CATUnicodeString.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgResourceFactory2;
#else
extern "C" const IID IID_CATIMfgResourceFactory2;
#endif

/**
* Interface to create manufacturing resources.
*/
class ExportedByMfgItfEnv CATIMfgResourceFactory2 : public CATBaseUnknown
{
	CATDeclareInterface ;  

public:

	/**
	* This method is used to create a new manufacturing resource from catalog.
	* @param iToolResourceName
	*   The name of tool or tool assembly in catalog.
	* @param iResourceType
	*   The type of resource.
	* @param iCatalogPath
	*   Catalog Path.
	* @param oToolResource
	*   Return the resource created
	**/
	virtual HRESULT CreateResourceFromCatalog(const CATUnicodeString & iToolResourceName, const CATUnicodeString & iResourceType, const CATUnicodeString & iCatalogPath, CATBaseUnknown_var & oToolResource) = 0;

};

CATDeclareHandler(CATIMfgResourceFactory2, CATBaseUnknown);

#endif








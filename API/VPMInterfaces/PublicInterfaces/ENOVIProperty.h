//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
/**
* @CAA2Level L1
* @CAA2Usage U5
*/

#ifndef _ENOVIProperty_H
#define _ENOVIProperty_H

// =================================================================
// Includes
// =================================================================
// System
#include "CATBaseUnknown.h"
#include "GUIDVPMInterfaces.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIProperty ;
#else
extern "C" const IID IID_ENOVIProperty ;
#endif

//------------------------------------------------------------------
/**
* Base abstract class for properties objects.
* <br><b>Role:</b> A property is an abstract object that can
* be added to any Late type instance object, without changing
* that late type object data structure (table). The object
* linked to this property is the owner of that property.
*/
class ExportedByGUIDVPMInterfaces ENOVIProperty : public CATBaseUnknown
{
    CATDeclareInterface;

    public:
    // =======================================================
    // Method(s) 
    // =======================================================
	 /**
	 * Retrieves property's owner.
	 *@param oowner
	 *		The uuid (Unique Universal Identifier) of the owner object.
	 *@return S_OK
	 *		The method succeeds.
	 *@return E_FAIL
	 * 	The method fails.
	 */
    virtual HRESULT get_Owner
			(CATBaseUnknown*& oowner)=0;
};
//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
CATDeclareHandler(ENOVIProperty, CATBaseUnknown);

#endif

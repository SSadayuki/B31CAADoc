//COPYRIGHT DASSAULT SYSTEMES 2001 


/**
*   @CAA2Level L1
*   @CAA2Usage U3
*/

#ifndef CATIConfigHandler_H
#define CATIConfigHandler_H

#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "sequence_octet.h"
#include "GUIDVPMInterfaces.h"


class CATICfgValue_var;
class CATListValCATICfgValidatedEffectivity_var;
class CATIConfigHandler_var;
class CATListValCATIConfigHandler_var;
class CATIConfigurableObject_var;
class CATICfgFilter_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIConfigHandler ;
#else
extern "C" const IID IID_CATIConfigHandler ;
#endif


/**
 * A CATIConfigHandler is a persistent filter.
 * <br><b>Role</b>: This class associate some persistent attributes to a CATICfgFilter object.
 */
class ExportedByGUIDVPMInterfaces CATIConfigHandler : public CATBaseUnknown
{
CATDeclareInterface;
  
public:

/** 
 * Get the name of this configuration handler.
 * @param oIdentifier
 * The name of this Configuration Handler.
 */
	virtual HRESULT GetIdentifier(CATUnicodeString &oIdentifier) const = 0; 

/** 
 * Set the name of this configuration handler.
 * @param oIdentifier
 * The name of this Configuration Handler.
 */
	virtual HRESULT SetName(CATUnicodeString &iName) = 0; 

/** @nodoc */
	virtual  HRESULT GetConfigurableObject(CATIConfigurableObject_var &oCfgObj) const = 0;

/**
 * Set a filter for this configuration handler.
 * @param iFilter
 * The filter to be associated with this configuration handler.
 */
	virtual HRESULT SetFilter(const CATICfgFilter_var & iFilter) = 0;

/**
 * Get the filter associated with this configuration handler.
 * @param oFilter
 * The filter associated with this configuration handler.
 */
	virtual HRESULT  GetFilter(CATICfgFilter_var & oFilter) const = 0; 

/** @nodoc */
	virtual HRESULT  GetStatus(CATUnicodeString &oStatus) const = 0;

/** @nodoc */
	virtual HRESULT SetOwner(SEQUENCE(octet) & iUIDPerson) = 0;

/** @nodoc */
	virtual HRESULT GetOwner(SEQUENCE(octet) & oUIDPerson) const = 0;

/** @nodoc */
	virtual HRESULT AddChild(const CATIConfigHandler_var& iTheChild) = 0;

/** @nodoc */
	virtual HRESULT RemoveChild(const CATIConfigHandler_var& iTheChild) = 0;

/** @nodoc */
	virtual HRESULT GetChildren(CATListValCATIConfigHandler_var& oChildrenList)const = 0;

/** @nodoc */
	virtual HRESULT AddBrother(const CATIConfigHandler_var& iTheChild) = 0;

/** @nodoc */
	virtual HRESULT RemoveBrother(const CATIConfigHandler_var& iTheChild) = 0;

/** @nodoc */
	virtual HRESULT GetBrothers(CATListValCATIConfigHandler_var& oChildrenList)const = 0;

    // -- S_OK =>IsBrother
    // -- S_FALSE => Is Not Brother
/** @nodoc */
	virtual HRESULT  IsBrother(const CATIConfigHandler_var& iTheFather) const = 0;

/** @nodoc */
	virtual HRESULT  GetDescription(CATUnicodeString &oDescription) const = 0;

/** @nodoc */
	virtual HRESULT SetDescription(const CATUnicodeString& iDescr) = 0;
 
/** @nodoc */
	virtual HRESULT CleanMe() =0;

/** @nodoc */
	virtual HRESULT GetIdentifier(SEQUENCE(octet) &oId) const=0;


};

CATDeclareHandler( CATIConfigHandler , CATBaseUnknown );

#endif

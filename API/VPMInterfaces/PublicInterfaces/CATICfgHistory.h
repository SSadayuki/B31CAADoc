//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
#ifndef CATICfgHistory_h_
#define CATICfgHistory_h_

// =================================================================
// Includes
// =================================================================

/**
 *@CAA2Level L1
 *@CAA2Usage U3
 */

//System
#include "CATBaseUnknown.h"
//Interface ID
#include "GUIDVPMInterfaces.h"
#include "sequence_octet.h"
#include "sequence_CORBAAny.h"
#include "CATUnicodeString.h"
#include "CATTime.h"
#include "CATICfgModification.h"

class CATILinkableObject_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgHistory;
#else
extern "C" const IID IID_CATICfgHistory;
#endif
class ExportedByGUIDVPMInterfaces CATICfgHistory : public CATBaseUnknown {

CATDeclareInterface;
	public:


	/**
	 * Set the operation ("Add", "Cut", "Move", "Replace") of a <b>MODHistory</b>
	 * @param iType 
	 */
	virtual HRESULT SetOperation(const CATICfgModification::Operation &iType) = 0;

	/** @nodoc */
	virtual HRESULT SetOperation(const CATUnicodeString& iType) = 0;


	/**
	 * Get the operation ("Add", "Cut", "Move", "Replace") of a <b>MODHistory</b>
	 * @param oType 
	 */
	virtual HRESULT GetOperation(CATICfgModification::Operation &oType) const = 0;
     
	/** @nodoc */
	virtual HRESULT GetOperation(CATUnicodeString& oType) const = 0;


	/**
	 * Set the ID object 1 ("Add", "Cut", "Move", "Replace") of a <b>MODHistory</b>
	 * @param oObject
	 */
	virtual HRESULT SetObj1(const CATILinkableObject_var& oObject) = 0;
	
	/** @nodoc */
	virtual HRESULT SetObjId1(const SEQUENCE(octet)& iIdentifier) = 0;
    /** @nodoc */
     virtual HRESULT SetObjId1(CORBAAny& iIdentifier) = 0;

	/**
	 * Get object 1 ("Add", "Cut", "Move", "Replace") of a <b>MODHistory</b>
	 * @param oObject
	 */
	virtual HRESULT GetObj1(CATILinkableObject_var& oObject) const  = 0;

	/** @nodoc */
	virtual HRESULT GetObjId1(CORBAAny& oIdentifier) const = 0;
	/** @nodoc */
	virtual HRESULT GetObjId1(SEQUENCE(octet)& oIdentifier) const = 0;


	/**
	 * Set object 2 ("Move/Replace") of a <b>MODHistory</b>
	 * @param oObject
	 */
	virtual HRESULT SetObj2(const CATILinkableObject_var& oObject) = 0;

	/** @nodoc */
	virtual HRESULT SetObjId2(const SEQUENCE(octet)& iIdentifier) = 0;
	/** @nodoc */
	virtual HRESULT SetObjId2(CORBAAny& iIdentifier) = 0;



	/**
	 * Get  object 2 ("Move/Replace") of a <b>MODHistory</b>
	 * @param oObject
	 */
	virtual HRESULT GetObj2(CATILinkableObject_var& oObject) const  = 0;
	/** @nodoc */
	virtual HRESULT GetObjId2(SEQUENCE(octet)& oIdentifier) const = 0;
	/** @nodoc */
	virtual HRESULT GetObjId2(CORBAAny& oIdentifier) const = 0;

     
	/**
	 * Get the related mod of a <b>MODHistory</b>
	 * @param oRelatedMod 
	 */
	virtual HRESULT GetRelatedMod(CATICfgModification_var& oRelatedMod) const = 0; 


	/**
	 * Get the creation date of a <b>MODHistory</b>
	 * @param oDate 
	 */
	virtual HRESULT GetDate(CATTime& oDate) const = 0;


	/**
	 * Get the user who created the <b>MODHistory</b>
	 * @param  oUser
	 */
	virtual HRESULT GetUser(CATUnicodeString& oUser) const = 0;

	/** @nodoc */
	virtual HRESULT GetOwningCV(CATIConfigurableObject_var &oCV) const = 0;

	/** @nodoc */
	virtual HRESULT GetAsString( CATUnicodeString& oString ) const = 0;
};

CATDeclareHandler(CATICfgHistory, CATBaseUnknown);

#endif

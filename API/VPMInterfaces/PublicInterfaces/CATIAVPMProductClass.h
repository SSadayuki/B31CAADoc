#ifndef CATIAVPMProductClass_h
#define CATIAVPMProductClass_h

// COPYRIGHT DASSAULT SYSTEMES 2000

// =================================================================
// Includes
// =================================================================
// System
#include "GUIDVPMInterfaces.h"
#include "CATIAVPMObject.h"
#include "CATLISTV_CATBaseUnknown.h"

/**
*  @CAA2Level L1
*  @CAA2Usage U3
*/
 
// =================================================================
// Forward classes declaration
// =================================================================
class CATIAVPMProductRootClass;
class CATUnicodeString;
class CATIAVPMProductRootClass_var;
class CATIAVPMProductClass_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIAVPMProductClass;
#else
extern "C" const IID IID_CATIAVPMProductClass;
#endif

//------------------------------------------------------------------
/**
* Class containing products.
* <b>Role</b>: A Product Class role is to create Product Root Class objects,
* and it is also a container for those Product Root Class.
*/

class ExportedByGUIDVPMInterfaces CATIAVPMProductClass : public CATBaseUnknown //CATIAVPMObject
{
	CATDeclareInterface;
	
public:
	//
	// =======================================================
	// Method(s) 
	// =======================================================
/**
* @nodoc
*/
	virtual HRESULT	 AggregateProductClass(const CATBSTR & id,
						const CATBSTR & name,
						const CATBSTR & description,
						CATIAVPMProductClass *& ProductClass)=0;
/**
* @nodoc
*/
	virtual HRESULT	 get_ProductClass(long index,
						CATIAVPMProductClass *& ProductClass)=0;
/**
* @nodoc
*/
	virtual HRESULT	 get_ProductClassCount(long & NbItems)=0;

/**
* @nodoc
*/
	virtual HRESULT	 AggregateProductRootClass(const CATBSTR & id,
						const CATBSTR & name,
						const CATBSTR & description,
						CATIAVPMProductRootClass *& ProductRootClass)=0;

	/**
	* Creates a ProductRootClass.
	*@param id , product class id.
	*@param ProductRootClass, the created product root class.
	*@return S_OK
	* The method succeeds.
	*@return E_FAIL
	* The method fails.
	*/
	virtual HRESULT  AggregateProductRootClass(const CATUnicodeString& id,
						CATIAVPMProductRootClass *& ProductRootClass)=0;
/**
* @nodoc
*/
	virtual HRESULT  get_ProductRootClass(long index,
						CATIAVPMProductRootClass *& ProductRootClass)=0;

	/**
	* Gets product root class list.
	*@param oPRCList , the list of product root class.
	*@return S_OK
	* The method succeeds.
	*@return E_FAIL
	* The method fails.
	*/
	virtual HRESULT GetProductRootClassList(CATLISTV(CATBaseUnknown_var)& oPRCList)=0;

/**
* @nodoc
*/
	virtual HRESULT	 get_ProductRootClassCount(long & NbItems)=0;

/**
* @nodoc
*/
	virtual HRESULT	 get_ParentProductClass(CATIAVPMProductClass *& ProductClass)=0;

// SUU+  Jan-31-2003
// new methods: CATUnicodeString instead of BSTR.
//              handlers instead of pointers
/**
* @nodoc
*/
	virtual HRESULT	 AggregateProductClass(const CATUnicodeString & id,
						const CATUnicodeString & name,
						const CATUnicodeString & description,
						CATIAVPMProductClass_var & ProductClass)=0;
/**
* @nodoc
*/
	virtual HRESULT	 AggregateProductRootClass(const CATUnicodeString & id,
						const CATUnicodeString & name,
						const CATUnicodeString & description,
						CATIAVPMProductRootClass_var & ProductRootClass)=0;
// SUU-	

};
//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
CATDeclareHandler(CATIAVPMProductClass, CATBaseUnknown);

#endif


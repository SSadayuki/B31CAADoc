// COPYRIGHT DASSAULT SYSTEMES 1999
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
//===================================================================
#ifndef CATIProductDatabase_h
#define CATIProductDatabase_h

#ifdef _WINDOWS_SOURCE 
#ifdef __CATIProductDatabase
#define ExportedByCATIProductDatabase  __declspec(dllexport) 
#else
#define ExportedByCATIProductDatabase  __declspec(dllimport) 
#endif
#else
#define ExportedByCATIProductDatabase
#endif

#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "sequence_octet.h"

//ads-12/02/02 suppression des tags CAA

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATIProductDatabase IID IID_CATIProductDatabase;
#else
extern "C" const IID IID_CATIProductDatabase;
#endif

class CATListValCATBaseUnknown_var;
class CATIProductDatabase;
CATDeclareHandler(CATIProductDatabase,CATBaseUnknown);

/**
* OBSOLETE INTERFACE - DO NOT USE.
*/

class ExportedByCATIProductDatabase CATIProductDatabase: public CATBaseUnknown
{
	CATDeclareInterface;
public:
/**
* @nodoc
*/  
	virtual HRESULT  get_PSNIdentification(int& oLgPSNIdentification, char *& oPSNIdentification,
		const CATUnicodeString & ShapeName="Active")=0;
	
/**
* @nodoc
*/
	virtual HRESULT GetCommonNode(const CATIProductDatabase_var & iNode,
		CATIProductDatabase_var & oCommonFather) = 0;
	
/**
* @nodoc
*/
	virtual HRESULT GetCommonId(const CATIProductDatabase_var & iNode, 
		char *& oPSNId, int& oLength) = 0;
	
/**
* @nodoc
*/
	virtual HRESULT GetInstance(int length, char * iPSNPathway, CATIProductDatabase_var & oInstance)=0;
	
	/**
    * @nodoc
    */
	virtual HRESULT GetUpdatedPrdList(CATListValCATBaseUnknown_var *& UpdtList) = 0;
	
	/**
    * @nodoc
    */
	virtual HRESULT GetDatabaseName(CATUnicodeString & oDbName) = 0;

};

#endif



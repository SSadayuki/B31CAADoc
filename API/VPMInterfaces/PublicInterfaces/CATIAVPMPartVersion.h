// -*-C++-*-

#ifndef CATIAVPMPartVersion_h
#define CATIAVPMPartVersion_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
* @CAA2Level L1
* @CAA2Usage U3
*/
 
// =================================================================
// Includes
// =================================================================
// System
#include "GUIDVPMInterfaces.h"
#include "CATIAVPMObjectVersion.h"
#include "CATLISTV_CATBaseUnknown.h"

// =================================================================
// Forward classes declaration
// =================================================================
class CATMathTransformation;
class CATIAVPMItemInstance;
class CATIAVPMTechInterface;
class CATIAVPMPartMaster;
// class CATIAVPMProductSpecification;
class CATIAVPMAssemblyRelation;
class CATMathPoint;
class CATTime;

class CATBaseUnknown_var;
class CATIAVPMAssemblyRelation_var;
class CATIAVPMPartMaster_var;
class CATICfgFilter_var;
class CATICfgMileStone_var;
class CATIAVPMTechInterface_var;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIAVPMPartVersion;
#else
extern "C" const IID IID_CATIAVPMPartVersion;
#endif

//------------------------------------------------------------------
/**
 * Interface to create and manage CATIAVPMPartVersion.
 */

class ExportedByGUIDVPMInterfaces CATIAVPMPartVersion : public CATBaseUnknown //CATIAVPMObjectVersion
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
	virtual HRESULT   AggregateTechInterface(const CATBSTR & id,
		const CATBSTR & name,
		const CATBSTR & description,
		CATIAVPMTechInterface *& TechInterface)=0;
	
/**
* @nodoc
*/
	virtual HRESULT   get_TechInterface(long index,
		CATIAVPMTechInterface *& TechInterface)=0;
	
/**
* @nodoc
*/
	virtual HRESULT   get_TechInterfaceCount(long & NbItems)=0;
	
/**
* @nodoc
*/
	virtual HRESULT   get_ParentItemInstance(long index,
		CATIAVPMItemInstance *& ItemInstance)=0;
	
/**
* @nodoc
*/
	virtual HRESULT   get_ParentItemInstanceCount(long & NbItems)=0;
	
/**
* @nodoc
*/
	// To be called whenever you are finished with the list.
	// This is used inside the server to free the memory allocated to hold the list.
	//
	virtual HRESULT   forget_ParentItemInstanceCount()=0;
	
/**
* @nodoc
*/
	virtual HRESULT   AggregateAssemblyRelation(CATIAVPMObject *Object,
		CATIAVPMAssemblyRelation *& AssemblyRelation)=0;
	
/**
* @nodoc
*/
	virtual HRESULT   get_AssemblyRelation(long index,
					   CATIAVPMAssemblyRelation *& AssemblyRelation, int ActivatedOnly=1)=0;
	
	/**
	* Retrieves Count of Assembly Relations.
	* @param NbItems
	*	 The number of Assembly Relation Items.
	* @param ActivatedOnly
	*	 The flag to select only Activated Assembly Relations or all Assembly Relations.
	*	 <br><b>Legal Values</b>: The default value for ActivatedOnly is set to 1. 
	*/
	virtual HRESULT   get_AssemblyRelationCount(long & NbItems, int ActivatedOnly=1)=0;
	
/**
* @nodoc
*/
	// To be called whenever you are finished with the list.
	// This is used inside the server to free the memory allocated to hold the list.
	//
	virtual HRESULT   forget_AssemblyRelationCount()=0;
	
/** @nodoc */
	// S_OK : Yes, there is one CV attached.
	// S_FALSE : No. No CV attached.
	virtual HRESULT IsMasterConfigurable()=0;
	
/**
* @nodoc
* @deprecated	 Use GetChildAssemblyRelations(oAssemblyRelationList,NULL_var)
*/
	virtual HRESULT GetChildAssemblyRelations(CATLISTV(CATBaseUnknown_var) & oAssemblyRelationList)=0;
	
/**
* @nodoc
*/
	virtual HRESULT GetChildAssemblyRelations(CATLISTV(CATBaseUnknown_var) & oAssemblyRelationList,
		const CATICfgFilter_var & hCfgFilter)=0;
	
/**
* @nodoc
*/
	virtual HRESULT AddAssemblyRelation(const CATBaseUnknown_var & iPartMaster,
		const CATUnicodeString & iAssemblyRelationName,
		CATIAVPMAssemblyRelation_var & oAssemblyRelation)=0;
	
/**
* @nodoc
*/
	virtual HRESULT CutAssemblyRelation(const CATIAVPMAssemblyRelation_var & iAssemblyRelation)=0;
	
/**
* @nodoc
*/
	virtual HRESULT ReplaceAssemblyRelation(const CATIAVPMAssemblyRelation_var & iOldAssemblyRelation,
					   const CATBaseUnknown_var & iNewReference,
					   CATIAVPMAssemblyRelation_var & oNewAssemblyRelation)=0;
	
/**
* @nodoc
*/
	virtual HRESULT put_ApplicabilityDate(const CATTime & iDate)=0;
	
/**
* @nodoc
*/
	virtual HRESULT put_ApplicabilityDate(const CATICfgMileStone_var & iMileStoneDate)=0;
	
	
	
// SUU Jan-31-2003
// New method (CATUnicodeString instead of BSTR)
/**
* @nodoc
*/
	virtual HRESULT   AggregateTechInterface(const CATUnicodeString  & id,
		const CATUnicodeString  & name,
		const CATUnicodeString  & description,
		CATIAVPMTechInterface_var & TechInterface)=0;
	
	
};
//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
/** @nodoc */
CATDeclareHandler(CATIAVPMPartVersion, CATBaseUnknown);

#endif


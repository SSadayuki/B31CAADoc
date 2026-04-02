// -*-C++-*-

#ifndef CATIAVPMPartMaster_h
#define CATIAVPMPartMaster_h

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
#include "CATIAVPMObjectMaster.h"

// =================================================================
// Forward classes declaration
// =================================================================
class CATIAVPMPartVersion;
class CATIAVPMAssemblyRelation;
class CATIAVPMObjectVersion;
class CATTime;
class CATUnicodeString;
class CATIAVPMPartMaster_var;
class CATIAVPMPartVersion_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIAVPMPartMaster;
#else
extern "C" const IID IID_CATIAVPMPartMaster;
#endif

//------------------------------------------------------------------
/**
 * Interface to create and manage CATIAVPMPartMaster.
 */

class ExportedByGUIDVPMInterfaces CATIAVPMPartMaster : public CATBaseUnknown //CATIAVPMObjectMaster
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
	virtual HRESULT   get_Alternate(long index,
		CATBSTR & FullfilledRequirements,
		CATIAVPMPartMaster *& PartMaster)=0;
	
/**
* @nodoc
*/
	virtual HRESULT   get_AlternateCount(long & NbItems)=0;
	
/**
* @nodoc
*/
	virtual HRESULT   put_Alternate(const CATBSTR & FullfilledRequirements,
		CATIAVPMPartMaster *PartMaster)=0;
	
/**
* @nodoc
*/
	virtual HRESULT   RemoveAlternate(long index)=0;
	
/**
* @nodoc
*/
	virtual HRESULT   Alternate(long index)=0;
	
/**
* @nodoc
*/
	virtual HRESULT   get_AlternateBase(long index,
		CATBSTR & FullfilledRequirements,
		CATIAVPMPartMaster *& PartMaster)=0;
	
/**
* @nodoc
*/
	virtual HRESULT   get_AlternateBaseCount(long & NbItems)=0;
	
/**
* @nodoc
*/
	virtual HRESULT   get_ParentAssemblyRelation(long index,
		CATIAVPMAssemblyRelation *& AssemblyRelation)=0;
	
/**
* @nodoc
*/
	virtual HRESULT   get_ParentAssemblyRelationCount(long & NbItems)=0;

/**
* @nodoc
*/
	// To be called whenever you are finished with the list.
	// This is used inside the server to free the memory allocated to hold the list.
	//
	virtual HRESULT   forget_ParentAssemblyRelationCount()=0;
	
/**
* @nodoc
*/
	virtual  HRESULT AggregatePartVersion(CATIAVPMObjectVersion *& ObjectVersion,
					   CATIAVPMObjectVersion* iFromVersion=0,
					   int LogInOperationPanel=0)=0;	
	

/**
* @nodoc
*/
	//+MTM, 20-May-2003: Granular method for Import tools.
	// Creates a new PartVersion cloning the LastVersion if it exists, but without duplication of ARs.
	virtual  HRESULT CreateBasicPartVersion(CATIAVPMPartVersion_var & ohPartVersion)=0;	
					   
	
	// SUU JAN-31-2003
	// new methods (CATUnicodeString instead of BSTR)
/**
* @nodoc
*/
	virtual HRESULT   get_Alternate(long index,
		CATUnicodeString & FullfilledRequirements,
		CATIAVPMPartMaster_var & PartMaster)=0;
/**
* @nodoc
*/
	virtual HRESULT   put_Alternate(const CATUnicodeString & FullfilledRequirements,
		CATIAVPMPartMaster_var PartMaster)=0;
	
/**
* @nodoc
*/
	virtual HRESULT   get_AlternateBase(long index,
		CATUnicodeString & FullfilledRequirements,
		CATIAVPMPartMaster_var & PartMaster)=0;

 /**
 * @nodoc
 */
 virtual HRESULT HasChildAssemblyRelations(boolean & iGotAR)=0;
	
};
//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
/** @nodoc */
CATDeclareHandler(CATIAVPMPartMaster, CATBaseUnknown);

#endif


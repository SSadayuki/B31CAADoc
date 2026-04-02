#ifndef CATIAVPMObjectMaster_h
#define CATIAVPMObjectMaster_h

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
#include "CATIAVPMObject.h"

// =================================================================
// Forward classes declaration
// =================================================================
class CATUnicodeString;
class CATIAVPMObjectVersion;
class CATIAVPMObjectVersion_var;
class CATIAVPMObjectFamily;
class CATIAVPMObjectMaster_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIAVPMObjectMaster;
#else
extern "C" const IID IID_CATIAVPMObjectMaster;
#endif

//------------------------------------------------------------------
/**
 * Interface to create and manage CATIAVPM Object Master.
 */

class ExportedByGUIDVPMInterfaces CATIAVPMObjectMaster : public CATBaseUnknown //CATIAVPMObject
{
    /** @nodoc */
    CATDeclareInterface;

    public:
    //
    // =======================================================
    // Method(s) 
    // =======================================================

/**
 * @nodoc
 */
    virtual HRESULT   AggregateObjectVersion(CATIAVPMObjectVersion *& ObjectVersion,
					CATIAVPMObjectVersion* iFromVersion=0)=0;
/**
 * Retrieves an Object Version.
 * @param index
 *   The index.
 * @param ObjectVersion
 *   The Object Version.
 */
    virtual HRESULT   get_ObjectVersion(long index,
					CATIAVPMObjectVersion *& ObjectVersion)=0;

/**
 * Retrieves the number of Object Versions.
 * @param NbItems
 *   The Number of Object Versions.
 */
    virtual HRESULT   get_ObjectVersionCount(long & NbItems)=0;

/**
 * Retrieves the last Object Version.
 * @param ObjectVersion
 *   The last Object Version.
 */
    virtual HRESULT   get_LastVersion(CATIAVPMObjectVersion *& ObjectVersion)=0;

/**
 * @nodoc
 */
    virtual HRESULT   get_PreferedVersion(CATIAVPMObjectVersion *& ObjectVersion)=0;

/**
 * @nodoc
 */
    virtual HRESULT   get_FirstVersion(CATIAVPMObjectVersion *& ObjectVersion)=0;

/**
 * @nodoc
 */
    virtual HRESULT   CreateMaster(const CATBSTR & ID,
				   const CATBSTR & name,
				   const CATBSTR & description,
				   CATIAVPMObjectMaster *& ObjectMaster)=0;

/**
 * @nodoc
 */
    virtual HRESULT   AggregateObjectFamily(const CATBSTR & id,
					    const CATBSTR & name,
					    const CATBSTR & description,
					    CATIAVPMObjectVersion *FirstObjectVersion,
					    CATIAVPMObjectFamily *& ObjectFamily)=0;
					    
/**
 * @nodoc
 */
    virtual HRESULT   get_ObjectFamilyCount(long & NbItems)=0;

/**
 * @nodoc
 */
    virtual HRESULT   get_ObjectFamily(long index,
				       CATIAVPMObjectFamily *& ObjectFamily)=0;

/**
 * @nodoc
 */
    virtual HRESULT   get_PreferedObjectFamily(CATIAVPMObjectFamily *& ObjectFamily)=0;
       
/**
 * @nodoc
 */
    virtual HRESULT   CreateMaster(const CATUnicodeString & ID,
				   const CATUnicodeString & name,
				   const CATUnicodeString & description,
				   CATIAVPMObjectVersion_var & iFirstObjectVersion,
				   CATIAVPMObjectMaster_var & oObjectMaster)=0;
    
};
//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
/** @nodoc */
CATDeclareHandler(CATIAVPMObjectMaster, CATBaseUnknown);

#endif


#ifndef CATIAVPMObjectVersion_h
#define CATIAVPMObjectVersion_h

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
class CATIAVPMObjectMaster;
class CATIAVPMObjectFamily;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIAVPMObjectVersion;
#else
extern "C" const IID IID_CATIAVPMObjectVersion;
#endif

//------------------------------------------------------------------
/**
 * Interface to create and manage CATIAVPMObjectVersion.
 */

class ExportedByGUIDVPMInterfaces CATIAVPMObjectVersion : public CATBaseUnknown//CATIAVPMObject
{
    CATDeclareInterface;

    public:
    //
    // =======================================================
    // Method(s) 
    // =======================================================
    // copy constructor to initialize 'this' ObjectVersion

/**
 * @nodoc
 */
    virtual HRESULT   Init(CATIAVPMObjectVersion* iFromObject)=0;


/**
 * Retrieves the Documented Object corresponding to the index.
 * @param index
 *   The index.
 * @param VPMObject
 *   The CATIAVPMObject.
 */
    virtual HRESULT   get_DocumentedObject(long index,
					   CATIAVPMObject *& VPMObject)=0;

/**
 * Retrieves Count of the Documented Objects attached with Documentation or Representation link.
 * @param mode
 *   The mode is REPRESENTATION / DOCUMENTATION or both (default comportment).
 * @param NbItems
 *   The number of Documented Objects corresponding to the mode.
 */
    virtual HRESULT   get_DocumentedObjectCount(long mode,
						long & NbItems)=0;

/**
 * Retrieves the master object of the CATIAVPMObjectVersion.
 * @param ObjectMaster
 *   The CATIAVPMObjectMaster.
 */
    virtual HRESULT   get_ObjectMaster(CATIAVPMObjectMaster *& ObjectMaster)=0;

/**
 * @nodoc
 */
    virtual HRESULT   get_ParentObjectFamily(CATIAVPMObjectFamily *& ObjectFamily)=0;


/**
 * @nodoc
 */
    virtual HRESULT   IsPreferredVersion()=0;
};
//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
/** @nodoc */
CATDeclareHandler(CATIAVPMObjectVersion, CATBaseUnknown);

#endif


#ifndef CATIAVPMFolderMaster_h
#define CATIAVPMFolderMaster_h

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

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIAVPMFolderMaster;
#else
extern "C" const IID IID_CATIAVPMFolderMaster;
#endif

//------------------------------------------------------------------
/**
 * Interface to create Folder Master.
 */

class ExportedByGUIDVPMInterfaces CATIAVPMFolderMaster : public CATBaseUnknown //CATIAVPMObjectMaster
{
    /** @nodoc */
    CATDeclareInterface;

    public:
    //
    // =======================================================
    // Method(s) 
    // =======================================================

};
//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
/** @nodoc */
CATDeclareHandler(CATIAVPMFolderMaster, CATBaseUnknown);

#endif


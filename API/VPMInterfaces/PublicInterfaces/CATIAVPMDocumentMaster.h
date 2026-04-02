#ifndef CATIAVPMDocumentMaster_h
#define CATIAVPMDocumentMaster_h

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
extern ExportedByGUIDVPMInterfaces IID IID_CATIAVPMDocumentMaster;
#else
extern "C" const IID IID_CATIAVPMDocumentMaster;
#endif

//------------------------------------------------------------------
/**
 * Interface to create and manage CATIAVPM Document Master.
 */

class ExportedByGUIDVPMInterfaces CATIAVPMDocumentMaster : public CATBaseUnknown //CATIAVPMObjectMaster
{
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
CATDeclareHandler(CATIAVPMDocumentMaster, CATBaseUnknown);

#endif


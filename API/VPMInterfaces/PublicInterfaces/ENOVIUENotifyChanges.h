#ifndef ENOVIUENotifyChanges_H
#define ENOVIUENotifyChanges_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

// =================================================================
// Includes
// =================================================================
#include "GUIDVPMInterfaces.h"
#include "CATBaseUnknown.h"




#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIUENotifyChanges;
#else
extern "C" const IID IID_ENOVIUENotifyChanges;
#endif
//------------------------------------------------------------------
/**
 * User Exit to implement in order to add specific treatment when a modification has been applied to the attached file.
 * <br><b>Role</b>: This user exit is in collaboration with the 
 * ENOVIFileAttachable interface. It is called in the NotifyModifications
 * method to express a modifications has been applied to the attached file.
 */
class ExportedByGUIDVPMInterfaces ENOVIUENotifyChanges : public CATBaseUnknown
{
    CATDeclareInterface;

    public:
/**
 * Method to add a specific treatment when a modification has been applied to the attached file.
 */
    virtual HRESULT NotifyChanges()=0;
};
//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
CATDeclareHandler(ENOVIUENotifyChanges, CATBaseUnknown);

#endif


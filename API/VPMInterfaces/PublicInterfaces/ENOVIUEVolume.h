#ifndef ENOVIUEVolume_H
#define ENOVIUEVolume_H

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
#include "CATListOfCATIAVPMDocumentVersion.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIUEVolume;
#else
extern "C" const IID IID_ENOVIUEVolume;
#endif

//------------------------------------------------------------------
/**
 * User Exit to manage the list of documents used to calculate object volume.
 * <br><b>Role</b>: Interface to be implemented in order to reduce the 
 * list of documents which are used to calculate the object volume.
 */
class ExportedByGUIDVPMInterfaces ENOVIUEVolume : public CATBaseUnknown
{
    CATDeclareInterface;

    public:

/**
 * Method to reduce the list of documents which are used to calculate the object volume.
 * @param oDocument
 *   The list of DocumentVersion objects.
 */
    virtual HRESULT get_Documents(CATListOfCATIAVPMDocumentVersion& oDocument)=0;
};
//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
/** @nodoc */
CATDeclareHandler(ENOVIUEVolume, CATBaseUnknown);

#endif


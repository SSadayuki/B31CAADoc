/* COPYRIGHT DASSAULT SYSTEMES 2006 */
/**
 * @CAA2Level L0
 * @CAA2Usage U5
 */
#ifndef CATIUExitDRMEditorFrame_H
#define CATIUExitDRMEditorFrame_H

#include "CATBaseUnknown.h"

/**
 * Interface to implement on specific frame for DRM right edition through Edit-Properties to validate modifications
 */

#include "CATInteractiveInterfaces.h" 

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATInteractiveInterfaces IID IID_CATIUExitDRMEditorFrame;
#else
extern "C" const IID IID_CATIUExitDRMEditorFrame;
#endif

class ExportedByCATInteractiveInterfaces CATIUExitDRMEditorFrame : public CATBaseUnknown
{ 
  CATDeclareInterface;

  public:

/**
 * Returns to DRM code the Authorization data to associate to current document document.
 * <br><b>Role</b>: Returns to the DRM code the Authorization data to associate with 
 * the document that has been opened. The DRM code 
 * should be able to retrieve here all the necessary information for decrypting 
 * the buffer ( since the call to @href CATIUExitDRMDocument::DRMImportEnvelope).
 * Thanks to this buffer the DRM code is now able to build the authorizations
 * that the document's publisher has set.
 * @param  iDRMAuthorization [in]
 *  Buffer containing the DRM Authorization data.
 * @param iDRMAuthorizationSize [in]
 *   the size of the DRM Authorization data.
 * @return
 *   <b>Legal values</b>:
 *   <br><tt> S_OK :</tt>on Success.
 *   <br><tt> DRM_E_FAIL :</tt> problem during license retrieval.
 *   <br><tt> DRM_E_NODRM :</tt> Not DRM protected document.
 *   <br><tt> DRM_E_ACCESSDENIED:</tt> access to the document not granted.
 *   <br><tt> DRM_E_INVALIDPARAMETER :</tt> arguments incorrects.
 *   <br><tt> DRM_E_UNKNOWN :</tt> unexpected error.
*/          
    virtual HRESULT GetAuthorizations(void *& iDRMAuthorization, size_t& iDRMAuthorizationSize) = 0;
};
CATDeclareHandler(CATIUExitDRMEditorFrame, CATBaseUnknown);

#endif      

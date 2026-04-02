#ifndef CATGSMCreateMultiSelManager_H
#define CATGSMCreateMultiSelManager_H

/**
  * @CAA2Level L1
  * @CAA2Usage U0
  */

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2002
//==============================================================================
//
// CATGSMCreateMultiSelManager :
//
//==============================================================================

#include "CATGitInterfacesExportedBy.h"
#include "IUnknown.h"

class CATIGSMMultiSelManager;
/**
 * Creates a MultiSelManager component.
 * @param opMultiSelManager
 * The pointer to CATIGSMMultiSelManager interface retrieve from the created component.
 *
 * Important Note : Lifecycle management 
 * Release CATIGSMMultiSelManager interface when it is not needed anymore.
 */

ExportedByCATGitInterfaces 
HRESULT CATGSMCreateMultiSelManager(CATIGSMMultiSelManager *& opMultiSelManager);

#endif



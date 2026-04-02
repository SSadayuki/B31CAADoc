#ifndef CATCreateStInteractiveFactory_H
#define CATCreateStInteractiveFactory_H

/**
  * @CAA2Level L0
  * @CAA2Usage U0
  */

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2002
//==============================================================================
//
// CATCreateStInteractiveFactory :
//
//==============================================================================
// Usage Notes :
//  --------------------------------------------------
//   IMPORTANT : DASSAULT SYSTEMES INTERNAL USE ONLY.
//  --------------------------------------------------
//
//==============================================================================
// Dec. 02   Creation                                     Jean-Michel PLOUHINEC
//==============================================================================

#include "CAAFreeStyleItf.h"

#include "IUnknown.h"

class CATIStInteractiveFactory;

/**
 * @nodoc
 * Creates a CATFaaInteractiveFactoryComponent component.
 * @param opInteractiveFactory
 * The pointer to CATIStInteractiveFactory interface retrieve from the created component.
 * @return
 *
 * Release CATIStInteractiveFactory interface when it is not needed anymore.
 */

ExportedByCAAFreeStyleItf
HRESULT CATCreateStInteractiveFactory(CATIStInteractiveFactory *& opInteractiveFactory);

#endif



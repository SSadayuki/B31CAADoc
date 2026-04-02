#ifndef CATCreateStAnalysisFactory_H
#define CATCreateStAnalysisFactory_H

/**
  * @CAA2Level L0
  * @CAA2Usage U0
  */

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2002
//==============================================================================
//
// CATCreateStAnalysisFactory :
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

class CATIStAnalysisFactory;

/**
 * @nodoc
 * Creates a CATFaaAnalysisFactoryComponent component.
 * @param opAnalysisFactory
 * The pointer to CATIStAnalysisFactory interface retrieve from the created component.
 *
 * Release CATIStAnalysisFactory interface when it is not needed anymore.
 */

ExportedByCAAFreeStyleItf
HRESULT CATCreateStAnalysisFactory(CATIStAnalysisFactory *& opAnalysisFactory);

#endif



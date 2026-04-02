#ifndef CATCreateNumericalAnalysisOper_H
#define CATCreateNumericalAnalysisOper_H

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2008
//==============================================================================
//
// CATCreateNumericalAnalysisOper :
//
//==============================================================================
// Usage Notes :
//  --------------------------------------------------
//   IMPORTANT : DASSAULT SYSTEMES INTERNAL USE ONLY.
//  --------------------------------------------------
//
//==============================================================================

/**
* @CAA2Level L0
* @CAA2Usage U1
*/
#include "CAACompositesItf.h"
#include "IUnknown.h"

class CATICciNumAnalysisOper;

/**
* Creates a CATICciNumAnalysisOper operator.
* @param opNumAnalysisOp
*   The pointer to CATICciNumAnalysisOper interface is the Output.
* @return
*   An HRESULT. Release CATICciNumAnalysisOper interface when it is no longer needed.
*/

ExportedByCAACompositesItf
HRESULT CATCreateNumericalAnalysisOper( CATICciNumAnalysisOper*& opNumAnalysisOp );
#endif



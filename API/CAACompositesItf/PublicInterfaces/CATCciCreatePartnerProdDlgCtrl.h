#ifndef CATCreateNumericalAnalysisOper_H
#define CATCreateNumericalAnalysisOper_H

/**
* @CAA2Level L0
* @CAA2Usage U0
*/

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2008
//==============================================================================
//
// CATCciCreatePartnerProdDlgCtrl :
//
//==============================================================================
// Usage Notes :
//  --------------------------------------------------
//   IMPORTANT : DASSAULT SYSTEMES INTERNAL USE ONLY.
//  --------------------------------------------------
//==============================================================================

#include "CAACompositesItf.h"
#include "IUnknown.h"

class CATICciPartnerProdDlgCtrl;

/**
* Creates a CATICciPartnerProdDlgCtrl operator.
* @param opNumAnalysisOp
*   The pointer to CATICciPartnerProdDlgCtrl interface is the Output.
* @return
*   An HRESULT. Release CATICciPartnerProdDlgCtrl interface when it is no longer needed.
*/

ExportedByCAACompositesItf
HRESULT CATCciCreatePartnerProdDlgCtrl( CATICciPartnerProdDlgCtrl*& opIPartnerProdDlgCtrl );
#endif



































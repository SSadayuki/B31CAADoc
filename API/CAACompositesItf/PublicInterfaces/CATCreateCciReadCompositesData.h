#ifndef CATCreateCciReadCompositesData_H
#define CATCreateCciReadCompositesData_H

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2008
//==============================================================================
//
// CATCreateCciReadCompositesData :
//
//==============================================================================
// Usage Notes :
//==============================================================================

/**
* @CAA2Level L0
* @CAA2Usage U1
*/

#include "CAACompositesItf.h"
#include "IUnknown.h"

class CATICciReadCompositesData;

/**
* Creates a CATICciReadCompositesData.
* @param opCciReadCompositesData
*   The pointer to CATICciReadCompositesData interface is the Output.
* @return
*   An HRESULT. Release CATICciReadCompositesData interface when it is no longer needed.
*/

ExportedByCAACompositesItf
HRESULT CATCreateCciReadCompositesData( CATICciReadCompositesData*& opCciReadCompositesData );
#endif



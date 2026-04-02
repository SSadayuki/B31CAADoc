#ifndef CATCciV4toV5MigrationServices_H
#define CATCciV4toV5MigrationServices_H

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2008
//==============================================================================
//
// CATCciV4toV5MigrationServices :
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
class CATICciV4toV5MigrationServices;

/**
* Creates a CATICciV4toV5MigrationServices operator.
* @param opV4toV5Migration [out,  CATBaseUnknown#Release]
* The pointer to CATICciV4toV5MigrationServices interface obtained from the created component.
* @return
* An HRESULT value.
* Release CATICciV4toV5MigrationServices interface when it is no longer needed.
*/
ExportedByCAACompositesItf
HRESULT CATCciV4toV5MigrationServices (CATICciV4toV5MigrationServices*& opV4toV5Migration);

#endif



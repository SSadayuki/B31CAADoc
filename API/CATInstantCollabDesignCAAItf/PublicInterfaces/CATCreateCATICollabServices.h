#ifndef CATCreateCATICollabServices_H
#define CATCreateCATICollabServices_H

// COPYRIGHT DASSAULT SYSTEMES 2004
/**
* @CAA2Level L1
* @CAA2Usage U1
*/
#include "CATInstantCollabDesignItf.h"
#include "CATErrorDef.h"

class CATICollabServices;

/**
* Creates a service component that implement CATICollabServices.
* @param opiServices [out, CATBaseUnknown#Release]
*   The interface pointer on the service component.
*
* @return
*   Explain return values
*
*/
HRESULT ExportedByCATInstantCollabDesignItf CATCreateCATICollabServices (CATICollabServices ** opiServices);

#endif

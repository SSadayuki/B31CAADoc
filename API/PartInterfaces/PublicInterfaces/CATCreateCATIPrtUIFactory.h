#ifndef CATCreateCATIPrtUIFactory_H
#define CATCreateCATIPrtUIFactory_H

// COPYRIGHT DASSAULT SYSTEMES 2005

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "PartItf.h"
#include "CATErrorDef.h"

class CATIPrtUIFactory;

/**
 * Creates a service component that implement CATIPrtUIFactory.
 * @param opiWkbServ [out, IUnknown#Release] 
 *   The interface pointer on the service component.
 */
HRESULT ExportedByPartItf 
CATCreateCATIPrtUIFactory (CATIPrtUIFactory ** opiWkbServ);

#endif

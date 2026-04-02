#ifndef CATCreateStCPMeshRefreshFactory_H
#define CATCreateStCPMeshRefreshFactory_H

/**
* @CAA2Level L0
* @CAA2Usage U1
*/

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2019
//==============================================================================
//
// CATCreateStCPMeshRefreshFactory : Creates the factory with this global function
// for control point mesh visu refresh
//
//==============================================================================
// Usage Notes :
//
//==============================================================================
// Nov. 2019   Creation                                                 PDT1
//==============================================================================


#include "CAAFreeStyleItf.h"

#include "IUnknown.h"

class CATIStCPMeshRefreshFactory;

/**
* @nodoc
* Creates a CATFaaCPMeshRefreshFactoryComponent component.
* @param opMeshRefreshFactory
* The pointer to CATIStCPMeshRefreshFactory interface retrieve from the created component.
* @return
* Release CATIStCPMeshRefreshFactory interface when it is not needed anymore.
*/

ExportedByCAAFreeStyleItf
   HRESULT CATCreateStCPMeshRefreshFactory(CATIStCPMeshRefreshFactory *& opMeshRefreshFactory);

#endif



/* -*-c++-*- */
#ifndef _DS_COMPUTE_SERVER
#ifndef CATIHybridPartWorkshopAddin_h
#define CATIHybridPartWorkshopAddin_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */
#include <CATIWorkbenchAddin.h>
#include "CATGitInterfacesExportedBy.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID IID_CATIHybridPartWorkshopAddin;
#else
extern "C" const IID IID_CATIHybridPartWorkshopAddin;
#endif

/**
  * HybridPart workshop extension. 
  * <b>Role</b>:  Allows to add a command in hybripart workshop
  * @see CATIWorkbench
  */

class ExportedByCATGitInterfaces CATIHybridPartWorkshopAddin : public CATIWorkbenchAddin
{
  CATDeclareInterface;
public:
};
CATDeclareHandler( CATIHybridPartWorkshopAddin, CATIWorkbenchAddin );

#endif
#endif

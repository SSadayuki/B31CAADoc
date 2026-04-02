#ifndef CATITPSCfgAddin_H
#define CATITPSCfgAddin_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#include "CATTPSItfCPP.h"
#include "CATIWorkbenchAddin.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATTPSItfCPP IID IID_CATITPSCfgAddin;
#else
extern "C" const IID IID_CATITPSCfgAddin;
#endif

/**
 * Interface dedicated to create add in on FTA workbench
 * @see CATIWorkbenchAddin
 */

class ExportedByCATTPSItfCPP CATITPSCfgAddin : public CATIWorkbenchAddin
{
  CATDeclareInterface;

  public:

};
#endif

// COPYRIGHT DASSAULT SYSTEMES  2002 +

/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */

#ifndef CATIEhiPrdWkbCfgAddin_h
#define CATIEhiPrdWkbCfgAddin_h

#include "ExportedByCATEhiInterfaces.h"

#include "CATEhiInterfaces.h"
#include "CATIWorkbenchAddin.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATEhiInterfaces IID IID_CATIEhiPrdWkbCfgAddin;
#else
extern "C" const IID IID_CATIEhiPrdWkbCfgAddin;
#endif

/**
 * Interface to add toolbars in the 'Electrical Harness Assembly' workbench.
 * @see CATIWorkbenchAddin
 */
class ExportedByCATEhiInterfaces CATIEhiPrdWkbCfgAddin : public CATIWorkbenchAddin
{
  CATDeclareInterface;
  public:
};

#endif

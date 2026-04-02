// COPYRIGHT DASSAULT SYSTEMES 2003

/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */

#ifndef CATIEhfPrdWkbCfgAddin_h
#define CATIEhfPrdWkbCfgAddin_h

#include "ExportedByCATEhfInterfaces.h"
#include "CATIWorkbenchAddin.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATEhfInterfaces IID IID_CATIEhfPrdWkbCfgAddin;
#else
extern "C" const IID IID_CATIEhfPrdWkbCfgAddin;
#endif

/**
 * Interface to add toolbars in the 'Electrical Harness Flattening' workbench.
 * @see CATIWorkbenchAddin
 */

class ExportedByCATEhfInterfaces CATIEhfPrdWkbCfgAddin : public CATIWorkbenchAddin
{
  CATDeclareInterface;
  public:
};

#endif

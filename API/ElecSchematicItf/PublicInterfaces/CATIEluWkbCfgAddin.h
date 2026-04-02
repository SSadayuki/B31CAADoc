// COPYRIGHT DASSAULT SYSTEMES  2001 +

/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */

#ifndef CATIEluWkbCfgAddin_h
#define CATIEluWkbCfgAddin_h

#include "CATElecSchematicItf.h"
#include "CATIWorkbenchAddin.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATElecSchematicItf IID IID_CATIEluWkbCfgAddin;
#else
extern "C" const IID IID_CATIEluWkbCfgAddin;
#endif

/**
 * Interface to add toolbars in the Electrical diagram workbench.
 * @see CATIWorkbenchAddin
 */

class ExportedByCATElecSchematicItf CATIEluWkbCfgAddin : public CATIWorkbenchAddin
{
  CATDeclareInterface;
  public:
};

#endif

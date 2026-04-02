#ifndef CATIElbPrdWkbCfgAddin_h
#define CATIElbPrdWkbCfgAddin_h

// COPYRIGHT DASSAULT SYSTEMES 2003

/** 
 * @CAA2Level L1
 * @CAA2Usage U5
 */

// module declaration
#include "ExportedByCATElbInterfaces.h"

// inherited from
#include "CATIWorkbenchAddin.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATElbInterfaces IID IID_CATIElbPrdWkbCfgAddin;
#else
extern "C" const IID IID_CATIElbPrdWkbCfgAddin;
#endif

/**
 * Interface to add toolbars in the 'Electrical Assembly Design' workbench.
 * @see CATIWorkbenchAddin
 */
class ExportedByCATElbInterfaces CATIElbPrdWkbCfgAddin : public CATIWorkbenchAddin
{
  CATDeclareInterface;

  public:
};

#endif

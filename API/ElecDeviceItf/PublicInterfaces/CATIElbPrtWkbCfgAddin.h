#ifndef CATIElbPrtWkbCfgAddin_h
#define CATIElbPrtWkbCfgAddin_h

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
extern ExportedByCATElbInterfaces IID IID_CATIElbPrtWkbCfgAddin;
#else
extern "C" const IID IID_CATIElbPrtWkbCfgAddin;
#endif

/**
 * Interface to add toolbars in the 'Electrical Part Design' workbench.
 * @see CATIWorkbenchAddin
 */
class ExportedByCATElbInterfaces CATIElbPrtWkbCfgAddin : public CATIWorkbenchAddin
{
  CATDeclareInterface;

  public:
};

#endif

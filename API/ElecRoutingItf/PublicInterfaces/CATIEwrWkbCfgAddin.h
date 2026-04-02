// COPYRIGHT DASSAULT SYSTEMES  2002 +
/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */


#ifndef CATIEwrWkbCfgAddin_h
#define CATIEwrWkbCfgAddin_h


// COPYRIGHT DASSAULT SYSTEMES 2002


#include "ExportedByCATEwrInterfaces.h"
// ApplicationFrame
#include "CATIWorkbenchAddin.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATEwrInterfaces IID IID_CATIEwrWkbCfgAddin;
#else
extern "C" const IID IID_CATIEwrWkbCfgAddin;
#endif

/**
 * Interface to add toolbars in the 'Electrical Wire Routing' workbench.
 * @see CATIWorkbenchAddin
 */
class ExportedByCATEwrInterfaces CATIEwrWkbCfgAddin : public CATIWorkbenchAddin
{
  CATDeclareInterface;
public:
};

#endif

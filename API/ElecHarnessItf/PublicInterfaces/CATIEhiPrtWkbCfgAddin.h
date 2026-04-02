// COPYRIGHT DASSAULT SYSTEMES  2002 +

/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */

#ifndef CATIEhiPrtWkbCfgAddin_h
#define CATIEhiPrtWkbCfgAddin_h

#include "ExportedByCATEhiInterfaces.h"

#include "CATEhiInterfaces.h"
#include "CATIWorkbenchAddin.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATEhiInterfaces IID IID_CATIEhiPrtWkbCfgAddin;
#else
extern "C" const IID IID_CATIEhiPrtWkbCfgAddin;
#endif

/**
 * Interface to add toolbars in the 'Electrical Harness Installation' workbench.
 * @see CATIWorkbenchAddin
 */
class ExportedByCATEhiInterfaces CATIEhiPrtWkbCfgAddin : public CATIWorkbenchAddin
{
  CATDeclareInterface;
  public:
};

#endif

#ifndef CATIFreeStyleWorkshopAddin_h
#define CATIFreeStyleWorkshopAddin_h

// COPYRIGHT DASSAULT SYSTEMES 2007

/**
  * @CAA2Level L0
  * @CAA2Usage U5
  */

#include "CAAFreeStyleItf.h"
#include <CATIWorkbenchAddin.h>

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCAAFreeStyleItf IID IID_CATIFreeStyleWorkshopAddin;
#else
extern "C" const IID IID_CATIFreeStyleWorkshopAddin;
#endif

/**
  * FreeStyle workshop extension. 
  * <b>Role</b>:  Allows to add a command in FreeStyle workshop
  * @see CATIWorkbench
  */

class ExportedByCAAFreeStyleItf CATIFreeStyleWorkshopAddin : public CATIWorkbenchAddin
{
  CATDeclareInterface;
public:
};
CATDeclareHandler(CATIFreeStyleWorkshopAddin, CATBaseUnknown);
#endif

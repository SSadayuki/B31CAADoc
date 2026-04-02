#ifndef CATIWguWkbCfgAddin_h 
#define CATIWguWkbCfgAddin_h 

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#include "CATIWorkbenchAddin.h" 
#include "CATWgdItfCPP.h"

extern ExportedByCATWgdItfCPP IID IID_CATIWguWkbCfgAddin; 

/**
 * Interface to add toolbars in the Wave guide diagram workbench.
 * @see CATIWorkbenchAddin
 */

class ExportedByCATWgdItfCPP CATIWguWkbCfgAddin : public CATIWorkbenchAddin
{
  CATDeclareInterface;
  public:
};

CATDeclareHandler(CATIWguWkbCfgAddin, CATIWorkbenchAddin); 

#endif

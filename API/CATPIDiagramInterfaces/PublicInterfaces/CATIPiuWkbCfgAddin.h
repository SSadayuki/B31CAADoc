#ifndef CATIPiuWkbCfgAddin_h 
#define CATIPiuWkbCfgAddin_h 

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#include "CATIWorkbenchAddin.h" 
#include "CATPidItfCPP.h"

extern ExportedByCATPidItfCPP IID IID_CATIPiuWkbCfgAddin; 

/**
 * Interface to add toolbars in the P&ID diagram workbench.
 * @see CATIWorkbenchAddin
 */

class ExportedByCATPidItfCPP CATIPiuWkbCfgAddin : public CATIWorkbenchAddin
{
  CATDeclareInterface;
  public:
};

CATDeclareHandler(CATIPiuWkbCfgAddin, CATIWorkbenchAddin); 

#endif

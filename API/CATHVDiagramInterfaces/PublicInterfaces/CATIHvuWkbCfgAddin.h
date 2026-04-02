#ifndef CATIHvuWkbCfgAddin_h 
#define CATIHvuWkbCfgAddin_h 

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#include "CATIWorkbenchAddin.h" 
#include "CATHvdItfCPP.h"

extern ExportedByCATHvdItfCPP IID IID_CATIHvuWkbCfgAddin; 

/**
 * Interface to add toolbars in the HVAC diagram workbench.
 * @see CATIWorkbenchAddin
 */

class ExportedByCATHvdItfCPP CATIHvuWkbCfgAddin : public CATIWorkbenchAddin
{
  CATDeclareInterface;
  public:
};

CATDeclareHandler(CATIHvuWkbCfgAddin, CATIWorkbenchAddin); 

#endif



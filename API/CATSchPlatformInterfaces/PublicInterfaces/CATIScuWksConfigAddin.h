#ifndef CATIScuWksConfigAddin_h 
#define CATIScuWksConfigAddin_h 

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#include "CATIWorkbenchAddin.h" 
#include "CATSchItfCPP.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSchItfCPP IID IID_CATIScuWksConfigAddin; 
#else
extern "C" const IID IID_CATIScuWksConfigAddin;
#endif

/**
 * Interface to add toolbars in the CATDiagram workbench.
 * @see CATIWorkbenchAddin
 */
class ExportedByCATSchItfCPP CATIScuWksConfigAddin : public CATIWorkbenchAddin 
{ 
  CATDeclareInterface; 
  public: 
}; 

CATDeclareHandler(CATIScuWksConfigAddin, CATIWorkbenchAddin); 

#endif 

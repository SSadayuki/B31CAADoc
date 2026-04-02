#ifndef CATIPrtWksAddin_h 
#define CATIPrtWksAddin_h 

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#include <CATIWorkbenchAddin.h> 
#include "CATMechanicalModelerUI.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByCATMechanicalModelerUI IID_CATIPrtWksAddin; 
#else
extern "C" const IID IID_CATIPrtWksAddin;
#endif

/**
 * Interface to extend the Part workshop by add in.
 * @see CATIWorkbenchAddin
 */
class ExportedByCATMechanicalModelerUI CATIPrtWksAddin : public CATIWorkbenchAddin 
{ 
  CATDeclareInterface; 
  
public: 

}; 

CATDeclareHandler(CATIPrtWksAddin, CATIWorkbenchAddin); 

#endif 

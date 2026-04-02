// COPYRIGHT Dassault Systemes 2005
//===================================================================
//
// CATICciCompositesWorkbenchAddin.h
// Define the CATICciCompositesWorkbenchAddin interface
//
//===================================================================
//
// Usage notes:
//   New interface: Allows to add a command in Composites workshop
//
//===================================================================
#ifndef CATICciCompositesWorkbenchAddin_H
#define CATICciCompositesWorkbenchAddin_H

/**
* @CAA2Level L1
* @CAA2Usage U5
*/

#include "CAACompositesItf.h"
#include "CATIWorkbenchAddin.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCAACompositesItf IID IID_CATICciCompositesWorkbenchAddin;
#else
extern "C" const IID IID_CATICciCompositesWorkbenchAddin ;
#endif

//------------------------------------------------------------------

/**
  * Composites workshop extension. 
  * <b>Role</b>:  Allows to add a command in Composites workshop
  * @see CATIWorkbench
  */
class ExportedByCAACompositesItf CATICciCompositesWorkbenchAddin: public CATIWorkbenchAddin
{
  CATDeclareInterface;

  public:

};
CATDeclareHandler( CATICciCompositesWorkbenchAddin, CATIWorkbenchAddin );

//------------------------------------------------------------------

#endif

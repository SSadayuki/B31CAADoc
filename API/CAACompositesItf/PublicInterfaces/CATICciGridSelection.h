// COPYRIGHT Dassault Systemes 2009
//===================================================================
//
// CATICciGridSelection.h
// Define the CATICciGridSelection interface
//
//===================================================================
//
// Usage notes:
//   New interface: describe its use here
//
//===================================================================
//
//===================================================================
#ifndef CATICciGridSelection_H
#define CATICciGridSelection_H
/**
* @CAA2Level L0
* @CAA2Usage U3
*/
#include "CAACompositesHMAItf.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCAACompositesHMAItf IID IID_CATICciGridSelection;
#else
extern "C" const IID IID_CATICciGridSelection ;
#endif

//------------------------------------------------------------------

/**
* Interface to Grid Object.
* <br><b>Role</b>: Allows to identify grid object 
* <p>
* Note:Does not implement any access method for the moment 
* @example
*  // example is optional
*  CATICciGridSelection* currentDisplay = NULL;
*  rc = window-&gt;QueryInterface(IID_CATICciGridSelection,
*                                     (void**) &amp;currentDisplay);
*
* @href ClassReference, Class#MethodReference, #InternalMethod...
*/
class ExportedByCAACompositesHMAItf CATICciGridSelection: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

CATDeclareHandler(CATICciGridSelection, CATBaseUnknown);
//------------------------------------------------------------------

#endif

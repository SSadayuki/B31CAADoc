/* -*-c++-*- */
#ifndef CATICS0WKSAddin_h
#define CATICS0WKSAddin_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#include "CATIWorkbenchAddin.h"
#include "CATSkuCommands.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSkuCommands IID IID_CATICS0WKSAddin;
#else
extern "C" const IID IID_CATICS0WKSAddin;
#endif

/**
 * Interface that identifies the components that can be instantiated to manage Add-Ins in the 
 * Sketcher Workshop.
 */
class ExportedByCATSkuCommands CATICS0WKSAddin : public CATIWorkbenchAddin
{
  CATDeclareInterface;
  public:
};

#endif

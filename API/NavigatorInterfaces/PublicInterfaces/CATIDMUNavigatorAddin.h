// COPYRIGHT Dassault Systemes 2002
//===================================================================
//
// CATIDMUNavigatorAddin.h
// Define the CATIDMUNavigatorAddin interface
//
//===================================================================
#ifndef CATIDMUNavigatorAddin_h
#define CATIDMUNavigatorAddin_h

#include "CATIWorkbenchAddin.h"

#include "CATNavigatorItf.h"

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATNavigatorItf IID IID_CATIDMUNavigatorAddin;
#else
extern "C" const IID IID_CATIDMUNavigatorAddin;
#endif

class ExportedByCATNavigatorItf CATIDMUNavigatorAddin : public CATIWorkbenchAddin
{
  CATDeclareInterface;
public:
};

#endif

#ifndef CATIScuWksConfiguration_h
#define CATIScuWksConfiguration_h

// COPYRIGHT DASSAULT SYSTEMES  2000

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#include <CATIWorkbench.h>
#include "CATSchItfCPP.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSchItfCPP IID IID_CATIScuWksConfiguration;
#else
extern "C" const IID_CATIScuWksConfiguration;
#endif

/**
 * Interface that users should implement to extend the CATDiagram workshop.
 * @see CATIWorkbench
 */
 
class ExportedByCATSchItfCPP CATIScuWksConfiguration : public CATIWorkbench
{
  CATDeclareInterface;
  public:
};

#endif

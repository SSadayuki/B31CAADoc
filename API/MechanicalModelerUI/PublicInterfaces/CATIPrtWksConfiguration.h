#ifndef CATIPrtWksConfiguration_h
#define CATIPrtWksConfiguration_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#include <CATIWorkbench.h>
#include "CATMechanicalModelerUI.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMechanicalModelerUI IID IID_CATIPrtWksConfiguration;
#else
extern "C" const IID IID_CATIPrtWksConfiguration;
#endif


/**
 * Interface to create a new workbench in the Part workshop.  
 * @see CATIWorkbench
 */
class ExportedByCATMechanicalModelerUI CATIPrtWksConfiguration : public CATIWorkbench
{
  CATDeclareInterface;
public:
};

#endif

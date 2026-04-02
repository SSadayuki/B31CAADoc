#ifndef CATIWSPROCConfiguration_H
#define CATIWSPROCConfiguration_H
// COPYRIGHT DASSAULT SYSTEMES 1999
//===================================================================
//
/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */

#include "WSPROCESS.h"
#include "CATIWorkbench.h"

extern ExportedByWSPROCESS IID IID_CATIWSPROCConfiguration ;

//------------------------------------------------------------------

/**
 * Interface that should be implemented to extend the Process workshop.
 * @see CATIWorkbench
 */
class ExportedByWSPROCESS CATIWSPROCConfiguration: public CATIWorkbench
{
  CATDeclareInterface;

  public:
};

//------------------------------------------------------------------

CATDeclareHandler( CATIWSPROCConfiguration, CATIWorkbench );

#endif

#ifndef CATIWSPROCAddin_h
#define CATIWSPROCAddin_h
// COPYRIGHT DASSAULT SYSTEMES 1999
//===================================================================
//
/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */

#include <CATIWorkbenchAddin.h>
#include "WSPROCESS.h"

extern ExportedByWSPROCESS IID IID_CATIWSPROCAddin;

/**
   * Interface that should be implemented to extend the Process workshop addins.
   * @see CATIWorkbenchAddin
   */

class ExportedByWSPROCESS CATIWSPROCAddin : public CATIWorkbenchAddin
{

    CATDeclareInterface;

public:

};

CATDeclareHandler( CATIWSPROCAddin, CATIWorkbenchAddin );

#endif

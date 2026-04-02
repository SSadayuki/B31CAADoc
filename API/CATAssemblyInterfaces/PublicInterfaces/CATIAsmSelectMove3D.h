// COPYRIGHT DASSAULT SYSTEMES  1998
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#ifndef CATIAsmSelectMove3D__H
#define CATIAsmSelectMove3D__H

#include "CATISelectMove3D.h"
#include "CATAssemblyInterfaces.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAssemblyInterfaces  IID IID_CATIAsmSelectMove3D ;
#else
extern "C" const IID IID_CATIAsmSelectMove3D ;
#endif

/**
*   Customized interface for compass manipulator behaviour in Assembly workbench.
*/

class ExportedByCATAssemblyInterfaces CATIAsmSelectMove3D : public CATISelectMove3D
{
  CATDeclareInterface; 

  public:

};

CATDeclareHandler(CATIAsmSelectMove3D,CATISelectMove3D); 
#endif







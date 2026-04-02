#ifndef CATIMSHAdvWorkbenchAddin_h
#define CATIMSHAdvWorkbenchAddin_h

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1 
 * @CAA2Usage U5 
 */

#include "MSHModel.h"
#include "CATIWorkbenchAddin.h"

/**
* Interface to create an addin within Advanced Meshing Tools workbench.
* <b>Role</b>: Advanced Meshing Tools workbench can be customized by the client 
* application programmer. This customization consists in putting commands into one or 
* several new toolbars, and add these toolbars to the workbench. 
* See @href CATIWorkbenchAddin#CreateCommands or @href CATIWorkbenchAddin#CreateToolbars methods
* that should be implemented.
*/

extern ExportedByMSHModel IID IID_CATIMSHAdvWorkbenchAddin ;

class ExportedByMSHModel CATIMSHAdvWorkbenchAddin: public CATIWorkbenchAddin
{
  CATDeclareInterface;

public:
};

CATDeclareHandler ( CATIMSHAdvWorkbenchAddin , CATIWorkbenchAddin );
#endif

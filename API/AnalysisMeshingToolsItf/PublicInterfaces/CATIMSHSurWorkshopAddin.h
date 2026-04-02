#ifndef CATIMSHSurWorkshopAddin_h
#define CATIMSHSurWorkshopAddin_h

// COPYRIGHT Dassault Systemes 2002

/**
 * @CAA2Level L0 
 * @CAA2Usage U3
 */

#include "MSHUITools.h"
#include "CATIWorkbenchAddin.h"

extern ExportedByMSHUITools IID IID_CATIMSHSurWorkshopAddin ;

/**
* Interface to create an addin in Surface mesher.
* <b>Role</b>: Existing workshops or workbenches can be customized by the client 
* application programmer. This customization consists in putting commands into one or 
* several new toolbars, and add these toolbars to the appropriate workshop or workbench,
* in this case Surface mesher.
* Two methods must be implemented:
* <ul><li>the<b> CreateCommands </b> method;
* <li>the <b> CreateToolbars </b> method.
* </ul> 
* Note that an add-in cannot customize the menu bar. 
* <br>
* @see CATIWorkshop, CATIWorkbench, CATIWorkbenchAddin
*/

class ExportedByMSHUITools CATIMSHSurWorkshopAddin: public CATIWorkbenchAddin
{
  CATDeclareInterface;

public:
};

CATDeclareHandler ( CATIMSHSurWorkshopAddin , CATIWorkbenchAddin );
#endif

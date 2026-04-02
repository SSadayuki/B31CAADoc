/* -*-c++-*- */
#ifndef CATICATALOGWorkshopAddin_h 
#define CATICATALOGWorkshopAddin_h 
// COPYRIGHT DASSAULT SYSTEMES 2000
/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#include "CATCclInterfaces.h"
#include "CATIWorkbenchAddin.h" 

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATCclInterfaces IID IID_CATICATALOGWorkshopAddin; 
#else
extern "C" const IID IID_CATICATALOGWorkshopAddin;
#endif


/** 
*Interface to customize the Catalog workshop. 
*<b>Role:</b>This interface allows you adding commands in toolbars and/or in menu bar in the Catalog workshop. <br>
*            This commands will appear when opening a Catalog document. 
*/
class ExportedByCATCclInterfaces CATICATALOGWorkshopAddin : public CATIWorkbenchAddin 
{ 
  CATDeclareInterface; 
  
public: 

}; 

CATDeclareHandler(CATICATALOGWorkshopAddin, CATIWorkbenchAddin); 

#endif 

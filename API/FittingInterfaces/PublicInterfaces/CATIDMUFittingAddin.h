#ifndef CATIDMUFittingAddin_h
#define CATIDMUFittingAddin_h

//===================================================================
// COPYRIGHT DELMIA CORP. 1999
// COPYRIGHT DASSAULT SYSTEMES 2006
//===================================================================
//
// CATIDMUFittingAddin.h
// Definition of the interface to provide an addin for workbench DMU Fitting.
//
//===================================================================
//
// Usage notes:
// This class defines a new addin interface for the workbench 
// DMU Fitting.
//
//===================================================================
// Code History : 
//      cre     ???     ??/??/????      Creation
//      mod     bpl     04/12/2006      Moved from FittingSimulation to FittingInterfaces
//===================================================================

/**  
*  @CAA2Level  L0
*  @CAA2Usage  U5    
*/  

#include <CATIWorkbenchAddin.h>
#include "G60I0FIT.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByG60I0FIT IID IID_CATIDMUFittingAddin;
#else
extern "C" const IID IID_CATIDMUFittingAddin;
#endif

/**  
*  Interface  to  create  an  addin  within  DMU Fitting workbench.  
*  <b>Role</b>:  DMU Fitting  workbench  can  be  customized  by  the  client    
*  application  programmer.  This  customization  consists  in  putting  commands  into  one  or    
*  several  new  toolbars,  and  add  these  toolbars  to  the  workbench.    
*  See  @href  CATIWorkbenchAddin#CreateCommands  or  @href  CATIWorkbenchAddin#CreateToolbars  methods  
*  that  should  be  implemented.  
*/  
class ExportedByG60I0FIT CATIDMUFittingAddin : public CATIWorkbenchAddin
{
  CATDeclareInterface;
public:
};

#endif

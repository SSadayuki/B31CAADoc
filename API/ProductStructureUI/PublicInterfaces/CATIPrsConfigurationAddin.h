#ifndef CATIPrsConfigurationAddin_h 
#define CATIPrsConfigurationAddin_h 
#include <CATIWorkbenchAddin.h> 

#ifdef _WINDOWS_SOURCE 
#ifdef __CATPrsWkbPrsConfiguration
#define ExportedByCATPrsWkbPrsConfiguration  __declspec(dllexport) 
#else
#define ExportedByCATPrsWkbPrsConfiguration  __declspec(dllimport) 
#endif
#else
#define ExportedByCATPrsWkbPrsConfiguration
#endif

// COPYRIGHT DASSAULT SYSTEMES  1999

/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */

extern ExportedByCATPrsWkbPrsConfiguration IID IID_CATIPrsConfigurationAddin; 

/**
 * Interface to add toolbars in the ProductStructure workbench.
 * @see CATIWorkbenchAddin
 */

class ExportedByCATPrsWkbPrsConfiguration CATIPrsConfigurationAddin : public CATIWorkbenchAddin 
{ 
  CATDeclareInterface; 
  
public: 

}; 

CATDeclareHandler(CATIPrsConfigurationAddin, CATIWorkbenchAddin); 

#endif

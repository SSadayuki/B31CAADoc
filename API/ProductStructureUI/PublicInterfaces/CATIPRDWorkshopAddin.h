#ifndef CATIPRDWorkshopAddin_h 
#define CATIPRDWorkshopAddin_h 
#ifdef _WINDOWS_SOURCE 
#ifdef __CATPrsWksPRDWorkshop
#define ExportedByCATPrsWksPRDWorkshop  __declspec(dllexport) 
#else
#define ExportedByCATPrsWksPRDWorkshop  __declspec(dllimport) 
#endif
#else
#define ExportedByCATPrsWksPRDWorkshop
#endif
// COPYRIGHT DASSAULT SYSTEMES  2001

/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */

#include <CATIWorkbenchAddin.h> 

extern ExportedByCATPrsWksPRDWorkshop IID IID_CATIPRDWorkshopAddin;

/**
 * Interface that should be implemented to extend the ProductStructure workshop addins.
 * @see CATIWorkbenchAddin
 */

class ExportedByCATPrsWksPRDWorkshop CATIPRDWorkshopAddin : public CATIWorkbenchAddin 
{ 
  CATDeclareInterface; 
  
public: 

}; 

CATDeclareHandler(CATIPRDWorkshopAddin, CATIWorkbenchAddin); 

#endif 

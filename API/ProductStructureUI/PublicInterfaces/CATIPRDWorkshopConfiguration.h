#ifndef CATIPRDWorkshopConfiguration_h
#define CATIPRDWorkshopConfiguration_h
#ifdef _WINDOWS_SOURCE 
#ifdef __CATPrsWksPRDWorkshop
#define ExportedByCATPrsWksPRDWorkshop  __declspec(dllexport) 
#else
#define ExportedByCATPrsWksPRDWorkshop  __declspec(dllimport) 
#endif
#else
#define ExportedByCATPrsWksPRDWorkshop
#endif
// COPYRIGHT DASSAULT SYSTEMES  1999

/**
  * @CAA2Level L1
  * @CAA2Usage U5
  */

#include <CATIWorkbench.h>

extern ExportedByCATPrsWksPRDWorkshop IID IID_CATIPRDWorkshopConfiguration;

/**
 * Interface that should be implemented to extend the ProductStructure workshop.
 * @see CATIWorkbench
 */
 
class ExportedByCATPrsWksPRDWorkshop CATIPRDWorkshopConfiguration : public CATIWorkbench
{
  CATDeclareInterface;
public:
};


CATDeclareHandler(CATIPRDWorkshopConfiguration, CATIWorkbench);

#endif

#ifndef CATICATSAMWorkshopAddin_h
#define CATICATSAMWorkshopAddin_h
//=================================================================================
// COPYRIGHT DASSAULT SYSTEMES 2000
//=================================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#include "CATIWorkbenchAddin.h"

#include "CATAnalysisInterface.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATICATSAMWorkshopAddin;
#else
extern "C" const IID IID_CATICATSAMWorkshopAddin;
#endif


/**
* Interface to derive to create an addin of the Analysis workshop.
* <b>Role</b>: The SAMWorkshop  workbench can be customized by the client 
* application programmer. This customization consists in putting commands into one or 
* several new toolbars.
* @see CATIWorkbenchAddin
*/

class ExportedByCATAnalysisInterface CATICATSAMWorkshopAddin : public CATIWorkbenchAddin
{
  CATDeclareInterface;

  public:
};

#endif

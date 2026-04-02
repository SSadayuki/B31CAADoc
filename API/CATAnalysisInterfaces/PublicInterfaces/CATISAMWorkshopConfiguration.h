#ifndef CATISAMWorkshopConfiguration_h
#define CATISAMWorkshopConfiguration_h
// COPYRIGHT DASSAULT SYSTEMES 1999
//===================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */
//===================================================================
#include "CATAnalysisInterface.h" 
#include "CATIWorkbench.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISAMWorkshopConfiguration;
#else
extern "C" const IID IID_CATISAMWorkshopConfiguration;
#endif

/**
 * Entend the Analysis Workshop.
 * <b>Role</b>:
 * Interface to implement by the workbench that want to be integrated in SAMWorkshop.
 * @see CATIWorkbench
 */

class ExportedByCATAnalysisInterface CATISAMWorkshopConfiguration : public CATIWorkbench
{
  CATDeclareInterface;

public:
};
#endif

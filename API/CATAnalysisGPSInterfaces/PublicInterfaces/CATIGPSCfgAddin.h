//===================================================================
// COPYRIGHT Dassault Systemes 2002
//===================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */
#ifndef CATIGPSCfgAddin_h
#define CATIGPSCfgAddin_h

#include "CATIWorkbenchAddin.h"
#include "CATAnalysisGPSInterfaces.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisGPSInterfaces IID IID_CATIGPSCfgAddin;
#else
extern "C" const IID IID_CATIGPSCfgAddin;
#endif

/**
 * Interface to create an AddIn of Generative Structural Analysis Workbench.
 */ 

class ExportedByCATAnalysisGPSInterfaces CATIGPSCfgAddin : public CATIWorkbenchAddin
	{
	CATDeclareInterface;
	public:
	};

#endif

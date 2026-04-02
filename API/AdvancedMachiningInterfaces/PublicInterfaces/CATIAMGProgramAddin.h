#ifndef CATIAMGProgramAddin_h
#define CATIAMGProgramAddin_h
//=================================================================================
// COPYRIGHT DASSAULT SYSTEMES 2003
//=================================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#include "CATIWorkbenchAddin.h"
#include "CATMfgAMGItfEnv.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMfgAMGItfEnv IID IID_CATIAMGProgramAddin;
#else
extern "C" const IID IID_CATIAMGProgramAddin;
#endif

/**
 * Interface to add toolbars in the Advanced Machining Workbench.
 * <b>Role</b>:
 * This inferface may be implemented in order to add new toolbars in the
 * Advanced Machining Workbench.
 * @see CATIWorkbenchAddin
 */

class ExportedByCATMfgAMGItfEnv CATIAMGProgramAddin : public CATIWorkbenchAddin
{
	CATDeclareInterface;
	public:
};
#endif

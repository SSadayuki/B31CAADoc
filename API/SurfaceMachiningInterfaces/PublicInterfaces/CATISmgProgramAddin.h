#ifndef CATISmgProgramAddin_h
#define CATISmgProgramAddin_h
//=================================================================================
// COPYRIGHT DASSAULT SYSTEMES 2002
//=================================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#include "CATIWorkbenchAddin.h"
#include "SmgItfEnv.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySmgItfEnv IID IID_CATISmgProgramAddin;
#else
extern "C" const IID IID_CATISmgProgramAddin;
#endif

/**
 * Interface to add toolbars in the Surface Machinist Workbench.
 * <b>Role</b>:
 * This inferface may be implemented in order to add new toolbars in the
 * Surface Machinist Workbench.
 * @see CATIWorkbenchAddin
 */

class ExportedBySmgItfEnv CATISmgProgramAddin : public CATIWorkbenchAddin
{
	CATDeclareInterface;
	public:
};

#endif

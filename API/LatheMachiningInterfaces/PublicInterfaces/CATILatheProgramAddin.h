#ifndef CATILatheProgramAddin_h
#define CATILatheProgramAddin_h
//=================================================================================
// COPYRIGHT DASSAULT SYSTEMES 2004
//=================================================================================
/**
* @CAA2Level L1
* @CAA2Usage U5
*/
#include "CATIWorkbenchAddin.h"
#include "LatheMachCAAItfEnv.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByLatheMachCAAItfEnv IID IID_CATILatheProgramAddin;
#else
extern "C" const IID IID_CATILatheProgramAddin;
#endif

/**
 * Interface to add toolbars in the Lathe Machining Workbench.
 * <b>Role</b>:
 * This inferface may be implemented in order to add new toolbars in the
 * Lathe Machining Workbench.
 * @see CATIWorkbenchAddin
 */
class ExportedByLatheMachCAAItfEnv CATILatheProgramAddin : public CATIWorkbenchAddin
{
	CATDeclareInterface;
    public:
};

#endif

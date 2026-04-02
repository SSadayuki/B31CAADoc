#ifndef CATIMfgApplicativeWorkbench_h
#define CATIMfgApplicativeWorkbench_h

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================

/**
* @CAA2Level L1
* @CAA2Usage U5
*/

//module
#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgApplicativeWorkbench;
#else
extern "C" const IID IID_CATIMfgApplicativeWorkbench;
#endif

/**   
 * Interface dedicated to a machining application workbench management.
 * <b>Role</b>: This interface is dedicated to create a machining application workbench.<br>
 * 
 * @see CATIWorkbench
 */

class ExportedByMfgItfEnv CATIMfgApplicativeWorkbench : public CATBaseUnknown
{
	CATDeclareInterface;

    public:
};

CATDeclareHandler( CATIMfgApplicativeWorkbench, CATBaseUnknown) ;

#endif

#ifndef CATIMfgEEWorkbenchMgt_h
#define CATIMfgEEWorkbenchMgt_h

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2003
//=============================================================================

/**
* @CAA2Level L0
* @CAA2Usage U3
*/

//module
#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"
#include "CATListOfCATUnicodeString.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgEEWorkbenchMgt;
#else
extern "C" const IID IID_CATIMfgEEWorkbenchMgt;
#endif

/**   
 * Interface dedicated to a machining application workbench management.
 * <b>Role</b>: This interface is dedicated to customized a machining application workbench.<br>
 * 
 * @see CATIWorkbench
 */

class ExportedByMfgItfEnv CATIMfgEEWorkbenchMgt : public CATBaseUnknown
{
	CATDeclareInterface;

    public:

    /**
    * Retrieves the list of authorized tools within the releveant workbench.
    * @param ioListClass
    *   The list of tools' typelate authorized (initialized with default machining tools)
    */
	virtual HRESULT GetAuthorizedTools (CATListOfCATUnicodeString & ioListClass) = 0;
};

CATDeclareHandler (CATIMfgEEWorkbenchMgt, CATBaseUnknown) ;

#endif

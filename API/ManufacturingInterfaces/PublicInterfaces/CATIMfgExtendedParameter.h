#ifndef CATIMfgExtendedParameter_H
#define CATIMfgExtendedParameter_H
//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES  2000
//=============================================================================
//
// CATIMfgExtendedParameter : extended parameter management
//
//=============================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U5
*/
// module
#include "MfgItfEnv.h"

// inheritance
#include "CATBaseUnknown.h"

// forwards
class CATUnicodeString;
class CATICkeParm_var;

// OLE iid
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMfgItfEnv IID IID_CATIMfgExtendedParameter;
#else
extern "C" const IID IID_CATIMfgExtendedParameter;
#endif
/**   
 * Interface dedicated to extended parameter management.
 * <b>Role</b>: This interface offers services to convert extended parameter.<br>
 */
class ExportedByMfgItfEnv CATIMfgExtendedParameter : public CATBaseUnknown
{
CATDeclareInterface ;  

public:
/**
 * Convert an extended parameter into a real parameter. 
 * <br>
 * @param iPackage
 *   The name of the package
 * @param iType
 *   The type of the parameter
 * @param iParameter
 *   The name of the parameter
 * @param oParm
 *   The resulting real parameter
 * <br>
 * Return codes are:
 * <br>
 *   S_OK if the conversion has be done and oParm has been valuated properly.
 *   E_FAIL if the combination package/type is valid but an error has occured.
 *   S_FALSE if the implementation is not able to treat the package or the give type.
 */
	virtual HRESULT Convert(const CATUnicodeString& iPackage,
                          const CATUnicodeString& iType,
                          const CATUnicodeString& iParameter,
                          CATICkeParm_var&        oParm) = 0;
};

CATDeclareHandler(CATIMfgExtendedParameter, CATBaseUnknown);
#endif // CATIMfgExtendedParameter_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 *
 */

#include "GUIDVPMInterfaces.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIConfigurableObjectUE;
#else
extern "C" const IID IID_CATIConfigurableObjectUE;
#endif

#ifndef CATIConfigurableObjectUE_H_
#define CATIConfigurableObjectUE_H_

#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "sequence_octet.h"
#include "CATICfgModification.h"
#include "CATICfgORExpression.h"


class ExportedByGUIDVPMInterfaces  CATIConfigurableObjectUE : public CATBaseUnknown
{

	 CATDeclareInterface;
	 
public:
	 
/** @nodoc
 *  Ckeck specific rules when a modification is set on a filterable object.
 *  @param iObjectUUID
 *  @param Modification
 */	 
	 virtual HRESULT CheckAbilityToAttach(const SEQUENCE(octet) & iObjectUUID, 
                                                                const CATICfgModification_var & Modification) = 0;

/** @nodoc
 *	 Check specific rules when valuatinge an effectivity
 */
	 virtual HRESULT CheckCfgRules(const CATUnicodeString & iName, const CATICfgORExpression_var &iOrExp,
								   const CATICfgModification_var & Modification) = 0;
/** @nodoc
 *	 Returns the list of domains that should not be relimited during a cut, replace or move operation
 */
	 virtual  HRESULT GetNoRelimitDomain(const CATUnicodeString & iParameter, const CATListOfCATUnicodeString &iDomainList, CATListOfCATUnicodeString &oNoRelimitDomain) = 0;
	 
};

CATDeclareHandler(CATIConfigurableObjectUE,CATBaseUnknown);

#endif


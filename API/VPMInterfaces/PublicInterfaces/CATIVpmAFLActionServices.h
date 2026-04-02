// ========================================================================
// COPYRIGHT DASSAULT SYSTEMES 2015
// ========================================================================
// CATIVpmAFLActionServices.h
// ========================================================================
// Usage Notes :
//=========================================================================
// Creation : NJ2, 2015/05/15
//=========================================================================

#ifndef __CATIVPMAFLACTIONSERVICES_H__
#define __CATIVPMAFLACTIONSERVICES_H__

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "GUIDVPMInterfaces.h"
#include "CATBoolean.h"
#include "CATListOfCATIVpmAFLAffectedObject.h"

#ifndef LOCAL_DEFINITION_FOR_IID
	extern  ExportedByGUIDVPMInterfaces IID IID_CATIVpmAFLActionServices;
#else
	extern "C" const IID IID_CATIVpmAFLActionServices;
#endif

class CATIVpmAFLAction_var;

class ExportedByGUIDVPMInterfaces CATIVpmAFLActionServices : public CATBaseUnknown
{
	CATDeclareInterface;

public:

	/**
	* Split affected objects form source action to target action.
	* @param iTargetAction
	*    Target action to which affected objects split from source action.
	* @param iListOfAffectedObjectsToSplit
	*    List affected objects needs to split.
	* @param iForceSplit
	*    If TRUE, will Ignore common condition on source / target action, if it has any and continue split.
	*    If FALSE, will not ignore common condition on source / target action, if found return E_FAIL.
	*/
	virtual HRESULT SplitAffectedObjects( 
		CATIVpmAFLAction_var& iTargetAction, 
	    CATListOfCATIVpmAFLAffectedObject &iListOfAffectedObjectsToSplit,
	    CATBoolean iForceSplit 
	) = 0;
};

CATDeclareHandler(CATIVpmAFLActionServices, CATBaseUnknown);

#endif //__CATIVPMAFLACTIONSERVICES_H__

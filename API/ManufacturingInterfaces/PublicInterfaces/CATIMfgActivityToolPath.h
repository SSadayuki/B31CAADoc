//===================================================================
// COPYRIGHT Dassault Systemes 2018
//===================================================================

#ifndef CATIMfgActivityToolPath_H
#define CATIMfgActivityToolPath_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "MfgItfEnv.h"
#include "CATBaseUnknown.h"

extern ExportedByMfgItfEnv IID IID_CATIMfgActivityToolPath;

/**
*  Interface to compute the tool path of an activity.
*/

class ExportedByMfgItfEnv CATIMfgActivityToolPath : public CATBaseUnknown
{
	CATDeclareInterface;

public:

	/**
	* Compute and set Tool Path for this operation.
	*/
	virtual HRESULT ComputeAndSetToolPath() = 0;

};

//-----------------------------------------------------------------------
CATDeclareHandler(CATIMfgActivityToolPath, CATBaseUnknown);

#endif

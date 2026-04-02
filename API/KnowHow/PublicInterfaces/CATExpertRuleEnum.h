#ifndef CATExpertRuleEnum_H
#define CATExpertRuleEnum_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/** 
* @CAA2Level L1
* @CAA2Usage U1
*/

#include "Rule.h"

/**
* Enumerated type for the solving type of the rule base.
*/

class ExportedByRule CATExpertRuleEnum
{
	
public:
	/**
	* Solving type of the rule base.
	*
	* @param Forward   Forward propagation.
	* @param Backward  Backward propagation.
	* @param Mixed     Mixed.
	*/
	enum InferenceEngineType
	{
		Forward,
		Backward,
		Mixed
	} ;
	
private:
	CATExpertRuleEnum();
};

#endif

#ifndef CATExpertSolveModeEnum_H
#define CATExpertSolveModeEnum_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/** 
* @CAA2Level L1
* @CAA2Usage U1
*/

#include "Rule.h"

/**
* Enumerated type for the retrieving of facts needed by the rulebase.
*
* The facts to be given to a rulebase, can be found in two ways :
* <br>
* <dl><dt>Optimized     <dd> the fact, when created, tells the rulebase it has been created, with the following code :
* <pre>
* CATIInstance_var myFact(myObject);
* if (!!myFact)
* {
*   CATITypeDictionary_var myDico = CATGlobalFunctions::GetTypeDictionary();
*   CATIType_var myFactType = myFact->Type();
*   if (!!myDico && !!myFactType)
*     myDico->AdviseInstanciated(myFactType,myFact);
*   if (!!myFactType) myFactType->Release();
* }
* </pre>
*     <dt>Not optimized <dd> the rule base searches through the roots of facts it has been given.
*                            
* </dl>
*/

class ExportedByRule CATExpertSolveModeEnum
{
public:
	/**
	* Retrieving of facts for the rulebase, done just before solving the rulebase.
	*
	* @param AutomaticComplete  Reacts on creation of new facts by cleaning up all previously found facts
	*                           and then searching for all facts.
	* @param AutomaticOptimized Reacts on creation of new facts by keeping all previously found facts
	*                           and adding only new ones.
	* @param Manual             Doesn't react on creation of new facts (triggering has to be manual).
	*/
	enum SolveModeEnum
	{   
		AutomaticComplete = 1,
		AutomaticOptimized = 2,
		Manual = 3
	} ;
    
private:
	CATExpertSolveModeEnum();
};

#endif

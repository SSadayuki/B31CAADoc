/* -*-c++-*- */
#ifndef CATIRule_H
#define CATIRule_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/** 
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATIRuleBaseComponent.h"
#include "Rule.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByRule IID IID_CATIRule ;
#else
extern "C" const IID IID_CATIRule ;
#endif


/**
* Interface dedicated to describing expert rules.
*
* <b>Role</b> An expert rule is a component able to act on objects verifying
* a certain condition.
* <br>
* As many rules can be applied at the same time on
* an object (their conditions are simultaneously true), these rules
* can be specified to act in a certain order, determined by their priorities.
* The rule with the highest priority is selected first.
*/

class ExportedByRule CATIRule: public CATIRuleBaseComponent
{
	CATDeclareInterface;
	
public:
	/**
	* Sets the priority of the rule.
	*
	* @param iPriority the priority.
	*/
	virtual void					SetPriority      (double iPriority)=0;

	/**
	* Gets the priority of the rule.
	*
	* @return the priority.
	*/
	virtual double					GetPriority      ()=0;
};

// --------------------------------------------------------------------------
//                             Handler
// --------------------------------------------------------------------------

CATDeclareHandler(CATIRule, CATIRuleBaseComponent) ;

#endif

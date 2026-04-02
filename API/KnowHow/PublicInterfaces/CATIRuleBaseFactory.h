#ifndef CATIRuleBaseFactory_H
#define CATIRuleBaseFactory_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/** 
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATBaseUnknown.h"
#include "CATISpecObject.h"
#include "CATIContainer.h"

#include "Rule.h"

#include "CATIRuleBaseComponent.h"

class CATIRuleBase_var ;
class CATIRuleSet_var ;
class CATIRule_var ;
class CATICheck_var ;
class CATICheckReport_var ;
class CATIReportObject_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByRule IID IID_CATIRuleBaseFactory ;
#else
extern "C" const IID IID_CATIRuleBaseFactory ;
#endif

/**
* Interface dedicated to describe the factory for creation of rulebases, rulesets, rules and checks.
*
* <b>Role</b> this interface describes how to create plain rulebases,
* linked rulebases (the rulebase is in another document, but
* it is seen as if it were in the current document), rulesets,
* rules checks and reports.
* <br>
* The created rulesets, rules or checks have to be added to the
* desired ruleset through the appropriate Add service of @href CATIRuleSet .
*/

class ExportedByRule CATIRuleBaseFactory: public CATBaseUnknown
{
	CATDeclareInterface;
	
public :
	/**
	* Creates a linked rule base in a container.
	*
	* @param iName   Name of the rulebase.
	* @param spOwner Name of a feature under which the base is to be added.
	*                <b>Default values</b>: the rule base is added in the container.
	*
	* @return the created rule base.
	*/
	virtual CATIRuleBase_var CreateLinkedBase( const CATUnicodeString& iName, const CATISpecObject_var& spOwner = NULL_var )=0;
	
	/**
	* Creates a rule base.
	*
	* @param iName   Name of the rulebase.
	* @param spOwner Name of a feature under which the base is to be added.
	*                <b>Default values</b>: the rule base is added in the container.
	*
	* @return the created rule base.
	*/
	virtual CATIRuleBase_var CreateBase( const CATUnicodeString& iName, const CATISpecObject_var& spOwner = NULL_var )=0;
	
	/**
	* Creates a rule set in a container.
	*
	* @param iName Name of the rule set.
	*
	* @return the created rule set.
	*/
	virtual CATIRuleSet_var CreateRuleset ( const CATUnicodeString& iName )=0;
	
	/**
	* Creates a rule in a container.
	*
	* @param iName      Name of the rule.
	* @param iVariables Variables of the rule.
	* @param iBody      Body of the rule.
	* @param iLanguage  Language of the rule.
	*
	* @return the created rule.
	*/
	virtual CATIRule_var CreateRule( const CATUnicodeString& iName,
		const CATUnicodeString& iVariables,
		const CATUnicodeString& iBody,
		CATIRuleBaseComponent::RuleBaseComponentLanguage iLanguage = CATIRuleBaseComponent::KWELanguage)=0;
	
	/**
	* Creates a check in a container.
	*
	* @param iName      Name of the check.
	* @param iVariables Variables of the check.
	* @param iBody      Body of the check.
	* @param iLanguage  Language of the check.
	*
	* @return the created check.
	*/
	virtual CATICheck_var CreateCheck( const CATUnicodeString& iName,
		const CATUnicodeString& iVariables,
		const CATUnicodeString& iBody,
		CATIRuleBaseComponent::RuleBaseComponentLanguage iLanguage = CATIRuleBaseComponent::KWELanguage)=0;
	
	/**
	* Creates a report object for a check report.
	*
	* @param iName         Name of the report.
	* @param spCheckReport Check report on which the report is to be done.
	*
	* @return a report object.
	*/
	virtual CATIReportObject_var CreateReport( const CATUnicodeString& iName, CATICheckReport_var& spCheckReport) = 0;

	/**
	* Creates a linked rule base in a container.
	*
	* @param iName   Name of the rulebase.
	* @param iRuleBase   Rule Base linked.
	* @param spOwner Name of a feature under which the base is to be added.
	*                <b>Default values</b>: the rule base is added in the container.
	*
	* @return the created a linked rule base.
	*/
	virtual CATIRuleBase_var CreateLinkedRuleBase( const CATUnicodeString& iName, const CATIRuleBase_var& iRuleBase,const CATISpecObject_var& spOwner = NULL_var )=0;

};

// --------------------------------------------------------------------------
//                             Handler
// --------------------------------------------------------------------------

CATDeclareHandler(CATIRuleBaseFactory, CATBaseUnknown) ;

#endif

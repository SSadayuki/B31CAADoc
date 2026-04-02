/* -*-c++-*- */
#ifndef CATIRuleSet_H
#define CATIRuleSet_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/** 
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATIGenericRuleBaseComponent.h"
#include "CATIRuleBaseComponent.h"
#include "CATIRule.h"
#include "CATICheck.h"
#include "Rule.h"
#include "CATCke.h"
#include "CATExpertRuleEnum.h"
#include "CATExpertReportEnum.h"

#include "CATLISTV_CATIGenericRuleBaseComponent.h"
#include "CATLISTV_CATIRuleBaseComponent.h"
#include "CATLISTV_CATIRuleSet.h"

class CATIRuleSet_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByRule IID IID_CATIRuleSet ;
#else
extern "C" const IID IID_CATIRuleSet ;
#endif

/**
* Function pointer dedicated to the management of conflict when importing
* a rulebase into another one.
*
* The first argument is the rulebase trying to import, the second argument is the
* conflicting object. The return value is a boolean telling if the import of the
* conflicting object is to be done or not.
*
* <pre>
* int forceImport(CATBaseUnknown_var aRBComp, CATBaseUnknown_var aComp)
* {
*   CATIRuleSet_var aTrueRS (aRBComp);
*
*   if (aTrueRS != NULL_var)
*   {
*     CATIRuleSet_var aTrueRSComp (aComp);
*     if (aTrueRSComp != NULL_var)
*     {
*       aTrueRS->RemoveRuleSet(aTrueRSComp);
*       return 1;
*     }
*     else
*     {
*       CATIRuleBaseComponent_var aTrueRBComp (aComp);
*       if (aTrueRBComp != NULL_var)
*       {
*         aTrueRS->RemoveRuleBaseComponent(aTrueRS);
*         return 1;
*       }
*     }
*   }
*   return 0;
* }
* </pre>
*/
typedef int (*conflictingImportFunctionPtr) (CATBaseUnknown_var, CATBaseUnknown_var);

/**
* Interface dedicated to elementary operations on a rule set.
*
* <b>Role</b> Rule sets are used for the hierarchical organization of expert rules
* and expert checks. Under a rule base, one creates rule sets, and in rule sets,
* other rule sets, and so on ... The checks and rules can then be grouped in
* rule sets.
*
* @see CATIRuleBase, CATIRule, CATICheck .
*/

class ExportedByRule CATIRuleSet: public CATIGenericRuleBaseComponent
{
	CATDeclareInterface;
	
public:
	/**
	* Creates a rule set under the current ruleset.
	*
	* @param oCreatedRuleSet The created ruleset.
	* @param iName Name of the rule set.
	* @return S_OK or E_FAIL
	*/
	virtual HRESULT CreateRuleset ( CATIRuleSet_var& oCreatedRuleSet , const CATUnicodeString& iName )=0;
	
	/**
	* Creates a rule under the current ruleset.
	*
	* @param oCreatedRule The created rule.
	* @param iName      Name of the rule.
	* @param iVariables Variables of the rule.
	* @param iBody      Body of the rule.
	* @param iLanguage  Language of the rule.
	* @return S_OK or E_FAIL
	*/
	virtual HRESULT CreateRule( CATIRule_var& oCreatedRule, 
		const CATUnicodeString& iName,
		const CATUnicodeString& iVariables,
		const CATUnicodeString& iBody,
		CATIRuleBaseComponent::RuleBaseComponentLanguage iLanguage = CATIRuleBaseComponent::KWELanguage)=0;
	
	/**
	* Creates a check under the current ruleset.
	*
	* @param oCreatedCheck The created check.
	* @param iName      Name of the check.
	* @param iVariables Variables of the check.
	* @param iBody      Body of the check.
	* @param iLanguage  Language of the check.
	* @return S_OK or E_FAIL
	*/
	virtual HRESULT CreateCheck( CATICheck_var& oCreatedCheck,
		const CATUnicodeString& iName,
		const CATUnicodeString& iVariables,
		const CATUnicodeString& iBody,
		CATIRuleBaseComponent::RuleBaseComponentLanguage iLanguage = CATIRuleBaseComponent::KWELanguage)=0;

	/**
	* Imports the contents of a ruleset into the current one.
	*
	* @param iRuleSetToImport A ruleset to import the contents from.
	* @param iFct A function triggered on conflicting objects.
	* @return S_OK or E_FAIL
	*/
	virtual HRESULT ImportRuleSet(const CATIRuleSet_var& iRuleSetToImport, conflictingImportFunctionPtr iFct = NULL)=0;

	/**
	* Adds a rulebase component under this rule set, if a rulebase component with
	* the same name does not already exist.
	*
	* @param spRuleBaseComponent a rulebase component.
	* @return the component under the rule set (the previous one if one with same name already exists)
	*/
	virtual CATIRuleBaseComponent_var AddRuleBaseComponent   (const CATIRuleBaseComponent_var& spRuleBaseComponent)=0 ;
	
	/**
	* Adds a ruleset under this rule set, if a ruleset with
	* the same name does not already exist.
	*
	* @param spRuleSet a rulebase component.
	* @return the component under the rule set (the previous one if one with same name already exists)
	*/
	virtual CATIRuleSet_var           AddRuleSet             (const CATIRuleSet_var & spRuleSet)=0;
	
	/**
	* Removes a rule base component under this rule set.
	*
	* @param spRuleBaseComponent a rule base component.
	*/
	virtual void                      RemoveRuleBaseComponent(const CATIRuleBaseComponent_var& spRuleBaseComponent)=0 ;
	
	/**
	* Removes a ruleset under this rule set.
	*
	* @param spRuleSet a rule base component.
	*/
	virtual void                      RemoveRuleSet          (const CATIRuleSet_var& spRuleSet)=0;
	
    /**
	* Returns the first rulebase component (rule or check), under this rule set, with the according name.
	*
	* @param iName name of the component.
	* @param iRecursive TRUE for a recursive search, FALSE to a search limited at the current ruleset.
	* @return the found component or NULL_var if not found
    */
	virtual CATIRuleBaseComponent_var FindRuleBaseComponent  (CATUnicodeString iName,boolean iRecursive = FALSE)=0 ;
	
    /**
	* Returns the first ruleset under this rule set, with the according name.
	*
	* @param iName name of the ruleset.
	* @param iRecursive TRUE for a recursive search, FALSE to a search limited at the current ruleset.
	* @return the found component or NULL_var if not found
    */
	virtual CATIRuleSet_var           FindRuleSet            (CATUnicodeString iName,boolean iRecursive = FALSE)=0;
	
    /**
	* Returns all the rulebase components (rules and checks) under this rule set.
	*
	* @param iolListToBeFilled list filled with the found rulebase components.
	* @param iRecursive TRUE for a recursive search, FALSE to a search limited at the current ruleset.
    */
	virtual void                      FindAnyRuleBaseComponent(CATListValCATIRuleBaseComponent_var& iolListToBeFilled, boolean iRecursive = FALSE)=0 ;

    /**
	* Returns all the rulesets under this rule set.
	*
	* @param iolListToBeFilled list filled with the found rulesets.
	* @param iRecursive TRUE for a recursive search, FALSE to a search limited at the current ruleset.
    */
	virtual void                      FindAnyRuleSet          (CATListValCATIRuleSet_var & iolListToBeFilled, boolean iRecursive = FALSE)=0;
	
    /**
	* Returns all generic rule base components right under this rule set.
	*
	* @param iolListToBeFilled List filled with the components.
	*/
	virtual void                      GetDirectGenericRuleBaseComponents (CATListValCATIGenericRuleBaseComponent_var& iolListToBeFilled)=0;

    /**
	* Returns all generic rule base components under this rule set, recursively.
	*
	* @param iolListToBeFilled List filled with the components.
	*/
	virtual void                      GetAllGenericRuleBaseComponents    (CATListValCATIGenericRuleBaseComponent_var& iolListToBeFilled)=0;

	/**
	* Returns the status of the ruleset.
	*
	* For instance, if all objets under the ruleset are green, then the ruleset is green.
	*
	* @return status of the ruleset.
	*/
	virtual CATExpertReportEnum::ValidityTypeEnum Status ()=0;


	/**
	* Import one rulebase component (check or rule) into the current ruleset.
	*
	* @param iRuleBaseComponentToImport A rulebase component (check or rule) to import.
	* @param iFct A function triggered on conflicting objects.
	* @return S_OK or E_FAIL
	*/
	virtual HRESULT ImportRuleBaseComponent(const CATIRuleBaseComponent_var& iRuleBaseComponentToImport, conflictingImportFunctionPtr iFct = NULL)=0;

};

// --------------------------------------------------------------------------
//                             Handler
// --------------------------------------------------------------------------

CATDeclareHandler(CATIRuleSet, CATIGenericRuleBaseComponent) ;

#endif

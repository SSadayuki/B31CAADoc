/* -*-c++-*- */
#ifndef CATIGenericRuleBaseComponent_H
#define CATIGenericRuleBaseComponent_H

// COPYRIGHT DASSAULT SYSTEMES 2001

/** 
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATBaseUnknown.h"
#include "Rule.h"
#include "CATExpertRuleEnum.h"
#include "CATCke.h" //pour les type params

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByRule IID IID_CATIGenericRuleBaseComponent ;
#else
extern "C" const IID IID_CATIGenericRuleBaseComponent ;
#endif

class CATIRuleBase_var ;
class CATIRuleSet_var;

/**
* Interface dedicated to defining the basic properties of the
* Knowledge Expert hierarchy of rulebase, rulesets, checks and rules.
*/

class ExportedByRule CATIGenericRuleBaseComponent: public CATBaseUnknown
{
	CATDeclareInterface;
	
public:
	/**
	* Parses and adds the component to the inference engine.
	*
	* @return string containing parse errors.
	*/
	virtual CATUnicodeString              CheckInContext            ()=0;

	/**
	* Sets the activity of the component.
	*
	* @param iActivity TRUE or FALSE.
	*/
	virtual void                          SetActivate               (CATCke::Boolean iActivity)=0;

	/**
	* Gets the activity of the component.
	*
	* @return TRUE or FALSE.
	*/
	virtual CATCke::Boolean               GetActivate               ()=0;

	/**
	* @nodoc
	* Use KnowledgeInterfaces CATIAllowUserInfo::SetComment method.  
	* Sets the comment of the component.
	*
	* @param iComment the comment of the component.
	*/
	virtual void                          SetComment                (CATUnicodeString iComment)=0 ;

	/**
    * @nodoc
	* Use KnowledgeInterfaces CATIAllowUserInfo::GetComment method.  
 	* Gets the comment of the component.
	*
	* @return the comment of the component.
	*/
	virtual CATUnicodeString              GetComment                ()=0 ;

	/**
	* Sets the type of the inference engine.
	*
	* @param iSolverType type of the inference engine (@href CATExpertRuleEnum#InferenceEngineType ).
	*/
	virtual void                          SetInferenceEngineType    (CATExpertRuleEnum::InferenceEngineType iSolverType)=0 ;

	/**
	* Gets the type of the inference engine.
	*
	* @return type of the inference engine (@href CATExpertRuleEnum#InferenceEngineType ).
	*/
	virtual CATExpertRuleEnum::InferenceEngineType            GetInferenceEngineType    ()=0;

	/**
	* Gets the rulebase the component belongs (directly or through rulesets) to.
	*
	* @return a rulebase.
	*/
	virtual CATIRuleBase_var              GetRuntimeBase            ()=0;
	
	/**
	* Gets the ruleset the component belongs directly to.
	*
	* @return a ruleset
	*/
	virtual CATIRuleSet_var               GetFatherRuleSet            ()=0;
	
	/**
	* Sets the name of the component.
	*
	* @param iName name of the component
	*/
	virtual void                          SetGenericRuleBaseComponentName   (CATUnicodeString iName )=0; 

	/**
	* Gets the name of the component.
	*
	* @return name of the component
	*/
	virtual CATUnicodeString              GetGenericRuleBaseComponentName   ()=0;

	/**
	* Forces the component to be use-only (not editable, not removable).
	*
	* Be careful : once done, it cannot be undone.
	* @return S_OK or E_FAIL
	*/
	virtual HRESULT                       SetUseOnly ()=0;

	/**
	* Gets the "use-only-ness" of the component.
	*
	* @return Use only status of the component
	*/
	virtual boolean                       IsUseOnly ()=0 ;
};

// --------------------------------------------------------------------------
//                             Handler
// --------------------------------------------------------------------------

CATDeclareHandler(CATIGenericRuleBaseComponent, CATBaseUnknown) ;

#endif

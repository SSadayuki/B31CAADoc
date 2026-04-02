/* -*-c++-*- */
#ifndef CATIRuleBaseComponent_H
#define CATIRuleBaseComponent_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/** 
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATIGenericRuleBaseComponent.h"
#include "Rule.h"
#include "CATExpertRuleEnum.h"
#include "CATCke.h" //pour les type params

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByRule IID IID_CATIRuleBaseComponent ;
#else
extern "C" const IID IID_CATIRuleBaseComponent ;
#endif

/**
* Interface dedicated to describing the common contents of leaf nodes of the Knowledge Expert hierarchy.
*
* <b>Role</b> a leaf node can be a check or a rule. So it needs quantified variables of
* types (on which to work : for instance "H:Hole; P:Pad") and a body (action or condition
* over the objects of the types previously named, for instance
* <tt>"H.Diameter > 10mm and H.Diameter < 20mm"</tt> for a check
* or <tt>"if H.Diameter > 15mm { H.Diameter = 15mm }"</tt> for a rule).
* <br>
* The body of the rule base component can be written in two languages.
* The KWE language is to be preferred as it takes fully advantage of the
* reactivity of the expert system, based on the type/attribute descritption
* of objects (for instance the type Hole with attributes Diameter, .. is
* specific to the KWE language). When an attribute of an object is modified
* through a rule, then the expert system is informed and it triggers all
* the rules that need to be.
* <br>
* But sometimes it may lack some functionalities, so the VB script language
* can then be used as a workaround .. that won't benefit from the
* type/attribute descritption.
*/

class ExportedByRule CATIRuleBaseComponent: public CATIGenericRuleBaseComponent
{
	CATDeclareInterface;
	
public:
	/**
	* Language in which the body of the component is written.
	*
	* @param KWELanguage basic language.
	* @param VBLanguage  VB script language.
	*/
	enum RuleBaseComponentLanguage {
		KWELanguage = 1,
		VBLanguage = 2,
		KWEComplexLanguage = 3
	} ;
	
	/**
	* Updates the names of the types used and the body.
	*
	* The body must be written in the language specified at the creation of the rule base component.
	*
	* @param iVariables Names of the variables and the types used.
	* @param iBody      Body string.
	*/
	virtual void					UpdateDescription (CATUnicodeString iVariables, CATUnicodeString iBody)=0;
	
	/**
	* Gets the names of the types used.
	*
	* @return string with names of the types used.
	*/
	virtual CATUnicodeString		GetVariables()=0;

	/**
	* Returns the body translated in KWE language if needed.
	*
	* For internal use only.
	*
	* @return the body string.
	*/
	virtual CATUnicodeString		GetDescription()=0;
	
	/**
	* Returns the body in the specified language of the rule base component.
	*
	* @return the body string.
	*/
	virtual CATUnicodeString		GetDescriptionByLanguage()=0;

	/**
	* Sets the language of the body of component.
	*
	* For internal use only.
	*
	* @param iLanguage @href CATIRuleBaseComponent#RuleBaseComponentLanguage .
	*/
	virtual void					SetLanguage (CATIRuleBaseComponent::RuleBaseComponentLanguage iLanguage)=0;

	/**
	* Gets the language of the body of component.
	*
	* @return @href CATIRuleBaseComponent#RuleBaseComponentLanguage .
	*/
	virtual CATIRuleBaseComponent::RuleBaseComponentLanguage GetLanguage ()=0;
};

// --------------------------------------------------------------------------
//                             Handler
// --------------------------------------------------------------------------

CATDeclareHandler(CATIRuleBaseComponent, CATIGenericRuleBaseComponent) ;

#endif

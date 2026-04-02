#ifndef CATICheck_H
#define CATICheck_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/** 
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATIRuleBaseComponent.h"
#include "Rule.h"
#include "CATExpertReportEnum.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByRule IID IID_CATICheck ;
#else
extern "C" const IID IID_CATICheck ;
#endif

/**
* Interface dedicated to defining the basic possibilities of an expert check.
*
* <br><b>Role</b> : the goal of an expert check is to check a condition over a kind of objects
* (for instance that all the holes of a part have a diameter of at least
* 15mm, or that no two holes have the same diameter).
* <br>
* The second example would have been made with the following check:
* <br>
* Check.1
* <dl>
* <dt>Variables <dd> "H1:SimpleHole; H2:Simplehole"
* <dt>Body      <dd> "H1.Diameter != H2.Diameter"
* </dl>
*
* <br>
* All the possible t-uples (H1, H2) (for H1, H2 any SimpleHoles) are evaluated by the check.
* If the condition is true for all of them, then the check is correct. If at least one of them makes
* the condition false, then the check is false.
*
* <br>
* If the check is false, then a corrective action can be done with a correction function. This
* function is applied on each t-uple failing the condition of the check, when the user decides to
* (manually) or automatically.
*
* <br>
* If the check is false, the user also can do nothing and simply justify the falseness of the check
* with a comment. Then the check is considered as true.
*/


class ExportedByRule CATICheck: public CATIRuleBaseComponent
{
	CATDeclareInterface;
	
public:
	/**
	* Triggers the application of the correction function of the check on the t-uples failing the condition.
	*/
	virtual void                           ApplyCorrect          ()=0;

	/**
	* Highlights each object of the t-uples failing the condition.
	*/
	virtual void                           ApplyHighlight        ()=0;

	/**
	* Sets the script executed as a correction function.
	*
	* @param iScript VB script to be executed.
	*/
	virtual void                           SetCorrectFunction    (CATUnicodeString iScript)=0 ;

	/**
	* Gets the VB script executed as a correction function.
	*
	* @return Script of the correction function
	*/
	virtual CATUnicodeString               GetCorrectFunction    ()=0 ;

	/**
	* Sets the correction function type.
	*
	* @param iType Type of correction function (@href CATExpertReportEnum#CorrectingFunctionTypeEnum ).
	*/
	virtual void                           SetCorrectFunctionType    (CATExpertReportEnum::CorrectingFunctionTypeEnum iType)=0 ;

	/**
	* Gets the correction function type.
	*
	* @return Type of correction function (@href CATExpertReportEnum#CorrectingFunctionTypeEnum ).
	*/
	virtual CATExpertReportEnum::CorrectingFunctionTypeEnum GetCorrectFunctionType    ()=0 ;

	/**
	* Sets the correction function to be triggered automatically or not.
	*
	* @param iIsAutomatic true or false.
	*/
	virtual void                           SetAutomaticCorrect           (boolean iIsAutomatic)=0;      

	/**
	* Gets the correction function triggering mode.
	*
	* @return true or false.
	*/
	virtual boolean                        GetAutomaticCorrect           ()=0;

	/** @nodoc */
	virtual void                           SetHighlightFunction  (CATUnicodeString iVBScript)=0 ;

	/** @nodoc */
	virtual CATUnicodeString               GetHighlightFunction  ()=0 ;

	/**
	* Sets the help string.
	*
	* @param iHelp the help string.
	*/
	virtual void                           SetHelp               (CATUnicodeString iHelp)=0 ;

	/**
	* Gets the help string.
	*
	* @return the help string.
	*/
	virtual CATUnicodeString               GetHelp               ()=0 ;

	/**
	* Sets the justification string.
	*
	* The justification string is a comment explainig why a false check (i.e.
	* at least one t-uple fails the condition) can be considered as true.
	*
	* @param iJustification the justification string.
	*/
	virtual void                           SetJustification      (CATUnicodeString iJustification)=0 ;

	/**
	* Gets the justification string.
	*
	* The justification string is a comment explainig why a false check (i.e.
	* at least one t-uple fails the condition) can be considered as true.
	*
	* @return the justification string.
	*/
	virtual CATUnicodeString               GetJustification      ()=0 ;

	/**
	* Sets the comment of the correction function.
	*
	* @param iComment the comment.
	*/
	virtual void                           SetCorrectFunctionComment  (CATUnicodeString iComment)=0 ;

	/**
	* Gets the comment of the correction function.
	*
	* @return the comment.
	*/
	virtual CATUnicodeString               GetCorrectFunctionComment  ()=0 ;

	/**
	* Gets the validity of the check.
	*
	* @return the validity.
	*/
	virtual CATExpertReportEnum::ValidityTypeEnum GetStatus ()=0;
};

// --------------------------------------------------------------------------
//                             Handler
// --------------------------------------------------------------------------

CATDeclareHandler(CATICheck, CATIRuleBaseComponent) ;

#endif

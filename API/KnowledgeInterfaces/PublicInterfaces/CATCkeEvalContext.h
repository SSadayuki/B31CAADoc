#ifndef CATCkeEvalContext_h
#define CATCkeEvalContext_h


// COPYRIGHT DASSAULT SYSTEMES 1999

/** 
* @CAA2Level L1
* @CAA2Usage U1 
*/


// include module definition
#include "KnowledgeItf.h"
#include "CATSoftwareConfiguration.h"
#include "CATKWEErrorSeverity.h"

// forwards
#include "CATICkeRelationForwards.h"
#include "CATICkeRelation.h"
#include "CATICkeSignature.h"

/**   
* Class dedicated to evaluation context information management.
* <b>Role</b>: When a relation is evaluated, it creates such an object that is known by all the evaluators of the expression tree.<br>
* Those evaluators can then use this context to know the container or relation for example.<br>
*/
class ExportedByKnowledgeItf CATCkeEvalContext
{

public:

	/**
	* @nodoc
	*/
	CATCkeEvalContext ();

	/**
	* @nodoc
	*/
	virtual ~CATCkeEvalContext ();

	/**
	* @nodoc
	*/
	CATCkeEvalContext (const CATCkeEvalContext &);

	/**
	*  Returns the current relation.
	*/
	virtual CATICkeRelation_var Relation () const =0;

	/**
	*  Returns the current container.
	*/
	virtual CATIContainer_var   Container () const =0;

	/**
	* Expressional relations allow datum geometry valuation (for example: point.1 = point(0mm, 10mm, 20mm)).
	* To enable such a functionality, functions have to return temporary geometry whose geometrical result is to
	* be copied into the datum. This temporary geometry life cycle can not be managed by function code because 
	* the returned object can be used several times in the expression, so it has to be valid until the end of the expression
	* evaluation. This method allows to solve this problem: the relation stores the temporary geometry and manages itself
	* its life cycle. It is mandatory to call this method for any returned geometry that is created inside a function.
	* Note that if the function needs to create several geometrical features, it has either to delete them before returning result or
	* to call StoreAndUpdateTemporaryObject for each of them.
	* <b>This method updates argument (and possibly raises an error), so caller should not do it himself</b>
	* @param iObject
	* the temporary object whose life cycle has to be managed by the relation
	* @return
	* E_FAIL if object is NULL_var or is aggregated, S_OK otherwise
	*/
	virtual HRESULT StoreAndUpdateTemporaryObject(const CATISpecObject_var &iObject) = 0;

	//---------------------------------------------------------------
	//** 
	// * how to manage the temporary objects used in operators ? The operators produce some
	// * objects that will have to be stored as components of the relation,
	// * 
	// * At the beginning of an evaluation, the list of previous temporary objects is given to the EvalContext
	// * case 1 - In the operator, if the resulting parameter is set, the operator developer must check that 
	// * the resulting value is of good type and can be the output of the evaluator. 
	// * If he agrees the choice, he must use the Keep method to indicate that he wants to keep this object
	// *
	// * case 2 - If the resulting parameter is not set, he can ask for it to see if the object has been created before.
	// * (using the Ask method). If the Ask method returns a value we're back to case 1. If not, it's case 3
	// *
	//* case 3 - The operator developer creates an object. To indicate he wants to keep it in the relation
	// * he uses the Keep Method
	// */
	//---------------------------------------------------------------

	/**
	* @nodoc
	*/
	virtual void Keep (const CATBaseUnknown_var &) const=0;

	/**
	* @nodoc
	*/
	virtual CATBaseUnknown_var Ask  () const =0;

	/**
	* @nodoc
	*/
	virtual void Start (CATLISTV(CATBaseUnknown_var) &beginning,CATLISTV(CATBaseUnknown_var) &ending)=0;  

	/**
	* @nodoc
	*/
	virtual CATCke::Boolean NoChange () const=0;

	/**
	* @nodoc
	*/
	virtual CATCke::Boolean TryToFindOutput (const CATICkeParm_var &res,CATISpecObject_var &spec) const =0;

	/**
	* @nodoc
	*/
	virtual void UpdateAndKeep (const CATISpecObject_var &spec) const =0;

	/**
	* @nodoc
	*/
	enum AttributeAccess { ReadAttribute,WriteAttribute};

	/**
	* @nodoc
	*/
	virtual void SetAttrInfo (const CATUnicodeString &s,const AttributeAccess aa)=0;

	/**
	* @nodoc
	*/
	virtual void GetAttrInfo (CATUnicodeString &,AttributeAccess &) const=0;

	/**
	* @nodoc
	*/
	virtual void SetSignature (const CATICkeSignature_var &iSig)=0;

	/**
	* @nodoc
	*/
	virtual CATICkeSignature_var GetSignature () const=0;

	/**
	* @nodoc. (deprecated since V5R7) Use MechanicalModeler CATMfCkeServices::GetObjectFromParameter method.
	* Returns the underlying object.
	*/
	virtual CATBaseUnknown_var GetObjectFromParameter (const CATICkeParm_var &iParm) const =0;

	/**
	* Send Error.
	*
	* @param iMessage Message.
	* @param iSeverity Severity.
	* @param iSource Source
	*/
	virtual HRESULT SendError (const CATUnicodeString&			iMessage	= " ", 
		const CATKWEErrorSeverity::Severity					iSeverity	= CATKWEErrorSeverity::Information,
		const CATBaseUnknown_var&		iSource		= NULL_var) const =0;

	/**
	* @nodoc
	*/

	virtual CATSoftwareConfiguration* GetConfiguration() = 0;

	/**
	 * Enumerated value that defines which kind of Knowledge object .<br>
	 * @param Undefined
 	 * The source is undefined.
	 * @param Formula
	 * The source is a formula.
	 * @param Law
	 * The source is a Law.
	 * @param Rule
	 * The source is a Knowledge Advisor rule.
	 * @param Check
	 * The source is a Knowledge Advisor check.
	 * @param Reaction
	 * The source is a Knowledge Advisor reaction or an action.
	 * @param SetOfEquations
	 * The source is a Knowledge Advisor set of equation.
	 * @param Pattern
	 * The source is a Product Knowledge Template pattern.
	 * @param OptimizationConstraint
	 * The source is a Product Engineering optimizer optimization constraint.
	 * @param ConstraintSatisfaction
	 * The source is a Product Engineering optimizer constraint satisfaction.
	 * @param ExpertRule
	 * The source is a Knowledge Expert rule.
	 * @param ExpertCheck
	 * The source is a Knowledge Expert check.
	 * @param UIEvent
	 * The source is a UI Event (Knowledge Based Dialogs).
	 * @param Behavior
	 * The source is a Behavior(Engineering process automation).
	 * @param Method
	 * The source is a Method(Engineering process automation).
	 * @param BusinessRules
	 * The source is a business rules.
	 * @param Expression
	 * The source is a simple expression.
	 */
	  enum SourceKind { Undefined, Formula, Law, Rule, Check, Reaction, SetOfEquations, Pattern, OptimizationConstraint, ConstraintSatisfaction, 
						ExpertRule, ExpertCheck, UIEvent, Behavior, Method, BusinessRules, Expression };
	
	/**
   	 * Returns the source kind.
	 *
	 * @return
	 * Source kind
	 */
	  virtual CATCkeEvalContext::SourceKind GetSourceKind () const =0;
};

#endif



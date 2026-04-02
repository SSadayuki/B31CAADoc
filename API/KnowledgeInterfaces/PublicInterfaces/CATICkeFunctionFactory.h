#ifndef CATICkeFunctionFactory_h
#define CATICkeFunctionFactory_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/** 
 * @CAA2Level L1
 * @CAA2Usage U3 
 */
//#include "CK0FEAT.h"
#include "CATBaseUnknown.h"
#include "KnowledgeItf.h"
#include "CATICkeType.h"
#include "CATICkeArg.h"
#include "CATICkeMagnitude.h"
#include "CATIParmPublisher.h"
#include "CATICkeNaming.h"
#include "CATICkeSignature.h"
class CATDocument;
//#include "CATISpecObject.h"

//tdv #include "CATLifFunctions.h"

class CATISpecObject_var;
class CATCkeEvalContext;

// OLE
#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByKnowledgeItf IID_CATICkeFunctionFactory;
#else
extern "C" const IID IID_CATICkeFunctionFactory;
#endif


// functions evaluator : this is this kind of functions that you must implement to code your
// own functions behaviour : In input, there-s a list of literals that are the function arguments
// in output, you must create a C++ instance 
// the list musnt be deallocated

// WATCH OUT : pevalcontext can be NULL
/**
* @nodoc
*/
typedef void             (*CATCkeFunctionEvaluator) (CATCkeListOfParm plist,const CATICkeParm_var &,const CATCkeEvalContext *pevalcontext);
/**
* @nodoc
*/
typedef CATCke::Boolean  (*CATCkeCheckMagnitude)    (CATCkeListOfParm plist,const CATICkeParm_var &,const CATCkeEvalContext *pevalcontext);


//-------------------------------------------------------------------
/**   
 * Interface to gather methods to create user functions.
 * Gathers services about literals and relations.
 * <p>
 * <b>Role</b>: This class gathers methods managing literals and relations.<br>
 * It gives a way to create your own functions that can later be used in relations, and add them 
 * to the dictionary.<br>
 * It gives a way to add your own applications that can later be used in applications dialog in the
 * knowledgeware workbench.<br>
 */
//-----------------------------------------------------------------------------
class ExportedByKnowledgeItf CATICkeFunctionFactory : public CATBaseUnknown
{
	CATDeclareInterface;

public:


/**
 * Creates a signature and adds it to the dictionary.
 * @param iFunctionName function name (example : "sin") It is the name
 * that will be used in formulas
 * @param iReturnedType returned type of the function (example : CATParmDictionary::RealType in our sinus example) 
 * @param iEvalFuncPtr function evaluator 
 * @param iCheckMagnitudeFuncPtr function evaluator
 * @param iNotation notation
 */
virtual CATICkeSignature_var CreateFunction (const CATUnicodeString &iFunctionName,
					                        const CATICkeType_var  &iReturnedType,
							                CATCkeFunctionEvaluator iEvalFuncPtr = NULL,
											CATCkeCheckMagnitude iCheckMagnitudeFuncPtr = NULL,
											const CATICkeSignature::Mode iNotation = CATICkeSignature::Function)=0;
									
					      
/**
 * Creates an argument to be added to a signature. 
 * @param iArgName argument name (example : "x") 
 * @param iArgType argument type (example : CATParmDictionary::RealType in our example)
 * @param iMode indicates if the argument is In, Out or InOut
 */
virtual CATICkeArg_var       CreateArg (const CATUnicodeString &iArgName,
                                       const CATICkeType_var  &iArgType,
				                       const CATICkeArg::Mode iMode = CATICkeArg::In)=0;
					      


					      
/**
 * Creates an argument to be added to a signature. 
 * @param iArgName argument name (example : "x") 
 * @param iArgType argument type (example : "Real" in our example)
 * @param Mode iArgMode: indicates if the argument is In, Out or InOut
 */
virtual CATICkeArg_var       CreateArg (const CATUnicodeString &iArgName,
                                       const CATUnicodeString &iArgType,
				       const CATICkeArg::Mode iArgMode = CATICkeArg::In)=0;
					      

/**
 * Creates a signature and add it to the dictionary.
 * @param iFunctionName  function name (example : "sin") It is the name
 * that will be used in formulas
 * @param iReturnedType returned type of the function (example : CATParmDictionary::RealType in our sinus example) 
 * @param iEvalFuncPtr function evaluator 
 * @param iCheckMagnitudePtr check magnitude evaluator
 * @param iNotation notation
 */
virtual CATICkeSignature_var CreateFunction (const CATUnicodeString      &iFunctionName,
											const CATUnicodeString      &iReturnedType,
											CATCkeFunctionEvaluator      iEvalFuncPtr = NULL,
											CATCkeCheckMagnitude         iCheckMagnitudePtr = NULL,
											const CATICkeSignature::Mode iNotation = CATICkeSignature::Function)=0;

	/** 
	* @deprecated V5R14 - Use GetCurrentSet method instead.<br>
	* Adds a relation to the current RelationSet.<br>
	* It is dedicated to applications which create relations and want to see
	* them in the relation set (in the tree view).<br>
	* If the RelationSet does not exist, it is created and appended to the root
	* Object.<br>
	* @param iRelationToAdd relation to add to the relation set. 
	* @param iRoot The root object is where the relationset will be appended.
	* If the root object is NULL, the default one is asked to CATILiteralsRoot::GetRoot
	* on the container of the relation
	*/
	virtual void AddToCurrentRelationSet (const CATISpecObject_var &iRelationToAdd,
										 const CATIParmPublisher_var &iRoot = NULL_var)=0; 

	/** 
	* @deprecated V5R14 - Use GetCurrentSet method instead.<br>
	* Adds a parameter to the current ParameterSet.<br>
	* It is dedicated to applications which create parameters and want to see
	* them in the parameter set (in the tree view).<br>
	* If the ParameterSet does not exist, it is created and appended to the root
	* Object.<br>
	* @param iParameterToAdd parameter to add to the parameter set. 
	* @param iRoot The root object is where the parameterset will be appended.
	* If the root object is NULL, the default one is asked to CATILiteralsRoot::GetRoot
	* on the container of the parameter
	*/
	virtual void AddToCurrentParameterSet (const CATICkeParm_var &iParameterToAdd,
										  const CATIParmPublisher_var &iRoot=NULL_var)=0; 

	/** 
	* Initializes the list of methods and sort it.<br>
	* Load all libraries if necessary
	*/
	virtual void Methods() = 0;

	/** 
	* Adds a constant (true, false).
    * @param iParameter parameter to add to list of Constant. 
	*/
	virtual void AddConstant (const CATICkeParm_var &iParameter) = 0;


    /** 
	* Evaluates a formula whithout parameters.
	* Ex : 3*10+sin(80) ou "Hello"+" World".<br>
	* @param itexte is the texte of the formula. 
	* the return value is in MKS unit
    */
    virtual CATICkeInst_var  ParseAndEval (const CATUnicodeString &itexte,const CATICkeMagnitude_var &imag = NULL_var) =0;

	/**
	* @nodoc
	*/
	virtual CATCkeCheckMagnitude GetStandardMagnitudeChecker() =0;

	/**
	* Creates an event signature and add it to the dictionary.
	* @param iEventName :  function name (example : "Instanciation")
	* @param iNotation: notation
	*/
	virtual CATICkeSignature_var CreateEvent (const CATUnicodeString &iFunctionName) = 0;

	
	/**
	* Creates an evaluator context that can be given to the evaluation function.
	* @param iObject :  relation that controls the evaluation.
	* The return value must be deallocated
	*/
	virtual CATCkeEvalContext *CreateEvaluationContext (const CATBaseUnknown_var &iObject) = 0;


	/**
	* Type of Set.
	* @param Parameter
	*   This set contains parameters.
	* @param Relation
	*   This set contains Relations.
	* @param Optimization
	*   This set contains optimizations.
	* @param RuleBase
	*   This set contains Rulebases.
	*/

	enum SetType
	{
		Parameter  	 = 0,   
		Relation     = 1,  
		Optimization = 2,  
		RuleBase	 = 3
	};

	/** 
	* Get the current set : ParameterSet,RelationSet,OptimizationSet,RuleBaseSet.<br>
	* It is dedicated to applications which create parameters,relations,optimizations or rulebase and want to see
	* them in the parameter set, relation set, optimization set and rulebase set (in the tree view).<br>
	* If the Set does not exist, it is created if argument iForceCreation is true.<br>
	* @param iSetType to choose the type of set (Parameter, relation, optimization or rulebase). 
	* @param iForceCreation to force the creation of set if it doesn't exist.
	* @param iRoot The root object is where the set will be appended.
	*/
	virtual CATBaseUnknown_var GetCurrentSet(const CATICkeFunctionFactory::SetType iSetType,const CATIParmPublisher_var& iRoot, const int iForceCreation = 0) = 0;


};
CATDeclareHandler(CATICkeFunctionFactory,CATBaseUnknown);

#endif

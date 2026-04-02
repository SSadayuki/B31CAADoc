// Copyright Dassault Systemes 2000
#ifndef CATICkeRelationFactory_H
#define CATICkeRelationFactory_H



/** 
* @CAA2Level L1
* @CAA2Usage U3 
*/

// include root of extension CKE
#include "CATBaseUnknown.h"

//LiteralFeatures
#include "KnowledgeItf.h"
#include "CATICkeRelationForwards.h"
#include "CATICkeSignature.h"
#include "CATICkeParameterSet.h"
#include "CATIParmPublisher.h"
#include "CATICkeFunction.h"

//ObjectSpecsModeler
//#include "CATISpecObject.h"

class CATISpecObject_var;
class CATIList_var;

// OLE
#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByKnowledgeItf IID_CATICkeRelationFactory;
#else
extern "C" const IID IID_CATICkeRelationFactory;
#endif

/**   
* Interface dedicated to parameter sets creation.
* <b>Role</b>: manages the creation of parameter sets.
* @see CATIParmPublisher
* @see CATIParmManipulator
*/
class ExportedByKnowledgeItf CATICkeRelationFactory : public CATBaseUnknown
{
    
public:
    
    
/**
* @nodoc
* Creates an optimization constraint expression.
* @param name
* name of the expression 
* @param comment
* comment of the expression
* @param formalSignature
* This string describes the type of used parameters and the returned type of the expression. <br>
* For an optimization constraint, no value is returned<br>
* see the documentation on functions and queries on the knowledgeware PrivateWeb for syntax
* (http://loicdsy/Developers/InHouse/LiteralFeatures/FunctionsAndQueries.doc)
* @param body
* the body of the expression
    */
    virtual CATICkeExpression_var CreateOptConstraint (CATUnicodeString name,
        CATUnicodeString comment,
        CATUnicodeString formalSignature,
        CATUnicodeString body) =0;
    
    
		/**
		* @deprecated V5R16 CATICkeExpressionFactory#CreateConstraint <br>    
		* Creates a check expression.
        * @param name
        * name of the expression 
        * @param comment
        * comment of the expression
        * @param formalSignature
        * This string describes the type of used parameters and the returned type of the expression. <br>
        * For a check, no value is returned<br>
        * @param body
        * the body of the check expression
    */
    virtual CATICkeExpression_var CreateConstraint (CATUnicodeString name,
        CATUnicodeString comment,
        CATUnicodeString formalSignature,
        CATUnicodeString body) =0;
    
    
        /**
		* @deprecated V5R16 CATICkeExpressionFactory#CreateProgram <br>    
        * Creates a rule expression.
        * @param name
        * name of the expression 
        * @param comment
        * comment of the expression
        * @param formalSignature
        * This string describes the type of used parameters and the returned type of the expression. <br>
        * For a rule, no value is returned<br>
        * @param body
        * the body of the rule expression
    */
    virtual CATICkeExpression_var    CreateProgram    (CATUnicodeString name,
        CATUnicodeString comment,
        CATUnicodeString formalSignature,
        CATUnicodeString body) = 0;
    
        /**
		* @deprecated V5R16 CATICkeExpressionFactory#CreateFunctionalExpression <br>    
        * Creates a functional expression (to be used in a knowledgeware formula).
        * @param name
        * name of the expression 
        * @param comment
        * comment of the expression
        * @param formalSignature
        * This string describes the type of used parameters and the returned type of the expression. <br>
        * For a formula, the returned value is the type of the output parameter of the formula<br>
        * @param body
        * the body of the functional expression
    */
    virtual CATICkeExpression_var CreateFunctionalExpression (CATUnicodeString name,
        CATUnicodeString comment,
        CATUnicodeString formalSignature,
        CATUnicodeString body) = 0;
    
    
        /**
        * @nodoc
        * Creating a relation from something else.
		* SPECIAL CASE FOR FORMULAS : the ouput parameter is at the end of the list.
    */
    virtual CATICkeRelationExp_var CreateRelation  (CATUnicodeString n,
        CATUnicodeString c,
        CATUnicodeString p,
        CATCkeListOfParm lstparam,
        const CATICkeType_var &t,
        const CATICkeExpression_var &e,
        CATCke::Boolean synchrone,
        CATCke::Boolean shared = 0) =0;
    
    
        /**
        * @nodoc
        * Create a parameter.
    */
    virtual CATICkeParm_var CreateParameter (CATUnicodeString ident,
        const CATICkeInst_var &val,
        CATCke::Boolean constval) =0;
    
    
        /**
        * Creates a relation set.
        * @param name
        * name of the relation set. 
        * @return the newly created relation set viewed a a parameter publisher.
    */
    virtual CATIParmPublisher_var CreateRelationSet (const CATUnicodeString name) =0;
    
    /**
    * Creates a parameter set.
    * @param name
    * name of the parameter set. 
    * @return the newly created relation set viewed a a parameter publisher.
    */
    virtual CATIParmPublisher_var CreateParameterSet (const CATUnicodeString name) =0;
    
    
    
    /**
    * @nodoc
    */
    virtual CATIParmPublisher_var CreateOptimizationSet() = 0;
    
    
    /**
    * @nodoc
    * Create a formula between parameters (example : y=3*x).<br>
    * if a syntax error occurs, NULL_var is returned and a CATCkeParseException exception is raised<br>
    * @param iRelationName formula's name
    * @param iComment no more used for formula !!
    * @param iFamily not used !!
    * @param iOutputParameter valuated parameter (y in our example)
    * @param iListOfParameters  (pointer on list of CATBaseUnknown_var) contains literal used in inputs (x in our example)  
    * @param iBody contains the string describing the formula ("3*x" in our example)
    * @param iRoot (CATIParmPublisher) used to name parameters with RelativeName (root) method<br> 
    * and so to be able to recognize parameters by their name <br>
    * Not used in realnames = false mode<br>
    * @param iRealnames  = 2 possibilities to name a parameter in the body.<br> 
    * <tt>CATCke::True</tt>  names used are the one returned by RelativeName (root) and we try to recognize names used in the body with parameters of iListParameters..
    * <tt>CATCke::False</tt> names used are a1,a2,a3,etc...<br>
    *                        a1 meaning the first parameter of iListParameters, a2, the second one, etc....<br>
    * We advise you strongly to use this second method in your application to avoid NLS problems .  <br>
    * <br>
    * @return Formula created or NULL_var if syntax error<br>
    */
    virtual CATICkeRelation_var CreateFormula (const CATUnicodeString    &iRelationName,
        const CATUnicodeString    &iComment,
        const CATUnicodeString    &iFamily,
        const CATICkeParm_var     &iOutputParameter,
        const CATCkeListOfParm     iListOfParameters,
        const CATUnicodeString    &iBody,
        const CATIParmPublisher_var &iRoot = NULL_var,
        const CATCke::Boolean     &iRealnames = 1) = 0;
    
        /**
        * @nodoc
        * Create a rule between parameters (example : if (x> 3) y=3*x else y = 2).<br>
        * if a syntax error occurs, NULL_var is returned and a CATCkeParseException exception is raised<br>
        * @param iRelationName  program's name
        * @param iComment comment  !!
        * @param iFamily not used !!
        * @param iListOfParameters (pointer on list of CATBaseUnknown_var) contains literal used in inputs or outputs (x and y  in our example)  
        * @param iBody contains the string describing the program ("if (x> 3) y=3*x else y = 2" in our example)
        * @param iRoot (CATIParmPublisher) used to name parameters with RelativeName (root) method <br>
        * and so to be able to recognize parameters by their name<br>
        * Not used in realnames = false mode<br>
        * @param iRealnames  = 2 possibilities to name a parameter in the body.<br> 
        * <tt>CATCke::True</tt>  names used are the one returned by RelativeName (root) and we try to recognize names used in the body with parameters of iListParameters..
        * <tt>CATCke::False</tt> names used are a1,a2,a3,etc...<br>
        *                        a1 meaning the first parameter of iListParameters, a2, the second one, etc....<br>
        * We advise you strongly to use this second method in your application to avoid NLS problems .  
        * <br> 
        * @return Rule created or NULL_var if syntax error
    */
    virtual CATICkeRelation_var CreateProgram (const CATUnicodeString    &iRelationName,
        const CATUnicodeString    &iComment,
        const CATUnicodeString    &iFamily,
        const CATCkeListOfParm     iListOfParameters,
        const CATUnicodeString    &iBody,
        const CATIParmPublisher_var &iRoot = NULL_var,
        const CATCke::Boolean     &iRealnames = 1) = 0;
    
        /**
        * @nodoc
        * Create a check between parameters (example : x > 3).<br>
        * if a syntax error occurs, NULL_var is returned and a CATCkeParseException exception is raised<br>
        * @param iRelationName program's name
        * @param iComment comment
        * @param iFamily not used !!
        * @param iListOfParameters (pointer on list of CATBaseUnknown_var) contains literal used in inputs (x and y  in our example)  
        * @param iBody contains the string describing the check ("x> 3" in our example)
        * @param iRoot (CATIParmPublisher) used to name parameters with RelativeName (root) method<br> 
        * and so to be able to recognize parameters by their name<br>
        * Not used in realnames = false mode<br>
        * @param iRealnames  = 2 possibilities to name a parameter in the body. <br>
        * <tt>CATCke::True</tt>  names used are the one returned by RelativeName (root) and we try to recognize names used in the body with parameters of iListParameters..
        * <tt>CATCke::False</tt> names used are a1,a2,a3,etc...<br>
        *                        a1 meaning the first parameter of iListParameters, a2, the second one, etc....<br>
        * We advise you strongly to use this second method in your application to avoid NLS problems .  
        * <br>
        * @return check created or NULL_var if syntax error
    */
    virtual CATICkeRelation_var CreateCheck   (const CATUnicodeString     &iRelationName,
        const CATUnicodeString     &iComment,
        const CATUnicodeString     &iFamily,
        const CATCkeListOfParm    iListOfParameters,
        const CATUnicodeString     &iBody,
        const CATIParmPublisher_var &iRoot = NULL_var,
        const CATCke::Boolean    &iRealnames = 1) = 0;
	
		/**
        * @nodoc
        * Create an Equivalent Dimension.<br>
        * if a syntax error occurs, NULL_var is returned<br>
        * @param name program's name
        * @param Comment comment
        * @param Family not used !!
        * @return EquivalentDimension created or NULL_var if no EquivalentDimension has been created
    */
	virtual CATICkeRelation_var CreateEquivalentDimensions(
		const CATUnicodeString	&name,
		const CATUnicodeString	&comment,
		const CATUnicodeString	&family) = 0;
    
        /**
        * @nodoc
        * Create a simple relation between 2 parameters 'y = ax+b'.
        * with x is first parameter, y is second one. This relation is synchronous <br>
        * 
        * @param iRelationName  relations name
        * @param iComment comment
        * @param iFamily not used !!
        * @param iX input literal
        * @param iY output literal
        * @param iA a
        * @param iB b
        * @return relation created
    */
    virtual CATICkeRelation_var CreateSymetricalRelation (const CATUnicodeString &iRelationName,
        const CATUnicodeString &iComment,
        const CATUnicodeString &iFamily,
        const CATICkeParm_var &iX,
        const CATICkeParm_var &iY,
        const double iA,
        const double iB) = 0;
    
        /**
        * Creates a fully functional design table (with its embedded sheet) from a file (excel or text file).<br>
        * @Returns an handler on the new design table. if a problem occurs while creating it (bad file format), returns NULL_var 
        * @param iRelationName The name of the design table
        * @param iComment The comment associated to the design table
        * @param iFilePath
        *	The path of the sheet file.
        *	- If param sheetWithoutFile = 0 :
        *			if this path contains ".xls", the Excel format is assumed, else the tabulated text format is used.
        *			If this path is empty, no sheet is aggregated to the design table, and the user has to create a sheet 
        *			(method CreateSheet) and associate it to an excel or text file)
        *	- If param sheetWithoutFile = 1 :
        *			no matter with the content of this path
        * @param orientation
        *	1 if vertical, 0 else (used only if path != "" and sheetWithoutFile = 0)
        * @param sheetWithoutFile
        *	If sheetWithoutFile = 1, a model sheet is created (sheet with persitent memory storage, but no file)
        *	and it won't be possible to associate a file to this sheet.
    */
    virtual CATIDesignTable_var CreateDesignTable(const CATUnicodeString     &iRelationName,
        const CATUnicodeString &iComment,
        const CATUnicodeString &iFilePath,
        int orientation = 1,
        int sheetWithoutFile = 0) = 0;
    
    
        /**
        * Create a design table sheet. 
        * @param iFilePath The path of the source file. It can be an Excel or a Lotus sheet
        * or a tabulated text file, or an empty path (if iType != 4, you'll have to call 
        * CreateSourceFile on CATICkeSheet interface).
        * If the path isn't empty and the file doesn't exist, the file is created.
        * @param iType
        * - if iType = 4, whatever the content of the path, a model sheet 
        *   is created (sheet with persitent memory storage, but no file) 
        * - if path is empty, uses the type to know what kind of sheet has to be created
        *   <br><b>Legal values</b>: the test can be either
        *   <tt>1</tt> Excel one.
        *   <tt>2</tt> Text one
        *   <tt>3</tt> Lotus one
        *   <tt>4</tt> Model one
        * @return
        * the created sheet. It returns NULL_var if the file creation failed (in the case where the file has to be created) or if Excel or Lotus is asked on UNIX
    */
    virtual CATICkeSheet_var CreateSheet(const CATUnicodeString &iFilePath,int iType = 0) = 0;
    
    /**
    * @nodoc
    * Create an optimization constraint (example : x > 3).
    * 
    * if a syntax error occurs, NULL_var is returned and a CATCkeParseException exception is raised<br>
    * 
    * @param iRelationName program's name
    * @param iComment comment
    * @param iFamily not used !!
    * @param iListOfParameters (pointer on list of CATBaseUnknown_var) contains literal used in inputs (x and y  in our example)  
    * @param iBody contains the string describing the check ("x> 3" in our example)
    * @param iRoot (CATIParmPublisher) used to name parameters with RelativeName (root) method 
    * and so to be able to recognize parameters by their name <br>
    * Not used in realnames = false mode
    * @param iRealnames 2 possibilities to name a parameter in the body. <br>
    * <tt>CATCke::True</tt>  names used are the one returned by RelativeName (root) and we try to recognize names used in the body with parameters of iListParameters..
    * <tt>CATCke::False</tt> names used are a1,a2,a3,etc...<br>
    *                        a1 meaning the first parameter of iListParameters, a2, the second one, etc....<br>
    * We advise you strongly to use this second method in your application to avoid NLS problems .  
    * 
    * @return = check created or NULL_var if syntax error
    */
    virtual CATICkeRelation_var CreateOptimizationConstraint   (const CATUnicodeString     &iRelationName,
        const CATUnicodeString     &iComment,
        double iPrecision,
        int iPriority,
        const CATCkeListOfParm    iListOfParameters,
        const CATUnicodeString     &iBody,
        const CATIParmPublisher_var &iRoot = NULL_var,
        const CATCke::Boolean    &iRealnames = 1) = 0;
    
        /**
        * @nodoc
        * Create a law between parameters and formal parameters (example : y = sin(x) + Real.1).<br>
        * if a syntax error occurs, NULL_var is returned and a CATCkeParseException exception is raised<br>
        * @param iRelationName  program's name
        * @param iComment comment  !!
        * @param iFamily not used !!
        * @param iListOfParameters (pointer on list of CATBaseUnknown_var) contains literal used in inputs or outputs (Real.1 in our example)  
        * @param iListOfFormalParameters (pointer on list of CATBaseUnknown_var) contains formal literal used in inputs or outputs (x and y  in our example)  
        * @param iBody contains the string describing the program ("y = sin(x) + Real.1" in our example)
        * @param iRoot (CATIParmPublisher) used to name parameters with RelativeName (root) method <br>
        * and so to be able to recognize parameters by their name<br>
        * Not used in realnames = false mode<br>
        * @param iRealnames  = 2 possibilities to name a parameter in the body.<br> 
        * <tt>CATCke::True</tt>  names used are the one returned by RelativeName (root) and we try to recognize names used in the body with parameters of iListParameters..
        * <tt>CATCke::False</tt> names used are a1,a2,a3,etc...<br>
        *                        a1 meaning the first parameter of iListParameters, a2, the second one, etc....<br>
        * We advise you strongly to use this second method in your application to avoid NLS problems .  
        * <br> 
        * @return Rule created or NULL_var if syntax error
    */
    virtual CATICkeRelation_var CreateLaw (const CATUnicodeString    &iRelationName,
        const CATUnicodeString    &iComment,
        const CATUnicodeString    &iFamily,
        const CATCkeListOfParm     iListOfParameters,
        const CATCkeListOfParm     iListOfFormalParameters,
        const CATUnicodeString    &iBody,
        const CATIParmPublisher_var &iRoot = NULL_var,
        const CATCke::Boolean     &iRealnames = 1) = 0;
    
        /**
        * Creates a relation from another by copying it.
        * Works only on formulas, not on rules or checks.
        * Note that second relation will reference the same parameters, il will be deactivated
        * @param iRelationToCopy parameter to copy
        * @return CATICkeRelation_var relation copied
    */
    virtual CATICkeRelation_var Copy (const CATICkeRelation_var     &iRelationToCopy) = 0 ;
    
    
    
    /**
    * @nodoc
    * Initialise LiteralFeatures environnement.<br>
    * It finds all startups needed in this container.<br>
    */
    virtual void Init () = 0;
    
    /**
    * @nodoc
    */
    virtual void End () = 0;
    
    /**
    * @nodoc
    * Creates a feature macro with arguments.<br>
    * It is initialized like the following : <br>
    * no argument<br>
    * the entry point is called <it>main</it><br>
    * the body is empty
    */
    virtual CATISpecObject_var CreateKweMacro() = 0;

	/**
    * Creates a feature macro with arguments.<br>
    * It is initialized with the given arguments
	* @param iArgumentString the argument string
	* @param iScriptText the script text
	* @return The feature macro
	* @example
	*	CATICkeFunction_var MyFunc = MyFact->CreateKweMacro("MyArg","MyArg.Value = 10.0\nEnd Sub");
    */
    virtual CATICkeFunction_var CreateKweMacro(const CATUnicodeString& iArgumentString, const CATUnicodeString& iScriptText) = 0;


    /**
    * @nodoc
    * Creates an equality link between two parameters. <br>
    * The output parameter will always be equal to the input parameter. <br>
    * The equlity mechanism is integrated to update.
    * @param iOutputParameter : The valuated parameter
    * @param iInputParameter : The valuating parameter
    */
    virtual void CreateEquality(const CATICkeParm_var& iOutputParameter, const CATICkeParm_var& iInputParameter) = 0;
    
    /**
    * @nodoc
    * Creates a List object.<br>
    * @param iName name of the list.
    */
    virtual CATIList_var   CreateList (const CATUnicodeString &iName) = 0;
    
    /**
    * Do not use.
    */
    virtual CATICkeRelation_var CreateAction (const CATUnicodeString    &iRelationName,
        const CATUnicodeString    &iComment,
        const CATUnicodeString    &iFamily,
        const CATICkeSignature_var    &iSignature,
        const CATCkeListOfParm     iListOfParameters,
        const CATUnicodeString    &iBody,
        const CATIParmPublisher_var &iRoot = NULL_var,
        const CATCke::Boolean     &iRealnames = 1) = 0;
    
    /**
    * Creates a feature reaction.
    */
    virtual CATISpecObject_var CreateReaction() = 0;
    
    /**
    * @nodoc
    * Copy an expression .<br>
    */
    virtual CATICkeExpression_var CopyExpression (const CATICkeExpression_var &iExpToCopy) = 0;
	
private :  
    
    // 2 define ClassName
    CATDeclareInterface;
    
};


CATDeclareHandler(CATICkeRelationFactory,CATBaseUnknown);


#endif





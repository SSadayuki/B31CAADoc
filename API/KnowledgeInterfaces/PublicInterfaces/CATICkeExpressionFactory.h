// Copyright Dassault Systemes 2005
#ifndef CATICkeExpressionFactory_H
#define CATICkeExpressionFactory_H

/** 
* @CAA2Level L1
* @CAA2Usage U3 
*/

/*  CAA2Reviewed by FRH */

// Base interface
#include "CATBaseUnknown.h"

// module
#include "KnowledgeItf.h"
#include "CATUnicodeString.h"
class CATICkeExpression_var;

// OLE
#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByKnowledgeItf IID_CATICkeExpressionFactory;
#else
extern "C" const IID IID_CATICkeExpressionFactory;
#endif

/**   
* Interface dedicated to Knowledge expressions creation.
* <b>Role</b>: manages the creation of Knowledge expressions.
* This interface is implemented on feature container and volatile factory (CATCkeGlobalFunctions::GetVolatileFactory())
* @see CATICkeExpression
*/
class ExportedByKnowledgeItf CATICkeExpressionFactory : public CATBaseUnknown
{
    
public:
    
    
/**
* Creates an optimization constraint expression.
* @param name
* name of the expression 
* @param comment
* comment of the expression
* @param formalSignature
* This string describes the type of used parameters and the returned type of the expression. <br>
* For an optimization constraint, no value is returned<br>
* @param body
* the body of the expression
* This method requires the PEO license (Product Engineering Optimizer product.
* <br>
* in the case of a feature, this object must be aggregated.
*/
    virtual CATICkeExpression_var CreateOptConstraint (CATUnicodeString name,
        CATUnicodeString comment,
        CATUnicodeString formalSignature,
        CATUnicodeString body) =0;
    
    
		/**
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
		* <br>
		* in the case of a feature, this object must be aggregated.
		*/
    virtual CATICkeExpression_var CreateConstraint (CATUnicodeString name,
        CATUnicodeString comment,
        CATUnicodeString formalSignature,
        CATUnicodeString body) =0;
    
    
        /**
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
		* <br>
		* in the case of a feature, this object must be aggregated.
	    */
    virtual CATICkeExpression_var    CreateProgram    (CATUnicodeString name,
        CATUnicodeString comment,
        CATUnicodeString formalSignature,
        CATUnicodeString body) = 0;
    
        /**
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
		* <br>
		* in the case of a feature, this object must be aggregated.
		*/
    virtual CATICkeExpression_var CreateFunctionalExpression (CATUnicodeString name,
        CATUnicodeString comment,
        CATUnicodeString formalSignature,
        CATUnicodeString body) = 0;
    
    
    /**
    * Copy an expression .<br>
	* The object must be aggregated.
    */
    virtual CATICkeExpression_var CopyExpression (const CATICkeExpression_var &iExpToCopy) = 0;
	
private :  
    
    // 2 define ClassName
    CATDeclareInterface;
    
};


CATDeclareHandler(CATICkeExpressionFactory,CATBaseUnknown);


#endif





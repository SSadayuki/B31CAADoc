// Copyright Dassault Systemes 2002
#ifndef CATICkeExpression_H
#define CATICkeExpression_H

/** 
* @CAA2Level L1
* @CAA2Usage U3 
*/

// module definition
#include "KnowledgeItf.h"

// inheriting from
#include "CATICkeNaming.h"

// forwards definition
class CATICkeExpression_var;
class CATICkeTerm_var;

// OLE
#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByKnowledgeItf IID_CATICkeExpression;
#else
extern "C" const IID IID_CATICkeExpression;
#endif

//-----------------------------------------------------------------------------
/**   
 * Interface dedicated to expressions management.
 * 
 * An expression is a feature that describes a function to be evaluated on a set of identified objects.
 * <p>
 * It is composed of a signature and a body.
 * <p>
 * The signature details the list of objects on which it is supposed to work on.
 * example : "(x: #In Integer, y: #Out Real) : #Void " means that the expression works on 2 abstract
 * objects x which is an Integer and will be used as an input; and y which is a Real and that will be
 * used as output.
 * <p>
 * The body expresses the function: example : " y=3.2*x "
 * <p>
 * An expression is created from 2 strings (signature and body). It is able to tell if they are
 * syntaxically correct.
 * <p>
 * Expressions also implement CATICkeFunction that is in charge of evaluation on specific objects.
 * <p>
 * @see CATICkeRelationFactory
 * @see CATICkeFunction
 * @see CATICkeSignature
 * @see CATICkeArg
 * @see CATICkeType
 */
//-----------------------------------------------------------------------------
class ExportedByKnowledgeItf CATICkeExpression : public CATICkeNaming
{
  CATDeclareInterface;

public:

   /**
    * Returns the signature of this expression.
    * This will provoke a partial "parse" of the expression if not done already
    * @return  CATICkeSignature_var : signature pf the expression
    */
   virtual CATICkeSignature_var Signature () const = 0;

   /**
    * Returns the body of this expression.
	* It Shouldn't be used to produce a view of the body, it returns only the body stored in the attribute.
    * @return : body in a text format
    */
   virtual CATUnicodeString Body () const = 0;
 
   /**
    * Replaces the expression content (parse of the expression is done).
    * This method may raise syntax error (CATCkeParseException). No ability to catch them in CAA.<br>
    * @param iSignature : signature in a text format
    * @param iBody : body in a text format
    */
   virtual void   SetBody (const CATUnicodeString &iSignature,const CATUnicodeString &iBody) = 0;

   /**
    * Produces a view of the body of the expression with a change in the variable names.
    * @param iListNames : list of the names to be used
    * @return : body view
    */
   virtual CATUnicodeString ViewBody (const CATListOfCATUnicodeString &iListNames) const = 0;

   /**
    * Copy the expression.
    * @return : copied expression 
    */
   virtual CATICkeExpression_var Copy () const = 0;

   /**
    * Replaces an expression by another.
    * @param iExpression : expression that replaces
    */
   virtual void Replace (const CATICkeExpression_var &iExpression) = 0;

   /**
    * @nodoc
    * Replaces an expression by another.
    * @param iExpression : expression that replaces
    */
   virtual void Replace (const CATICkeTerm_var &iExpression) = 0;


   /**
    * Indicates if an expression can be edited (Is it syntaxically correct).
    * @return CATCke::Boolean : True if can be edited
    */
   virtual CATCke::Boolean CanBeEdited () const = 0;


   /**
    * Indicates if an expression can be evaluated (syntaxically correct & operators available at runtime).<br>
    * This method may raise syntax error (CATCkeParseException). No ability to catch them in CAA.<br>
    * @return CATCke::Boolean : True if can be evaluated
    */
   virtual CATCke::Boolean CanBeEvaluated () const= 0;

   
   /**
    * @nodoc
    * Indicates if an expression contains external functions.
    * @return CATCke::Boolean : True if contains external functions
    */
   virtual CATCke::Boolean UsesExternalFunctions () const= 0;
   
   /**
    * @nodoc
    * Indicates if the expression is broken (syntaxically incorrect or broken).
    * @return CATCke::Boolean : True if contains external functions
    */
   virtual CATCke::Boolean IsBroken () const= 0;
     
   /**
    * @nodoc
    * Indicates if an expression contains external functions that are time consuming.
    * @return CATCke::Boolean : True if update must be postponed
    */
   virtual CATCke::Boolean IsTimeConsuming () const= 0;
 
};

// declaration of Handler
CATDeclareHandler(CATICkeExpression,CATICkeNaming);


#endif


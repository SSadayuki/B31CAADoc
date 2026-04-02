#ifndef CATICkeSignature_h
#define CATICkeSignature_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/** 
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// export module
#include "KnowledgeItf.h"

// inherited from
#include "CATBaseUnknown.h"

// forward
#include "CATICkeRelationForwards.h"
class CATICkeTerm_var;
class CATCkeStream;

// used interface  
#include "CATICkeArg.h"

// OLE iid
#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByKnowledgeItf IID_CATICkeSignature;
#else
extern "C" const IID IID_CATICkeSignature;
#endif

/**
* @nodoc
* defines which are used in SetEditionContext and GetEditionContext.
* They allow callers to specify in which context a signature of a method can be used.
* This is a way to express accurately where a specific function can be used in term of editors.
* Is it used in Law editor, or Rule editor, or both ?
*/

#define CATCkeEditionCxtFormula 1
/**
* @nodoc
*/
#define CATCkeEditionCxtRule 2
/**
* @nodoc
*/
#define CATCkeEditionCxtCheck 4
/**
* @nodoc
*/
#define CATCkeEditionCxtLaw 8
/**
* @nodoc
*/
#define CATCkeEditionCxtActions 16
/**
* @nodoc
*/
#define CATCkeEditionCxtSetOfEq 32
/**
* @nodoc
*/
#define CATCkeEditionCxtExpertCheck 64
/**
* @nodoc
*/
#define CATCkeEditionCxtExpertRule 128
/**
* @nodoc
*/

// kwa without Set Of Equations
/**
* @nodoc
*/
#define CATCkeEditionCxtKWA 31
/**
* @nodoc
*/
#define CATCkeEditionCxtKWE 192
/**
* @nodoc
*/
#define CATCkeEditionCxtAll 255

/**
* @nodoc
* A different way to express this is to use the CATCkeFunctionQuality which details
* what can support a function. Is it an inversible function ? Does it update correctly ?
*/
/**
* @nodoc
* Indicates that we know how to invert this function (in an equation)
*/
#define CATCkeFunctionQualityInversible 1
/**
* @nodoc
* Indicates that this function creates objects (and thus those objects must be managed)  
*/
#define CATCkeFunctionQualityCreateObject 2
/**
* @nodoc
* Indicates that this function operates a treatment (and thus cannot be called twice. It is not a pure computation).
*/
#define CATCkeFunctionQualityOperate 4
/**
* @nodoc
* Indicates that some of the inputs of the functions are not update compliant (they don't know when
* they have been modified)
*/
#define CATCkeFunctionQualityNotUpdateCompliant 8


/** 
 * @nodoc
 * External functions to show an expression<br>
 * when creating a signature, you can define a function to show it in a particular manner
 */
typedef   CATCkeStream& (*CATCkeShowExpression) (const CATICkeSignature_var &,const CATICkeTerm_var &,CATCkeStream &);

/**
 * @nodoc
 * Possible values for defining signature information.
 * <br><b>Legal values</b>:
 * <tt>CATCkeSigInfoInternal</tt> never use.<br>
 * <tt>CATCkeSigInfoExternal</tt> default value. Indicates that this function is not managed by KBware.<br>
 * <tt>CATCkeSigInfoInvalid</tt> do not use.<br>
 * <tt>CATCkeSigInfoConsuming</tt> use it to indicate that this function is really high CPU consuming.<br>
 */
typedef unsigned long CATCkeSignatureInfo;

/** @nodoc
 * indicates that the signature is external (out of LiteralFeatures framework) or internal
 * this is used to know if a relation potentially includes functions that couldn't be retrieved at runtime
 * we call external those relations.<br>
 * You can also specify that evaluation of this signature is really high consuming. It is used, not to evaluate this function
 * the first time it is created.<br>
 */
extern ExportedByKnowledgeItf const CATCkeSignatureInfo  CATCkeSigInfoInternal;
extern ExportedByKnowledgeItf const CATCkeSignatureInfo  CATCkeSigInfoExternal;
extern ExportedByKnowledgeItf const CATCkeSignatureInfo  CATCkeSigInfoInvalid; 
extern ExportedByKnowledgeItf const CATCkeSignatureInfo  CATCkeSigInfoConsuming;

/**   
 * Interface dedicated to signature management.
 * <b>Role</b>: A signature is a definition of the arguments of a function, method, operator in the KBware language.<br>
 * for example : "name [arg: mode Type] : mode Type"  ie: "Real sin (x: in int): out Real".<br>
 * Such a signature is used to check the types compatibility when writing a relation<br>
 * Example : cos(sin(tan(c)*2))<br>
 * If you want to create a new function usable in formulas/checks/programs, you'll have<br>
 * to define a signature and an evaluator<br>
 * @see CATICkeArg
 */
class ExportedByKnowledgeItf CATICkeSignature: public CATBaseUnknown
{

public :

/**
 * Signature mode: indicates how this function will be written in KBWare.
 * <br><b>Legal values</b>: the notation can be
 * <tt>Function</tt> to be seen as a function : f(x,y), or
 * <tt>Method</tt> to be seen as a method : x,f(y), or
 * <tt>Operator</tt> do not use, or
 * <tt>Special</tt> do not use, or
 * <tt>Attribut</tt> to be seen as an attribute : x.f.
 */
enum Mode
{
  Function	= 1, 
  Method	= 2, 
  Operator	= 3, 
  Special	= 4, 
  Attribute	= 5,
  Event     = 6
};  
  

//--------------------------------------
// Nommage
//--------------------------------------
/**
 * Returns the name of the signature.<br>
 * (example : "sin")
 */
virtual CATUnicodeString  Name    () const =0;
  
/**
 * Renames the signature.<br>
 * @param  iNewName New name 
 */
virtual void            Rename    (const CATUnicodeString &iNewName) =0;

/**
 * Shows the signature to the user.<br>
 * Exampel: "sin(Real) : Real" 
 */
virtual CATUnicodeString  Show    () const =0; 

/**
 * Sets family of the signature.<br>
 * The family is used to classify signatures in the wizard. 
 * @param iFamilyName NLS name for family
 */
virtual void             SetFamily     (const CATUnicodeString &iFamilyName) 	     = 0;

/**
 * Returns the family of the signature.<br>
 * The family is used to classify signatures in the wizard. 
 */
virtual CATUnicodeString           Family        () const = 0;


/**
 * Returns signatures notation.<br>
 * Indicates if it is an operator, a function, a method or something else<br>
 * @return <br><b>Legal values</b>: the notation can be
 * <tt>Function</tt> to be seen as a function : f(x,y), or
 * <tt>Method</tt> to be seen as a method : x,f(y), or
 * <tt>Operator</tt> do not use, or
 * <tt>Special</tt> do not use, or
 * <tt>Attribut</tt> to be seen as an attribute : x.f.
 */
virtual CATICkeSignature::Mode    Notation      () const = 0;

/**
 * Sets notation of the signature.
 * Function is default value.
 * @param iNotation notation to be set.
 * <br><b>Legal values</b>: the notation can be
 * <tt>Function</tt> to be seen as a function : f(x,y), or
 * <tt>Method</tt> to be seen as a method : x,f(y), or
 * <tt>Operator</tt> do not use, or
 * <tt>Special</tt> do not use, or
 * <tt>Attribut</tt> to be seen as an attribute : x.f.
 * @param iHowToShow function pointer to specify how to show such a signature in special cases.
 */
virtual void		   SetNotation (CATICkeSignature::Mode iNotation,CATCkeShowExpression iHowToShow = NULL) = 0;




//--------------------------------------
// prototype
//--------------------------------------

/**
 * Returns the number of arguments of this signature.<br>
 * (Can be 0).
 */
virtual int          PrototypeSize () const = 0;

/**
 * Returns the list of arguments of this signature.<br>
 * @return list of arguments (not to be deallocated)
 */
virtual CATCkeListOfArg  Prototype     () const = 0;

/**
 * Returns the returned argument of the signature.
 */
virtual CATICkeArg_var   ReturnedArg   () const = 0;

/**
 * Add an argument to the list.
 * @param iAgrToAdd argument to be added
 */
virtual void   AddArgument   (const CATICkeArg_var iArgToAdd)  = 0;

/**
 * Modifies the whole list of arguments.
 * @param iListOfArguments list of arguments to replace
 */
virtual void		   SetPrototype  (const CATCkeListOfArg iListOfArguments) = 0;

/**
 * Sets the returned argument.
 * @param iReturnedArg returned arg
 */
virtual void		   SetReturnedArg(const CATICkeArg_var &iReturnedArg)  = 0;




/**
 * Indicates if the number of argument is variable.<br>
 * those signature must have at least one argument that defines the type of variable arguments.<br>   
 * @return <br><b>Legal values</b>: 
 * <tt>CATCke::True</tt> if it has a variable number of arguments.
 * <tt>CATCke::False</tt> if it has a constant number of arguments (default value).
 */
virtual CATCke::Boolean  HasVariableArgNb () const  = 0;

/**
 * Modifies the variable number of arguments property.<br>
 * @param iVariable <br><b>Legal values</b>: 
 * <tt>CATCke::True</tt> if it has a variable number of arguments.
 * <tt>CATCke::False</tt> if it has a constant number of arguments (default value).
 */
virtual void SetVariableArgNb (const CATCke::Boolean &iVariable)  = 0;

/**
 * Modifies the visibility of the function.<br>
 * @param iVariable <br><b>Legal values</b>: 
 * <tt>CATCke::True</tt> if it should be visible.
 * <tt>CATCke::False</tt> if not.
 */
virtual void SetUserVisibility (const CATCke::Boolean &iVariable)  = 0;

/**
 * Indicates if the function is visible.<br>
 * @return <br><b>Legal values</b>: 
 * <tt>CATCke::True</tt> if it is visible.
 * <tt>CATCke::False</tt> if not.
 */
virtual CATCke::Boolean IsUserVisible ()  = 0;

/**
 * @nodoc
 * Modifies the information.<br>
 * @param iInfo information 
 */
virtual void SetInformation (const CATCkeSignatureInfo info) =0;

/**
 * @nodoc
 * Returns the information.<br>
 */
virtual CATCkeSignatureInfo GetInformation () const =0;

/**
* @nodoc
* indicates if this signature is to be seen in different editors 
* (formula = 1, rule = 2, check = 4, set of equations = 8, 
* law = 16, actions = 32, expert check = 64, expert rule = 128)
*/
virtual void SetAllowedEditionContext(short context) = 0;

/**
* @nodoc
* indicates if this signature is to be seen in different editors 
* (formula = 1, rule = 2, check = 4, set of equations = 8, 
* law = 16, actions = 32, expert check = 64, expert rule = 128)
*/
virtual short GetAllowedEditionContext() = 0;


/**
* @nodoc
* another way to define where this function is accessible, is to describe
* what it can and cannot support. 
* (inversible = 1, create object = 2, operate treatment = 4, is not update compliant = 8)
*/
virtual void SetFunctionQuality(short Quality) = 0;

/**
* @param iRankForOptionalArguments
* Defines if the signature has optional arguments and starting from which argument (rank 1 to N).
* 0 to declare that there is no optional argument (by default). 1 to N 
*/
virtual void SetRankOfOptionalArguments (const int iRankForOptionalArguments)  = 0;

/**
* @return 
* Indicates if the signature has optional arguments and starting from which argument (rank 1 to N).
* 0 to declare that there is no optional argument (by default). 1 to N 
*/
virtual int  RankOfOptionalArguments () const  = 0;

private :
     
  // 2 define ClassName
  CATDeclareInterface;

}; 

CATDeclareHandler(CATICkeSignature,CATBaseUnknown);

#endif



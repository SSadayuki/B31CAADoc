//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================

#ifndef CATIVpmPredicate_h_

#define CATIVpmPredicate_h_



///////////////////////////////////////////////////////////////////////////////
//   PROJECT:...........VPM                                                  //
//   FRAMEWORK:.........                                                     //
//   AUTHOR:............Ivan Sarti (IDC Ltd.)                                //
//   DATE:..............16/06/1997                                           //
//             -----------------------------------------------               //
//   AUTHOR:............Basma FARHOUD                                        //
//   MODIFICATION:......Documentation Update                                 //
//   DATE:.............. 04/12/10                                            //
//             -----------------------------------------------               //
//                                                                           //
//   AUTHOR:............                                                     //
//   MODIFICATION:......                                                     //
//   DATE:..............  /  /                                               //
///////////////////////////////////////////////////////////////////////////////





// ========================================================================= //
//   COMMENT                                                                 //
//   =======                                                                 //
//   Style and layout has been copied from CATInterfaceObject.h, but no      //
//   specific classes, includes, etc., have been defined at this point (see  //
//   first date). These items will be added in time, but for the moment is   //
//   simply the template for the CATCATIVpmPredicate interface.                        //
// ========================================================================= //



#include "CATInterfaceObject.h"

#include "CATBaseUnknown.h"

#include "CATUnicodeString.h"

#include "CATIVpmPathExpression.h"

#include "GUIDVPMInterfaces.h"

#include "CORBAAnyDef.h"





/**
 * @nodoc
 */

typedef enum {
	CATVpmOpNONE,
	CATVpmOpAND,
	CATVpmOpOR,
	CATVpmOpEQUAL,
	CATVpmOpDIFFERENT,
	CATVpmOpLOWER,
	CATVpmOpLOWER_OR_EQUAL,
	CATVpmOpGREATER,
	CATVpmOpGREATER_OR_EQUAL,
	CATVpmOpIS_NULL,
	CATVpmOpIS_LIKE,
	CATVpmOpIS_IN
} CATVpmOperator;



#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATIVpmPredicate;
#else
extern "C" const IID IID_CATIVpmPredicate;
#endif



/**
 *  @CAA2Level L1
 *  @CAA2Usage U3
 */ 



class CATIVpmPredicate_var;

class CATString;



/**
 * Interface to manage predicates.
 * <br>
 * <b>warning</b>: To use this interface, do not consider only the module and framework shown at the bottom of this
 * page. 
 * You must also add the GUIDVPMQueryBuilder module in your Imakefile.mk file, and the framework VPMQueryBuilder in your 
 * framework Identity card.
 */



class ExportedByGUIDVPMInterfaces CATIVpmPredicate : public CATBaseUnknown

{

    // --> RTTI

	CATDeclareInterface;



  public:

/**
 * @nodoc
 */

    virtual int                        IsNOT () = 0;

/**
 * @nodoc
 */

    virtual int                        SetNOT () = 0;

/**
 * @nodoc
 */

    virtual CATVpmOperator             GetOperator() = 0 ;

    // --> Other member functions.

/**
 * @nodoc
 */

    virtual CATIVpmPredicate_var       GetFirstPredicate() = 0 ;

/**
 * @nodoc
 */

    virtual CATIVpmPredicate_var       GetSecondPredicate() = 0 ;

    // --> Other member functions.

/**
 * @nodoc
 */

    virtual CATIVpmPathExpression_var  GetLeftExpression() = 0 ;

/**
 * @nodoc
 */

    virtual CORBAAny                   GetValue() = 0 ;

/**
 * @nodoc
 */

    virtual void                       SetValue(CORBAAny&any) = 0 ;

    // --> Add join criteria within predicate

/**
 * @nodoc
 */

    virtual long Join(const CATIVpmPathExpression_var &iJoin) = 0;

    // --> get the stream as string corresponding to the predicate

/**
 * @nodoc
 */

    virtual HRESULT GetStream(CATUnicodeString& oTheStream) = 0;

};







CATDeclareHandler(CATIVpmPredicate,CATBaseUnknown);





/**
 * @nodoc
 */

extern ExportedByGUIDVPMInterfaces CATIVpmPredicate_var CreatePredicate(

                          int                       is_not,

                          CATIVpmPathExpression_var LeftExpression,

                          CATVpmOperator            compare,

                          const CATUnicodeString    &RightExpression);



// ========================================================================= //
// Predicates builders
// ========================================================================= //



/**
 * @nodoc
 */

#define DECLARE_PathExpressionPredicate(op_function) \
  extern ExportedByGUIDVPMInterfaces CATIVpmPredicate_var op_function (CATIVpmPathExpression_var LeftExp, CORBAAny any)



/**
 * @nodoc
 */

#define DECLARE_SimplePathExprPredicate(op_function) \
  extern ExportedByGUIDVPMInterfaces CATIVpmPredicate_var op_function (CATIVpmPathExpression_var LeftExp)



/**
 * @nodoc
 */

#define DECLARE_BinaryPredicate(op_function) \
  extern ExportedByGUIDVPMInterfaces CATIVpmPredicate_var op_function (const CATIVpmPredicate_var &pred1, const CATIVpmPredicate_var &pred2)



// *) PathExpression Predicates:
// you can use following operator functions (<,<=,==,!=,>,>=,=~) with:
// - as first parameter: a PathExpression object (as left expression)
// - as second parameter: a CORBAAny value (as right expression)
// You can also use IsLike(...) function.





/**
 * Creates a == Predicate
 * 
 * @param LeftExp
 * The Path Expression to valuate. 
 *
 * @param any
 * The value to be compared to.
 *
 * @return:
 * The created predicate. 
 *
 */

DECLARE_PathExpressionPredicate(operator ==);



/**
 * Creates a != Predicate. 
 *
 * @param LeftExp
 * The Path Expression to valuate. 
 *
 * @param any
 * The value to be compared to.
 *
 * @return:
 * The created predicate. 
 *
 */

DECLARE_PathExpressionPredicate(operator !=);




/**
 * Creates a &lt;= Predicate. 
 *
 * @param LeftExp
 * The Path Expression to valuate. 
 *
 * @param any
 * The value to be compared to.
 *
 * @return:
 * The created predicate. 
 *
 */

DECLARE_PathExpressionPredicate(operator <=);



/**
 * Creates a &lt; Predicate. 
 *
 * @param LeftExp
 * The Path Expression to valuate. 
 *
 * @param any
 * The value to be compare to.
 *
 * @return:
 * The created predicate. 
 *
 */

DECLARE_PathExpressionPredicate(operator <);



/**
 * Creates a &gt;= Predicate. 
 *
 * @param LeftExp
 * The Path Expression to valuate. 
 *
 * @param any
 * The value to be compared to.
 *
 * @return:
 * The created predicate. 
 *
 */

DECLARE_PathExpressionPredicate(operator >=);



/**
 * Creates a % Predicate. 
 *
 * @param LeftExp
 * The Path Expression to valuate. 
 *
 * @param any
 * The value to be compared to.
 *
 * @return:
 * The created predicate. 
 *
 */

DECLARE_PathExpressionPredicate(operator %);



/**
 * Creates a &gt; Predicate. 
 *
 * @param LeftExp
 * The Path Expression to valuate. 
 *
 * @param any
 * The value to be compared to.
 *
 * @return:
 * The created predicate. 
 *
 */

DECLARE_PathExpressionPredicate(operator >);



/**
 * Creaets an IsLike Predicate. 
 *
 * @param LeftExp
 * The Path Expression to valuate. 
 *
 * @param any
 * The value to be compared to.
 *
 * @return:
 * The created redicate. 
 *
 */

DECLARE_PathExpressionPredicate(IsLike);





/**
 * Creates an IsInSet Predicate. 
 *
 * @param LeftExp
 * The Path Expression to valuate. 
 *
 * @param any
 * The set of values among which the Left Expression value will be searched.
 *
 * @return:
 * The created predicate. 
 *
 */

DECLARE_PathExpressionPredicate(IsInSet);



// *) Binary/Unary Predicates:
// you can use operator *() or operator +() between two Predicates,
// - operator *(), &&(): AND predicate
// - operator +(), ||(): OR predicate



/**
 * Creates an AND Predicate (*).
 *
 * @param pred1
 * The first prediacte. 
 *
 * @param pred2
 * The second prediacte. 
 *
 * @return:
 * The created predicate. 
 *
 */

DECLARE_BinaryPredicate(operator *);



/**
 * Creates an AND Predicate (&amp;&amp;).
 *
 * @param pred1
 * The first prediacte. 
 *
 * @param pred2
 * The second prediacte. 
 *
 * @return:
 * The created predicate. 
 *
 */

DECLARE_BinaryPredicate(operator &&);



/**
 * Creates an OR Predicate (+).
 *
 * @param pred1
 * The first prediacte. 
 *
 * @param pred2
 * The second prediacte. 
 *
 * @return:
 * The created predicate. 
 *
 */

DECLARE_BinaryPredicate(operator +);



/**
 * Creates an OR Predicate (||).
 *
 * @param pred1
 * The first prediacte. 
 *
 * @param pred2
 * The second prediacte. 
 *
 * @return:
 * The created predicate. 
 *
 */

DECLARE_BinaryPredicate(operator ||);



/**
 * Creates an IsNOT Predicate.
 *
 * @param iPred
 * The predicate to negate.  
 *
 * @return:
 * The created predicate. 
 *
 */

extern ExportedByGUIDVPMInterfaces const CATIVpmPredicate_var &IsNOT(const CATIVpmPredicate_var &iPred);



/**
 * Creates an IsNULL Predicate.
 *
 * @param LeftExp
 * The Path Expression to check. 
 *
 * @return:
 * The created predicate. 
 */

DECLARE_SimplePathExprPredicate(IsNULL);



// *) ex:
//  CATIVpmPathExpression_var person_id   = CreatePathExpression("person","id");
//  CATIVpmPathExpression_var person_role = CreatePathExpression("person","role.name");
//  CATIVpmPredicate_var pred1 = (person_id == (CORBAAny)"myname");
//  CATIVpmPredicate_var pred2 = ! (person_role == (CORBAAny)"approver");
//  CATIVpmPredicate_var pred3 = pred1 * pred2;
//
//  -> pred3 stands for:
//  WHERE ( person.id = 'myname' AND ( NOT ( person.role.name = 'approver' ) ) );
//
//  -> the following pred4 as the same result than pred3 in a single predicate:
//  CATIVpmPredicate_var pred4 = (person_id == (CORBAAny)"myname")
//                             * (!(person_role == (CORBAAny)"approver"));
//
//  -> Simple, isn't it ?





//use of stream as unicode string
// #include "VX0QURY.h"

#ifdef  _WINDOWS_SOURCE
#ifdef  __VX0QURY
#define ExportedByVX0QURY      __declspec(dllexport)
#else
#define ExportedByVX0QURY      __declspec(dllimport)
#endif
#else
#define ExportedByVX0QURY
#endif



/**
 * Outputs a Predicate Description to a CATUnicodeString.
 *
 * @param iPred 
 * The predicate. 
 *
 * @param iPredDecription
 *  The Predicate Description. 	
 *	
 * @return:
 * The predicate described. 
 */

extern ExportedByVX0QURY

    CATIVpmPredicate_var operator >> (const CATIVpmPredicate_var &iPred, CATUnicodeString& iPredDecription );





//you can stream an existing predicate into a CATUnicodeString
//to do that, use simply the >> operator
//for e.g., on the pred1 previous predicate
//
// CATUnicodeString theStream;
// pred1 >> theStream;
//
//the result is [person: id = "myname"]



			      

#endif // CATIVpmPredicate_h_












#ifndef CATICfgORExpression_h
#define CATICfgORExpression_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3 
 */

#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "GUIDVPMInterfaces.h"
#include "CATListOfCATICfgANDExpression.h"

class CATICfgANDExpression_var;
class CATICfgORExpression_var;
class CATICfgNormalValue_var;
class CATICfgEffectivity_var;
class CATICfgInterval_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgORExpression ;
#else
extern "C" const IID IID_CATICfgORExpression ;
#endif

//=============================================================================

/**
 * Class to manage operations on ORExpressions.
 * <b>Role</b>: A ORExpression is a logical expression constituted of one
 * or several ANDExpression. The ANDExpressions are linked with the OR logical operator. 
 * An ORExpression is used in the context of Configuration.
 * It serves to give an effectivitity to a part Instance, based on ranges, dates, specifications and milestones.
 * Example of ORExpression : "(R(10,20) AND SpecA) OR (Date1)".
 * Examples of ANDExpression:  "R(10,20) AND SpecA" ,   " Date1".
 * Examples of Normal Values : "R(10,20)" ,  "SpecA"; "Date1".
 * @see CATICfgNormalValue, CATICfgEffectivity,  CATICfgANDExpression
 */
class ExportedByGUIDVPMInterfaces CATICfgORExpression : public CATBaseUnknown {

     CATDeclareInterface;

public:

/**
 * Add a single Normal Value to an ORExpression.
 * @param iValue
 *   The Normal Value to add. I nfact, an ANDExpression limited to a normal value will be added. 
 */	 
     virtual void Add(const CATICfgNormalValue_var &iValue) = 0;
     
/**
 * Add an ANDExpression to an ORExpression.
 * @param iValue
 *   The ANDexpression to add. 
 */	
     virtual void Add(const CATICfgANDExpression_var &iValue) = 0;
 
/**
 * Add an ANDExpression to an ORExpression. 
 * @param iValue
 *   The ANDexpression to add. 
 */
     virtual void Add(const CATICfgORExpression_var &iValue) = 0;
        
/**
 * Get the number of Normal Values contained in a  ORExpression.
 * @param oNbValues
 *   Number of  Normal Values. 
 */	        
     virtual HRESULT GetNbOfValues(long &oNbValues) const = 0;  
 
/**
 *  Get the ANDExpressions in  an  ORExpression.
 * @param oList
 *   List of ANDExpression.
 */	  
     virtual void GetValues(CATListOfCATICfgANDExpression_var &oList) const = 0;

/**
 *  Substract an ORExpression from another one.
 * @param iToRemove
 *   The ORExpression to substract.
 * @param oResult
 *   The ORexpression obtained after substraction.
 *    Example : ORexp1  = R(10,20) & Spec1.
 *              ORexp2  = R(7,15) .
 *              Resulting ORExp = R(16,20) & Spec1.
 */	
     virtual HRESULT Remove(const CATICfgORExpression_var &iToRemove, CATICfgORExpression_var &oResult) const = 0;

/** @nodoc 
 *  Check the inclusion of another ORExpression into an ORexpression.
 * @return
 *  An HRESULT value.
 *    S_OK   : "this" is included in iORExp.
 *    S_FALSE: "this" is not included in iORExp.
 *    E_FAIL : An error has occured (consult VPMInfo).
 * @param iORExp
 *   The inclusion of iORExp into "this" will be checked.
 * @param oResult
 *   The ORexpression obtained after Remove.
 */	
     virtual HRESULT IsFullyIncludedIn(const CATICfgORExpression_var &iORExp) const = 0;

/** @nodoc */         
     virtual HRESULT SetLiteralValue(CATUnicodeString & LiteralValue) const = 0;

/** @nodoc */ 
     virtual HRESULT GetLiteralValue(CATUnicodeString & LiteralValue) const = 0;

/**
 * Inverse an ORExpression.
 * @param oExpression.
 *   Resulting ORExpression.
 *   Example:  A, B , C ,D are single specs. 
 *   ORExp1 = (A AND B) OR ( C ).
 *   Resulting ORExp is : (!A AND !C) OR (!B AND !C )
 */	
     virtual HRESULT Inverse(CATICfgORExpression_var &oExpression) const = 0;
 
/**
 * Search an ANDexpression in an ORExpression.
 * @return
 *    An integer.
 * <br><b>Legal values </b>: 0 = Found ,  1 = not Found. 
 * @param iANDExp
 *   ANDExpression to search
 */	       
     virtual int SeekForANDExp(const CATICfgANDExpression_var &iANDExp) const = 0;

/**
 * Compare two ORExpressions.
 * @return
 *    An integer.
 * <br><b>Legal values </b>: 0 means EQUAL, 1 means DIFFERENT. 
 * @param iORExpression
 *   ORExpression to compare with "this".
 */	 
     virtual int IsEqual(const CATICfgORExpression_var &iORExpression) const = 0;

/**
 * Compute "AND" logical operation  between two ORExpressions
 * @param iORExpression
 *   ORExpression to compare with "this".
 * @param oExpression
 *   Computed ORExpression.
 *   Example:  A, B, C, D are single specs. 
 *    ORExp1 = A OR B  ; ORExp2 = C.
 *    Resulting ORExp = (A AND B) OR (B AND C). 
 */	
     virtual HRESULT And(const CATICfgORExpression_var &iExpression, CATICfgORExpression_var &oExpression) const = 0;

/**
 * Simplify an ORExpression.
 * @param oORExp
 *    The simplified ORExpression. 
 *    Example : OrExp1 = (A AND B) OR (A AND B AND C) OR D 
 *           Resulting oORExp = (A AND B) OR D  
 */
     virtual HRESULT Simplify(CATICfgORExpression_var &oORExp) const = 0;

/**
 * Copy an ORExpression.
 * @param oExpression
 *   Copy of the ORExpression. 
 */	 
     virtual HRESULT CopyMe( CATICfgORExpression_var &oExpression) = 0;
	

/** @nodoc
 *	// Methode permettant de dupliquer une ORExpression
 *	// en modifiant éventuellement sa liste de NormalValue
 *	// cf Mapping des Effs dans la copie des CVs 
 */
     virtual HRESULT CopyMe(CATListOfCATICfgNormalValue_var &iNewValueList,
			    CATListOfCATICfgNormalValue_var &iOldValueList, CATICfgORExpression_var &oExpression)=0;

/**
 * Clean the ANDExpression by Removing Normal Values.
 */	 	        
     virtual void Empty() = 0;
        
/**
 * Dump informations on an ANDExpression.
 */	
     virtual void Dump() const = 0;

/**
 * Build a String representing an ORExpression.
 * @param oOrExp
 *    The String representing the ORExpression. This string includes parenthesis, and key-words like OR , AND.
 *    This string is dedicated to user interface's  usage.
 */     
     virtual HRESULT toString(CATUnicodeString &oOrExp)=0;
     
/**
 * Translates an ORexp (this) to a list of list of Effectivity.
 *  @param oList.
 *    The list of effectivities translated.
 */
     virtual HRESULT TranslateToEffectivity(CATICfgEffectivity_var& oEffectivity) = 0;

};

// Handler definition 
CATDeclareHandler(CATICfgORExpression, CATBaseUnknown);

#endif

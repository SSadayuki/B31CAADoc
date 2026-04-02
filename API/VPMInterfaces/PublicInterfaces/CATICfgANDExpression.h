#ifndef CATICfgANDExpression_h
#define CATICfgANDExpression_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "GUIDVPMInterfaces.h"
#include "CATListOfCATICfgNormalValue.h"

class CATICfgNormalValue_var;
class CATICfgANDExpression_var;
class CATICfgORExpression_var;
class CATUnicodeString;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgANDExpression ;
#else
extern "C" const IID IID_CATICfgANDExpression ;
#endif

//=============================================================================

/**
 * Class to manage operations on ANDExpressions.
 * <b>Role</b>: A ANDexpression is a logical expression constituted of one
 * or several Normal Values. The Normal Values are linked with the AND logical operator. 
 * A ANDexpression is used in the context of Configuration.
 * It serves to give an effectivitity to a part Instance, based on ranges, dates,and milestones.
 * @see CATICfgNormalValue, CATICfgORExpression
 */
class ExportedByGUIDVPMInterfaces CATICfgANDExpression : public CATBaseUnknown {

     CATDeclareInterface;

public:

/**
 * Add a new NormalValue to an ANDExpression.
 * @param iValue
 *   The Normal Value to add. 
 */	 
     virtual void Add(const CATICfgNormalValue_var &iValue) = 0;
     
/**
 * Concatenate two ANDExpressions. Perform simplifications if possible.
 * @param iANDExp
 *   ANDexpression to compare with "this". 
 * @param oANDExp
 *   Computed ANDexpression, result of concatenation and simplifications.
 */	    
     virtual HRESULT ComputeAND(const CATICfgANDExpression_var &iANDExp, CATICfgANDExpression_var &oANDExp) const = 0;

/**
 * Get the number of Normal Values contained in a  ANDExpression.
 * @param oNbValues
 *   Number of  Normal Values. 
 */	 
     virtual HRESULT GetNbOfValues(long &oNbValues) const = 0;  

/**
 * Get the Normal Values contained in an  ANDExpression.
 * @param oList
 *   List Of Normal Values.
 */	      
     virtual void GetValues(CATListOfCATICfgNormalValue_var &oList) = 0;
        
/**
 * Clean the ANDExpression by Removing Normal Values.
 */	 
     virtual void Empty() = 0;

/**
 * Inverse an ANDExpression.
 * @param oORExpL
 *   Resulting ORExpression. To Remind: !(B AND C) = !B OR !C.
 */	         
     virtual void Inverse(CATICfgORExpression_var &oORExp) const = 0;

/**
 * Search a normal Value in an ANDExpression.
 * @return
 *    An integer.
 * <br><b>Legal values </b>: 0 = Found ,  1 = not Found. 
 * @param iNV
 *   Normal Value to search. 
 */	 
     // Search a given NV 
     virtual int SeekForNV(const CATICfgNormalValue_var &iNV) const = 0;

/**
 * Compare two ANDExpressions.
 * @return
 *    An integer. 
 * <br><b>Legal values </b>: 0 means EQUAL,  1 means DIFFERENT. 
 * @param iANDExpression
 *   ANDExpression to compare with "this". 
 */	 
     virtual int IsEqual(const CATICfgANDExpression_var &iANDExpression) const = 0;

     /**
      * Copy an ANDExpression.
      * @param oANDExpression
      *   Copy of the ANDExpression. 
      */	      
     virtual HRESULT CopyMe( CATICfgANDExpression_var &oANDExpression) = 0;

/**
 * Simplify an ANDExpression.
 * @param oANDExp
 *   Simplified ANDexpression. For example R(1,10) & R(3,8) & R(4,20) gives  R(4,8).
 */
     virtual HRESULT Simplify(CATICfgANDExpression_var &oANDExp) const = 0;
	 
/**
 * Dump informations on an ANDExpression.
 */	
     virtual void Dump() const = 0;

};

// Handler definition 
CATDeclareHandler(CATICfgANDExpression, CATBaseUnknown);

#endif

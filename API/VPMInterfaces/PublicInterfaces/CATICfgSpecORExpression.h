#ifndef CATICfgSpecORExpression_h_
#define CATICfgSpecORExpression_h_

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3 
 */

#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "GUIDVPMInterfaces.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgSpecORExpression ;
#else
extern "C" const IID IID_CATICfgORExpression ;
#endif

   
class CATICfgSpecANDExpression_var;
class CATICfgSpecORExpression_var;
class CATICfgORExpression_var;
class CATICfgSimpleSpecification_var;
class CATListValCATICfgSpecANDExpression_var;
class CATICfgSignedSpec_var;
class CATListValCATICfgSignedSpec_var;

/** @nodoc
 * Class to manage operations on SpecORExpressions.
 * <b>Role</b>: A SpecORExpression is a logical expression constituted of one
 * or several SpecANDExpressions. The SpecANDExpressions are linked with 
 * the OR logical operator. 
 * A SpecORExpression is used in the context of Configuration.
 * It serves to give an effectivitity to a part Instance, based on specifications.
 * @see CATICfgSpecANDExpression, CATICfgSignedSpec
 */

class ExportedByGUIDVPMInterfaces CATICfgSpecORExpression : public CATBaseUnknown {

CATDeclareInterface;
	
     public:
/**
 * Transform a SpecORExpression into a ORExpression.
 *  @param oORExp
 *    ORExpression coming from SpecOrExpression.
 */	
	 virtual HRESULT GetORExp(CATICfgORExpression_var &oORExp) const = 0;
	
/**
 * Add a SpecORExpression to a SpecORExpression.
 *  @param iSpecORExp
 *    The SpecORExpression to add.
 *    The SpecANDExpresions are concatened.
 */   
	 virtual void AddSpecORExp(const CATICfgSpecORExpression_var &iSpecORExp) = 0;

/**
 * Add a SpecANDExpression to a SpecORExpression.
 *  @param iSpecANDExp
 *    The SpecANDExpression to add.
 */
	 virtual void AddSpecANDExp(const CATICfgSpecANDExpression_var &iSpecANDExp) = 0 ;
     
/**
 * Add a Signed Specification to SpecORExpression.
 *  @param iSpec
 *    The Signed Specification to add.
 *    It will be considered as a SpecANDExpression, made of one single Signed Specification.
 */
	 virtual void AddSignedSpec(const CATICfgSignedSpec_var &iSpec) = 0;
        
/**
 * Add a List of SpecANDExpression to aSpecORExpression.
 *  @param iList
 *    The List of SpecANDExpression to add.
 */
	 virtual void AddListOfSpecANDExp(CATListValCATICfgSpecANDExpression_var &iList) const = 0;

/**
 * Add a of list Signed Spec to a SpecORExpression.
 *  @param oList
 *    The List of Signed Spec to Add
 */
	 virtual void AddListOfSignedSpec(CATListValCATICfgSignedSpec_var &iList) const = 0;

/**
 * Get the List of SpecANDExpression composing a SpecORExpression.
 *  @param oList
 *    The List of SpecANDExpression.
 */
	 virtual void GetListOfSpecANDExp(CATListValCATICfgSpecANDExpression_var &oList) const = 0;

/**
 * Get the number of SpecANDExpression composing a SpecORExpression.
 *  @param oNbVaLues
 *    The number of SpecANDexpression.
 */     
	 virtual void GetNbOfSpecANDExp(long &oNbValues) const = 0 ;
   
/**
 * Get an Encoded String (XML) representing a  SpecORExpression.
 *  @param outEncoded
 *    Encoded String built in XML format.
 *  @param outLength
 *    Length of Encoded String.
 */
	 virtual HRESULT GetEncodedString( char*& outEncoded, int& outLength) const= 0;
        
/**
 * Compare two SpecORExpressions.
 *  @return
 *    An integer
 *  <br><b>Legal values</b>: 0 = Equal ;  1 = Different.
 *  @param iSpecORExpression
 *    The SpecORExpression to compare.
 */
        virtual int IsEqual(const CATICfgSpecORExpression_var &iSpecORExpression) const = 0;

/**
 * Remove all SpecANDExpression from a SpecORExpression
 */	 
	 virtual void EmptySpecORExp() = 0 ;


};

CATDeclareHandler(CATICfgSpecORExpression, CATBaseUnknown);

#endif

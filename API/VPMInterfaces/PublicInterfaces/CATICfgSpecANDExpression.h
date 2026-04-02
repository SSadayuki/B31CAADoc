#ifndef CATICfgSpecANDExpression_h_
#define CATICfgSpecANDExpression_h_

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATUnicodeString.h"
#include "CATBaseUnknown.h"
#include "GUIDVPMInterfaces.h"

class CATICfgSpecANDExpression_var;
class CATICfgSignedSpec_var;
class CATListValCATICfgSignedSpec_var;
class CATListValCATICfgNormalValue_var;
class CATICfgANDExpression_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgSpecANDExpression ;
#else
extern "C" const IID IID_CATICfgSpecANDExpression ;
#endif


/**
 * Class to manage operations on SpecANDExpressions.
 * <b>Role</b>: A SpecANDexpression is a logical expression constituted of one
 * or several Signed Specifications. The Signed Specifications are linked with 
 * the AND logical operator. 
 * A SpecANDexpression is used in the context of Configuration.
 * It serves to give an effectivitity to a part Instance, based on specifications.
 * @see CATICfgSpecORExpression, CATICfgSignedSpec
 */

class ExportedByGUIDVPMInterfaces CATICfgSpecANDExpression : public CATBaseUnknown {

CATDeclareInterface;
	
public:
 
/** 
 * Add a SpecANDExpression to a SpecANDExpression(Concatenation).
 * @return
 *    An HRESULT value.
 *    <br><b>Legal values</b>:
 *    S_OK    : iSpecANDExpr successfully added.
 *    E_FAIL  : iSpecANDExp is not compatible with "this" expression.
 * @param iSpecANDExp
 *    The SpecANDExpression to add.
 */           
	 virtual HRESULT AddSpecANDExp(const CATICfgSpecANDExpression_var &iSpecANDExp) = 0;

/**
 * Add a Signed Specific to a SpecANDExpression.
 * @return
 *    An HRESULT value.
 *    <br><b>Legal values</b>:
 *    S_OK    : iSpec successfully added.
 *    E_FAIL  : iSpec is not compatible with "this" expression.
 *  @param iSpec
 *    The Signed Specification to add.
 */	
	 virtual HRESULT AddSignedSpec(const CATICfgSignedSpec_var &iSpec)= 0;


/**
 * Get the number of Signed Specs composing a SpecANDExpression.
 * @return
 *    An integer value (int).
 * @param oNbVaLues
 *    The number of Signed Specs.
 */ 	 
	 virtual int GetNbOfSignedSpec() const = 0;

/**
 * Get the List of Signed Spec composing a  SpecANDExpression.
 * @param oListOfSpecs
 *    The List of SignedSpecs.
 */
	 virtual void GetListOfSignedSpec( CATListValCATICfgSignedSpec_var &oListOfSpec) const = 0;
	 
/**
 * Add a list of Signed Specs to a SpecANDexpression.
 * @return
 *    An HRESULT value.
 *    <br><b>Legal values</b>:
 *    S_OK    : iListSpec successfully added.
 *    E_FAIL  : iListSpec is not compatible with "this" expression.
 * @param iListOfSpecs
 *    The List of SignedSpecs.
 */	 
	 virtual HRESULT AddListOfSignedSpec( CATListValCATICfgSignedSpec_var &iListSpec) =0;
	 
/**
 * Remove all Signed Specs from a SpecANDExpression.
 */	 
	 virtual void EmptySpecANDExp() = 0 ;

/**
 * Convert a SpecANDExpression to a list of Normal Values.
 * @return
 *    An HRESULT Value. 
 * @param oListNV
 *   List Of Normal Values 
 */	 
     virtual HRESULT GetListNV(CATListValCATICfgNormalValue_var &oListNV) const = 0;

/**
 * Copy a SpecANDExpression
 * @return
 *    An HRESULT Value.
 * @param oSpecANDexpression
 *    Copy of the SpecANDExpression.
 */
	 virtual HRESULT CopySpecANDExp(CATICfgSpecANDExpression_var &oSpecANDExpression) =0; 

/**
 * Inclusion test on two SpecANDExpressions. 
 * @return
 *    An HRESULT Value.
 *    <br><b>Legal values</b>:
 *    S_OK    : "this"  is included in iSpecANDExpression.
 *    S_FALSE : "this"  is not included in iSpecANDExpression.
 * @param iSpecANDExpression
 *    The SpecANDExpression with wich inclusion will be tested.
 * @param oListSpecNonIncluded
 *    Contains non-included specifications.
 *    example: "this" = "SpecA and SpecD",
 *             "iSpecANDExpression"= "SpecA and SpecC and SpecB".
 *    Result: ret = S_FALSE, and   "oListSpecNonIncluded" = "SpecD".
 */   
	 virtual HRESULT IsIncludedIn(CATICfgSpecANDExpression_var &iSpecANDExpression) = 0;

/**
 * Dump informations on a SpecANDExpression to STDOUT.
 */ 	 
	 virtual void Dump() const = 0;

/** 
 * Get a XML String representing a SpecANDExpression
 * @return
 *   A CATUnicideString in XML format.
 */ 
	 virtual HRESULT GetAsXmlString(CATUnicodeString & oEncodedString) const = 0;

/** @nodoc */
	 virtual CATUnicodeString GetAsString() const = 0;
	 
};

CATDeclareHandler(CATICfgSpecANDExpression, CATBaseUnknown);

#endif

#ifndef CATICfgSignedSpec_h_
#define CATICfgSignedSpec_h_

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3 
 */

#include "CATBaseUnknown.h"
#include "GUIDVPMInterfaces.h"
#include "CATUnicodeString.h"


class CATICfgSignedSpec_var;
class CATICfgSimpleSpecification_var;
class CATListValCATICfgSignedSpec_var;
class CATListValCATICfgNormalValue_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_CATICfgSignedSpec;
#else
extern "C" const IID IID_CATICfgSignedSpec;
#endif

/**
 * Class to manage operations on Signed Specifications.
 * <b>Role</b>: A Signed Specification is composed of a simple specification
 * and a sign, giving the information of which of these two assertions is true:
 * (Spec) or (!Spec).
 * A Signed Spec is used in the context of Configuration.
 * It serves to give an effectivity to a part Instance, the same way ranges or dates do.
 * @see CATICfgEffectivity
 */

class ExportedByGUIDVPMInterfaces CATICfgSignedSpec : public CATBaseUnknown {

CATDeclareInterface;
	
    public:

 /**
 * Get sign of a Signed Spec.
 * @return
 *    An integer.
 * <br><b>Legal values</b>: 1 counts for positive sign. Any other value counts for negative sign.
 */

    virtual int  GetSign() const = 0;
/**
 * Set sign of a Signed Spec.
 * @param i
 *    Sign to set.
 * <br><b>Legal values</b>: 1 counts for positive sign. Any other value counts for negative sign.
 */ 
   virtual void SetSign(const int i) = 0;

/**
 * Get Simple Specification composing Signed Specification.
 * @param oSpec
 *    The simple Specification retrieved.
 */  
  virtual void GetSpec (CATICfgSimpleSpecification_var &oSpec) const = 0;

/**
 * Get Simple Specification composing Signed Specification.
 * @param iSpec
 *   The simple Specification to set. 
 */ 
   virtual void SetSpec(const CATICfgSimpleSpecification_var& iSpec) = 0;


 /**
 * Get Signed Spec's Name.
 * @param oName
 *  Signed Spec'Name, given alone. 
 */
    virtual  HRESULT GetName(CATUnicodeString &oName) const = 0 ;
/**
 * Get full Signed Spec's Name.
 * @param oName
 *  Signed Spec'Name, given with the format "CategoryName.SpecName". 
 */
    // Returns name of Simple with format CategoryName.SpecName 
    virtual HRESULT  GetFullName(CATUnicodeString &oName) const = 0 ;

/**
 * Get a string representing the Signed Spec in XML format.
 * @param oEncodedString
 *   XML string retrieved.
 */
    virtual HRESULT GetAsXmlString(CATUnicodeString &  oEncodedString) = 0;

/**
 * Comparaison between two Signed Specs.
 * @return
 * An integer.
 * <br><b>Legal values</b>: 0 means EQUAL. 1 means DIFFERENT.
 * @param iSignedSpec
 *   Signed Spec to compare with "this".
 */
    virtual int CompareSignedSpec(const CATICfgSignedSpec_var &iSignedSpec)  = 0;

/**
 * Search Signed Spec in List of Signed Spec.
 * @return
 * An integer.
 * <br><b>Legal values</b>: 0 means EQUAL. 1 means DIFFERENT.
 * @param iSignedSpec
 *   Signed Spec to search.
 */
    virtual int SearchInList (const CATListValCATICfgSignedSpec_var &iList) = 0 ;

/**
 * Duplicate a Signed Spec.
 * @param oSpec 
 *    The copy of the Signed Spec.
 */
	 virtual HRESULT CopyMe(CATICfgSignedSpec_var &oSpec) = 0;

/**
 * Dump informations on Signed spec to STDOUT.
 */
    virtual void Dump() const = 0;


/**
 * String rep.
 */
    virtual CATUnicodeString GetAsString() const = 0;

/**
 * Find if a SignedSpec matches at least one criteria.
 * @return
 *        S_OK : The SignedSpec matches one criteria
 *        S_FALSE : The SignedSpec matches no criteria
 *        E_FAIL : Error
 * @param iList
 *    List of criteria.
 */  
    virtual HRESULT IsTrue(const CATListValCATICfgNormalValue_var & iList) const = 0;
};

CATDeclareHandler(CATICfgSignedSpec, CATBaseUnknown);

#endif

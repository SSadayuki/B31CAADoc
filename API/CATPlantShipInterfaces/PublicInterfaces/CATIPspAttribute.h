#ifndef CATIPspAttribute_H
#define CATIPspAttribute_H

//	COPYRIGHT DASSAULT SYSTEMES 2000
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"
#include "CATISpecDeclarations.h"

#include "CATListOfInt.h"
#include "CATListOfDouble.h"
class CATICkeParm;
class CATUnicodeString;
class CATListValCATUnicodeString;


extern "C" const IID IID_CATIPspAttribute ;

/**
 * Interface to query Plant Ship objects' attributes.
 * <b>Role</b>: To query and reset attributes.
 */

class CATIPspAttribute : public IUnknown
{
  public:  
  
  /**
  * List available domain names.
  * @param oListOfDomains 
  *   A list of domain names associated to the attribute. 
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT ListDomainNames ( CATListValCATUnicodeString **oListOfDomains ) = 0;

  /**
  * List all attribute names available in the given domain.
  * @param iDomain
  *   Domain name for attributes.
  * @param oListOfAttributeNames
  *   A list of attribute names. 
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT ListAttributes ( const CATUnicodeString& iDomain,
    CATListValCATUnicodeString **oListOfAttributeNames ) = 0;
  
  /**
  * Test if a discrete attribute.
  * @param iAttributeName
  *   Attribute name.
  * @param oStatus
  *   status.
  * @param oDiscreteType
  *   =1 standard discrete attribute.
  *   =2 Encoded discrete attribute.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT IsDiscrete ( const CATUnicodeString& iAttributeName, CATBoolean& oStatus, int& oDiscreteType ) = 0;

  /**
  * @deprecated V5R15 - Use ListStringDiscreteValues, ListDoubleDiscreteValues or ListStringDiscreteValues method instead.<br>
  * List standard type of discrete values.
  * @param iAttributeName
  *   Attribute name.
  * @param oListDiscreteValues
  *   discrete values.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT ListDiscreteValues ( const CATUnicodeString& iAttributeName,
    void * oListDiscreteValues ) = 0;

 /**
  * List standard type of integer discrete values. Use it for attribute of type tk_integer.
  * @param iAttributeName
  *   Attribute name.
  * @param oListIntValues
  *   integer discrete values.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */

  virtual HRESULT ListIntegerDiscreteValues ( const CATUnicodeString& iAttrName,
                           CATListOfInt& oListIntValues) = 0;

 /**
  * List standard type of double (real) discrete values. Use it for attribute of type tk_double.
  * @param iAttributeName
  *   Attribute name.
  * @param oListDbValues
  *   double discrete values.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */

  virtual HRESULT ListDoubleDiscreteValues ( const CATUnicodeString& iAttrName, 
                           CATListOfDouble& oListDbValues) = 0;

 /**
  * List standard type of string discrete values. Use it for attribute of type tk_string.
  * @param iAttributeName
  *   Attribute name.
  * @param oListStrValues
  *   string discrete values.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT ListStringDiscreteValues ( const CATUnicodeString& iAttrName, 
                           CATListValCATUnicodeString& oListStrValues) = 0;

  /**
  * List encode type of discrete values.
  * @param iAttributeName
  *   Attribute name.
  * @param oListShortValues
  *   short discrete values.
  * @param oListLongValues
  *   long discrete values.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT ListDiscreteValues ( const CATUnicodeString& iAttributeName,
    CATListValCATUnicodeString& oListShortValues,
    CATListValCATUnicodeString& oListLongValues ) = 0;

  /**
  * Return the type of attribute.
  * @param iAttributeName
  *   Attribute name.
  * @param oType
  *   Attribute type.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetType ( const CATUnicodeString& iAttributeName,
    CATAttrKind& oType) = 0;

  /**
  * Get the parameter associated with the attribute.
  * @param iAttributeName
  *   An attribute name.
  * @param oCkeParm [out, IUnknown#Release]
  *   A parameter for this attribute.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetLiteral ( const CATUnicodeString& iAttributeName, CATICkeParm **oCkeParm ) = 0;

  /**
  * Check if the attribute can be derived from its logical line.
  * @param iAttributeName
  *   An attribute name.
  * @param oBYes
  *   If TRUE, then it is derivable from the logical line.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT IsDerivable ( const CATUnicodeString& iAttributeName, CATBoolean *oBYes ) = 0;

  /** 
  *
  * Check if the attribute value is derived from its logical line.
  * @param iAttributeName
  *   An attribute name.
  * @param oBYes
  *   If TRUE, then its value is derived from the logical line.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT IsDerived ( const CATUnicodeString& iAttributeName, CATBoolean *oBYes ) = 0;

  /**
  * 
  * Reset the attribute value to be derived from its logical line.
  * @param iAttributeName
  *   An attribute name.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT ResetDerivedAttr ( const CATUnicodeString& iAttributeName ) = 0;

  /**
  * Unset the attribute value.
  * @param iAttributeName
  *   An attribute name.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT UnsetAttrValue ( const CATUnicodeString& iAttributeName ) = 0;

  /**
  * Check if the read only attribute is to be displayed writable in Properties Panel.
  * @param iAttributeName
  *   An attribute name. if a null string is passed, then it is applicable for all attributes.
  * @param oFlag
  *   If TRUE, then its value is derived from the logical line.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT IsReadOnly ( const CATUnicodeString& iAttributeName, CATBoolean& oFlag ) = 0;
};
#endif

#ifndef CATIMfgResource_H
#define CATIMfgResource_H

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2000
//=============================================================================
/**
* @CAA2Level L1
* @CAA2Usage U3
*/

// module
#include "MfgItfEnv.h"

// inheritance
#include "CATBaseUnknown.h"

// Forwards 
#include "CATBooleanDef.h"
#include "CATInterfaceEvents.h"
#include "CATISpecObject.h"
#include "CATIProduct.h"
#include "CATMathAxis.h"

#include "CATListOfInt.h"
#include "CATListOfDouble.h"
#include "CATListOfCATUnicodeString.h"

// OLE iid
#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByMfgItfEnv IID_CATIMfgResource ;
#else
extern "C" const IID IID_CATIMfgResource ;
#endif

/**   
 * Interface dedicated to resource objects management.
 * <b>Role</b>: This interface offers services to manage parameters.<br>
 * Common attributes are declared in constants header files.<br>
 * 
 */
class ExportedByMfgItfEnv CATIMfgResource : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:

/**
 * Sets the name of the resource object.
 * @param iName
 *     The name of the resource object
 */
	  virtual HRESULT SetName(const CATUnicodeString &iName)=0;

/**
 * Retrieves the name of the resource object.
 * @param oName
 *     The name of the resource object
 */
	  virtual HRESULT GetName(CATUnicodeString &oName)=0;

/**
 * Sets the default name of the resource object.  
 */
	  virtual HRESULT SetDefaultName()=0;

/**
 * Retrieves the default name of the resource object.
 * @param oName
 *     The default name of the resource object
 */
	  virtual HRESULT GetDefaultName(CATUnicodeString &oName)=0;

/**
 * Sets default values to parameters of the resource object.
 */
	  virtual HRESULT SetDefaultValues()=0;

/**
 * Sets values to parameters of the resource object. 
 * @param iListAttributes
 *   List containing attribute names to valuate 
 * @param iListTypeValues
 *   List containing type of value for each attribute 
 *   <br><b>Legal values</b>:
 *   <ul>
 *   <li>0: boolean</li>
 *   <li>1: integer</li>
 *   <li>2: double</li>
 *   <li>3: string</li>
 *   </ul>
 * @param iListNbValues
 *   List containing number of values for each attribute
 * @param iListIntValues
 *   List containing integer type values
 * @param iListDblValues
 *   List containing double type values
 * @param iListStrValues
 *   List containing string type values
 * @param iUnit
 *   Unit to express value
 *   <br><b>Legal values</b>:
 *   <ul>
 *   <li>0 (default) : values expressed as they are stored in the model (for example, 'mm' for length) </li>
 *   <li>1 : values expressed in current unit of session  </li>
 *   <li>2 : values expressed in MKS system  </li>
 *   </ul>
 */
	  virtual HRESULT SetValues(const CATListOfCATUnicodeString &iListAttributes,
                              const CATListOfInt              &iListTypeValues,
                              const CATListOfInt              &iListNbValues,
                              const CATListOfInt              &iListIntValues,
                              const CATListOfDouble           &iListDblValues,
                              const CATListOfCATUnicodeString &iListStrValues,
                              int                              iUnit=0)=0;

/**
 * Sets value to a CATICkeParm attribute of the resource object. 
 * @param iAttribute : 
 *     The name of the attribute
 * @param iValue :
 *     The CKE value
 * @see CATICkeParm
 */
	  virtual HRESULT SetValue(const CATUnicodeString   &iAttribute,
                             const CATBaseUnknown_var &iValue)=0;
/**
 * Sets value to a boolean attribute of the resource object. 
 * @param iAttribute
 *     The name of the attribute
 * @param iValue
 *     The boolean value
 */
	  virtual HRESULT SetValue(const CATUnicodeString   &iAttribute,
                             const CATBoolean          iValue)=0;
							
/**
 * Sets value to an integer attribute of the resource object.
 * @param iAttribute
 *     The name of the attribute
 * @param iValue
 *     The integer value
 */
	  virtual HRESULT SetValue(const CATUnicodeString  &iAttribute,
                             const int                iValue)=0;

/**
 * Sets value to a double attribute of the resource object.
 * @param iAttribute
 *      The name of the attribute
 * @param iValue
 *      The double value
 * @param iUnit
 *   Unit to express value
 *   <br><b>Legal values</b>:
 *   <ul>
 *   <li>0 (default) : values expressed as they are stored in the model (for example, 'mm' for length) </li>
 *   <li>1 : values expressed in current unit of session  </li>
 *   <li>2 : values expressed in MKS system  </li>
 *   </ul>
*/
	  virtual HRESULT SetValue(const CATUnicodeString  &iAttribute,
                             const double             iValue,
                             int                      iUnit=0)=0;

/**
 *	Sets value to a string attribute of the resource object. 
 * @param iAttribute
 *      The name of the attribute
 * @param oValue
 *      The string value
 */
	  virtual HRESULT SetValue(const CATUnicodeString   &iAttribute,
                             const CATUnicodeString   &iValue)=0;
		

/**
 * Retrieves values of parameters of the resource object. 
 * @param iListAttributes
 *    List containing attribute names to read
 *    (if List is empty, all attributes are read)
 * @param oListTypeValues
 *   <br><b>Legal values</b>:
 *   <ul>
 *   <li>0: boolean</li>
 *   <li>1: integer</li>
 *   <li>2: double</li>
 *   <li>3: string</li>
 *   </ul>
 * @param oListNbValues
 *    List containing number of values for each attribute
 * @param oListIntValues
 *    List containing integer type values
 * @param oListDblValues
 *    List containing double type values
 * @param oListStrValues
 *    List containing string type values
 * @param iUnit
 *   Unit to express value
 *   <br><b>Legal values</b>:
 *   <ul>
 *   <li>0 (default) : values expressed as they are stored in the model (for example, 'mm' for length) </li>
 *   <li>1 : values expressed in current unit of session  </li>
 *   <li>2 : values expressed in MKS system  </li>
 *   </ul>
 */
	  virtual HRESULT GetValues(CATListOfCATUnicodeString &iListAttributes,
                              CATListOfInt              &oListTypeValues,
                              CATListOfInt              &oListNbValues,
                              CATListOfInt              &oListIntValues,
                              CATListOfDouble           &oListDblValues,
                              CATListOfCATUnicodeString &oListStrValues,
                              int                       iUnit=0)=0;
/**
 * Retrieves value of a CATICkeParm attribute of the resource object. 
 * @param iAttribute
 *   The name of the attribute
 * @param oValue
 *   The CKE value
 * @see CATICkeParm
 */
	  virtual HRESULT GetValue(const CATUnicodeString   &iAttribute,
                             CATBaseUnknown_var       &oValue)=0;


/**
 * Retrieves value of a boolean attribute of the resource object.
 * @param iAttribute
 *   The name of the attribute
 * @param oValue
 *   The boolean value
 */
	  virtual HRESULT GetValue(const CATUnicodeString   &iAttribute,
                             CATBoolean               &oValue)=0;

/**
 * Retrieves value of an integer attribute of the resource object.
 * @param iAttribute
 *     The name of the attribute
 * @param oValue
 *     The integer value
 */
	  virtual HRESULT GetValue(const CATUnicodeString   &iAttribute,
                             int                      &oValue)=0;
/**
 * Retrieves value of a double attribute of the resource object.
 * @param iAttribute
 *     The name of the attribute
 * @param oValue
 *     The double value
 * @param iUnit
 *   Unit to express value
 *   <br><b>Legal values</b>:
 *   <ul>
 *   <li>0 (default) : values expressed as they are stored in the model (for example, 'mm' for length) </li>
 *   <li>1 : values expressed in current unit of session  </li>
 *   <li>2 : values expressed in MKS system  </li>
 *   </ul>
 */
	  virtual HRESULT GetValue(const CATUnicodeString   &iAttribute,
                             double                   &oValue,
                             int                       iUnit=0)=0;
/**
 * Retrieves value of a string attribute of the resource object.
 * @param iAttribute
 *     The name of the attribute
 * @param oValue
 *     The string value
 */
	  virtual HRESULT GetValue(const CATUnicodeString   &iAttribute,
                             CATUnicodeString         &oValue)=0;
/**
 * Retrieves the parametrization set of the resource object.
 * @param oValue
 *   The list of parametrization on the resource.
 *   Each string is one parametrization rule.
 * @return 
 *   Return code.
 *   <br><b>Legal values</b>:
 *   <ul>
 *   <li>S_OK: the parametrization exists</li>
 *   <li>E_FAIL: otherwise</li>
 *   </ul>
 */
  virtual HRESULT GetParametrization (CATListOfCATUnicodeString &oValue) =0;

/**
 * Sets the parametrization set of the resource object.
 * @param iValue
 *   The list of parametrization to be added to the resource.
 *   One string is one parametrization rule.
 * @return
 *   Return code.
 *   <br><b>Legal values</b>:
 *   <ul>
 *   <li>S_OK: the parametrization could be added</li>
 *   <li>E_FAIL: otherwise</li>
 *   </ul>
 */
  virtual HRESULT SetParametrization (const CATListOfCATUnicodeString &iValue) =0;

/**
 * Retrieves the linked object associated on the resource object.
 * @param oObject
 *   The external object associated on the resource.
 * @return 
 *   Return code.
 *   <br><b>Legal values</b>:
 *   <ul>
 *   <li>S_OK: the object exists</li>
 *   <li>E_FAIL: otherwise</li>
 *   </ul>
 */
  virtual HRESULT GetLinkedObject (CATISpecObject_var &oObject) =0;

/**
 * Sets the link to the object on the resource object.
 * @param iObject
 *   The external object to associate on the resource.
 * @return
 *   Return code.
 *   <br><b>Legal values</b>:
 *   <ul>
 *   <li>S_OK: the object could be added</li>
 *   <li>E_FAIL: otherwise</li>
 *   </ul>
 */
  virtual HRESULT SetLinkedObject (const CATISpecObject_var &iObject) =0;

/**
 * @nodoc 
 */
	  virtual HRESULT GetType (CATUnicodeString &oType)=0;

/**
 * @nodoc 
 */
	  virtual HRESULT GetVersion (int &oVersion)=0;
/**
 * @nodoc 
 */
	  virtual HRESULT GetUserIdent (CATUnicodeString &oUserIdentificator)=0;
/**
 * @nodoc 
 */
	  virtual HRESULT GetProduct(CATIProduct_var &oProduct, CATMathAxis &oAxis)=0;
};

CATDeclareHandler(CATIMfgResource, CATBaseUnknown) ;

#endif

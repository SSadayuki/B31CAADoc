
#ifndef __CATFmAttributeValue_h__
#define __CATFmAttributeValue_h__


// COPYRIGHT DASSAULT SYSTEMES 2010

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


// FeatureModelerExt forwards and headers.
class CATFmFeatureFacade;
#include "FeatureModelerExt.h" // ExportedByFeatureModelerExt
#include "CATFmAttributeAndValueKind.h"

// Other forwards and headers.
class CATListValCATBaseUnknown_var;
class CATListValCATUnicodeString;
class CATOmbObjectInContext;
class CATOmbObjectInContext_var;
class CATRawColldouble;
class CATRawCollint;
class CATUnicodeString;
class CATBaseUnknown;
class CATBaseUnknown_var;
class PLMPublicLinkFacade;
#include "CATSysBoolean.h" // CATBoolean
#include "IUnknown.h" // HRESULT

/**
 * Class representing the value of a Feature Attribute.
 * </br><b>Role</b>: A CATFmAttributeValue is a variant object able to hold all the types of values a Feature Attribute can bear.
 * <p>The types supported are represented by the enumeration @href CATFmAttributeAndValueKind.
 * <p>A CATFmAttributeValue is always a list of values, a single value being represented by a list of cardinality 1.
 * <p>Index of list operations start at 1.
 * <p>Methods that always succeed return a reference to the modified instance which allows to chain operations.
 */
class ExportedByFeatureModelerExt CATFmAttributeValue
{
public:
  /**
   * Constructs an empty CATFmAttributeValue.
   * <br>An empty (or void) CATFmAttributeValue instance is of type @href CATFmKind_void and of cardinality 0.
   */
  CATFmAttributeValue();

  /**
   * Copy constructor.
   * @param iValue [in]
   *   The CATFmAttributeValue to copy.
   *   Notice that thanks to copy-on-write mechanisms, copy is almost free.
   */
  CATFmAttributeValue(const CATFmAttributeValue & iValue);

  /**
   * Constructs a CATFmAttributeValue instance from an integer.
   * <br>Resulting CATFmAttributeValue instance will be of type @href CATFmKind_int and of cardinality 1.
   * @param iValue [in]
   *   The integer value to assign.
   */
  CATFmAttributeValue(int iValue);

  /**
   * Constructs a CATFmAttributeValue instance from a double.
   * <br>Resulting CATFmAttributeValue instance will be of type @href CATFmKind_double and of cardinality 1.
   * @param iValue [in]
   *   The double value to assign.
   */
  CATFmAttributeValue(double iValue);

  /**
   * Constructs a CATFmAttributeValue instance from an unicode string.
   * <br>Resulting CATFmAttributeValue instance will be of type @href CATFmKind_string and of cardinality 1.
   * @param iValue [in]
   *   The @href CATUnicodeString to assign.
   */
  CATFmAttributeValue(const CATUnicodeString& iValue);

  /**
   * Destructor.
   */
  ~CATFmAttributeValue();

  /**
   * Assignment operator from a CATFmAttributeValue instance.
   * @param iValue [in]
   *   The CATFmAttributeValue instance to copy.
   *   <br>Notice that thanks to copy-on-write mechanism, copy is practically free.
   * @return
   *   A reference to this instance.
   */
  CATFmAttributeValue& operator =(const CATFmAttributeValue & iValue);

  /**
   * Gets the kind of a CATFmAttributeValue instance.
   * @return
   *   The @href CATFmAttributeAndValueKind of the CATFmAttributeValue instance. 
   */
  CATFmAttributeAndValueKind Kind() const;

  /**
   * Gets the cardinality of a CATFmAttributeValue instance.
   * @return
   *   The size of the CATFmAttributeValue instance. 
   */
  int Size() const;

  /**
   * Assigns a boolean value to a CATFmAttributeValue instance.
   * <br>Resulting instance will have kind @href CATFmKind_boolean and cardinality 1.
   * @param iBoolean [in]
   *   The boolean value to assign.
   * @return
   *   A reference to this instance.
   */
  CATFmAttributeValue& SetBoolean(CATBoolean iBoolean);

  /**
   * Retrieves the boolean value held by a CATFmAttributeValue instance.
   * @param oBoolean [out]
   *   The boolean value retrieved.
   *   In case of failure, FALSE will be assigned to it.
   * @return 
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The instance kind is @href CATFmKind_boolean and its size is 1.</dd>
   *     <dt>E_FMTYPEMISMATCH</dt>
   *     <dd>The instance kind is not @href CATFmKind_boolean.</dd>  
   *     <dt>E_FMNOTASINGLE</dt>
   *     <dd>The instance size is not equal to 1.</dd>  
   *  </dl>
   */
  HRESULT GetBoolean(CATBoolean& oBoolean) const;

  /**
   * Assigns a byte value to a CATFmAttributeValue instance.
   * <br>Resulting instance will have kind @href CATFmKind_byte and cardinality 1.
   * @param iByte [in]
   *   The byte value to assign.
   * @return
   *   A reference to this instance.
   */
  CATFmAttributeValue& SetByte(unsigned char iByte);

  /**
   * Retrieves the byte value held by a CATFmAttributeValue instance.
   * @param oByte [out]
   *   The byte value retrieved.
   *   In case of failure, 0 will be assigned to it.
   * @return 
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The instance kind is @href CATFmKind_byte and its size is 1.</dd>
   *     <dt>E_FMTYPEMISMATCH</dt>
   *     <dd>The instance kind is not @href CATFmKind_byte.</dd>  
   *     <dt>E_FMNOTASINGLE</dt>
   *     <dd>The instance size is not equal to 1.</dd>  
   *  </dl>
   */
  HRESULT GetByte(unsigned char& oByte) const;

  /**
   * Assigns an integer value to a CATFmAttributeValue instance.
   * <br>Resulting instance will have kind @href CATFmKind_int and cardinality 1.
   * @param iInteger [in]
   *   The integer value to assign.
   * @return
   *   A reference to this instance.
   */
  CATFmAttributeValue& SetInteger(int iInteger);

  /**
   * Retrieves the integer value held by a CATFmAttributeValue instance.
   * @param oInteger [out]
   *   The integer value retrieved.
   *   In case of failure, 0 will be assigned to it.
   * @return 
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The instance kind is @href CATFmKind_int and its size is 1.</dd>
   *     <dt>E_FMTYPEMISMATCH</dt>
   *     <dd>The instance kind is not @href CATFmKind_int.</dd>  
   *     <dt>E_FMNOTASINGLE</dt>
   *     <dd>The instance size is not equal to 1.</dd>  
   *  </dl>
   */
  HRESULT GetInteger(int& oInteger) const;

  /**
   * Assigns a double value to a CATFmAttributeValue instance.
   * <br>Resulting instance will have kind @href CATFmKind_double and cardinality 1.
   * @param iDouble [in]
   *   The double value to assign.
   * @return
   *   A reference to this instance.
   */
  CATFmAttributeValue& SetDouble(double iDouble);

  /**
   * Retrieves the double value held by a CATFmAttributeValue instance.
   * @param oDouble [out]
   *   The double value retrieved.
   *   In case of failure, 0 will be assigned to it.
   * @return 
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The instance kind is @href CATFmKind_double and its size is 1.</dd>
   *     <dt>E_FMTYPEMISMATCH</dt>
   *     <dd>The instance kind is not @href CATFmKind_double.</dd>  
   *     <dt>E_FMNOTASINGLE</dt>
   *     <dd>The instance size is not equal to 1.</dd>  
   *  </dl>
   */
  HRESULT GetDouble(double& oDouble) const;

  /**
   * Assigns a string value to a CATFmAttributeValue instance.
   * <br>Resulting instance will have kind @href CATFmKind_string and cardinality 1.
   * @param iUnicodeString [in]
   *   The string value to assign.
   * @return
   *   A reference to this instance.
   */
  CATFmAttributeValue& SetString(const CATUnicodeString& iUnicodeString);

  /**
   * Retrieves the string value held by a CATFmAttributeValue instance.
   * @param oUnicodeString [out]
   *   The string value retrieved.
   *   In case of failure, empty string will be assigned to it.
   * @return 
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The instance kind is @href CATFmKind_string and its size is 1.</dd>
   *     <dt>E_FMTYPEMISMATCH</dt>
   *     <dd>The instance kind is not @href CATFmKind_string.</dd>  
   *     <dt>E_FMNOTASINGLE</dt>
   *     <dd>The instance size is not equal to 1.</dd>  
   *  </dl>
   */
  HRESULT GetString(CATUnicodeString& oUnicodeString) const;

  /**
   * Assigns the feature held by a CATFmFeatureFacade to a CATFmAttributeValue instance.
   * <br>Resulting instance will have kind @href CATFmKind_feature and cardinality 1.
   * @param iFeatureFacade [in]
   *   The @href CATFmFeatureFacade instance to assign.
   * @return
   *   A reference to this instance.
   */
  CATFmAttributeValue& SetFeature(const CATFmFeatureFacade& iFeatureFacade);

  /**
   * Retrieves the feature held by a CATFmAttributeValue instance.
   * @param oFeatureFacade [out]
   *   The feature retrieved.
   *   In case of failure, the facade is no more bound to a feature.
   * @return 
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The instance kind is @href CATFmKind_feature, its size is 1 and the value contains a non NULL feature.</dd>
   *     <dt>S_FALSE</dt>
   *     <dd>The instance kind is @href CATFmKind_feature, its size is 1 but the value contains a NULL feature.</dd> 
   *     <dt>E_FMTYPEMISMATCH</dt>
   *     <dd>The instance kind is not @href CATFmKind_feature.</dd>  
   *     <dt>E_FMNOTASINGLE</dt>
   *     <dd>The instance size is not equal to 1.</dd>  
   *     <dt>E_FMNOTLOADED</dt>
   *     <dd>The feature is not loaded.</dd>  
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>The feature is not valid.</dd>  
   *  </dl>
   */
  HRESULT GetFeature(CATFmFeatureFacade& oFeatureFacade) const;

  /**
   * Retrieves an interface pointer on the feature held by a CATFmAttributeValue instance.
   * @param iIID [in]
   *   The interface identifier for which a pointer is requested.
   * @param oPtr [out, CATBaseUnknown#Release]
   *   The address where the returned pointer to the interface is located.
   *   In case of success, this pointer must be released after use.
   * @return 
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The instance kind is @href CATFmKind_feature, its size is 1 and the value contains a non NULL feature which implements requested interface.</dd>
   *     <dt>E_INVALIDARG</dt>
   *     <dd>Output pointer oPtr is NULL.</dd>
   *     <dt>E_POINTER</dt>
   *     <dd>The instance kind is @href CATFmKind_feature, its size is 1 but the value contains a NULL feature.</dd> 
   *     <dt>E_FMTYPEMISMATCH</dt>
   *     <dd>The instance kind is not @href CATFmKind_feature.</dd>  
   *     <dt>E_FMNOTASINGLE</dt>
   *     <dd>The instance size is not equal to 1.</dd>  
   *     <dt>E_FMNOTLOADED</dt>
   *     <dd>The feature is not loaded.</dd>  
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>The feature is not valid.</dd>  
   *     <dt>E_NOINTERFACE</dt>
   *     <dd>The feature does not implement requested interface.</dd> 
   *  </dl>
   */
  HRESULT QueryInterfaceOnFeature(const IID & iIID, void ** oPtr) const;

  /**
   * Assigns a feature to a CATFmAttributeValue instance.
   * <br>Resulting instance will have kind @href CATFmKind_feature and cardinality 1.
   * @param iObject [in]
   *   A pointer to a @href CATBaseUnknown instance (can be NULL).
   *   <br>Notice that if iObject is not a feature, it will be treated as a NULL pointer.
   * @return
   *   A reference to this instance.
   */
  CATFmAttributeValue& SetFeature(const CATBaseUnknown* iObject);

  /**
   * Retrieves the feature held by a CATFmAttributeValue instance.
   * @return 
   *   The feature held by this instance.
   *   A NULL pointer will be returned in all failure cases detailed in other GetFeature method.
   */
  CATBaseUnknown_var GetFeature() const;

  /**
   * Assigns a CATOmbObjectInContext instance to a CATFmAttributeValue.
   * <br>Resulting instance will have kind @href CATFmKind_external and cardinality 1.
   * @param iObjectInContext [in]
   *   A pointer to a @href CATOmbObjectInContext instance (can be NULL).
   * @return
   *   A reference to this instance.
   */
  CATFmAttributeValue& SetExternalObject(const CATOmbObjectInContext* iObjectInContext);

  /**
   * Retrieves the CATOmbObjectInContext instance value held by a CATFmAttributeValue instance.
   * @param oObjectInContext [out]
   *   A smart pointer to the object in context retrieved.
   *   <br>In case of failure, NULL will be assigned to it.
   * @return 
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The instance kind is @href CATFmKind_external, its cardinality is 1 and a non NULL object in context has been retrieved</dd>
   *     <dt>S_FALSE</dt>
   *     <dd>The instance kind is @href CATFmKind_external, its cardinality is 1 but NULL object in context has been retrieved</dd>
   *     <dt>E_FMTYPEMISMATCH</dt>
   *     <dd>The instance kind is not @href CATFmKind_feature.</dd>  
   *     <dt>E_FMNOTASINGLE</dt>
   *     <dd>The instance size is not equal to 1.</dd> 
   *     <dt>Other</dt>
   *     <dd>Other hresults can occur if the set pointed PLM component could not be loaded or the pointed object does not exist in the pointed PLM component any more.
   *     <dd>In these cases, more information on the cause can be obtained with @href CATOmbLinkStatusServices#GetLinkStatusFromRc.</dd>
   *  </dl>
   */
  HRESULT GetExternalObject(CATOmbObjectInContext_var& oObjectInContext) const;

  /**
   * Retrieve the PLMPublicLinkFacade instance associated to a CATFmAttributeValue instance.
   * @param oLinkFacade [out]
   * @return 
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The instance kind is @href CATFmKind_external, its cardinality is 1 and the associated facade has been retrieved.</dd>
   *     <dt>S_FALSE</dt>
   *     <dd>The instance kind is @href CATFmKind_external, its cardinality is 1 but no facade has been retrieved because the external object has been set to a NULL value.</dd>
   *     <dt>E_FMTYPEMISMATCH</dt>
   *     <dd>The instance kind is not @href CATFmKind_feature.</dd>  
   *     <dt>E_FMNOTASINGLE</dt>
   *     <dd>The instance size is not equal to 1.</dd> 
   *     <dt>Other</dt>
   *     <dd>Other hresults can occur.</dd> 
   *  </dl>
   */
  HRESULT GetLinkFacade(PLMPublicLinkFacade & oLinkFacade);

  /**
   * Resets a CATFmAttributeValue to default value.
   * <br>Default value is the same as the one obtained through the default constructor.
   * @return
   *    A reference to this instance.
   */
  CATFmAttributeValue& Clear(); 

 
  /**
   * Subscripting operator.
   * <br>Returns the value at index iIndex of a CATFmAttributeValue instance.
   * @param iIndex [in]
   *   The index of the value to retrieve.
   *   <br>This index must be greater (strictly) than 0 and less than or equal to instance cardinality.
   * @return
   *   The value at index iIndex of this instance.
   *   <br>If the index is out of bounds [1,Size()], a default CATFmAttributeValue of type @href CATFmKind_void and cardinality 0 is returned.
   */
  const CATFmAttributeValue operator [](int iIndex) const;

  /**
   * Retrieves the value at index iIndex of a CATFmAttributeValue instance.
   * @param iIndex [in]
   *   The index of the value to retrieve.
   *   <br>This index must be greater (strictly) than 0 and less than or equal to instance cardinality.
   * @param oValue [out]
   *   The value at index iIndex of this instance.
   *   In case of failure default value is assigned to oValue.
   * @return 
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>A value has been retrieved at given index.</dd>
   *     <dt>E_FMOUTOFBOUND</dt>
   *     <dd>Index iIndex is out of bounds [1,Size()].</dd>
   *  </dl>
   */
  HRESULT Get(int iIndex, CATFmAttributeValue & oValue) const;

  /**
   * Assigns a CATFmAttributeValue instance at index iIndex.
   * @param iIndex [in]
   *   The index where the value must be set.
   *   <br>This index must be greater (strictly) than 0 and less than or equal to instance cardinality.
   * @param iValue [in]
   *   The CATFmAttributeValue instance to assign.
   *   <br><tt>iValue</tt> must be of cardinality 1 and its kind cannot be CATFmKind_any or CATFmKind_void.
   *   <br>Note: If <tt>this</tt> instance is not unset (@href CATFmKind_void) and iValue has not the same type, 
   *   <tt>this</tt> instance type will become @href CATFmKind_any.
   * @return 
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The value has been succesfully set at given index.</dd>
   *     <dt>E_FMOUTOFBOUND</dt>
   *     <dd>Index iIndex is out of bounds [1,Size()].</dd>
   *     <dt>E_INVALIDARG</dt>
   *     <dd>Input instance iValue has a cardinality different from 1 or its type is @href CATFmKind_any.</dd>
   *  </dl>
   */
  HRESULT Set(int iIndex,const CATFmAttributeValue & iValue);

  /**
   * Appends a CATFmAttributeValue instance at the end of the list.
   * <br>This method is a shortcut for @href #Insert after the last index of the list.
   * @param iValue [in]
   *   The value to append.
   * @return
   *   A reference to this instance.
   */
  CATFmAttributeValue& Append(const CATFmAttributeValue & iValue);

  /**
   * Inserts a CATFmAttributeValue instance at index iIndex.
   * @param iIndex [in]
   *   The index where the value must be inserted.
   *   <br>This index must be greater (strictly) than 0 and less than or equal to this instance cardinality + 1.
   * @param iValue [in]
   *   The CATFmAttributeValue instance to insert.
   *   <br><tt>iValue</tt> must be of cardinality 1 and its kind cannot be CATFmKind_any or CATFmKind_void.
   *   <br>Note: If this instance is not unset (CATFmKind_void) and <tt>iValue</tt> has not the same type, 
   *   this instance type will become CATFmKind_any.
   * @return 
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>The value has been succesfully inserted at given index.</dd>
   *     <dt>E_FMOUTOFBOUND</dt>
   *     <dd>Index iIndex is out of bound.</dd>
   *     <dt>E_INVALIDARG</dt>
   *     <dd>Input instance iValue has cardinality different from 1 or its type is CATFmKind_any.</dd>
   *  </dl>
   */
  HRESULT Insert(int iIndex, const CATFmAttributeValue & iValue);

  /**
   * Removes index iIndex from the list.
   * @param iIndex [in]
   *   The index which must be removed.
   *   <br>This index must be greater (strictly) than 0 and less than or equal to instance cardinality.
   * @return 
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>Input index was succesfully removed.</dd>
   *     <dt>E_FMOUTOFBOUND</dt>
   *     <dd>Input index is out of bound.</dd>
   *  </dl>
   */
  HRESULT Remove(int iIndex);

  /**
   * Assigns a C array of boolean to a CATFmAttributeValue instance.
   * <br>Resulting CATFmAttributeValue instance will be of type @href CATFmKind_boolean and of cardinality iSize.
   * @param iArrayOfBoolean [in]
   *   The C array of boolean to assign.
   *   If NULL, a 0 cardinality list will be built.
   * @param iSize [in]
   *   The size of the C array of boolean to assign.
   *   If less than 0, a 0 cardinality list will be built.
   * @return
   *   A reference to this instance.
   */
  CATFmAttributeValue& BuildFromCArrayOfBoolean(const CATBoolean* iArrayOfBoolean,int iSize);

  /**
   * Converts a CATFmAttributeValue instance to a C array of boolean.
   * <br>Type of the instance must be @href CATFmKind_boolean.
   * @param oArrayOfBoolean [out]
   *   The C array where to copy CATFmAttributeValue content.
   *   <br><tt>oArrayOfBoolean</tt> must be not NULL and must be able to hold at least <tt>iArraySize</tt> items.
   *   <br>Note: In case of failure, <tt>iArraySize</tt> elements of <tt>oArrayOfBoolean</tt> will be set to 0.
   * @param iArraySize [in]
   *   The number of elements to copy to <tt>oArrayOfBoolean</tt>.
   *   <br>It must be equal to the size of the CATFmAttributeValue instance. 
   * @return 
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>Instance has been successfully converted to a C array of boolean.</dd>
   *     <dt>S_FALSE</dt>
   *     <dd>Instance size is 0.</dd>
   *     <dt>E_INVALIDARG</dt>
   *     <dd><tt>iArraySize</tt> is not equal to instance size or <tt>oArrayOfBoolean</tt> is NULL.</dd>
   *     <dt>E_FMTYPEMISMATCH</dt>
   *     <dd>Instance type is not @href CATFmKind_boolean.</dd>
   *  </dl>
   */
  HRESULT ConvertToCArrayOfBoolean(CATBoolean* oArrayOfBoolean,int iArraySize) const;

  /**
   * Assigns a C array of byte to a CATFmAttributeValue instance.
   * <br>Resulting CATFmAttributeValue instance will be of type @href CATFmKind_byte and of cardinality iSize.
   * @param iArrayOfByte [in]
   *   The C array of byte to assign.
   *   If NULL, a 0 cardinality list will be built.
   * @param iSize [in]
   *   The size of the C array of byte to assign.
   *   If less than 0, a 0 cardinality list will be built.
   * @return
   *   A reference to this instance.
   */
  CATFmAttributeValue& BuildFromCArrayOfByte(const unsigned char* iArrayOfByte,int iSize);

  /**
   * Converts a CATFmAttributeValue instance to a C array of byte.
   * <br>Type of the instance must be @href CATFmKind_byte.
   * @param oArrayOfByte [out]
   *   The C array where to copy CATFmAttributeValue content.
   *   <br><tt>oArrayOfByte</tt> must be not NULL and must be able to hold at least <tt>iArraySize</tt> items.
   *   <br>Note: In case of failure, <tt>iArraySize</tt> elements of <tt>oArrayOfByte</tt> will be set to 0.
   * @param iArraySize [in]
   *   The number of elements to copy to <tt>oArrayOfByte</tt>.
   *   <br>It must be equal to the size of the CATFmAttributeValue instance. 
   * @return 
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>Instance has been successfully converted to a C array of byte.</dd>
   *     <dt>S_FALSE</dt>
   *     <dd>Instance size is 0.</dd>
   *     <dt>E_INVALIDARG</dt>
   *     <dd><tt>iArraySize</tt> is not equal to instance size or <tt>oArrayOfByte</tt> is NULL.</dd>
   *     <dt>E_FMTYPEMISMATCH</dt>
   *     <dd>Instance type is not @href CATFmKind_byte.</dd>
   *  </dl>
   */
  HRESULT ConvertToCArrayOfByte(unsigned char* oArrayOfByte,int iArraySize) const;

  /**
   * Assigns a C array of integer to a CATFmAttributeValue instance.
   * <br>Resulting CATFmAttributeValue instance will be of type @href CATFmKind_int and of cardinality iSize.
   * @param iArrayOfInteger [in]
   *   The C array of integer to assign.
   *   If NULL, a 0 cardinality list will be built.
   * @param iSize [in]
   *   The size of the C array of integer to assign.
   *   If less than 0, a 0 cardinality list will be built.
   * @return
   *   A reference to this instance.
   */
  CATFmAttributeValue& BuildFromCArrayOfInt(const int* iArrayOfInteger,int iSize);

  /**
   * Converts a CATFmAttributeValue instance to a C array of integer.
   * <br>Type of the instance must be @href CATFmKind_int.
   * @param oArrayOfInteger [out]
   *   The C array where to copy CATFmAttributeValue content.
   *   <br><tt>oArrayOfInteger</tt> must be not NULL and must be able to hold at least <tt>iArraySize</tt> items.
   *   <br>Note: In case of failure, <tt>iArraySize</tt> elements of <tt>oArrayOfInteger</tt> will be set to 0.
   * @param iArraySize [in]
   *   The number of elements to copy to <tt>oArrayOfInteger</tt>.
   *   <br>It must be equal to the size of the CATFmAttributeValue instance. 
   * @return 
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>Instance has been successfully converted to a C array of integer.</dd>
   *     <dt>S_FALSE</dt>
   *     <dd>Instance size is 0.</dd>
   *     <dt>E_INVALIDARG</dt>
   *     <dd><tt>iArraySize</tt> is not equal to instance size or <tt>oArrayOfInteger</tt> is NULL.</dd>
   *     <dt>E_FMTYPEMISMATCH</dt>
   *     <dd>Instance type is not @href CATFmKind_int.</dd>
   *  </dl>
   */
  HRESULT ConvertToCArrayOfInt(int* oArrayOfInteger,int iArraySize) const;

  /**
   * Assigns a C array of double to a CATFmAttributeValue instance.
   * <br>Resulting CATFmAttributeValue instance will be of type @href CATFmKind_double and of cardinality iSize.
   * @param iArrayOfDouble [in]
   *   The C array of double to assign.
   *   If NULL, a 0 cardinality list will be built.
   * @param iSize [in]
   *   The size of the C array of double to assign.
   *   If less than 0, a 0 cardinality list will be built.
   * @return
   *   A reference to this instance.
   */
  CATFmAttributeValue& BuildFromCArrayOfDouble(const double* iArrayOfDouble,int iSize);

  /**
   * Converts a CATFmAttributeValue instance to a C array of double.
   * <br>Type of the instance must be @href CATFmKind_double.
   * @param oArrayOfDouble [out]
   *   The C array where to copy CATFmAttributeValue content.
   *   <br><tt>oArrayOfDouble</tt> must be not NULL and must be able to hold at least <tt>iArraySize</tt> items.
   *   <br>Note: In case of failure, <tt>iArraySize</tt> elements of <tt>oArrayOfInteger</tt> will be set to 0.
   * @param iArraySize [in]
   *   The number of elements to copy to <tt>oArrayOfDouble</tt>.
   *   <br>It must be equal to the size of the CATFmAttributeValue instance. 
   * @return 
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>Instance has been successfully converted to a C array of double.</dd>
   *     <dt>S_FALSE</dt>
   *     <dd>Instance size is 0.</dd>
   *     <dt>E_INVALIDARG</dt>
   *     <dd><tt>iArraySize</tt> is not equal to instance size or <tt>oArrayOfDouble</tt> is NULL.</dd>
   *     <dt>E_FMTYPEMISMATCH</dt>
   *     <dd>Instance type is not @href CATFmKind_double.</dd>
   *  </dl>
   */
  HRESULT ConvertToCArrayOfDouble(double* oArrayOfDouble,int iArraySize) const;

  /**
   * Assigns a C array of CATUnicodeString to a CATFmAttributeValue instance.
   * <br>Resulting CATFmAttributeValue instance will be of type @href CATFmKind_string and of cardinality iSize.
   * @param iArrayOfUnicodeString [in]
   *   The C array of @href CATUnicodeString to assign.
   *   If NULL, a 0 cardinality list will be built.
   * @param iSize [in]
   *   The size of the C array of unicode string to assign.
   *   If less than 0, a 0 cardinality list will be built.
   * @return
   *   A reference to this instance.
   */
  CATFmAttributeValue& BuildFromCArrayOfString(const CATUnicodeString* iArrayOfUnicodeString,int iSize);

  /**
   * Converts a CATFmAttributeValue instance to a C array of @href CATUnicodeString.
   * <br>Type of the instance must be @href CATFmKind_string.
   * @param oArrayOfString [out]
   *   The C array where to copy CATFmAttributeValue content.
   *   <br><tt>oArrayOfString</tt> must be not NULL and must be able to hold at least <tt>iArraySize</tt> items.
   *   <br>Note: In case of failure, <tt>iArraySize</tt> elements of <tt>oArrayOfInteger</tt> will be set to empty string.
   * @param iArraySize [in]
   *   The number of elements to copy to <tt>oArrayOfString</tt>.
   *   <br>It must be equal to the size of the CATFmAttributeValue instance. 
   * @return 
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>Instance has been successfully converted to a C array of CATUnicodeString.</dd>
   *     <dt>S_FALSE</dt>
   *     <dd>Instance size is 0.</dd>
   *     <dt>E_INVALIDARG</dt>
   *     <dd><tt>iArraySize</tt> is not equal to instance size or <tt>oArrayOfString</tt> is NULL.</dd>
   *     <dt>E_FMTYPEMISMATCH</dt>
   *     <dd>Instance type is not @href CATFmKind_string.</dd>
   *  </dl>
   */
  HRESULT ConvertToCArrayOfString(CATUnicodeString* oArrayOfString,int iArraySize) const;


  /**
   * Assigns a CATRawCollint list of integer to a CATFmAttributeValue instance.
   * <br>Optional input kind iKind allows to specify the type of the resulting CATFmAttributeValue instance.
   * @param iListOfInt [in]
   *   The list of integer to copy.
   * @param iKind [in]
   *   The kind of the CATFmAttributeValue instance to build.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>@href CATFmKind_boolean</dt>
   *     <dd>Instance type will become CATFmKind_boolean.</dd>
   *     <dt>@href CATFmKind_byte</dt>
   *     <dd>Instance type will become CATFmKind_byte.</dd>
   *     <dt>@href CATFmKind_int</dt>
   *     <dd>Instance type will become CATFmKind_int. This is the default value</dd>
   *  </dl>
   *  In other cases, instance will be reset to default value (CATFmKind_void).</dd>
   * @return
   *   A reference to this instance.
   */
  CATFmAttributeValue& BuildFromListOfInt(const CATRawCollint& iListOfInt,CATFmAttributeAndValueKind iKind=CATFmKind_int);

  /**
   * Converts a CATFmAttributeValue instance to a CATRawCollint list of integer.
   * <br>This method works on CATFmAttributeValue instance of type @href CATFmKind_boolean, @href CATFmKind_byte or @href CATFmKind_int.
   * @param oListOfInteger [out]
   *   The list of integer to assign.
   *   <br>In case of failure oListOfInteger will be resized to 0.
   * @return 
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>Instance has been successfully converted to a list of integer.</dd>
   *     <dt>E_FMTYPEMISMATCH</dt>
   *     <dd>Instance type is not @href CATFmKind_boolean, @href CATFmKind_byte or @href CATFmKind_int.</dd>
   *  </dl> 
   */
  HRESULT ConvertToListOfInt(CATRawCollint& oListOfInteger) const;

  /**
   * Assigns a CATRawColldouble list of double to a CATFmAttributeValue instance.
   * <br>Resulting CATFmAttributeValue instance will be of type @href CATFmKind_double and of cardinality iListOfDouble.Size().
   * @param iListOfDouble [in]
   *   The list of double to copy.
   * @return
   *   A reference to this instance.
   */
  CATFmAttributeValue& BuildFromListOfDouble(const CATRawColldouble& iListOfDouble);  

  /**
   * Converts a CATFmAttributeValue instance to a CATRawColldouble list of double.
   * <br>This method works on CATFmAttributeValue instance of type @href CATFmKind_double.
   * @param oListOfDouble [out]
   *   The list of double to assign.
   *   <br>In case of failure oListOfDouble will be resized to 0.
   * @return 
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>Instance has been successfully converted to a list of double.</dd>
   *     <dt>E_FMTYPEMISMATCH</dt>
   *     <dd>Instance type is not @href CATFmKind_double.</dd>
   *  </dl> 
   */
  HRESULT ConvertToListOfDouble(CATRawColldouble& oListOfDouble) const;

  /**
   * Assigns a CATListValCATUnicodeString list of string to a CATFmAttributeValue instance.
   * <br>Resulting CATFmAttributeValue instance will be of type @href CATFmKind_string and of cardinality iListOfUnicodeString.Size().
   * @param iListOfUnicodeString [in]
   *   The list of unicode string to copy.
   * @return
   *   A reference to this instance.
   */
  CATFmAttributeValue& BuildFromListOfString(const CATListValCATUnicodeString& iListOfUnicodeString);

  /**
   * Converts a CATFmAttributeValue instance to a CATListValCATUnicodeString list of string.
   * <br>This method works on CATFmAttributeValue instance of type @href CATFmKind_string.
   * @param oListOfString [out]
   *   The list of unicode string to assign.
   *   <br>In case of failure oListOfString will be resized to 0.
   * @return 
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>Instance has been successfully converted to a list of unicode string.</dd>
   *     <dt>E_FMTYPEMISMATCH</dt>
   *     <dd>Instance type is not @href CATFmKind_string.</dd>
   *  </dl> 
   */
  HRESULT ConvertToListOfString(CATListValCATUnicodeString& oListOfString) const;

  /**
   * Assigns a CATListValCATBaseUnknown_var list of feature to a CATFmAttributeValue instance.
    * <br>Resulting CATFmAttributeValue instance will be of type @href CATFmKind_feature and of cardinality iListOfFeature.Size().
   * @param iListOfFeature [in]
   *   The list of feature to copy.
   *   <br>Notice that similarly to @href #SetFeature , invalid features will be treated as NULL pointers.
   * @return
   *   A reference to this instance.
   */
  CATFmAttributeValue& BuildFromListOfFeatures(const CATListValCATBaseUnknown_var& iListOfFeature);

  /**
   * Converts a CATFmAttributeValue instance to a CATListValCATBaseUnknown_var list of string.
   * <br>This method works on CATFmAttributeValue instance of type @href CATFmKind_feature.
   * @param oListOfFeature [out]
   *   The list of feature to assign.
   *   <br>In case of failure oListOfFeature will be resized to 0.
   * @return 
   *   An HRESULT value.
   *   <br><b>Legal values</b>:
   *   <dl>
   *     <dt>S_OK</dt>
   *     <dd>Instance has been successfully converted to a list of feature.</dd>
   *     <dt>E_FMTYPEMISMATCH</dt>
   *     <dd>Instance type is not @href CATFmKind_feature.</dd>
   *     <dt>E_FMNOTLOADED</dt>
   *     <dd>At least one feature in the list is not loaded.</dd>  
   *     <dt>E_FMINVALIDFEATURE</dt>
   *     <dd>At least one feature in the list is not valid.</dd>  
   *  </dl> 
   */
  HRESULT ConvertToListOfFeatures(CATListValCATBaseUnknown_var& oListOfFeature) const;

  /**
   * Creates a CATFmAttributeValue instance of type iKind and cardinality 0.
   * @param iKind [in]
   *   Type type of the instance to create.
   * @return 
   *   A CATFmAttributeValue instance of type iKind and cardinality 0.
   * This method can be usefull for example in order to resize a feature attribute value to 0 using @href CATFmFeatureFacade#SetValue.
   */ 
  static CATFmAttributeValue CreateEmptyList(CATFmAttributeAndValueKind iKind);

  /**
   * Equality operator.
   * @param iValue
   *   The instance to compare with this instance.
   * @return
   * <ul>
   * <li>0    : Instances are not equal.</li>
   * <li>other: Instances are equal.</li>
   * </ul>
   */
  int operator ==(const CATFmAttributeValue & iValue) const;

  /**
   * Inequality operator.
   * @param iValue
   *   The instance to compare with this instance.
   * @return
   * <ul>
   * <li>0    : Instances are equal.</li>
   * <li>other: Instances are not equal.</li>
   * </ul>
   */
  int operator !=(const CATFmAttributeValue & iValue) const;


  /**
   * Swaps the values of two CATFmAttributeValue instances.
   * @param ioValue1 [in, out]
   *   The first instance.
   * @param ioValue2 [in, out]
   *   The second instance.
   */
  static void Swap(CATFmAttributeValue& ioValue1,CATFmAttributeValue& ioValue2);

private:
  /**
   * Constructs a CATFmAttributeValue instance from an unsigned char.
   * This method is private and not implemented as the type (boolean/byte) is ambiguous.
   */
  CATFmAttributeValue(unsigned char b);

  void* m_data[2];
};


#endif // __CATFmAttributeValue_h__

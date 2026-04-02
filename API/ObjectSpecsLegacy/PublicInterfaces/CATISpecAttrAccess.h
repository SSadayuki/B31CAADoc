/* -*-c++-*- */
#ifndef CATISpecAttrAccess_H
#define CATISpecAttrAccess_H

// COPYRIGHT DASSAULT SYSTEMES  1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATIAV5Level.h"
#include "CATBaseUnknown.h"
#include "CATISpecDeclarations.h"
#include "booleanDef.h"
#include "octetDef.h"
#include "sequence_octet.h"
class CATISpecAttrKey;
class CATISpecAttrKey_var;
class CATISpecObject;
class CATISpecObject_var;
class CATUnicodeString;
class CATListValCATUnicodeString;
class CATListValCATBaseUnknown_var;
class CATILinkableObject;
class CATILinkableObject_var;
class _SEQUENCE_octet;
class CATError;
class CATRawCollint;
class CATRawColldouble;
class CATListValCATISpecObject_var;
class CATListValCATISpecAttrKey_var;

#include "AC0SPBAS.h"
extern ExportedByAC0SPBAS IID IID_CATISpecAttrAccess ;

/**
 * Provides access to the value(s) of an attribute.
 * <br><b>Role</b>:This interface is implemented on a feature.
 * It allows you to access ( get and set ) to attribute values 
 * and type via a CATISpecAttrKey obtained by GetAttrKey.
 *
 * @see CATISpecAttrKey, CATISpecObject
 */

class ExportedByAC0SPBAS CATISpecAttrAccess : public CATBaseUnknown
{
  CATDeclareInterface;
  public:
  /**
   * Returns the key allowing access to an attribute value.
   * <br>WARNING: key is not synonymous with name. A key may be applied on all 
   * instances inheriting the same attribute; it may NOT be applied for attributes 
   * with the same name on another startup.
   * @param iName
   *      name of the attribute to get a key from.
   * @return a CATISpecAttrKey* corresponding to the requested key, or NULL if the key could not be found.
   */
  virtual CATISpecAttrKey* GetAttrKey(const char* iName) const = 0;

  /**
   * Returns the list of the names of the attributes belonging to the feature.
   */
  virtual CATListValCATUnicodeString* ListAttrNames() const = 0;

  /**
   * Returns a list of keys to access values of attributes.
   * <br>For performance reasons, this method is recommended over @href #ListAttrNames.
   * @param oList
   *      list of attribute keys
   * @return S_OK successful
   */
  virtual HRESULT  ListAttrKeys  (CATListValCATISpecAttrKey_var& oList ) const = 0;
  /**
   * @nodoc
   * Returns a list of keys to access values of attributes.
   * For perfomance reasons, use of the previous version is recommended.
   */
  virtual CATListValCATISpecAttrKey_var* ListAttrKeys() const = 0;

  /**
   * @nodoc
   * Obsolete R12 Use @href CATISpecAttrKey instead
   */
  virtual CATBoolean TestAttrName(const char* iName) const = 0;
  /**
   * Determines whether the key exists on this feature.
   * @param iKey
   *     access key to attribute.
   * @return
   *     TRUE if an attribute with the given key belongs to the feature.
   */
  virtual CATBoolean TestAttrKey(const CATISpecAttrKey* iKey) const = 0;


  /**
   * @nodoc
   * Obsolete R12 Use @href CATISpecAttrKey instead
   */
  virtual CATBoolean TestAttributeValue(const char* iName) const = 0;
  /**
   * Determines whether the attribute is assigned a value.
   * <br>NB: for lists, the list is valuated as soon as a single value is assigned.
   * @param iKey
   *      access key to attribute.
   * @return
   *     TRUE if the attribute has been valuated.
   */
  virtual CATBoolean TestAttributeValue(const CATISpecAttrKey* iKey) const = 0;


  /**
   * @nodoc
   * Obsolete R12 Use @href CATISpecAttrKey instead
   */
  virtual HRESULT UnsetAttributeValue(const char* iName) = 0;
  /**
   * Unsets the attribute value. The attribute is then marked as unset, unlike RemoveAll.
   * <br>Subsequent Gets on the attribute will return 0.
   * @param iKey
   *      access key to attribute.
   * @return 
   *      S_OK successful<br/>
   *      S_FALSE successful does not change the model<br/>
   *      @href E_NOLOCALVALUE <br/>
   *      @href E_KEYNOTFOUND <br/>
   */
  virtual HRESULT UnsetAttributeValue(const CATISpecAttrKey* iKey) = 0;


  /**
   * @deprecated V5R19 Use CATfctEditorAssistant tool instead. 
   * <br>Modifies public/private status.
   * <br>Private attributes exist only on this feature; if the feature is instanciated, instances
   * will not have these attributes.</br>
   * Public attributes exist on this feature and all its instances.
   * @param iKey
   *      access key to attribute.
   * @param iPubPriv
   *      access mode. 
   *
   * @see CATAttrAccess
   * @return 
   *      S_OK successful<br/>
   *      S_FALSE successful does not change the model<br/>
   *      @href E_NOLOCALVALUE <br/>
   *      @href E_KEYNOTFOUND <br/>
   */
  virtual HRESULT SetAccess(const CATISpecAttrKey* iKey,CATAttrAccess iPubPriv) = 0;

  /**
   * Returns the access mode. 
   * @param iKey
   *      access key to attribute.
   * 
   * @see CATAttrAccess
   */
  virtual CATAttrAccess GetAccess(const CATISpecAttrKey* iKey) const = 0;

  /**
   * @deprecated V5R19 Stop using it !
   * <br>Returns the modification TimeStamp of the attribute.
   * @param iKey
   *      access key to attribute.
   *
   * @see CATOldTimeStamp
   */
  virtual CATOldTimeStamp GetTimeStamp(const CATISpecAttrKey* iKey)=0;

  /**
   * Returns the quality of the Attribute. Possible values (in/out/neutral) are mutually exclusive.
   * <br><b>Role:</b>The attribute quality is a parameter that allows to specify 
   * the role played by an attribute in the Update mechanism ( in DS 
   * default Update mechanism ).
   * @param iKey
   *      attribute key
   * @return 
   * <ul><li>sp_IN: These attributes are those which are usually required 
   *                  to define or specify a feature.
   *     <li>sp_OUT: These attributes are those whose values result from 
   *                  a Build operation and may be used as input parameters 
   *                  for other features.
   *     <li>sp_NEUTRAL: Attributes of sp_NEUTRAL quality are ignored by 
   *                     the default Update mechanism.
   * </ul>
   *
   * @see CATAttrInOut, CATIBuild, CATIOsmUpdate
   */
  virtual CATAttrInOut GetQuality(const CATISpecAttrKey* iKey) const=0;

  /**
   * Sets the quality of the Attribute. Possible values (in/out/neutral) are mutually exclusive.
   * <br><b>Role:</b>The attribute quality is a parameter that allows to specify 
   * the role played by an attribute in the Update mechanism ( in DS 
   * default Update mechanism ).
   * @param iKey
   *      attribute key
   * @param iInOut
   * <ul><li>sp_IN: These attributes are those which are usually required 
   *                  to define or specify a feature.
   *     <li>sp_OUT: These attributes are those whose values result from 
   *                  a Build operation and may be used as input parameters 
   *                  for other features.
   *     <li>sp_NEUTRAL: Attributes of sp_NEUTRAL quality are ignored by 
   *                     the default Update mechanism.
   * </ul>
   * @return 
   *      S_OK successful<br/>
   *      S_FALSE successful does not change the model<br/>
   *      @href E_NOLOCALVALUE <br/>
   *      @href E_KEYNOTFOUND <br/>
   * @see CATAttrInOut, CATIBuild, CATIOsmUpdate
   */
  virtual HRESULT SetQuality(const CATISpecAttrKey* iKey,CATAttrInOut iInOut)=0;

  /**
   * Update the content of attribute iKey according to its quality and update rules.
   * @param iKey
   *    The attribute key.
   * @return S_OK if update succeeded.<br>
   * E_FAIL if update failed.
   * @see CATIOsmUpdate
   */
  virtual HRESULT Update(const CATISpecAttrKey* iKey) = 0;

  /**
   * Returns the update status of the attribute.
   * <br>Relies on @href CATIUpdateProvider.
   * @param iKey
   *    The attribute key.
   * @return 
   *      S_OK if the content of the attribute (if the attribute points objects)
   * is up to date and if the attribute is synchronized. Here we call 
   * synchronization the following: If the last update of this attribute 
   * (or the whole feature) has been done after the update of the content.<br>
   *      S_FALSE if the content is not up to date or has been updated after this
   * attribute has been updated.<br>
   * E_FAIL if iKey is not valid.
   */
  virtual HRESULT IsUpToDate(const CATISpecAttrKey* iKey) const = 0;

  /**
   * @nodoc
   */
  virtual HRESULT SetDouble(const char* iName,double d,int iIndex=0) = 0;
  /**
   * Assigns a value of double type to an attribute. 
   * <br>WARNING : use of SetX on an attribute of type Y WILL cause unpredictable behaviour.
   * <br><b>Note:</b> This is the preferred method for better performance. 
   * @param iKey
   *      access key to attribute.
   * @param d
   *      value to assign to the tk_double attribute.
   * @param iIndex
   *      index in the list. Lists start at 1; 0 adds to the end of the list. Unused on single values.
   * @return 
   *      S_OK successful<br/>
   *      S_FALSE successful does not change the model<br/>
   *      @href E_KEYNOTFOUND <br/>
   *      @href E_OUTOFBOUND <br/>
   *      @href E_NOTALIST <br/>
   *      @href E_TYPEMISMATCH <br/>
   */
  virtual HRESULT SetDouble(const CATISpecAttrKey* iKey,double d,int iIndex=0) = 0;

  /**
   * @nodoc
   * Obsolete R12 Use @href CATISpecAttrKey instead
   */
  virtual HRESULT SetInteger(const char* iName,int s,int iIndex=0) = 0;  
  /**
   * Assigns a value of integer type to an attribute.
   * <br>WARNING : use of SetX on an attribute of type Y WILL cause unpredictable behaviour.
   * <br><b>Note:</b> This is the preferred methods for better performance. 
   * @param iKey
   *      access key to attribute.
   * @param s
   *      value to assign to the tk_integer attribute.
   * @param iIndex
   *      index in the list. Lists start at 1; 0 adds to the end of the list. Unused on single values.
   * @return 
   *      S_OK successful<br/>
   *      S_FALSE successful does not change the model<br/>
   *      @href E_KEYNOTFOUND <br/>
   *      @href E_OUTOFBOUND <br/>
   *      @href E_NOTALIST <br/>
   *      @href E_TYPEMISMATCH <br/>
   */
  virtual HRESULT SetInteger(const CATISpecAttrKey* iKey,int s,int iIndex=0) = 0;  

  /**
   * Assigns a value of CATBoolean type to an attribute.
   * <br>WARNING : use of SetX on an attribute of type Y WILL cause unpredictable behaviour.
   * @param iKey
   *      access key to attribute.
   * @param iBool
   *      value to assign to the tk_boolean attribute.
   * @param iIndex
   *      index in the list. Lists start at 1; 0 adds to the end of the list. Unused on single values.
   *
   * @return 
   *      S_OK successful<br/>
   *      S_FALSE successful does not change the model<br/>
   *      @href E_KEYNOTFOUND <br/>
   *      @href E_OUTOFBOUND <br/>
   *      @href E_NOTALIST <br/>
   *      @href E_TYPEMISMATCH <br/>
   */
  virtual HRESULT SetBoolean(const CATISpecAttrKey* iKey,CATBoolean iBool,int iIndex=0) = 0;  

  /**
   * Assigns a value of octet type to an attribute.
   * <br>WARNING : use of SetX on an attribute of type Y WILL cause unpredictable behaviour.
   * @param iKey
   *      access key to attribute.
   * @param iOct
   *      value to assign to the tk_octet attribute.
   * @param iIndex
   *      index in the list. Lists start at 1; 0 adds to the end of the list. Unused on single values.
   * @return 
   *      S_OK successful<br/>
   *      S_FALSE successful does not change the model<br/>
   *      @href E_KEYNOTFOUND <br/>
   *      @href E_OUTOFBOUND <br/>
   *      @href E_NOTALIST <br/>
   *      @href E_TYPEMISMATCH <br/>
   */
  virtual HRESULT SetOctet(const CATISpecAttrKey* iKey,octet iOct,int iIndex=0) = 0;

  /**
   * @nodoc
   * Obsolete R12 Use @href CATISpecAttrKey instead
   */
  virtual HRESULT SetString(const char* iName,const CATUnicodeString& iString,int iIndex=0) = 0;
  /**
   * Assigns a value of string type to an attribute.
   * <br>WARNING : use of SetX on an attribute of type Y WILL cause unpredictable behaviour.
   * <br><b>Note:</b> This is the preferred method for better performance. 
   * @param iKey
   *      access key to attribute.
   * @param iString
   *      value to assign to the tk_string attribute.
   * @param iIndex
   *      index in the list. Lists start at 1; 0 adds to the end of the list. Unused on single values.
   * @return 
   *      S_OK successful<br/>
   *      S_FALSE successful does not change the model<br/>
   *      @href E_KEYNOTFOUND <br/>
   *      @href E_OUTOFBOUND <br/>
   *      @href E_NOTALIST <br/>
   *      @href E_TYPEMISMATCH <br/>
   */
  virtual HRESULT SetString(const CATISpecAttrKey* iKey,const CATUnicodeString& iString,int iIndex=0) = 0;

  /**
   * @nodoc
   * Obsolete R12 Use @href CATISpecAttrKey instead
   */
  virtual HRESULT SetSpecObject(const char* iName,const CATISpecObject_var& iObj,int iIndex=0,CATBoolean iNeedToSave=FALSE) = 0; 
  /**
   * Assigns a value of SpecObject type to an attribute. 
   * <br>WARNING : use of SetX on an attribute of type Y WILL cause unpredictable behaviour.
   * <br><b>Role: </b> the referred SpecObject is shareable ( note that it is not the tk_specobject attribute 
   * which is shared, but the feature which is assigned as a value to this attribute ), so it
   * can be referenced by several features. A referenced feature does not belong to any other feature. 
   * A referenced feature just lives on its own. Its life cyle is completely independent of the features
   * which use it as a reference. 
   * 
   * <br><b>Note:</b> This is the preferred method for better performance. 
   *
   * @param iKey
   *      access key to attribute.
   * @param iObj
   *      value to assign to the tk_specobject attribute.
   * @param iIndex
   *      index in the list. Lists start at 1; 0 adds to the end of the list. Unused on single values.
   * @param iNeedToSave
   *      When an attribute is valuated with a specobject, a link is created on the referred CATISpecObject.
   *      If TRUE, means that save of document containing the feature with valuated attribute will
   *      call save of document containing the referred SpecObject.
   * @param relative
   *      No longer supported. Do not use.
   * @return 
   * 
   *      S_OK successful<br/>
   *      S_FALSE successful does not change the model<br/>
   *      @href E_KEYNOTFOUND <br/>
   *      @href E_OUTOFBOUND <br/>
   *      @href E_TYPEMISMATCH <br/>
   *      @href E_CANNOTLOAD <br/>
   */
  virtual HRESULT SetSpecObject(const CATISpecAttrKey* iKey,const CATISpecObject_var& iObj,int iIndex=0,CATBoolean iNeedToSave=FALSE,int relative=0) = 0; 

  /**
   * @nodoc
   * Obsolete R12 Use @href CATISpecAttrKey instead
   */
  virtual HRESULT SetExternalObject(const char* iName,const CATILinkableObject_var& iObj,int iIndex=0, CATBoolean iNeedToSave=FALSE) = 0; 

  /**
   * Assigns a value to a tk_external attribute. 
   * <br>WARNING : use of SetX on an attribute of type Y WILL cause unpredictable behaviour.
   * <br> <br><b>Role: </b> Creates a symbolic link between the feature (pointing object) owning 
   * the <tt>tk_external</tt> attribute and the (pointed) object specified in argument.
   * This method is the same as SetSpecObject, but allows to refer any LinkableObject (  SetSpecObject refers
   * only CATISpecObjects ). 
   *
   * @param iKey
   *      access key to attribute.
   * @param iObj
   *      value to assign to the tk_external attribute. iObj must be a valid CATILinkableObject. NULL_var is not an allowed value.
   * @param iIndex
   *      index in the list. Lists start at 1; 0 adds to the end of the list. Unused on single values.
   * @param iNeedToSave
   *      If TRUE, means that save of document containing the feature with valuated attribute will
   *      call save of document containing the referred object.
   * @return
   *      S_OK if succeeded <br>
   *      E_INVALIDARG if failed because iKey is invalid on pointing object or iIndex is out of range, or iObj is NULL_var or is not a valid CATILinkableObject <br>
   *      Other hresults can occur if the set cannot be done, which can be tested using the FAILED() macro.
   * 
   *      S_FALSE successful does not change the model<br/>
   *      @href E_KEYNOTFOUND <br/>
   *      @href E_OUTOFBOUND <br/>
   *      @href E_TYPEMISMATCH <br/>
   *      @href E_CANNOTLOAD <br/>
   */
  virtual HRESULT SetExternalObject(const CATISpecAttrKey* iKey,const CATILinkableObject_var& iObj,int iIndex=0, CATBoolean iNeedToSave=FALSE) = 0; 

  /**
   * @nodoc
   * Obsolete R12 Use @href CATISpecAttrKey instead
   */
  virtual HRESULT SetExternalObjectName(const char* iName,const _SEQUENCE_octet& name,int index=0) = 0; 
  /**
   * @nodoc .
   */
  virtual HRESULT SetExternalObjectName(const CATISpecAttrKey* iKey,const _SEQUENCE_octet& name,int index=0) = 0; 

  /**
   * @nodoc
   * Obsolete R12 Use @href CATISpecAttrKey instead
   */
  virtual HRESULT SetSpecAttribute(const char* iName,const CATISpecObject_var& iObj2,const char* iName2,int iIndex=0) = 0;
  /**
   * Creates an attribute-attribute link. The given attribute will not have its own value but will instead refer
   * to another attribute of the same type.
   * <br>WARNING : use of SetX on an attribute of type Y WILL cause unpredictable behaviour.
   * @param iKey
   *      access key to attribute.
   * @param iObj2
   *      feature holding the refered attribute.
   * @param iAtt2
   *      access key to attribute refered.
   * @param iIndex
   *      index in the list. Lists start at 1; 0 adds to the end of the list. Unused on single values.
   * @return
   *      S_OK successful<br/>
   *      S_FALSE successful does not change the model<br/>
   *      @href E_KEYNOTFOUND <br/>
   *      @href E_OUTOFBOUND <br/>
   *      @href E_TYPEMISMATCH <br/>
   *      @href E_CANNOTLOAD <br/>
   * @see #GetSpecAttribute
   */
  virtual HRESULT SetSpecAttribute(const CATISpecAttrKey* iKey, const CATISpecObject_var& iObj2, const CATISpecAttrKey* iAtt2, int iIndex=0) = 0;


  /**
   * @nodoc
   * Obsolete R12 Use @href CATISpecAttrKey instead
   */
  virtual double GetDouble(const char* iName,int iIndex=0) const = 0;  
  /**
   * Retrieves the double value of an attribute by key.
   * @param iKey
   *      access key to attribute.
   * @param iIndex
   *      index in the list. Lists start at 1. Unused on single values.
   * @return attribute value or 0 if the value could not be retrieved.
   */
  virtual double GetDouble(const CATISpecAttrKey* iKey,int iIndex=0) const = 0;  
  /**
   * @nodoc
   * Obsolete R12 Use @href CATISpecAttrKey instead
   */
  virtual int	GetInteger(const char* iName,int iIndex=0) const = 0;  
  /**
   * Retrieves the integer value of an attribute by key.
   * @param iKey
   *      access key to attribute.
   * @param iIndex
   *      index in the list. Lists start at 1. Unused on single values.
   * @return attribute value or 0 if the value could not be retrieved.
   */
  virtual int	GetInteger(const CATISpecAttrKey* iKey,int iIndex=0) const = 0;  
  /**
   * @nodoc
   * Obsolete R12 Use @href CATISpecAttrKey instead
   */
  virtual CATBoolean GetBoolean(const char* iName,int iIndex=0) const = 0;  
  /**
   * Retrieves the CATBoolean value of an attribute by key.
   * @param iKey
   *      access key to attribute.
   * @param iIndex
   *      index in the list. Lists start at 1. Unused on single values.
   * @return attribute value or 0 if the value could not be retrieved.
   */
  virtual CATBoolean GetBoolean(const CATISpecAttrKey* iKey,int iIndex=0) const = 0;  
  /**
   * @nodoc
   * Obsolete R12 Use @href CATISpecAttrKey instead
   */
  virtual octet GetOctet(const char* iName,int iIndex=0) const = 0;
  /**
   * Retrieves the octet value of an attribute by key.
   * @param iKey
   *      access key to attribute.
   * @param iIndex
   *      index in the list. Lists start at 1. Unused on single values.
   * @return attribute value or 0 if the value could not be retrieved.
   */
  virtual octet GetOctet(const CATISpecAttrKey* iKey,int iIndex=0) const = 0;
  /**
   * @nodoc
   * Obsolete R12 Use @href CATISpecAttrKey instead
   */
  virtual CATUnicodeString GetString(const char* iName,int iIndex=0) const = 0;
  /**
   * Retrieves the string value of an attribute by key.
   * @param iKey
   *      access key to attribute.
   * @param iIndex
   *      index in the list. Lists start at 1. Unused on single values.
   * @return attribute value or an empty string if the value could not be retrieved.
   */
  virtual CATUnicodeString GetString(const CATISpecAttrKey* iKey,int iIndex=0) const = 0;
  /**
   * @nodoc
   * Obsolete R12 Use @href CATISpecAttrKey instead
   */
  virtual CATISpecObject* GetSpecObject(const char* iName,int iIndex=0) const = 0;
  /**
   *      access key to attribute.
   * @param iIndex
   *      index in the list. Lists start at 1. Unused on single values.
   * @return a CATISpecObject* to the relevant SpecObject, or NULL if the object could not be retrieved.
   */
  virtual CATISpecObject* GetSpecObject(const CATISpecAttrKey* iKey,int iIndex=0) const = 0;

  /**
   * Retrieves the object pointed via the specified tk_external attribute. 
   * @param iKey
   *      access key to attribute.
   * @param iParam
   *      bind parameter of the link resolution <br>
   *				ANYWHERE : resolution will be attempted even in non loaded documents (pointed document may be loaded) <br>
   *				IN_SESSION : resolution will be attempted only in loaded documents (pointed document will not be loaded but pointed container may be loaded) <br>
   *				DONT_BIND : no resolution will be attempted, only cache data is read (pointed document and container will not be loaded)
   * @param oObj
   *			the pointed object
   * @param iIndex
   *      index in the list. Lists start at 1. Unused on single values.
   * @return
   *			S_OK if pointed object has been found <br>
   *			S_FALSE if link is unset or valuated with NULL, so oObj is NULL <br>
   *			E_INVALIDARG if failed because iKey is invalid on pointing object or iIndex is out of range <br>
   *			E_ACCESSDENIED if failed because iParam does not allow to find the pointed object <br>
   *      Other hresults can occur if the set pointed document could not be loaded or the pointed object does not exist in the pointed document any more. These hresults can be tested using the FAILED() macro.
   *      @href E_KEYNOTFOUND <br/>
   *      @href E_OUTOFBOUND <br/>
   *      @href E_NOTALIST <br/>
   *      @href E_TYPEMISMATCH <br/>
   */
  virtual HRESULT	GetExternalObject(const CATISpecAttrKey* iKey, CATFlavorParam iParam, CATILinkableObject** oObj,int iIndex=0) const = 0;

  /**
   * @nodoc
   * Obsolete R12 Use @href CATISpecAttrKey instead
   */
  virtual CATILinkableObject*	GetExternalObject(const char* iName,CATFlavorParam iParam = ANYWHERE,int iIndex=0) const = 0;
  /**
   * @nodoc
   */
  virtual CATILinkableObject*	GetExternalObject(const CATISpecAttrKey* iKey, CATFlavorParam iParam = ANYWHERE,int iIndex=0) const = 0;
  /**
   * @nodoc
   * Obsolete R12 Use @href CATISpecAttrKey instead
   */
  virtual SEQUENCE(octet) GetExternalObjectName(const char* iName,int iIndex=0) const = 0;
  /**
   *@nodoc
   */
  virtual SEQUENCE(octet) GetExternalObjectName(const CATISpecAttrKey* iKey, int iIndex=0) const = 0;
  /**
   * @nodoc
   * Obsolete R12 Use @href CATISpecAttrKey instead
   */
  virtual const char* GetSpecAttribute(const char* iName,CATISpecObject_var& oObj,int iIndex=0) const = 0;
  /**
   * In the case of an attr-attr link, retrieves the "real" attribute, the one whose value is pointed by the link.
   * @param iKey
   *      access key to attribute.
   * @param oObj
   *      attribute object retrieved.
   * @param iIndex
   *      index in the list. Lists start at 1. Unused on single values.
   * @see #SetSpecAttribute, #GetFinalSpecAttr
   */
  virtual CATISpecAttrKey* GetSpecAttribute(const CATISpecAttrKey* iKey, CATISpecObject_var& oObj,int iIndex=0) const = 0;


  /** @nodoc */
  virtual HRESULT SetError (const char* iName, CATError* error)=0;
  /** @nodoc */
  virtual HRESULT SetError (const CATISpecAttrKey* iKey,  CATError* error)=0;
  /** @nodoc */
  virtual CATError* GetError (const char* iName) const = 0;
  /** @nodoc */
  virtual CATError* GetError (const CATISpecAttrKey* iKey) const = 0;

  /**
   * @nodoc
   * Obsolete R12 Use @href CATISpecAttrKey instead
   */
  virtual HRESULT SetListInteger (const char* iName,  const CATRawCollint& iList ) = 0;
  /**
   * Assigns a list of integers to an attribute of tk_list(tk_integer) type.
   * <br>WARNING : use of SetListX on an attribute of type list(Y) WILL cause unpredictable behaviour.
   * @param iKey
   *      access key to attribute.
   * @param iList
   *      list of integer values to assign to the attribute.
   * @return 
   *      S_OK successful<br/>
   *      S_FALSE successful does not change the model<br/>
   *      @href E_KEYNOTFOUND <br/>
   *      @href E_OUTOFBOUND <br/>
   *      @href E_NOTALIST <br/>
   *      @href E_TYPEMISMATCH <br/>
   */
  virtual HRESULT SetListInteger (const CATISpecAttrKey* iKey, const CATRawCollint& iList ) = 0;
  /**
   * @nodoc
   * Obsolete R12 Use @href CATISpecAttrKey instead
   */
  virtual HRESULT SetListDouble (const char* iName,  const CATRawColldouble& iList ) = 0;
  /**
   * Assigns a list of doubles to an attribute of tk_list(tk_double) type.
   * <br>WARNING : use of SetListX on an attribute of type list(Y) WILL cause unpredictable behaviour.
   * @param iKey
   *      access key to attribute.
   * @param iList
   *      list of doubles values to assign to the attribute.
   * @return
   *      S_OK successful<br/>
   *      S_FALSE successful does not change the model<br/>
   *      @href E_KEYNOTFOUND <br/>
   *      @href E_OUTOFBOUND <br/>
   *      @href E_NOTALIST <br/>
   *      @href E_TYPEMISMATCH <br/>
   */
  virtual HRESULT SetListDouble (const CATISpecAttrKey* iKey, const CATRawColldouble& iList ) = 0;
  /**
   * @nodoc
   *  Obsolete R12 Use @href CATISpecAttrKey instead
   */
  virtual HRESULT SetListString (const char* iName,  const CATListValCATUnicodeString& iList ) = 0;
  /**
   * Assigns a list of strings to an attribute of tk_list(tk_string) type.
   * <br>WARNING : use of SetListX on an attribute of type list(Y) WILL cause unpredictable behaviour.
   * @param iKey
   *      access key to attribute.
   * @param iList
   *      list of strings values to assign to the attribute.
   * @return
   *      S_OK successful<br/>
   *      S_FALSE successful does not change the model<br/>
   *      @href E_KEYNOTFOUND <br/>
   *      @href E_OUTOFBOUND <br/>
   *      @href E_NOTALIST <br/>
   *      @href E_TYPEMISMATCH <br/>
   */
  virtual HRESULT SetListString (const CATISpecAttrKey* iKey, const CATListValCATUnicodeString& iList ) = 0;
  /**
   * Assigns a list of octet to an attribute of tk_list(tk_octet) type.
   * <br>WARNING : use of SetListX on an attribute of type list(Y) WILL cause unpredictable behaviour.
   * @param iKey
   *      access key to attribute.
   * @param iList
   *      list of octet values to assign to the attribute.
   * @return
   *      S_OK successful<br/>
   *      S_FALSE successful does not change the model<br/>
   *      @href E_KEYNOTFOUND <br/>
   *      @href E_OUTOFBOUND <br/>
   *      @href E_NOTALIST <br/>
   *      @href E_TYPEMISMATCH <br/>
   */
  virtual HRESULT SetListOctet (const CATISpecAttrKey* iKey, const SEQUENCE(octet)& iList ) = 0;

  /**
   * @nodoc
   * Obsolete R12 Use @href CATISpecAttrKey instead
   */
  virtual CATRawCollint* GetListInteger(const char* iName) const = 0;
  /**
   * Retrieves the list of values of an attribute of type tk_integer by key. The caller is reponsible for
   * deletion of the list.
   * <br>WARNING : use of GetListX on an attribute of type list(Y) WILL cause unpredictable behaviour.
   * @param iKey
   *      access key to attribute.
   */
  virtual CATRawCollint* GetListInteger(const CATISpecAttrKey* iKey) const = 0;
  /**
   * @nodoc
   * Obsolete R12 Use @href CATISpecAttrKey instead
   */
  virtual CATRawColldouble* GetListDouble(const char* iName ) const = 0;
  /**
   * Retrieves the list of values of an attribute of type tk_double by key. The caller is reponsible for
   * deletion of the list.
   * <br>WARNING : use of GetListX on an attribute of type list(Y) WILL cause unpredictable behaviour.
   * @param iKey
   *      access key to attribute.
   */
  virtual CATRawColldouble* GetListDouble(const CATISpecAttrKey* iKey) const = 0;
  /**
   * @nodoc
   * Obsolete R12 Use @href CATISpecAttrKey instead
   * <br>Retrieves the list of values of an attribute of type tk_string. The caller is reponsible for
   * deletion of the list.
   * <br>WARNING : use of GetListX on an attribute of type list(Y) WILL cause unpredictable behaviour.
   * @param iName
   *      name of the attribute.
   */
  virtual CATListValCATUnicodeString* GetListString(const char* iName ) const = 0;
  /**
   * Retrieves the list of values of an attribute of type tk_string by key. The caller is reponsible for
   * deletion of the list.
   * <br>WARNING : use of GetListX on an attribute of type list(Y) WILL cause unpredictable behaviour.
   * @param iKey
   *      access key to attribute.
   */
  virtual CATListValCATUnicodeString* GetListString(const CATISpecAttrKey* iKey) const = 0;
  /**
   * Retrieves the list of values of an attribute of type tk_octet by key. The caller is reponsible for
   * deletion of the list.
   * <br>WARNING : use of GetListX on an attribute of type list(Y) WILL cause unpredictable behaviour.
   * @param iKey
   *      access key to attribute.
   */
  virtual SEQUENCE(octet)* GetListOctet (const CATISpecAttrKey* iKey) = 0;
  //  -------------------------------
  // Attributes reference management
  //  -------------------------------

  /**
   * @nodoc
   * Obsolete R12 Use @href CATISpecAttrKey instead
   */
  virtual CATBoolean TestFinalAttributeValue(const char* iName,int iIndex=0) const = 0;
  /**
   * Tests if the attribute at the end of an attribute-attribute link (or chain of links) is valuated.
   * <br>NB : this is NOT a version of TestAttribute for lists. Using this on an attribute of type list
   * that does not contain an attr-attr link at the provided index is equivalent to TestAttribute(iKey),
   * i.e. it will only tell you if the list as a whole is valuated.
   * @param iKey
   *      key of the attribute.
   * @param iIndex
   *      index in the list. Lists start at 1.
   * @return 
   *      TRUE if it is valuated.
   */
  virtual CATBoolean TestFinalAttributeValue(const CATISpecAttrKey* iKey,int iIndex=0) const = 0;

  /**
   * @nodoc
   * Obsolete R12 Use @href CATISpecAttrKey instead
   */
  virtual const char* GetFinalSpecAttribute(const char* iName,CATISpecObject_var& oObj,int iIndex=0) const = 0;
  /**
   * Returns the key of the final attribute in an attribute-attribute link (or chain of links).
   * <br>If iKey is not an attr-attr link, this method will return iKey and oObj will be the current object.
   * @param iKey
   *      key of the attribute.
   * @param oObj
   *      SpecObject held by the final attribute.
   * @param iIndex
   *      index in the list. Lists start at 1.
   * @return 
   *      the key of the final attribute.
   */
  virtual CATISpecAttrKey* GetFinalSpecAttribute(const CATISpecAttrKey* iKey, CATISpecObject_var& oObj,int iIndex=0) const = 0;

  //  --------------------------
  //  Specific methods for lists
  //  --------------------------
  /**
   * @nodoc
   *  Obsolete R12 Use @href CATISpecAttrKey instead
   */
  virtual int	GetListSize (const char* iName) const = 0;
  /**
   * Returns the size of the list valuating an attribute.
   *  <br><b>Role: </b> done recursively on attributes valuating attribute.
   * @param iKey
   *      access key to attribute.
   * @return 
   *      addition of all intermediate sizes of lists.
   */
  virtual int	GetListSize (const CATISpecAttrKey* iKey) const = 0;

  /**
   * @nodoc
   * Obsolete R12 Use @href CATISpecAttrKey instead
   */
  virtual CATAttrKind	GetListType(const char* iName) const = 0;
  /**
   * Returns the type of the list valuating an attribute. Possible values are tk_integer, tk_double,
   * tk_string, tk_external, tk_specobject, tk_component, etc.
   * @param iKey
   *      access key to attribute.
   */
  virtual CATAttrKind	GetListType(const CATISpecAttrKey* iKey) const = 0;

  /**
   * @nodoc
   * Obsolete R12 Use @href CATISpecAttrKey instead
   */
  virtual HRESULT RemovePosition(const char* iName,int iIndex) = 0;
  /**
   * Deletes the value at index iIndex in the attribute iName. The attribute must be a list.
   * @param iKey
   *      access key to attribute.
   * @param iIndex
   *      position of the element to remove.
   * @return
   *      S_OK successful<br/>
   *      S_FALSE successful does not change the model<br/>
   *      @href E_KEYNOTFOUND <br/>
   *      @href E_OUTOFBOUND <br/>
   *      @href E_NOTALIST <br/>
   *      @href E_TYPEMISMATCH <br/>
   */
  virtual HRESULT RemovePosition(const CATISpecAttrKey* iKey,int iIndex) = 0;


  /**
   * @nodoc
   * Obsolete R12 Use @href CATISpecAttrKey instead
   */
  virtual HRESULT RemoveAll(const char* iName) = 0;
  /**
   * Deletes all values in the attribute iName. The attribute is not marked unset afterwards, unlike UnsetAttributeValue.
   * <br>Subsequent Gets on the attribute will return 0.
   * <br>NB : DO NOT USE ON SINGLE VALUES !
   * @param iKey
   *      access key to attribute.
   * @return 
   *      S_OK successful<br/>
   *      S_FALSE successful does not change the model<br/>
   *      @href E_KEYNOTFOUND <br/>
   *      @href E_OUTOFBOUND <br/>
   */
  virtual HRESULT RemoveAll(const CATISpecAttrKey* iKey) = 0;

  /**
   * @nodoc
   * Obsolete R12 Use @href CATISpecAttrKey instead
   */
  virtual int GetPosition(const char* iName,const CATISpecObject_var& iObj) = 0;
  /**
   * On a list of tk_specobject or tk_compo, returns the index of a given object.
   * @param iKey
   *      access key to attribute. Must be a list of tk_spec or tk_compo. (Returns 0 otherwise).
   * @param iObj
   *      SpecObject to search for in the list.
   * @return the index of the object if found (in the range 1 to size of list), or 0 if not found / not applicable.
   */
  virtual int	GetPosition(const CATISpecAttrKey* iKey, const CATISpecObject_var& iObj) = 0;

  /**
   * @nodoc
   * Obsolete R12 Use @href CATISpecAttrKey instead
   */
  virtual HRESULT RemoveSpecObject (const char* iName, const CATISpecObject_var& iObj) = 0;
  /**
   * Removes an element of the list valuating an attribute.
   * @param iKey
   *      access key to attribute.
   * @param iObj
   *      SpecObject valuating the attribute, concerned value to remove.
   * @return 
   *      S_OK successful<br/>
   *      S_FALSE successful does not change the model<br/>
   *      @href E_KEYNOTFOUND <br/>
   */
  virtual HRESULT RemoveSpecObject (const CATISpecAttrKey* iKey, const CATISpecObject_var& iObj) = 0;

  /**
   * Modifies the position in the list of a value of the list valuating attribute.
   * @param iKey
   *      access key to attribute.
   * @param iObj
   *      concerned specObject referenced.
   * @param iNewPos
   *      the new position of iObj.
   *	<br>For instance:
   * <pre>
   * List is " A B C D E ";
   * MoveInPosition(D,2) List becomes " A D B C E " : D is moved in position 2.
   * </pre>
   * whereas
   * <pre>
   * MoveInPosition(B,4) List becomes " A C D B E " : B is moved in position 4.
   * </pre>
   * @return 1 if succeeded 0 if failed or was useless.
   */
  virtual int MoveInPosition (const CATISpecAttrKey* iKey,const CATISpecObject_var& iObj,int iNewPos) = 0;

  /**
   * @nodoc
   * Obsolete R12 Use @href CATISpecAttrKey instead
   */

  virtual int	ChangePosition (const char* iName,const CATISpecObject_var& iObj,int iNewPos) = 0;
  /**
   * @nodoc
   * Modifies the position in the list of a value of the list valuating attribute.
   * <br><b>Note:</b> Prefer MoveInPosition method.
   * @param iKey
   *      access key to attribute.
   * @param iObj
   *       concerned specObject referenced.
   * @param iPosToMoveBefore
   *       position in the list of the element to place iObj before.
   *	<br>For instance:
   * <pre>
   * List is " A B C D E ";
   * ChangePosition(D,2) List becomes " A D B C E " : D is moved before B which was in position 2.
   * </pre>
   * whereas
   * <pre>
   * ChangePosition(B,4) List becomes " A C B D E " : B is moved before D which was in position 4.
   * </pre>
   * @return 1 if succeeded 0 if failed or was useless.
   */
  virtual int ChangePosition (const CATISpecAttrKey* iKey,const CATISpecObject_var& iObj,int iPosToMoveBefore) = 0;

  // specObjects lists attributes methods
  /**
   * @nodoc
   * Obsolete R12 Use @href CATISpecAttrKey instead
   */
  virtual CATListValCATBaseUnknown_var* ListSpecObjects(const char* iName,CATClassId iIntfName=0) const = 0;
  /**
   * Lists SpecObjects referred to by the attribute.
   * <br><b>Note:</b> Do not use.
   * @param iKey
   *      access key to attribute.
   * @param iIntfName
   *      name of the interface filtering the kind of objects to find.
   * @return 
   *      list of SpecObjects refered by the attribute. If no iIntfName, it is a list of CATISpecObject.
   */
  virtual CATListValCATBaseUnknown_var* ListSpecObjects(const CATISpecAttrKey* iKey,CATClassId iIntfName=0) const = 0;

  // same with IID (faster, cheaper)
  /**
   * @nodoc
   * Obsolete R12 Use @href CATISpecAttrKey instead
   */
  virtual CATListValCATBaseUnknown_var* ListSpecObjects(const char* iName, const IID& iIntfIID) const = 0;

  /**
   * Lists SpecObjects referred to by the attribute.
   * @param iKey
   *      access key to attribute.
   * @param iIntfIID
   *      identifier of the interface filtering the kind of objects to find.
   * @return 
   *      list of SpecObjects referred to by the attribute. If no iIntfIID, it is a list of CATISpecObject.
   */
  virtual CATListValCATBaseUnknown_var* ListSpecObjects(const CATISpecAttrKey* iKey,const IID& iIntfIID) const = 0;

  /**
   * Insert feature iValue at position i in a list attribute. Following objects are moved from 
   * their current index to index+1.
   * @param iKey 
   *      access key to modify.
   * @param iValue 
   *      Value to put in the attribute.
   * @param iPosition 
   *      Position at which the value must be inserted.
   * @return S_OK if succeeded, E_FAIL if iPosition is out of range or object can't be set in this attribute.
   */
  virtual HRESULT InsertAtPosition(const CATISpecAttrKey* iKey, const CATISpecObject_var& iValue, int iPosition) = 0;



  /**
   * @nodoc
   * Obsolete R12 Dangerous side effect.
   */
  virtual CATUnicodeString IsOfType(const char* iName) const = 0;
  /**
   * @deprecated V5R19 Use GetType and GetListType instead.
   * <br>Returns type of the attribute.
   * @param iKey
   *      access key to attribute.
   */
  virtual CATUnicodeString IsOfType(const CATISpecAttrKey* iKey) const = 0;

  /**
   * Synchronizes instance with its reference : missing components are added, extraneous components are removed.
   * @param lstKeys
   *       list of attributes to synchronize.
   *       <br>if NULL, all attributes will be synchronized.
   * @return
   *      S_OK successful<br/>
   *      S_FALSE successful does not change the model<br/>
   *      E_FAIL an error is decteted
   *      @href S_NOSTATUS status cannot be given
   */
  virtual HRESULT Synchronize(CATListValCATBaseUnknown_var* lstKeys = 0)  = 0;
  /**
   * Recursively synchronizes all specified attributes on all instances of the calling feature.
   * @param iLstKeys
   *       list of attributes to synchronize
   *       <br>if NULL, all attributes will be synchronized.
   * @param oListObj
   *       list of all instances of the feature found ( synchronised or not ).
   * @return
   *      S_OK successful<br/>
   *      S_FALSE successful does not change the model<br/>
   *      E_FAIL an error is decteted
   *      @href S_NOSTATUS status cannot be given
   */
  virtual HRESULT SynchronizeAllInstances(CATListValCATBaseUnknown_var* iLstKeys =0 ,
      CATListValCATISpecObject_var* oListObj = NULL) = 0;

  /**
   * @nodoc.
   */
  virtual CATUnicodeString  DumpValue(const CATISpecAttrKey* iKey) const = 0;

  /**
   * Returns the CATBaseUnknown* corresponding to a new literal. See New Literals CAA documentation.
   * @param iKey
   *      access key to attribute.
   * @param iIntfIID 
   *      filter to specialize the handle on the referred SpecObject.
   */
  virtual CATBaseUnknown* GetLiteral(const CATISpecAttrKey* iKey,const IID& iIntfIID) const = 0;


  /**
   * Lists all objects pointing this feature.
   * <br>If iFromKey is specified, lists only objects pointing this feature via their iFromKey attribute.
   * <br>If iToKey is specified, lists only objects pointing the attribute iToKey on this feature.
   * @param iIntfIID 
   *      filter to specialize the handle on the referred SpecObject.
   * @param iFromKey
   *      access key to attribute.
   * @param iToKey
   *      access to attribute's value.
   */
  virtual CATListValCATBaseUnknown_var* 
    ListPointingObjects(const IID& iIntfIID, CATISpecAttrKey* iFromKey = NULL,
        CATISpecAttrKey* iToKey = NULL)=0;

  /**
   * Marks the component (or list of components) of this object, pointed by the given attribute, as private.
   * <br>Private components are not instanciated when the feature that aggregates them is
   * instanciated.
   * <br>NB : calling GetSpecObject on an instance that does not have the requested component
   * (because it is marked private on its reference) will return the component on its reference.
   * <br>WARNING : use of this method is discouraged as it may cause severe side effects.
   * @param iKey
   *      access key to attribute.
   * @return
   *      S_OK successful<br/>
   *      S_FALSE successful does not change the model<br/>
   *      @href E_NOLOCALVALUE <br/>
   *      @href E_KEYNOTFOUND <br/>
   * @see #UnsetPrivate
   */
  virtual HRESULT SetPrivate(CATISpecAttrKey* iKey) = 0;	

  /**
   * Marks the component (or lists of components) of this object, pointed by the given attribute, as public.
   * <br>This is the default state of a component; there is no need to explicitely mark
   * a component as public if you have not made it private before.
   * <br>WARNING : use of this method is discouraged as it may cause severe side effects.
   * @param iKey
   *      access key to attribute.
   * @return 
   *      S_OK successful<br/>
   *      S_FALSE successful does not change the model<br/>
   *      @href E_NOLOCALVALUE <br/>
   *      @href E_KEYNOTFOUND <br/>
   * @see #SetPrivate
   */
  virtual HRESULT UnsetPrivate(CATISpecAttrKey* iKey) = 0;

};

CATDeclareHandler( CATISpecAttrAccess , CATBaseUnknown );
#endif

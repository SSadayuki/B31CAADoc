/* -*-c++-*- */
#ifndef CATISpecAttribute_H_
#define CATISpecAttribute_H_

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATBaseUnknown.h"
#include "CATISpecDeclarations.h"
#include "CATUnicodeString.h"
#include "booleanDef.h"
#include "octetDef.h"
#include "sequence_octet.h"

#include "CATIDomain.h"

class CATISpecObject;
class CATISpecObject_var;
class CATISpecAttribute_var;
class CATListValCATBaseUnknown_var;
class CATListValCATISpecAttribute_var;

class CATILinkableObject;
class CATILinkableObject_var;
class _SEQUENCE_octet;
class CATError;

class CATRawCollint;
class CATRawColldouble;
class CATListValCATUnicodeString;

#include "AC0SPBAS.h"
extern ExportedByAC0SPBAS IID IID_CATISpecAttribute ;
/**
* Interface to define operations on a feature attribute.
* <b>Note:</b> it's better to directly access attributes' values
* by using CATISpecAttrAccess.
* @see CATISpecObject, CATISpecAttrAccess
*/
class ExportedByAC0SPBAS CATISpecAttribute : public CATBaseUnknown
{
  CATDeclareInterface;

public:
  // Attribute management

  /**
  * Returns the feature holding the attribute.
  */
  virtual CATISpecObject* 			GetOwner() const = 0;
  /**
  * Returns the access mode of the attribute.
  */
  virtual CATAttrAccess			GetAccess() const = 0;
  /**
  * Sets the access mode of the attribute.
  * @param iAccess
  *      access mode.
  */
  virtual void				SetAccess(CATAttrAccess iAccess) = 0;
  /**
  * @nodoc
  *  Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * Returns the type of the data described by the attribute.
  */
  virtual CATAttrKind				GetType() const = 0;
  /**
  * @nodoc
  *  Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * Returns the name of the attribute.
  */
  virtual CATUnicodeString              	GetName() const = 0;

  /**
  * Returns a printable presentation of the value of the attribute.
  */
  virtual CATUnicodeString                    DumpValue() const = 0;
  //  --------------------
  // Timestamp management
  /**
  * @nodoc
  * Obsolete R12 Use @href CATISpecAttrAccess instead.
  * <br>
  * Returns the real timestamp assigned to the attribute.
  */
  virtual CATOldTimeStamp			GetTimeStamp() const = 0;

  /**
  * @nodoc
  * Obsolete R12 Use @href CATISpecAttrAccess instead.
  * <br>
  * Returns the update timestamp assigned to the attribute.
  */
  virtual CATOldUpdateStamp			GetUpdateStamp() const = 0;

  /**
  * @deprecated V5R17 CATISpecAttrAccess::Update
  * Update.
  * @param iDomain
  *      domain.
  */
  virtual int                                 Update(CATIDomain_var iDomain=NULL_var) = 0 ;
  /**
  * @deprecated V5R17 CATISpecAttrAccess::IsUpToDate
  * Determines whether the attribute status is up-to-date.
  * @param iDomain
  *      domain.
  */
  virtual CATBoolean				IsUpToDate(CATIDomain_var iDomain=NULL_var) const = 0;
  /**
  * Forces the attribute to an up-to-date status.
  * @param iFlag
  *      if TRUE, updates time stamp of attribute.
  */
  virtual void				SetUpToDate( CATBoolean iFlag ) = 0;
  //  --------------------
  // IN/OUT management
  /** 
  * @nodoc
  * Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * Returns the in/out label of the attribute.
  */
  virtual CATAttrInOut			GetQuality () const = 0;
  /**
  * @nodoc
  * Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * Sets the in/out label of the attribute.
  * @param iQuality
  *      quality of the attribute:  
  *      <ul><li>sp_IN
  *          <li>sp_OUT
  *          <li>sp_NEUTRAL
  *      </ul>
  */
  virtual void				SetQuality (CATAttrInOut iQuality) = 0;

  //  --------------------
  // Set/Unset management
  /**
  * @nodoc
  * Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * Determines whether the attribute is assigned a value.
  */
  virtual CATBoolean				TestAttributeValue() const = 0;
  /**
  * @nodoc
  * Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * Unsets the attribute value.
  */
  virtual void				UnsetAttributeValue() = 0;
  //  ---------------------------
  // Values and lists management

  /**
  * @nodoc
  * Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * Assigns a value of double type to an attribute.
  * @param iDouble
  *      value to assign to the tk_double attribute.
  * @param iIndex
  *      use for lists. If 0, sets at the end. 
  */
  virtual void				SetDouble(double iDouble,int iIndex=0) = 0;
  /**
  * @nodoc
  * Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * Assigns a value of integer type to an attribute. 
  * @param iInt
  *      value to assign to the tk_integer attribute.
  * @param iIndex
  *      use for lists. If 0, sets at the end. 
  */
  virtual void				SetInteger(int iInt,int iIndex=0) = 0;  
  /**
  * @nodoc
  * Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * Assigns a value of CATBoolean type to an attribute.
  * @param iBool
  *      value to assign to the tk_boolean attribute.
  * @param iIndex
  *      use for lists. If 0, sets at the end.  
  */
  virtual void				SetBoolean(CATBoolean iBool,int iIndex=0) = 0;  
  /**
  * @nodoc
  * Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * Assigns a value of octet type to an attribute.
  * @param iOct
  *      value to assign to the tk_octet attribute.
  * @param iIndex
  *      use for lists. If 0, sets at the end.  
  */
  virtual void				SetOctet(octet iOct,int iIndex=0) = 0;
  /**
  * @nodoc
  * Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * Assigns a value of string type to an attribute. 
  * @param iString
  *      value to assign to the tk_string attribute.
  * @param iIndex
  *      use for lists. If 0, sets at the end. 
  */
  virtual void				SetString(const CATUnicodeString& iString,int iIndex=0) = 0;
  /**
  * @nodoc
  * Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * Assigns a value of specobject type to an attribute. 
  * <b>Role: </b> the refered SpecObject is shareable ( note that it is not the tk_specobject attribute 
  * which is shared, but the feature which is assigned as a value to this attribute ), so it
  * can be referenced by several features. A referenced feature does not belong to any other feature. 
  * A referenced feature just lives on its own. Its life cyle is completely independent of the features
  * which use it as a reference. 
  * @param iObj
  *      value to assign to the tk_specobject attribute.
  * @param iIndex
  *      use for lists. If 0, sets at the end.
  * @param iNeedToSave
  *      When an attribute is valuated with a specobject, a link is created on the refered CATISpecObject.
  *      If TRUE, does mean that save of document containing the feature with valuated attribute will
  *      call save of document containing the refered SpecObject.
  */
  virtual void				SetSpecObject(const CATISpecObject_var& iObj,int iIndex=0,CATBoolean iNeedToSave=FALSE,int relative=0) = 0; 
  /**
  * @nodoc
  * Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * Assigns a value of feature type to an attribute. 
  * Use the <tt>tk_external</tt> type for <tt>AddAttribute</tt> method.
  * <br><b> Role: </b> Creates a symbolic link between the feature (pointing object) owning 
  * the <tt>tk_external</tt> attribute and the (pointed) object specified in argument.
  * This method is the same as SetSpecObject, but allows to refer any LinkableObject (  SetSpecObject refers
  * only CATISpecObjects ).
  * @param iObj
  *      value to assign to the tk_external attribute.
  * @param iIndex
  *      use for lists. If 0, sets at the end.
  * @param iNeedToSave
  *      If TRUE, does mean that save of document containing the feature with valuated attribute will
  *      call save of document containing the refered object.
  */
  virtual void				SetExternalObject(const CATILinkableObject_var& iObj,int iIndex=0, CATBoolean iNeedToSave=FALSE) = 0; 
  /**
  * @nodoc
  */
  virtual void				SetExternalObjectName(const _SEQUENCE_octet& name,int index=0) = 0; 
  /**
  * @nodoc
  * Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * Assigns a value of attribute type to an attribute. 
  * @param iAtt
  *      attribute value to be assigned.
  * @param iIndex
  */

  virtual void				SetSpecAttribute(const CATISpecAttribute_var& iAtt,int iIndex=0) = 0;
  /**
  * @nodoc
  * Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * Retrieves the value of double type of an attribute.
  * @param iIndex
  *      use for lists. If 0, gets first value in the list.
  */
  virtual double				GetDouble(int iIndex=0) const = 0;  
  /**
  * @nodoc
  * Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * Retrieves the value of interger type of an attribute.
  * @param iIndex
  *      use for lists. If 0, gets first value in the list.
  */
  virtual int					GetInteger(int iIndex=0) const = 0;  
  /**
  * @nodoc
  * Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * Retrieves the value of CATBoolean type of an attribute.
  * @param iIndex
  *      use for lists. If 0, gets first value in the list.
  */
  virtual CATBoolean				GetBoolean(int iIndex=0) const = 0;  
  /** 
  * @nodoc
  * Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * Retrieves the value of octet type of an attribute.
  * @param iIndex
  *      use for lists. If 0, gets first value in the list.
  */
  virtual octet				GetOctet(int iIndex=0) const = 0;
  /**
  * @nodoc
  * Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * Retrieves the value of string type of an attribute.
  * @param iIndex
  *      use for lists. If 0, gets first value in the list.
  */
  virtual CATUnicodeString			GetString(int iIndex=0) const = 0;
  /**
  * @nodoc
  * Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * Retrieves the value of specobject type of an attribute.
  * @param iIndex
  *      use for lists. If 0, gets first value in the list.
  */
  virtual CATISpecObject*			GetSpecObject(int iIndex=0) const = 0;
  /**
  * @nodoc
  * Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * Retrieves the object pointed to by the object containing the 
  * <tt>tk_external</tt> attribute. 
  * @param iParam
  *      parameter.
  * @param iIndex
  *      use for lists. If 0, gets first value in the list.
  * @param iErrorMessage
  *      error message.
  */
  virtual CATILinkableObject*			GetExternalObject(CATFlavorParam iParam = ANYWHERE,int iIndex=0, CATUnicodeString* iErrorMessage = NULL ) const = 0;
  /**
  * @nodoc
  * Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * Retrieves the binary name of the object pointed to by the object containing
  * the <tt>tk_external</tt> attribute. 
  * @param iIndex
  *      use for lists. If 0, gets first value in the list.
  */
  virtual SEQUENCE(octet)		        GetExternalObjectName(int iIndex=0) const = 0;
  /**
  * @nodoc
  * Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * Retrieves attribute valuating attribute. 
  * @param iIndex
  *      use for lists. If 0, gets first value in the list.
  */
  virtual CATISpecAttribute*			GetSpecAttribute(int iIndex=0) const = 0;
  //  ----------------------
  // Error value management
  /** @nodoc 
  */
  virtual void			SetError ( CATError* error)=0;
  /** @nodoc 
  */
  virtual CATError*			GetError () const = 0;

  //  -----------------------
  // Simple lists management
  /**
  * @nodoc
  * Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * Assigns a list of integers to an attribute of <tt>tk_list(tk_integer)</tt> type.
  * @param iList
  *      list of integers.
  */
  virtual void                                SetListInteger ( const CATRawCollint& iList ) = 0;
  /**
  * @nodoc
  * Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * Assigns a list of doubles to an attribute of <tt>tk_list(tk_double)</tt> type.
  * @param iList
  *      list of doubles.
  */
  virtual void                                SetListDouble ( const CATRawColldouble& iList ) = 0;
  /**
  * @nodoc
  *  Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * Assigns a list of strings to an attribute of <tt>tk_list(tk_string)</tt> type.
  * @param iList
  *      list of strings.
  */
  virtual void                                SetListString ( const CATListValCATUnicodeString& iList ) = 0;
  /**
  * @nodoc
  * Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * Retrieves a list of integers from an attribute of <tt>tk_list(tk_integer)</tt> type.
  */
  virtual CATRawCollint*                      GetListInteger() const = 0;
  /**
  * @nodoc
  *  Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * Retrieves a list of doubles from an attribute of <tt>tk_list(tk_integer)</tt> type.
  */
  virtual CATRawColldouble*                   GetListDouble() const = 0;
  /**
  * @nodoc
  *  Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * Retrieves a list of strings from an attribute of <tt>tk_list(tk_integer)</tt> type.
  */
  virtual CATListValCATUnicodeString*         GetListString() const = 0;
  //  -------------------------------
  // Attributes reference management
  /**
  * @nodoc
  *  Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * Tests if final attribute is valuated.
  * <b> Role: </b> Gets attributes recursively, and on the last one tests if is valuated.
  * @param iIndex
  *      use for lists. If 0, sets at the end.
  * @return 
  *      TRUE if it is valuated.
  */
  virtual CATBoolean				TestFinalAttributeValue(int iIndex=0) const = 0;
  /**
  * @nodoc
  *  Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * Gets final attribute when attributes are valuated with attributes.
  * <b> Role: </b> Gets attributes recursively, and on the last one returns its name.
  * @param iIndex
  *      use for lists. If 0, sets at the end.
  * @return 
  *      the name of the final attribute.
  */
  virtual CATISpecAttribute*			GetFinalSpecAttribute(int iIndex=0) const = 0;
  //  --------------------------
  // Specific methods for lists
  /**
  * @nodoc
  *  Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * Returns the size of the list valuating an attribute.
  */
  virtual int					GetListSize () const = 0;
  /**
  * @nodoc
  *  Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * Returns the type of the list valuating an attribute.
  */
  virtual CATAttrKind				GetListType() const = 0;
  /**
  * @nodoc
  *  Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * Removes an element of the list valuating the attribute, element defined by its position in the list.
  * @param iIndex
  *      position of the element to remove.
  */
  virtual void				RemovePosition(int iIndex) = 0;
  /**
  * @nodoc
  *  Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * Removes all elements valuating the attribute.
  */
  virtual void				RemoveAll() = 0;
  /**
  * @nodoc
  *  Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * Returns position of a SpecObject valuating the attribute.
  * @param iObj
  *      searched SpecObject valuating the attribute.
  */
  virtual int					GetPosition(const CATISpecObject_var& iObj) = 0;
  /**
  * @nodoc
  *  Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * Removes an element of the list valuating an attribute.
  * @param iObj
  *      SpecObject valuating the attribute, concerned value to remove.
  */
  virtual void				RemoveSpecObject ( const CATISpecObject_var& iObj) = 0;
  /**
  * @nodoc
  *  Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * modifies the position in the list of a value of the list valuating attribute.
  * @param iObj
  *       concerned specObject referenced.
  * @param iNewPos
  *       new posiion in the list.
  * @return 0 if succeeded.
  */
  virtual int					ChangePosition (const CATISpecObject_var& iObj,int iNewPos) = 0;
  
  /**
  * @nodoc
  *  Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * Lists SpecObjects refered by the attribute.
  * @param intfName
  *      name of the interface filtering the kind of objects to find.
  * @return 
  *      list of SpecObjects refered by the attribute. If no intfName, we will have a list of CATISpecObject.
  */
  virtual CATListValCATBaseUnknown_var*	ListSpecObjects(CATClassId intfName=0) const = 0;

  /**
  * @nodoc
  *  Obsolete R12 Use @href CATISpecAttrKey instead.
  * <br>
  * Returns type of the attribute.
  */
  virtual CATUnicodeString			IsOfType() const = 0;
  /** @nodoc */
  virtual   CATListValCATISpecAttribute_var * InverseAttrLink(CATClassId intfname = "CATISpecObject", const CATUnicodeString & name = NULL_string) = 0;

};


CATDeclareHandler( CATISpecAttribute, CATBaseUnknown );

#endif


// COPYRIGHT DASSAULT SYSTEMES 1999  

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#ifndef CATISpecObject_H_
#define CATISpecObject_H_

#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATISpecDeclarations.h"
#include "CATIContainer.h"
#include "booleanDef.h"

#define SPEC_NLS_JNM

class CATISpecAttribute;
class CATISpecAttribute_var;
class CATISpecObject_var;
class CATListValCATISpecObject_var;
class CATListValCATISpecAttribute_var;
class CATListValCATBaseUnknown_var;
class CATListPtrCATSpecPointing;

#include "CATIDomain.h"

#include "sequence_octet.h"

class CATSpecLink;
class CATDocument;
class CATUuid;

#include "AC0SPBAS.h"
extern ExportedByAC0SPBAS IID IID_CATISpecObject ;

/**
* Interface to manage the basic mechanisms of Feature Modeler.
* <b>Role:</b> This interface is the base of the Feature Modeler, the prototype-instance and instance-reference
*   mechanism. This interface enables you to manipulate features, i.e. create them from Startups defined in catalogs,
*   trigger their update, etc.
* NB:
*  <br>Adding attributes dynamically (through the various AddAttribute() methods) is not recommended. You may want to consider updating
*  your catalog to add new attributes to your Startup instead.
* 
* @see CATISpecAttrKey, CATISpecAttrAccess, CATISpecAttribute
*/
class ExportedByAC0SPBAS CATISpecObject : public CATBaseUnknown
{
  CATDeclareInterface;

public:

  /**
  * Instanciates a new feature. 
  * <br><b>Role:</b>Instanciation creates a new feature that inherits the type, the values and the attributes of another.
  * <br>These new features can be created both from a Startup, or from another feature.
  * <br>The original object is known as the 'reference' of the new object, the 'instance'.
  * @param iName 
  *   name of the new instance.
  *   if NULL, the instance will have the same name as the StartUp.
  * @param iContainer
  *   specifies wich container the instance will belong to.
  *   if NULL, the instance will be in the same container as its reference.
  * @param iNeedToSave
  *   if TRUE, saving the document containing the instance will cause the document containing the reference to be safed.
  * @return CATBaseUnknown#Release
  *   The new instance. Must be released after use.
  */
  virtual CATISpecObject*               	Instanciate(const CATUnicodeString& iName = NULL_string, 
    const CATIContainer_var& iContainer = NULL_var, 
    CATBoolean iNeedToSave = FALSE) = 0;
  /**
  * Returns the name of the feature.
  */
  virtual CATUnicodeString              	GetName() const = 0;
  /**
  * @nodoc .
  * Name is a kind of key for NLS name.
  */
  virtual void                          	SetName(  const CATUnicodeString& name ) = 0;

  /**
  * Returns the automatic external NLS name of the feature; this will generally be the autoname of the feature.
  */
  virtual CATUnicodeString              	GetDisplayName() const = 0;

  /**
  * Modifies the automatic external name of the feature.
  * @param iName
  *        name to set.
  */
  virtual void                          	SetDisplayName(  const CATUnicodeString& iName ) = 0;


  /**
  * @nodoc . Do not use.
  */
  virtual CATAttrInOut				GetQuality() const = 0;

  /**
   * @deprecated V5R21 NoReplacement
   * Returns the modification TimeStamp of the feature.
   * <br><b>Warning</b>: not all object implementing CATISpecObject interface maintain a modification TimeStamp.
   * On such objects, the method implementation may either return 0 or throw an exception.
   * Since the TimeStamp resolution is limited to 1 second, its value is to be used with caution.
   */
  virtual CATOldTimeStamp                  	GetTimeStamp() const = 0;

  /**
  * Returns the type (i.e. Late Type) of the feature. This is generally the same as its name.
  */
  virtual CATUnicodeString              	GetType() const = 0;

  /**
  * Returns the SuperType of the feature.
  */
  virtual CATUnicodeString			GetSuperType() const = 0;

  /**
  * Determine whether this feature is of the given type.
  * @param iSpecType
  *   type of the given specobject
  */
  virtual CATBoolean IsSubTypeOf(const CATUnicodeString& iSpecType) = 0;


  /**   
  * Returns reference of the feature.
  * <br><b>Role:</b>The reference is the one from which an instance originates.
  * @return CATBaseUnknown#Release
  *   The returned reference has to be released after use.
  */
  virtual CATISpecObject* 			GetReference() const = 0;

  /**   
  * Returns the startup of this feature, i.e. the first feature in the instanciation chain.
  * @return CATBaseUnknown#Release
  *   The returned startup has to be released after use.
  */
  virtual CATISpecObject* 			GetStartUp() const = 0;

  /**
  * Returns the feature agregating this one, a.k.a. its owner.
  * <br>From the point of view of said owner, this feature is a tk_component.
  * @return CATBaseUnknown#Release
  *   The returned father has to be released after use.
  */
  virtual CATISpecObject*               	GetFather()  const = 0;

  /**
  * Returns the root SpecObject agregating this.
  * @return CATBaseUnknown#Release
  *   The returned root father has to be released after use.
  */
  virtual CATISpecObject*			GetRootFather() const = 0;

  /**
  * @nodoc 
  * internal use only.
  */
  virtual int					ChangeFather(const CATUnicodeString& old_attrName,const CATISpecObject_var& new_father,const CATUnicodeString& new_attrName)=0;

  /**
  * @nodoc 
  * Not used. Returns Id of the object's creator, valuated by SetUserId.
  */
  virtual CATUnicodeString			GetUserId() const = 0;

  /**
  * @nodoc 
  * Not used. Sets Id of the object's creator.
  */
  virtual void					SetUserId(const CATUnicodeString& user_id) = 0;

  /**
  * @nodoc 
  */
  virtual void                          	Dump() = 0;

  /**
  * Returns the container containing the feature.
  */
  virtual CATIContainer_var			GetFeatContainer() const = 0;

  /**
  * @deprecated V5R17 CATISpecAttrAccess::Synchronize
  * Synchronizes instance from reference.
  * @param iAtt2sync
  *       list of attributes to synchronize.
  *       <br>if NULL, all attributes will be synchronized.
  */
  virtual void		                	Synchronize(CATListValCATISpecAttribute_var* iAtt2sync=0) = 0;

  /**
  * Returns whether the feature is synchronized with its reference.
  * @return 
  *   <br><b>Legal Values</b>: 
  *     <tt>  TRUE  </tt> if the feature has ever been synchronized.
  *     <tt>  FALSE </tt> if it has to be synchronized.
  */
  virtual CATBoolean	                	IsSynchronized() const = 0;

  /**
  * @deprecated V5R17 CATISpecAttrAccess::SynchronizeAllInstances
  * Synchronizes recursively all instances from the reference feature calling that method. 
  * @param iAtt2sync
  *   list of attributes to synchronize
  *   <br>if NULL, all attributes will be synchronized.
  * @param oListObj
  *   list of all instances of the feature found ( synchronised or not ).
  */ 
  virtual void					SynchronizeAllInstances(CATListValCATISpecAttribute_var* iAtt2sync=0 ,CATListValCATISpecObject_var* oListObj = NULL) = 0;

  /**
  * Resets local modifications of an instance .
  * <br><b>Role:</b>resets localmodification and synchronize with reference. To apply on an instance.
  */
  virtual void                          	Reset() = 0;

  /**
  * @nodoc
  * Obsolete method, use other AddAttribute.
  *
  * Adds an attribute to a feature, by copy of a given one.
  * @param iAttr
  *   attribute to copy on the feature. 
  * @return CATBaseUnknown#Release
  *   the copy of iAttr which has to be released after use.
  */
  virtual CATISpecAttribute*			AddAttribute	(const CATISpecAttribute_var& iAttr)=0;

  /**
  * Adds an attribute defined by its name, its type, and the expected behavior.
  * @param iName 
  *    attribute's name
  * @param iType
  *    defines the type of an attribute.
  *    <br><b>Legal values </b>:
  *      <br>tk_string    :  to specify a string C++ type. 
  *      <br>tk_double    :  to specify a double C++ type 
  *      <br>tk_boolean   :  to specify a DASSAULT SYSTEMES CATBoolean typedef 
  *      <br>tk_octet     :  to specify an unsigned char C++ type 
  *      <br>tk_integer   :  to specify an integer C++ type 
  *      <br>tk_specobject:  to specify a feature 
  *      <br>tk_component :  to specify a component, i.e. a feature that can be 
  *                           aggregated only once to a parent feature 
  *      <br>tk_list      :  to specify a list of any other types 
  *      <br>tk_external  :  to specify an object to be linked to another one by a 
  *                          symbolic link. 
  * @param iFacet
  *    Defines the value behaviour when valuating the object.
  *    @see CATIOsmUpdate
  * @return CATBaseUnknown#Release
  *   Returns attribute which has to be released after use.
  */
  virtual CATISpecAttribute*			AddAttribute	(const CATUnicodeString& iName,CATAttrKind iType,CATAttrInOut iFacet=sp_NEUTRAL )=0;

  /**
  * Adds an attribute defined by its name,its type, its sharp type, and the expected behavior.
  * @param iName 
  *    attribute's name
  * @param iType
  *    defines the type of an attribute.
  *    <br><b>Legal values </b>:
  *      <br>tk_string    :  to specify a string C++ type. 
  *      <br>tk_double    :  to specify a double C++ type 
  *      <br>tk_boolean   :  to specify a DASSAULT SYSTEMES CATBoolean typedef 
  *      <br>tk_octet     :  to specify an unsigned char C++ type 
  *      <br>tk_integer   :  to specify an integer C++ type 
  *      <br>tk_specobject:  to specify a feature 
  *      <br>tk_component :  to specify a component, i.e. a feature that can be 
  *                           aggregated only once to a parent feature 
  *      <br>tk_list      :  to specify a list of any other types 
  *      <br>tk_external  :  to specify an object to be linked to another one by a 
  *                          symbolic link. 
  * @param iSharp_type
  *    to specify a late type for attribute
  *   ( specify which kind of type we can have for the feature valuating ).
  * @param iFacet
  *    Defines the value behaviour when valuating the object.
  *    @see CATIOsmUpdate
  * @return CATBaseUnknown#Release
  *   Returns added attribute which has to be released after use.
  */
  virtual CATISpecAttribute*			AddAttribute	(const CATUnicodeString& iName,CATAttrKind iType,const CATUnicodeString& iSharp_type,CATAttrInOut iFacet=sp_NEUTRAL) = 0;

  /**
  * Adds an attribute defined by its name,its type, its sharp type, and the expected behavior.
  * @param iName 
  *    attribute's name
  * @param iType
  *    defines the type of an attribute.
  *    <br><b>Legal values </b>:
  *      <br>tk_string    :  to specify a string C++ type. 
  *      <br>tk_double    :  to specify a double C++ type 
  *      <br>tk_boolean   :  to specify a DASSAULT SYSTEMES CATBoolean typedef 
  *      <br>tk_octet     :  to specify an unsigned char C++ type 
  *      <br>tk_integer   :  to specify an integer C++ type 
  *      <br>tk_specobject:  to specify a feature 
  *      <br>tk_component :  to specify a component, i.e. a feature that can be 
  *                           aggregated only once to a parent feature 
  *      <br>tk_list      :  to specify a list of any other types 
  *      <br>tk_external  :  to specify an object to be linked to another one by a 
  *                          symbolic link. 
  * @param iSharp_type
  *    to specify a late type for attribute
  *   ( specify which kind of type we can have for the feature valuating ).
  *    Concerns attributes whose type is a list.
  * @param iFacet
  *    Defines the value behaviour when valuating the object.
  *    @see CATIOsmUpdate
  * @return CATBaseUnknown#Release
  *   Returns attribute which has to be released after use.
  */
  virtual CATISpecAttribute*			AddAttribute	(const CATUnicodeString& iName,CATAttrKind iType,CATAttrKind iSharp_type,CATAttrInOut iFacet=sp_NEUTRAL) = 0;

  /**
  * Adds an attribute supposed to be valuate by list of other attributes.
  * @param iName 
  *    attribute's name
  * @param iType
  *    defines the type of the attribute to add.
  *    <br><b>Legal values </b>:
  *      <br>tk_list      :  to specify a list of any other types 
  * @param iType_list
  *      defines the kind of attribute's valuating the list.
  * @param iSharp_type
  *    to specify a late type for attribute
  *   ( specify which kind of type we can have for the feature valuating ).
  * @param iFacet
  *    Defines the value behaviour when valuating the object.
  *    @see CATIOsmUpdate
  * @return CATBaseUnknown#Release
  *   Returns attribute which has to be released after use.
  */
  virtual CATISpecAttribute*			AddAttribute	(const CATUnicodeString& iName,CATAttrKind iType,
    CATAttrKind iType_list,const CATUnicodeString& iSharp_type,
    CATAttrInOut iFacet=sp_NEUTRAL )=0;

  /**
  * Permanently removes an attribute; NOT RECOMMENDED !
  * @param iAttr
  *   attribute to remove.
  */
  virtual void                          	RemoveAttribute ( const CATISpecAttribute_var& iAttr) = 0;

  /**
  * @nodoc
  * Returns attribute defined by its name.
  * Obsolete method, use CATISpecAttrAccess instead.
  * @param iName
  *        name of searched attribute.
  * @return CATBaseUnknown#Release
  *   Returns an attribute which has to be released after use.
  */
  virtual CATISpecAttribute*			GetAttribute    ( const CATUnicodeString& iName ) const = 0;

  /**
  * @nodoc 
  * Obsolete method, use CATISpecAttrAccess instead.
  * Lists all attributes owned by the features.
  * @return delete
  *   Returns a new list containing the attribute owned by the feature. Do not forget to delete it.
  */
  virtual CATListValCATISpecAttribute_var*	ListAttributes  () const = 0;

  //Aggregates management
  /**
  * Lists all features ( SpecObjects ) valuating tk_component attributes ( features agregated to the feature ).
  * List order is not guaranteed.
  * @return delete
  *  Returns a new list containing the agregated features. Do not forget to delete it.
  */
  virtual CATListValCATISpecObject_var*		ListComponents 	() const = 0;

  /**
  * Removes a given component from the list of features aggregated to this one by tk_component links.
  * The child is still alive after this operation but has no more father.
  * @param iSpec
  *     The child to remove.
  */
  virtual void                          	RemoveComponent	( const CATISpecObject_var& iSpec ) =0 ;

  // Remove management

  /**
  * Removes a given object.
  * @param iChild
  *    The child object to remove. 
  * @param iForCloseContext
  *    This parameter specifies the context of removal:
  *    <br><b>Legal values</b>
  *     <ul>
  *     <li><tt>1:</tt> During the closure of the document containing this. </li>
  *     <li><tt>0:</tt> otherwise (default value). In this case internal post-processing are done.</li>
  *     </ul>
  *    The <tt>Remove</tt> method calls the @href LifeCycleObject#remove on <tt>iChild</tt> with 
  *    this parameter.
  */
  virtual void					Remove(const CATBaseUnknown_var& iChild,int iForCloseContext=0) = 0;

  /**  
  * Rebuilds the feature ( generate the result ).
  * <b>Role:</b> this method rebuilds the feature.
  * The default Update mechanism may be overridden with @href CATIOsmUpdate.
  * <b> Note: </b> The default update mechanism detects all features that have been modified upstream from a 
  * feature, updates all the features impacting the updated feature, and finally rebuilds
  * the final feature.
  * @param iDomain
  *     application domain of the update ( not used ).
  */
  virtual int					Update(CATIDomain_var iDomain = NULL_var) = 0;

  /** 
  * @nodoc 
  * Obsolete method, use CATIBuild instead
  */
  virtual int					Build() = 0;
  /** 
  * @nodoc 
  */
  virtual int					BuildShape() = 0;

  /** 
  * Returns the status of the object concerning the update mechanism.
  * <b>Role:</b> this method returns the status of the object concerning the update mechanism.
  * The default IsUpToDate mechanism may be overridden with @href CATIOsmUpdate.
  * @param iDomain
  *    The application domain of the update (not used).
  * @return 
  *    TRUE : the object is up to date.<br>
  *    FALSE : the object needs to be updated.
  */
  virtual CATBoolean				IsUpToDate(CATIDomain_var iDomain=NULL_var) const = 0;

  /**
  * Modifies the flag of the updatable object.
  * <b>Role:</b> this method modifies the flag of the updatable object.
  * The default SetUpToDate mechanism may be overridden with @href CATIOsmUpdate.
  * @param  flag <ul>
  *       <li>TRUE : you are not allowed to call SetUpToDate(TRUE).<br></li>
  *       <li>FALSE: the object needs to be updated.</li></ul>
  */
  virtual void					SetUpToDate(CATBoolean flag) = 0;

  /** 
  * @nodoc 
  * not implemented.
  */
  virtual CATListValCATBaseUnknown_var*	GetImplementationValue ( CATClassId intfName) = 0;

  /** 
  * @nodoc 
  * not implemented.
  */
  virtual int					SetImplementationValue ( CATListValCATBaseUnknown_var* liste) = 0;

  /**
  * Retrieves all objects pointing the feature.
  * @param oListOfAttr [out, delete]
  *   The list of @href CATSpecPointing objects. For each feature pointing this, 
  *   through
  *   @href CATISpecAttrAccess#SetSpecAttribute or 
  *   @href CATISpecAttrAccess#SetSpecObject, 
  *   an object is added in the list. 
  *   <br>Do not forget to delete (and not release) each object of the list after 
  *    its use.  
  */
  virtual HRESULT ListPointing(CATListPtrCATSpecPointing& oListOfAttr) = 0;

  /**
  * @nodoc
  * 
  * Lists all attributes valuated by the feature.
  * @param iIntfName
  *        The filter on the feature owning the attribute.
  * @param iAttName
  *        The filter on an attribute name.
  * @param iTypeName
  *        The filter on the type name of a feature valuating 
  *        tk_component or tk_specobject attributes. This filter
  *        is only activated if the feature is stored in a database.
  * @return delete 
  *        The list of attributes valuated by the feature, with their owner 
  *        supposed to hold to iIntfName, and possibly filtered by a given iAttName.
  *        Do not forget to delete it after use.
  */
  virtual CATListValCATISpecAttribute_var*
    InverseAttrLink( CATClassId iIntfName="CATISpecObject",const CATUnicodeString& iAttName = NULL_string, const CATUnicodeString& iTypeName=NULL_string ) = 0; 

  /** 
  * Defines the type of link resolution that will be used by default on this feature.
  * <nb>This is used any time a link resolution is necessary:
  * <ul>
  * <li>to access the value of a tk_component, tk_specobject, tk_external attribute,</li>
  * <li>to access any attribute that uses an attribute-attribute link,</li>
  * <li>to access the feature's reference, startup and other structural links,</li>
  * <li>etc.</li>
  * </ul>
  * @param iParam
  *        The type of bind to perform; see @href CATFlavorParam .
  * @see CATFlavorParam
  */
  virtual void					SetBindParameter( CATFlavorParam iParam)=0;
  /** 
  * Returns the BindParameter.
  * @see CATFlavorParam
  */
  virtual CATFlavorParam			GetBindParameter() const = 0;

  /**
  * Returns a CATBoolean to know if it's possible to get the reference without loading the document.
  * @return 
  *   TRUE if the document doesn't need to be loaded.
  */
  virtual CATBoolean				CanGetReference() const = 0;

  /**
  * Determines whether a given structural link (i.e. reference, startup, etc) is loaded or not.
  * @param iKind 
  *   kind of relation between this and the concerned symbol ("parents ")
  *   <br><b> legal values : </b> Reference, StartUp or Father 
  *   @see CATParentKind
  * @return 
  *   TRUE if the feature pointed by the given link is loaded.
  */
  virtual int SymbolIsLoaded(CATParentKind iKind = Reference) const = 0;

  /**
  * Determines whether a given structural link (i.e. reference, startup, etc) is in different document or not.
  * @param iKind 
  *   kind of relation between this and the concerned symbol. 
  *   <br><b> legal values : </b> Reference, StartUp or Father 
  *   @see CATParentKind
  * @return 
  *   TRUE if the feature pointed by the given link is in a different document.
  */
  virtual int SymbolIsExternal(CATParentKind iKind = Reference) const = 0;

  /**
   * @deprecated V5R21 NoReplacement
   * Determines whether another SpecObject is older than this.
   * <br><b>Role</b>: compares timestamps of all attributes associated to the feature, and the SpecObject time stamp itself.
   * <br><b>Warning</b>: not all object implementing CATISpecObject interface maintain a modification TimeStamp.
   * If the comparison involves an object that does not maintain a modification TimeStamp, this method may either return 0 or throw an exception.
   * Since the TimeStamp resolution is limited to 1 second, the comparison result is to be used with caution.
   * @param iRefObj
   *   SpecObject refered to know if it's older than this.
   * @return 
   *   1 if iRefObj is older than this.
   */
  virtual int IsOlderThan(const CATISpecObject_var& iRefObj) const = 0;

  /**  
  * Returns the updateStamp held by the feature.
  * The updateStamp is unchanged unless some inputs of the
  * feature has been modified.
  * @return 
  *   the updateStamp of the feature.
  */
  virtual CATOldUpdateStamp GetUpdateStamp() const = 0;

  /**
  * Sets the feature's autonaming father to the given feature.
  * <nb>The autonaming father is used to produce the automatic name of a feature : if your autoname father is called 'Instance1',
  * you will be called 'Instance1.1' unless you manually select a name.
  * <nb>This method will fail if the feature already has a manually name defined.
  * @param	iRefObj
  *   feature to use as autonaming father.
  */
  virtual void SetAutoNameFather( const CATISpecObject_var& iRefObj ) = 0;

  /**
  * @nodoc.
  */
  virtual int GetSequenceReference ( SEQUENCE(octet)& seq_ref ) = 0;

  /**
  * Whether it is licit or not to remove a child object.
  * If not, the Remove method is expected to fail. Also, such a child 
  * will not be deleted when, for instance, a cut and paste operation 
  * is made on it.
  * @param iChild
  *   object to check for removal right.
  */
  virtual int			CanRemove(const CATBaseUnknown_var& iChild) = 0;
};


// Macro for Handlers  //
//======================

CATDeclareHandler( CATISpecObject, CATBaseUnknown );

#endif

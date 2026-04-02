// Copyright Dassault Systemes 2000
#ifndef CATKweInstanceAdapter_H
#define CATKweInstanceAdapter_H

#include "KnowledgeItf.h"

/** 
* @CAA2Level L1
* @CAA2Usage U2 
*/

// forwards
#include "CATIForwardsDecl.h"
#include "CATListValCATIType.h"
#include "CATIVisitor.h"
#include "CATLISTV_CATInterfaceObject.h"
#include "CATParmPublisherAdapter.h"
#include "CATListOfCATBaseUnknown.h"
class CATICkeParm;
class CATIContainer_var;


/**
* Class to be used as an adapter for objects that want to be used through Knowledge Expert and Search.
*
* First of all, it is an adapter of CATIParmPublisher interface. This interface is used
* by a feature to publish its parameters so that they can be used in F(x).
*
* It is also an adapter of CATIInstance. This interface is used by Knowledge Expert to 
* identify an object through its type. It is also used by GenerativeKnwoledge and the search 
* of CATIA
* In addition to that, the object may implement CATIInstance to give access
* to its attributes. It may also implement CATIDynamicAttributes and CATIAttributesDescription
* to support the ability for a user to add dynamic attributes on it.
*
* Note that it is also an adapter of CATIInstancesProvider which is the interface to implement
* to provide the instances of your hierarchy and to be thus used by Knowledge Expert
*
* In addition to extension, you must create the TIE object with 
* - TIEchain_CATIParmPublisher
* - TIEchain_CATIInstance
*
*/

class ExportedByKnowledgeItf CATKweInstanceAdapter : public CATParmPublisherAdapter
{
public:
	
	
	CATKweInstanceAdapter();
	virtual ~CATKweInstanceAdapter() ;
		
	//-------------------------------------------
	// Interface CATIInstance implementation
	//-------------------------------------------
	
   /**
	*  Description: Returns the main type of an object.
	*  An AddRef is done. Warning : Do not redefined this method.
	*  Default implementation returns GetType().
	*  @return the main type of the object.
	*/
	CATIType* Type() const ;


   
   /**
	*  Description: Tests if an object supports a given type.
	*  @param iType type that we want to check.<br>
	*  An AddRef is done.
	*  Default implementation returns self if type belongs to the supported types
	*  Usually you shouldn't need to override this method.
	*  @return the instance supporting this type (may be NULL or self)
	*/
	CATIInstance* IsSupporting( const CATIType_var& iType ) const ;
	
   /**
	*  Description: fills the list of types supported by this object.
	*  Default implementation returns a list containing main Type first returned by Type method.
    *  and the list of types returned by ListSupportedTypesInternal. 
    *  @param oListOfCATIType this list is filled.<br>
	*/
	HRESULT ListSupportedTypes( CATListValCATIType_var& oListOfCATIType ) const ;


	
	/**
	*	Description: adds a listener to the object.
	*  The Listerner is called back when events are raised by the object.
	*  Default implementation works very well. You shouldn't overide this method.
	*  @param iListerner listener to be called back.<br>
	*/
	HRESULT AddInstanceListener( const CATIInstanceListener_var &iListener ) ;
	
	/**
	*	Description: removes a listener to the object.
	*  The Listerner is called back when events are raised by the object.
	*  Default implementation works very well. You shouldn't overide this method.
	*  @param iListerner listener to be called back.<br>
	*/
	HRESULT RemoveInstanceListener( const CATIInstanceListener_var &iListener ) ;
	
    /**
	*  Description: propagates an attribute changed information on an instance to all its listeners.
	*  if the name of attribute is different of the name of parm, you must overload this method to
	*  call AdviseAttributeChanged with the attribute name.
	*  @param iKey Parm Name
	*  @param iValue 
	*/
	virtual HRESULT AdviseAttributeChanged( const CATUnicodeString &iKey, 
		const CATIValue_var& iValue );
	
	/**
	*  Description: propagates a remove information on an instance to all its listeners.
    */
	HRESULT AdviseRemoved(  );
		
    /**
    *  Description: propagates a modification information on an instance to all its listeners.
    */
	HRESULT AdviseModification(  );
	
	/**
    *  Description: propagates a change type information on an instance to all its listeners.
    */
	HRESULT AdviseTypeChanged( );
		
	/**
	*  Description: propagates an attribute creation information on an instance to all its listeners.
	*  @param iKey attribute added 
	*  @param iValue  value added
	*/ 
	HRESULT AdviseDynamicAttributeAdded( const CATUnicodeString& iKey,
		const CATIValue_var& iValue );

	/**
	*  Description: propagates an attribute deletion information on an instance to all its listeners.
	*  @param iAttributes instance where attribute is deleted
	*  @param iKey attribute deleted 
	*  @param iValue  value deleted
	*/ 
	HRESULT AdviseDynamicAttributeRemoved( const CATUnicodeString& iKey,
		const CATIValue_var& iValue );

	/**
	*  Description: propagates an attribute rename information on an instance to all its listeners.
	*  @param iAttributes instance where attribute is renamed
	*  @param iKey attribute renamed
	*  @param iValue  value renamed
	*/ 
	HRESULT AdviseDynamicAttributeRenamed( const CATUnicodeString& iKey,
		const CATUnicodeString& iNewKey);

		/**
	* Propagates a specific event that occured on the instance.
	*
	* @param iEvent Event that happened.
	* @param iList  List of values carried by the event.
	*/
	HRESULT AdviseSpecificEvent( const CATBaseUnknown_var &iEvent,
										 const CATListValCATBaseUnknown_var &iList );
	
	
	//-------------------------------------------
	// Interface CATIInstance (Attributes)
	//-------------------------------------------
	

	/**
	*	Description: Gets an attributes value.
	*  Default implementation gets parameter with GetParmFromName and valuates value
	*  GetParmFromName scans the direct children
	*  Default implementation also tries to get value through feature extensions if any
	*  using the CATIInstanceExtension::GetValue method.
	*  If you override this method, you should call this one at the end to be
	*  able to access those kind of attributes.
    *  @param iKey: the name of the attribute.
	*  @return iValue: the value of the attribute (an AddRef is done) It can return NULL.
	*/
	CATIValue* GetValue( const CATUnicodeString& iKey ) ;

	/**
	*	Description: Sets an attributes value.
	*  Default implementation gets parameter with GetParmFromName and valuates value
	*  GetParmFromName scans the direct children
	*  Default implementation also tries to set value through feature extensions if any
	*  using the CATIInstanceExtension::SetValue method.
	*  If you override this method, you should call this one at the end to be
	*  able to access those kind of attributes.
	*  @param iKey: the name of the attribute.
	*  @param iValue: the value of the attribute.
	*/
	HRESULT SetValue( const CATUnicodeString& iKey, const CATIValue_var& iValue ) ;
     
	/**
	* Description: returns the owner of the object.
	* Default implementation returns NULL
	*/
	virtual CATIInstance* GetOwner() const ;

		
	//-------------------------------------------
	// Interface CATICkeFeature (to be selected in rules/formulas/checks
	//-------------------------------------------
	

 	/**
	 * Returns the type of the object.
	 * This type is used to check that the formula (rule or check) syntax is correct. 
	 * If your object implements CATIInstance, the classical implementation returns the CATIInstance::Type method.
	 * If not, usually the implementation consists in calling CATGlobalFunctions::GetTypeDictionary()->FindTypeSafe("TypeName","PackageName",oType)
	 * Default implementation returns CATIInstance::Type method.
	 *
	 * @return the main type of the object. It is also a CATIType.
	 */
	virtual CATICkeType_var GetType    () const ;


protected:

   /**
	*  Description: Returns the main type of an object.
	*  An AddRef must be done. This method must be re-implemented.
	*  The classic implementation of this method is to use
	*  CATGlobalFunctions::GetTypeDictionary()->FindSafe("MyType","MyPackage",oType)
	*  and return oType after having done an AddRef.
	*  This method finds a type by its name and loads the package in which the type
	*  is defined if needed.
    *  this method is called by the Type() method.
	*  If you do not want to specify an accurate type, you can return NULL and Type method
	*  will return the type Feature
	*  @return the main type of the object.
	*/
	virtual CATIType* TypeInternal() const;

   /**
	*  Description: fills the list of types supported by this object in addition to the one returned by Type method.
    *  Default implementation adds nothing.
    *  @param oListOfCATIType this list is filled.<br>
	*/
	virtual HRESULT ListSupportedTypesInternal( CATListValCATIType_var& oListOfCATIType ) const ;

	/**
	*	Description: Sets an attributes value. Must be re-implemented when deriving 
    * from this adapter.
	*  Default implementation gets parameter with GetParmFromName and valuates value
	*  GetParmFromName scans the direct children
	*  Default implementation also tries to set value through feature extensions if any
	*  using the CATIInstanceExtension::SetValue method.
	*  If you override this method, you should call this one at the end to be
	*  able to access those kind of attributes.
    *
	*  @param iKey: the name of the attribute.
	*  @param iValue: the value of the attribute.
    *  @return E_NOTIMPL if this method is overridden but that the SetValue is not done by your implementation.
    *          S_OK if the override has done the valuation.
    *          E_FAIL otherwise.
	*/
	virtual HRESULT SetValueInternal( const CATUnicodeString& iKey, const CATIValue_var& iValue );

	/**
	*	Description: Gets an attributes value. Must be re-implemented when deriving 
    * from this adapter.
	*  Default implementation gets parameter with GetParmFromName and valuates value
	*  GetParmFromName scans the direct children
	*  Default implementation also tries to get value through feature extensions if any
	*  using the CATIInstanceExtension::GetValue method.
	*  If you override this method, you should call this one at the end to be
	*  able to access those kind of attributes.
    *  @param iKey: the name of the attribute.
	*  @return iValue: the value of the attribute (an AddRef is done) It can return NULL.
	*/
	virtual CATIValue* GetValueInternal( const CATUnicodeString& iKey );

  	
 
private:
	 
	/**
	*  Description: Get parameter from the name of the attribute.
	*  @param iKey: the name of the attribute.
	*  @return the value of the attribute.
	*/
	CATICkeParm* GetParmFromName (const CATUnicodeString &iKey) const;

	CATKweInstanceAdapter(const CATKweInstanceAdapter&);
	//static CATHashDico _sHashAccessors;
	
	CATListPV* _instanceListeners;
	//boolean _hasCallbackOnInstanceDeletion:1;
	
};

#endif

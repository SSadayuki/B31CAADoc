#ifndef CATIInstance_h
#define CATIInstance_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/** 
* @CAA2Level L1
* @CAA2Usage U4 CATKweInstanceAdapter
*/

// inherited class 
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATListValCATIType.h"

#include "CATIType.h"
#include "CATIInstanceListener.h"
#include "CATIValue.h"
#include "CATListOfCATBaseUnknown.h"

// load module
#include "CATLifSpecs.h"
class CATIInstanceListener_var;

// OLE IID
#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByCATLifSpecs IID_CATIInstance;
#else
extern "C" const IID IID_CATIInstance;
#endif

/**
* Internal Use.
*/
#define CATIInstanceOnly 1


/**   
 * Interface dedicated to manipulating objects in Knowledgeware.
 *
 * <b>Role</b>: this interface allows one to make his objects utilizable
 * in KnowledgeWare and in Search by granting objects with static type information
 * and event reactiveness.<br>
 * <br>
 * If you want to add dynamic type information, have a look to @href CATIDynamicAttributes
 * and be sure to make these two interfaces implementations coherent <br>.
 * <br>
 * Implementations of that interface should derive from CATKweInstanceAdapter.
 *
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 *
 * @see CATIDynamicAttributes
 * @see CATIType
 * @see CATIValue
 */
class ExportedByCATLifSpecs CATIInstance : public CATBaseUnknown
{
public :

	/**
	* Returns the main type of an object.
	*
	* An AddRef is done.
	* @return the main type of the object.
	*/
	virtual CATIType* Type() const = 0;

	/**
	* Casts an instance to another one supporting the given type.
	*
	* An AddRef is done, if not NULL.
	* @param iType type we want to cast the instance to.
	* @return the instance supporting this type (may be NULL or self).
	*/
	virtual CATIInstance* IsSupporting( const CATIType_var& iType ) const = 0;

	/**
	* Fills the given list with types supported by this instance.
	*
	* @param iolListOfCATIType the filled list.
	*/
	virtual HRESULT ListSupportedTypes( CATListValCATIType_var& iolListOfCATIType ) const = 0;

	/**
    * @nodoc
	* Adds a listener to the instance.
	*
	* The listeners are called back when events are raised by the instance.
	* @param iListener a listener.
	*/
	virtual HRESULT AddInstanceListener( const CATIInstanceListener_var &iListener ) = 0;

	/**
    * @nodoc
	* Removes a listener to the instance.
	*
	* The listeners are called back when events are raised by the instance.
	* @param iListener a listener.
	*/
	virtual HRESULT RemoveInstanceListener( const CATIInstanceListener_var &iListener ) = 0;

	/**
	* Propagates an attribute value change event on all the listeners of the instance.
	*
	* @param iKey Name of the attribute to monitor.
	* @param iValue Value of the attribute.
	*/
	virtual HRESULT AdviseAttributeChanged( const CATUnicodeString &iKey, 
							                const CATIValue_var& iValue ) =0;

    /**
	* Propagates a dynamic attribute add event on all the listeners of the instance.
	*
	* @param iKey Name of the added attribute.
	* @param iValue Value of the attribute.
	*/ 
	virtual HRESULT AdviseDynamicAttributeAdded( const CATUnicodeString& iKey,
												 const CATIValue_var& iValue ) =0;

    /**
	* Propagates a dynamic attribute remove event on all the listeners of the instance.
	*
	* @param iKey Name of the removed attribute.
	* @param iValue Value of the attribute.
	*/
	virtual HRESULT AdviseDynamicAttributeRemoved( const CATUnicodeString& iKey,
												   const CATIValue_var& iValue ) =0;
	/**
	* Propagates a dynamic attribute rename event on all the listeners of the instance.
	*
	* @param iKey Name of the renamed attribute.
	* @param iValue Value of the attribute.
	*/
	virtual HRESULT AdviseDynamicAttributeRenamed( const CATUnicodeString &iKey, 
												   const CATUnicodeString &iNewKey ) =0;
 
    /**
	* Propagates an instance remove event on all the listeners of the instance.
	*/
	virtual HRESULT AdviseRemoved(  ) =0;

    /**
	* Propagates an instance modification event on all the listeners of the instance.
	*/
	virtual HRESULT AdviseModification(  ) =0;

    /**
	* Propagates an instance type modification event on all the listeners of the instance.
	*/
	virtual HRESULT AdviseTypeChanged( ) =0;

	/**
	* Sets an attribute value.
	*
	* @param iKey Name of the attribute.
	* @param iValue Value of the attribute.
	*/
	virtual HRESULT SetValue( const CATUnicodeString& iKey,
							  const CATIValue_var& iValue ) = 0;

	/**
	* Gets an attribute value.
	*
	* @param iKey Name of the attribute.
	* @return iValue Value of the attribute (an AddRef is done, if not NULL).
	*/
	virtual CATIValue* GetValue( const CATUnicodeString& iKey ) = 0;
	
	/**
	* Returns the owner of the instance.
	*/
	virtual CATIInstance* GetOwner() const = 0;

	/**
	* Propagates a specific event that occured on the instance.
	*
	* @param iEvent Event that happened.
	* @param iList  List of values carried by the event.
	*/
	virtual HRESULT AdviseSpecificEvent( const CATBaseUnknown_var &iEvent,
										 const CATListValCATBaseUnknown_var &iList ) =0;

private:
  CATDeclareInterface;
}; 

CATDeclareHandler(CATIInstance, CATBaseUnknown);

#endif

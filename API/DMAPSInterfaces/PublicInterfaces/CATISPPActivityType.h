#ifndef CATISPPActivityType_H
#define CATISPPActivityType_H

// COPYRIGHT DASSAULT SYSTEMES  1999

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "ProcessInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATSPPDeclarations.h"
#include "CATISPPAbstractActivity.h"
#include "CATIContainer.h"
#include "CATIAV5Level.h"


class CATISPPActivityType_var ;
class CATListValCATBaseUnknown_var ;
class CATListValCATUnicodeString ;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByProcessInterfaces IID IID_CATISPPActivityType ;
#else
extern "C" const IID IID_CATISPPActivityType ;
#endif

/**
* Interface to manage different type of Activities.
* <br><b>Note:</b>This interface concerns reference activities which are created in libraries.
*/

class ExportedByProcessInterfaces CATISPPActivityType : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:
    
    /**
    * Retrieves the type of an Activity type.
    */
    virtual CATUnicodeString				GetType() const = 0 ;
    
    /**
    * Retrieves the super type of an Activity Type (the next higher type in the hierarchy of Activity types).    
    * @return
    * 	Handler on the SuperType
    */
    virtual CATISPPActivityType_var			GetSuperType() const = 0 ;
    
    /**
    * Creates a new SubType for an Activity type.  
    * @param iTypeName
    * 	<tt> The name of the type for which a subtype must be created </tt>
	* @param iCont
	*   <tt> To be valuated if the activity has to be create in a specific container.
    * @return
    * 	Handler on the Activity type newly created
    */
    virtual CATISPPActivityType_var			CreateSubType(const CATUnicodeString& iTypeName , const CATIContainer_var & iCont = NULL_var) = 0 ;

    /**
    * Returns list of Subtypes for an Activity type.  
	* @param iAct
	*       context to search sub types.
    * @param depth
    * 	<tt> the depth to search in the hierarchy, by default it is equal to one </tt>
    * @return
    * 	Handler on the list of Subtypes for an Activity type
    */
    virtual CATListValCATBaseUnknown_var*		GetSubType( const CATISPPAbstractActivity_var& iAct = NULL_var, int depth = 1) const = 0 ;

    /**
    * Tests if a type is a subtype of another one.
    * @param iTypeName
    * 	<tt> The name of the type which is tested to be a supertype </tt>
    * @return
    * 	<dt><tt> TRUE </tt> 	<dd> when this type is a subtype of the one put in parameter of this method
    * 	<dt><tt> FALSE </tt> 	<dd> this type is NOT a subtype of the one put in parameter of this method
    */
    virtual CATBoolean					IsSubTypeOf(const CATUnicodeString& iTypeName) = 0 ;

    /**
    * Adds attributes to an Activity type.
    * @param iAttributeName
    * 	<tt> The name of the type for which an attribute has to be added </tt>
    * @param AttrType
    * 	<tt> The type of the atribute to add : it may be today a string, an integer or a double </tt>
    */

    virtual void						AddAttribute(const CATUnicodeString& iAttributeName,
								    CATSPPAttrKind AttrType) const = 0 ;
    /**
    * Removes attributes to an Activity type.
    * @param iAttributeName
    * 	<tt> The name of the attribute to remove </tt>
    */

    virtual void						RemoveAttribute(const CATUnicodeString& iAttributeName) = 0 ;

    /**
    *	Returns the list of Attributes that are managed on an Activity Type.
    */
    virtual CATListValCATUnicodeString* 		GetAttrList() const = 0 ;
    
    /**
    *	Retrieves the name of an icon associated to an Activity Type.
    */
    virtual CATUnicodeString				GetIcon() const = 0 ;

    /**
    *	Returns the list of types of item that may be managed on an Activity Type.
    */
    virtual CATListValCATUnicodeString* 		GetAuthorizedItemList() const = 0 ;

    /**
    * Adds an element to the list of items' types that may be managed on an Activity Type.
	* @param iItem
	*        item type. 
    */
    virtual void 					SetAuthorizedItem(const CATUnicodeString& iItem) = 0 ;


    /**
    * Removes an element from the list of types of item that may be managed on an Activity Type.
	* @param iItem
	*        item type 
    *	     <br> If no string, all are removed.
    */
    virtual void 					RemoveAuthorizedItem(const CATUnicodeString& iItem = NULL_string) = 0 ;

    /**
    *   Sets the instantiability of an activity.
    *   @param iInst
    *		<tt>TRUE if the activity is instantiable, else FALSE
    */
   virtual void	 	SetInstanciable(CATBoolean iInst = TRUE)  = 0 ;

    /**
    *   Returns the instantiability of an activity.
    *   @return 
    * 	  TRUE if the activity is instantiable else FALSE
    */
   virtual CATBoolean  	IsInstanciable() const = 0 ;

    /**
    *  Returns the label of the operator associated to an Activity.
    *   @return 
    * 	  The label of the operator associated to an Activity
    **/
   virtual wchar_t* GetOperatorLabel() const = 0 ;

    /**
    *   Sets the label of the operator associated to an Activity.
    *   @param iOperatorLabel
    *		<tt>The label of the operator associated to an Activity</tt>
    **/
   virtual void SetOperatorLabel(wchar_t* iOperatorLabel) = 0 ;

   /** @nodoc	*/
    virtual HRESULT	SetAuthorizedChild(const CATUnicodeString &iAuthorizedChild) = 0 ;

	/** @nodoc	*/
    virtual HRESULT	RemoveAuthorizedChild(const CATUnicodeString &iAuthorizedChild) = 0 ;

	/** @nodoc	*/
    virtual CATListValCATUnicodeString*  	GetAuthorizedChildrenList() const = 0 ;


/**
    * Returns a CATISPPActivityType pointer to the super type of this activity type.
    * @param oSuperActType CATISPPActivityType pointer to the super activity type object 
    * @return
    *     E_INVALIDARG   if oSuperActType==NULL
    *     S_OK           The super activityType object is found and we successfully get an CATISPPACtivityType pointer on it
    *     E_FAIL         The super activityType object is not found or we don t get an CATISPPActivityType pointer on it
    */
    virtual HRESULT GetSuperActivityType(CATISPPActivityType** oSuperActType) const = 0 ;
 

};

CATDeclareHandler( CATISPPActivityType, CATBaseUnknown) ;

#endif








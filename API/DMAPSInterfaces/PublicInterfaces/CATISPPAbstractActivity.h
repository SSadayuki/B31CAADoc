/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES  2000
//=============================================================================
//
// CATISPPFunctionalProcess :
//   Interface to manage specific fonctionalities for Functional Process.
//
//=============================================================================
//
// Usage Notes:
//
//
//=============================================================================
// Oct  2002    New Activity Type Mgt                                       gdu
//              Addition of methods 
//                 HRESULT GetActivityType(CATISPPActivityType** oActivityType)
//                 HRESULT GetTypeName(CATUnicodeString& oTypeName)
//=============================================================================

#ifndef CATISPPAbstractActivity_H
#define CATISPPAbstractActivity_H

// COPYRIGHT DASSAULT SYSTEMES  1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "ProcessInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATIAV5Level.h"


class CORBAAny ;
class CATListValCATUnicodeString ;
class CATISPPActivity_var ;
class CATISPPActivityRoot_var ;
class CATISPPActivityType;
  
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByProcessInterfaces IID IID_CATISPPAbstractActivity ;
#else
extern "C" const IID IID_CATISPPAbstractActivity ;
#endif

/**
* Interface to use to manage any type of activity.
* <br><b>Role: </b> this interface regroups all common methods for Physical and Logical Activities.
* <br>One other interface derives from this interface:
* <br><a href="CATISPPActivity.htm">CATISPPActivity</a> to manage Physical Activities.
*/

class ExportedByProcessInterfaces CATISPPAbstractActivity : public CATBaseUnknown
{
  CATDeclareInterface ;  

  public:
    
	/**
	* @nodoc
	* This method allows to access the internal name of an Activity, and should soon be unavailable.
	* The method to use is GetLabel()
	**/

    virtual CATUnicodeString		GetName() const = 0 ;

    /**
    * Returns the parent activity of an Activity inside a hierarchy of activities.
    * @return
    *	<dt><tt>NULL_var</tt>		<dd> if the Activity does not have a parent ( means that it is a Root Activity for that Process).
    *	<dt><tt>CATISPPActivity_var</tt><dd> as the handler on the parent activity if it exists.
    */
     virtual CATISPPActivity_var	GetMother() const = 0 ;

	/**
	* Returns the process which is a root activity, associated to an activity.
	*/
    virtual CATISPPActivityRoot_var GetProcess() const = 0 ;

    /**
    * Returns the type of the Activity as a character string containing the type name.
    */
    virtual  CATUnicodeString GetType() const = 0 ;



    /**
    * Tests the type of a specific Activity.
	* @param iTypeName
	*        given type or super type.
    * @return
    *	<dt><tt>TRUE</tt>		<dd>when the Activity is of type or of sub-type of iTypeName.
    *	<dt><tt>FALSE</tt>		<dd>when the Activity is NOT of type or of sub-type of iTypeName.
    */
    virtual CATBoolean			IsSubTypeOf(const CATUnicodeString& iTypeName) = 0 ;

    /**
    * Sets the Label (external user name) of an Activity .
    * <br><b> Note: </b>   The Label of an Activity does not need to be unique across a Process document.
    * <br> A default Label is given to an Activity when it is created.
	* @param iLabel
	*        external name to set on the activity.
    **/
    virtual void 				SetLabel(const CATUnicodeString& iLabel) = 0 ;
    
    /**
    * Returns the Label (external user name) of an Activity.
    * <br><b> Note: </b> A default Label is given to an Activity as it is created.    
    **/
    virtual CATUnicodeString 		GetLabel() const = 0 ;


    /**
    * Sets the Description of an Activity .
	* @param iDescription
	*        description identifier.
    **/
    virtual void 				SetDescription(const CATUnicodeString& iDescription) = 0 ;
    
    /**
    * Returns the Description of an Activity.
    * @return
	  *    returns "No Description" if no description was previously set .   
    **/    
    virtual CATUnicodeString		GetDescription() const = 0 ;

    /**
    * Associates the name of an icon to an activity. 
	* @param iIcon
	*        icon name to associate. 
	*       <br> No extension, nor path is needed, only the plain icon name.
    **/
    virtual void 				SetIcon(const CATUnicodeString& iIcon) = 0 ;
    
    /**
    * Returns the name of an icon associated to an Activity.
    **/
    virtual CATUnicodeString 		GetIcon() const = 0 ;

	/**
    * Returns a pointer to the instance from which the activity has been instanciated.
    * @param oActivityType CATISPPActivityType pointer to the activity type object 
    * @return
    *     E_INVALIDARG   if oActivityType==NULL
    *     S_OK           The ActivityType object is found and we successfully get an CATISPPACtivityType pointer on it
    *                    In former mode the object is the Startup
    *                    In new mode the activityType object is the object from which the activity is instanciated 
    *     E_FAIL         The ActivityType object is not found or we don t get an CATISPPActivityType pointer on it
    */
    virtual HRESULT GetActivityType(CATISPPActivityType** oActivityType) const = 0 ;


  /**
    * Returns the type of the Activity as a character string containing the type name.
    * @param oTypeName
    *        
    * @return
    *     S_OK            The ActivityType object is found and we return the type string.
    *     E_UNEXPECTED    The ActivityType object is not found so we return the SpecObject instance Name   
    *     E_FAIL          The ActivityType object is not found and we don't get the SPecObject instance Name   
    */
    virtual HRESULT GetTypeName(CATUnicodeString& oTypeName) const = 0 ;

	
 



};

CATDeclareHandler( CATISPPAbstractActivity, CATBaseUnknown) ;

#endif








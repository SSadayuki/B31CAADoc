#ifndef CATISPPChildManagement_H_
#define CATISPPChildManagement_H_
// COPYRIGHT DASSAULT SYSTEMES  1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#ifndef NULL_string
#define NULL_string CATUnicodeString()
#endif

#include "ProcessInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATUnicodeString.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByProcessInterfaces IID IID_CATISPPChildManagement ;
#else
extern "C" const IID IID_CATISPPChildManagement ;
#endif


/**
* Interface to manage Hierarchy, relationship Father - Son.
*/

class ExportedByProcessInterfaces CATISPPChildManagement: public CATBaseUnknown 
{
  CATDeclareInterface ;
    
  public:
  
    /**
    * Adds a child Activity to another one.
    * @param iEntityToCreate
    * <tt> Name of the Activity type from which the new Activity must be instantiated </tt>
    * @return
    * 	Handler on the newly created Activity.
    **/ 
    virtual CATBaseUnknown_var 			AddChild(const CATUnicodeString& entity_to_create) = 0 ;
	
	/** @nodoc	*/
    virtual CATBaseUnknown_var 			AddChild(const CATBaseUnknown_var &iChild) = 0 ;

    /**
    * Removes all the children of an Activity.
    **/ 
    virtual void 						RemoveChild() = 0 ;  

    /**
    * Returns number of children from an Activity, with the possibility to search for specific Activity types.
    * @param  iType
    * <tt> Name of the Activity type used for the search, by default, equals to Activity (Physical) </tt>
    * @return
    * 	Number of Activities 
    **/ 
    virtual int  						GetNumberOfChild(const CATUnicodeString& type =NULL_string) const = 0 ;  

    /**
    * Returns the children from an Activity, with the possibility to search for specific Activity types.
    * Please note that it used to return all children, but from R20SP4 it returns exposed children, i.e. 
    * it is the same as GetExposedChildren, a new method introduced. For clarity and ease of maintenance,
    * GetChild should NOT be used in any new code. Rather, either GetExposedChildren or GetAllChildren
    * should be used depending on need.
    * @param iType
    * <tt> Name of the Activity type used for the search, by default, equals to Activity (Physical) </tt>
    * @return
    * 	List of Interface Handlers for the Activities as Children 
    **/ 
    virtual CATListValCATBaseUnknown_var*  	GetChild(const CATUnicodeString& type = NULL_string) const = 0 ;

 	/**
	* Sets path to file where the process is defined.
	* @param iPath
	*       path to the file.
	*/
    virtual void                                            DetailInAnotherFile(CATUnicodeString iPath) = 0 ; 
    /**
	* Returns the container where the process is defined.
	*/
    virtual CATBaseUnknown_var                               GetContainerWhereDetailed() = 0 ;

   /**
    * Adds a child Activity to another one.
    * @param iChild
    * <tt> The child Activity to create </tt>
    * @param oCreated
    * <tt> A handle to the newly created object</tt>
    * @return
    * 	The result of the method
    **/ 
    virtual HRESULT                    AddChild(const CATBaseUnknown_var &iChild, CATBaseUnknown_var& oCreated) =0;


    /**
    * Returns the exposed (if applicable) children from an Activity, with the possibility to search for specific Activity types.
    * @param iType
    * <tt> Name of the Activity type used for the search, by default, equals to Activity (Physical) </tt>
    * @return
    * 	List of Interface Handlers for the Activities as Children 
    **/ 
    virtual CATListValCATBaseUnknown_var*  	GetExposedChildren(const CATUnicodeString& type = NULL_string) const = 0 ;

    /**
    * Returns all children from the Activity, with the possibility to search for specific Activity types.
    * @param iType
    * <tt> Name of the Activity type used for the search, by default, equals to Activity (Physical) </tt>
    * @return
    * 	List of Interface Handlers for the Activities as Children 
    **/ 
    virtual CATListValCATBaseUnknown_var*  	GetAllChildren(const CATUnicodeString& type = NULL_string) const = 0 ;


};
CATDeclareHandler( CATISPPChildManagement, CATBaseUnknown);
#endif












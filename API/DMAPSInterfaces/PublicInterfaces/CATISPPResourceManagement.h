#ifndef CATISPPResourceManagement_H_
#define CATISPPResourceManagement_H_

// COPYRIGHT DASSAULT SYSTEMES  1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "ProcessInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATUnicodeString.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByProcessInterfaces IID IID_CATISPPResourceManagement ;
#else
extern "C" const IID IID_CATISPPResourceManagement ;
#endif

/**
* Interface to manage the association of Resources to Activity Specifications.
*/

class ExportedByProcessInterfaces CATISPPResourceManagement: public CATBaseUnknown 
{
  CATDeclareInterface;

  public:

  enum CATSPPResourceLinkType { any_resource_kind, process_uses_resource, process_running_on_resource,
                                process_manages_resource_viewpoint,process_manages_resource_visualization};

  /**
   * Adds a resource to an activity.
   * <br><b>Role:</b> Creates an Assignement to a specific Ressource.
   * @param iResource
   * 	 Handler on the Resource Interface to be added to this Activity.
   * @param iType
   *	 enum to specify the type of the link that needs to be created
   * @param iCheckLink
   *     flag to enable/disable check for cyclic assignments.  This is applicable only for TSAs(processes) belonging 
   *	 to a resource.  If TRUE, user cannot assign a owning resource (and/or its entire parent hierarchy) 
   *	 to any TSAs underneath its Behavior(process) structure. 
   */
  virtual HRESULT AddResource(CATBaseUnknown_var iResource,
                              const CATSPPResourceLinkType iLinkType = process_uses_resource, CATBoolean iCheckLink = TRUE ) = 0;

  /**
   * Returns the number of Resources Assigned to an Activity.
   * @param iType
   * 	type of the Resource to be searched for 
   */
  virtual int GetNumberOfResources(const CATSPPResourceLinkType iLinkType = any_resource_kind) = 0;

	/**
   * Returns a list of Resource Assigned to an Activity.
   * @param iType
   * 	type of the Resource to be searched for 
   * @return
   * 	List of Handlers on Resources Assigned to the Activity
   */
  virtual CATListValCATBaseUnknown_var * GetResources(const CATUnicodeString & type = "Resource",
                                                      const CATSPPResourceLinkType iLinkType = any_resource_kind) = 0;
   
  /**
   * Removes an Assignement to a specific Resource.
   * @param iResource
   * 	<tt> Handler on the Resource Interface to be removed to this Activity </tt>
   * @param iType
   * 	type of the Resource to be searched for 
   **/
  virtual void RemoveResource(const CATBaseUnknown_var iResource,
                              const CATSPPResourceLinkType iLinkType = process_uses_resource) = 0;

  /**
   * Determines whether a resource is assigned on the activity.
   * @param iResource
   *		concerned resource.
   * @param iType
   * 	type of the Resource to be searched for 
   */
  virtual HRESULT HasResourceAssigned(const CATBaseUnknown * iResource,
                                      const CATSPPResourceLinkType iLinkType = any_resource_kind) = 0;

  /**
   * Lists all sub-activities which have a given resource assigned.
   * @param iResource
   *		concerned resource.
   * @param oListOfSubActivities
   *       list of concerned sub-activities.
   * @param iType
   * 	type of the Resource to be searched for 
   */
	virtual HRESULT SubActivitiesForResource(const CATBaseUnknown * iResource,
                                           CATListValCATBaseUnknown_var * oListOfSubActivities,
                                           const CATSPPResourceLinkType iLinkType = any_resource_kind) = 0;
   
  /**
   * @nodoc
   */
  virtual CATListValCATBaseUnknown_var * GetActivityList(const CATBaseUnknown_var & iResource,
                                                         int Level = -1) = 0;

  /**
   * Retrieves the list of process-resource relation objects.
   *   @param oActRsRqList
   *      output parameter: NULL or found process-resource relation objects list.
   *   @return HRESULT
   *      Error code of function. Possible values:
   *         E_FAIL = something went wrong (null pointer ...).
   *         S_FALSE = we found no process-resource relation objects(oActRsRqList MAY BE NULL).
   *         S_OK = we found at least one process-resource relation object.
   */
  virtual HRESULT GetPrcsResourceRelations( CATListValCATBaseUnknown_var *&oActRsRqList ) = 0;

  /**
   * Retrieves the list of process-resource relation objects for a given resource 
   * and a given assignment type.
   *   @param iResource
   *      input parameter: the resource for which we want the process-resource 
   *      relation object(s). If not specified (NULL_var), the method will 
   *      consider all resources assigned to this activity.
   *   @param iLinkType
   *      input parameter: the assignment type to be considered. If negative, 
   *      the method will consider all resource assignment types for this
   *      activity.
   *   @param oActRsRqList
   *      output parameter: NULL or found process-resource relation objects list
   *   @return HRESULT
   *      Error code of function. Possible values:
   *         E_FAIL = something went wrong (null pointer ...).
   *         S_FALSE = we found no process-resource relation objects(oActRsRqList MAY BE NULL).
   *         S_OK = we found at least one process-resource relation object.
   */
  virtual HRESULT GetPrcsResourceRelationObject( const CATBaseUnknown_var &iResource,
      CATISPPResourceManagement::CATSPPResourceLinkType iLinkType,
      CATListValCATBaseUnknown_var *&oActRsRqList ) = 0;

};


CATDeclareHandler( CATISPPResourceManagement, CATBaseUnknown);

#endif












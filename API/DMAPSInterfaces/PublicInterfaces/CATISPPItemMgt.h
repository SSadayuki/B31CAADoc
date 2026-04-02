#ifndef CATISPPItemMgt_H_
#define CATISPPItemMgt_H_

// COPYRIGHT DASSAULT SYSTEMES  1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "ProcessInterfaces.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATISPPItem.h"
#include "CATISPPProductIO.h"

//Monocodes V5Rn
#include "CATIAV5Level.h"

#include "CATISPPActivitySpecification.h"

class CATICSPState_var ;
class CATICkeParm_var;

#define NULL_string CATUnicodeString()

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByProcessInterfaces IID IID_CATISPPItemMgt ;
#else
extern "C" const IID IID_CATISPPItemMgt ;
#endif


/**
* Interface to manage the association of Items as Parts, Welds, etc  with Activity Specifications.
*/

class ExportedByProcessInterfaces CATISPPItemMgt: public CATBaseUnknown 
{
    CATDeclareInterface ;

public:

#define any_item_kind default_item_kinds
    enum CATSPPAssignmentType { default_item_kinds = 0,
                                processes = 1,
                                firstprocesses = 2,
                                removes = 4,
                                attachesresource = 8,
                                detachesresource = 16,
                                partiallyconsumes = 32,
                                completelyconsumes = 64,
                                productviewpoint = 128,
                                productvisualization = 256,
                                all_item_kinds = -1 };

    /**
    * Creates a specification for an Activity to work on a specific item.
    * @param item
    * 	<tt> Handler on the Item Interface to be added to the new Activity </tt>
    * @return
    * 	Handler on the the newly created Activity Specification Interface.
    */
    virtual CATBaseUnknown_var 	AddItem(const CATBaseUnknown_var & item ) = 0;

    /**
    * Creates a specification for an Activity to work on a specific item.
    * @param item
    * 	<tt> Handler on the Item Interface to be added to the new Activity </tt>
    * @param iUpdate
    * 	<tt> Determines if assigned item can be updated or not.</tt>
    * @param iType
    * 	<tt> Determines the type of the Assignment</tt>
    * @return
    * 	Handler on the the newly created Activity Specification Interface.
    */
    virtual CATBaseUnknown_var AddItem(const CATBaseUnknown_var & item,
        const int iUpdate,
        const CATSPPAssignmentType iType = processes) = 0;

    /**
    * @nodoc
    */
    virtual void AddActivitySpecification(const CATICkeParm_var & iTargetState,
        const CATISPPItem_var & iItem = NULL_var,
        const CATISPPProductIO_var & iProductInput = NULL_var,
        const CATUnicodeString & iItemType = NULL_string ) = 0;

    /**
    * Creates a specification for an Activity to work on a specific item.
    * @param iTargetState
    * 	<tt> Handler to CATICkeParm </tt>
    * @param iItem
    * 	<tt> Handler to the item to be assigned </tt>
    * @param iProductInput
    * 	<tt> Product Input created for the item </tt>
    * @param iItemType
    <tt> Item type string </tt>
    * @param iUpdate
    <tt> 0 or 1 ( Default value:0 used for all item assignments )- Used to support product flow </tt>
    * @param iType
    <tt> Assignment type </tt>
    */
    virtual void AddActivitySpecification(const CATICkeParm_var & iTargetState,
        const CATISPPItem_var & iItem, 
        const CATISPPProductIO_var & iProductInput,
        const CATUnicodeString & iItemType,
        const int iUpdate,
        const CATSPPAssignmentType iType = processes) = 0;

    /**
    * @nodoc
    */
    virtual void AddActivitySpecification(const CATICSPState_var & iTargetState, 
        const CATISPPItem_var & iItem = NULL_var,
        const CATISPPProductIO_var & iProductInput = NULL_var,
        const CATUnicodeString & iItemType = NULL_string ) = 0;

    /**
    * @nodoc
    */
    virtual void AddActivitySpecification(const CATICSPState_var & iTargetState,
        const CATISPPItem_var & iItem,
        const CATISPPProductIO_var & iProductInput,
        const CATUnicodeString & iItemType,
        const int iUpdate) = 0;

    /**
    * Removes the Specifications of an Activity, which were working on a specific Item.
    * @param iItem
    * 	<tt> Handler on the Item Interface to be removed from the Activity Specifications </tt>
    * @param iType
    * 	<tt> Determines the type of the Assignment</tt>
    * @return
    *    Warning: returns 0 if succeded only since CXR3SP4 ( before, returns 1 when succeded ).
    */
    virtual int RemoveItem(const CATBaseUnknown_var & item,
        const CATSPPAssignmentType iType = all_item_kinds) = 0;

    /**
    * @nodoc
    * Removes the specified Specifications of an Activity.
    * @param iActivitySpec
    * 	<tt> Handler on the Activity Specification Interface to be removed from the Activity Specifications </tt>
    */
    virtual int RemoveActivitySpecification(const CATISPPActivitySpecification_var & iActivitySpec) = 0;

    /**
    * Returns the number of Items (in fact the number of Specifications) on an Activity.
    * @param iType
    * 	<tt> Determines the type of the Assignment</tt>
    */
    virtual int GetNumberOfItems(const CATSPPAssignmentType iType = default_item_kinds) = 0;

    /**
    * Returns a list of Activity Specifications working on a specific type of Items.
    * @param type
    * 	<tt> type of the items to be searched in the Specifications of the Activities </tt>
    * @param AssignmentMode
    *   <tt> AssignmentMode used to Assign the Item</tt>
    * @return
    * 	List of Handlers on Specifications of the Activity
    */
    virtual CATListValCATBaseUnknown_var * GetItems(const CATUnicodeString & type = "Item",
        const CATSPPAssignmentType AssignmentMode = default_item_kinds) = 0;

    /**
    * @nodoc
    */

    //AKA : Temporarily added to avoid build errors.. will be deleted soon. Use the next service.
    virtual CATListValCATBaseUnknown_var GetActivitySpecification(const CATISPPItem_var & iItem,
        const CATISPPProductIO_var & iProductInput,
        const CATUnicodeString & iItemType) = 0;

    virtual CATListValCATBaseUnknown_var GetActivitySpecification(const CATISPPItem_var & iItem = NULL_var,
        const CATISPPProductIO_var & iProductInput = NULL_var,
        const CATSPPAssignmentType iAssignmentType = all_item_kinds) = 0;


    /**
    * Determines whether an item is assigned on the activity.
    * @param iItem
    *		concerned item.
    * @param iType
    * 	<tt> Determines the type of the Assignment</tt>
    */
    virtual HRESULT HasItemAssigned(const CATISPPItem * iItem,
        const CATSPPAssignmentType iType = processes) = 0;

    /**
    * Lists all sub-activities which have a given item assigned.
    * @param iItem
    *		concerned item.
    * @param oListOfSubActivities
    *       list of concerned sub-activities.
    * @param iType
    * 	<tt> Determines the type of the Assignment</tt>
    */
    virtual HRESULT SubActivitiesForItem(const CATISPPItem * iItem,
        CATListValCATBaseUnknown_var * oListOfSubActivities,
        const CATSPPAssignmentType iType = processes) = 0;

    /**
    * Creates a list of specifications for an Activity to work on a list of corresponding items.
    * @param iLItems
    * 	<tt> The list of handles to items to be added to the new Activity </tt>
    * @param iUpdate
    * 	<tt> Determines if assigned items can be updated or not.</tt>
    * @param iOneType
    * 	<tt> If the following parameter is NULL or its size not equal to that of the first parameter,
    *        then this is the type of the Assignment, which is always "processes" if default </tt>
    * @param iLAssignmentType
    * 	<tt> If it is not NULL and its size equals to that of the first parameter, then this determines
    *        the types of the Assignments </tt>
    * @return
    * 	The list of handles to the newly created Activity Specifications.
    */
    virtual CATListValCATBaseUnknown_var AddMultipleItems(
                    const CATListValCATBaseUnknown_var & iLItems,
                    const int iUpdate = 0,
                    const CATSPPAssignmentType iOneType = processes,
                    const CATListOfInt * iLAssignmentTypes = NULL) = 0;

    /**
    * Creates a specification for an Activity to work on a specific item,
    * and returns the created activity specification
    * @param iTargetState
    * 	<tt> Handle to CATICkeParm </tt>
    * @param iItem
    * 	<tt> Handle to the item to be assigned </tt>
    * @param iProductInput
    * 	<tt> Product Input created for the item </tt>
    * @param iItemType
    *   <tt> Item type string </tt>
    * @param iUpdate
    *   <tt> 0 or 1 ( Default value:0 used for all item assignments )- Used to support product flow </tt>
    * @param iType
    *   <tt> Assignment type </tt>
    * @param withNotif
    *   <tt> If 1, a notification will be sent, at the end of the creation, to propogate the
    *        activity's modify event. If 0, it will not be sent. </tt>
    * @return
    * 	Handle on the the newly created Activity Specification Interface.
    */
    virtual CATBaseUnknown_var CreateActivitySpecification(const CATICkeParm_var & iTargetState,
        const CATISPPItem_var & iItem = NULL_var, 
        const CATISPPProductIO_var & iProductInput = NULL_var,
        const CATUnicodeString & iItemType = NULL_string,
        const int iUpdate = 0,
        const CATSPPAssignmentType iType = processes,
        int withNotif = 1) = 0;

    /**
    * Creates a list of specifications for an Activity to work on a list of corresponding items.
    * @param iTargetState
    * 	<tt> handle to CATICkeParm </tt>
    * @param iLItems
    * 	<tt> list of handles to the items to be assigned </tt>
    * @param iLProductInput
    * 	<tt> list of Product Input created for the items </tt>
    * @param iItemType
    *   <tt> the Item type string </tt>
    * @param iUpdate
    *   <tt> 0 or 1 ( Default value:0 used for all item assignments )- Used to support product flow </tt>
    * @param iOneType
    * 	<tt> If the following parameter is NULL or its size not equal to that of the first parameter,
    *        then this is the type of the Assignment, which is always "processes" if default </tt>
    * @param iLAssignmentType
    * 	<tt> If it is not NULL and its size equals to that of the first parameter, then this determines
    *        the types of the Assignments </tt>
    * @return
    * 	The list of handles to the newly created Activity Specifications.
    */
    virtual CATListValCATBaseUnknown_var AddMultipleActSpecs(
                    const CATICkeParm_var & iTargetState, 
                    const CATListValCATBaseUnknown_var & iLItems, 
                    const CATListValCATBaseUnknown_var & iLProductInput,
                    const CATUnicodeString & iItemType,
                    const int iUpdate = 0,
                    const CATSPPAssignmentType iOneType = processes,
                    const CATListOfInt * iLAssignmentTypes = NULL) = 0;

    /**
    * Removes the Specifications of an Activity, which were assigned to work on a list of specific Items.
    * @param iLItems
    * 	<tt> The list of handles to the items to be removed from the Activity Specifications </tt>
    * @param iType
    * 	<tt> Determines the type of the Assignment, which will be "processes" if NULL </tt>
    * @return
    *    returns 1 if succeeded
    */
    virtual int RemoveMultipleItems(const CATListValCATBaseUnknown_var & iLItems,
        const CATSPPAssignmentType iType = all_item_kinds) = 0;

    /**
    * Removes the list of specified Specifications of an Activity.
    * @param iLActivitySpecs
    * 	<tt> The list of handles to the activity specifications to be removed from the activity </tt>
    */
    virtual int RemoveMultipleActSpecs(const CATListValCATBaseUnknown_var & iLActivitySpecs) = 0;

};

CATDeclareHandler( CATISPPItemMgt, CATBaseUnknown);
#endif












// -*-C++-*- 

#ifndef _ENOVIRelationship_H
#define _ENOVIRelationship_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// =================================================================
// Includes
// =================================================================
// System
#include "CATBaseUnknown.h"
#include "GUIDVPMInterfaces.h"
#include "CATListOfCATIVpmFactoryObject.h"
#include "CATLISTV_CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIRelationship;
#else
extern "C" const IID IID_ENOVIRelationship;
#endif

class CATIVpmPredicate_var;

//------------------------------------------------------------------
/**
 * Interface to manage Relationships between Objects.
 */
class ExportedByGUIDVPMInterfaces ENOVIRelationship : public CATBaseUnknown
{

/**
 * @nodoc
 */
    CATDeclareInterface;

    public:
    // =======================================================
    // Method(s) 
    // =======================================================
    //
    //owner management

// * Puts (or to change) a owner to this object.
// * <br><b>Role</b>: The semantic is the owner manages the relationship life cycle: if 
// * the owner is removed, the relationship is removed. 
// * @param iOwner
// *   The Owner. 
// * @return
// *   The HRESULT.
// * <tt>S_OK</tt> if aggregation OK, <tt>E_FAIL</tt> otherwise.

    virtual HRESULT put_Owner
			(const CATBaseUnknown* iOwner)=0;


    //pointed objects management
/**
 * @nodoc
 */
    virtual HRESULT add_PointedObject
			(const CATBaseUnknown* iPointedObject)=0;

/**
 * Retrieves the Pointed Objects.
 * @param oLpointedObjects
 *   The list of pointed objects.
 */
    virtual HRESULT get_PointedObjects
			(CATLISTV(CATBaseUnknown_var)& oLpointedObjects, int iApplyFilter=1)=0;


/**
 * Retrieves the Pointed Objects Count.
 * <br><b>Role</b>: This method doesn't load pointed objects in memory
 * @param oCount
 *   The number of Pointed Objects.
 */
    virtual HRESULT get_PointedObjectsCount
			(long& oCount)=0;

/**
 * @nodoc
 */
    virtual HRESULT DetachPointedObject
			(const CATBaseUnknown* iObj)=0;

    //pointing objects management
/**
 * @nodoc
 */
    virtual HRESULT add_PointingObject
			(const CATBaseUnknown* iObj)=0;

/**
 * @nodoc
 */
    virtual HRESULT get_PointingObjects
			(CATLISTV(CATBaseUnknown_var)& oLpointingObjects)=0;

    //the following method doesn't load pointing objects in memory
/**
 * @nodoc
 */
    virtual HRESULT get_PointingObjectsCount
			(long& oCount)=0;

/**
 * @nodoc
 */
    virtual HRESULT DetachPointingObject
			(const CATBaseUnknown* iObj)=0;

 // <b><tt>get_AllObjects</tt></b> = to get all pointed and pointing objects. 
/**
 * @nodoc
 */
    virtual HRESULT get_AllObjects
			(CATLISTV(CATBaseUnknown_var)& oLpointingObjects)=0;
//    virtual HRESULT Remove()=0;


/**
 * @nodoc
 */
    virtual HRESULT get_Role( CATUnicodeString & oRole ) const =0;

/**
 * @nodoc
 */
    virtual HRESULT set_Role( const CATUnicodeString & iRole ) =0;

	/**
	* @nodoc
	* Does not use current filter but apply
	* ihCfgFilter config filter.
	*/
	virtual HRESULT get_PointedObjects(
		CATLISTV(CATBaseUnknown_var)& oLpointedObjects,
		const CATIVpmPredicate_var& ihCfgFilter)=0;

	/**
	* @nodoc
	* Use explicit filter parameter.
	*/
  virtual HRESULT get_PointingObjects(
		CATLISTV(CATBaseUnknown_var)& oLpointingObjects,
		const CATIVpmPredicate_var& ihCfgFilter)=0;
};

//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
/** @nodoc */
CATDeclareHandler(ENOVIRelationship, CATBaseUnknown);

#endif



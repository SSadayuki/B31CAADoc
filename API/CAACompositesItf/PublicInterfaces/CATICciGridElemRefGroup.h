// COPYRIGHT Dassault Systemes 2010
//===================================================================
//
// CATICciGridElemRefGroup.h
//		Interface to manage a group of reference elements of a grid panel
//
//===================================================================
//
// Usage notes:
//
//===================================================================

#ifndef CATICciGridElemRefGroup_H
#define CATICciGridElemRefGroup_H

/**
* @CAA2Level L0
* @CAA2Usage U0
*/

#include "CAACompositesItf.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATICciGridElemRef.h"
class CATICciGridElemRef_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCAACompositesItf IID IID_CATICciGridElemRefGroup;
#else
extern "C" const IID IID_CATICciGridElemRefGroup ;
#endif

//------------------------------------------------------------------

/**
* Interface representing a composites group of reference elements.
* <b>Role</b>: Allows to manage a ref element group feature.
*/

class ExportedByCAACompositesItf CATICciGridElemRefGroup: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

	/**
	* Returns all the reference elements of the group.
	* @param oListOfElemRefFeatures
	*    The list of reference elements in the group
	*/
	virtual HRESULT GetElementRefs	(CATLISTV(CATICciGridElemRef_var)& oListOfElemRefFeatures) = 0;

    /**
     * Add a new reference element in the group.
	 * @param ospGridElemRef
	 *    The created reference element.
     */
	 virtual HRESULT AddNewElemRef (CATICciGridElemRef_var&  ospGridElemRef) = 0;

};

CATDeclareHandler(CATICciGridElemRefGroup, CATBaseUnknown);

//------------------------------------------------------------------

#endif

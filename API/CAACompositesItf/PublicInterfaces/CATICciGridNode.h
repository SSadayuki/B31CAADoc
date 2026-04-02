// COPYRIGHT Dassault Systemes 2010
//===================================================================
//
// CATICciGridNode.h
//		Interface to manage a composites grid
//
//===================================================================
//
// Usage notes:
//
//===================================================================

#ifndef CATICciGridNode_H
#define CATICciGridNode_H

/**
* @CAA2Level L0
* @CAA2Usage U0
*/

#include "CAACompositesItf.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATISpecObject.h"
#include "CATLISTV_CATICciGridElemRef.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCAACompositesItf IID IID_CATICciGridNode;
#else
extern "C" const IID IID_CATICciGridNode ;
#endif


//------------------------------------------------------------------

/**
* Interface representing a composites grid.
* <b>Role</b>: Allows to manage a Grid feature.
*/
class ExportedByCAACompositesItf CATICciGridNode: public CATBaseUnknown
{
  CATDeclareInterface;

  public:
	
	/**
	* Returns the node coordinates.
	* @param oXCoord
	*    The X coordinate of the node.
	* @param oYCoord
	*    The Y coordinate of the node.
	* @param oZCoord
	*    The Z coordinate of the node.
	*/
	virtual HRESULT GetNodeCoordinates(double & oXCoord, double & oYCoord, double & oZCoord) = 0;

	/**
	* Returns the reference elements that correspond to the node and the position of the node on each element.
	* @param oElemRefList
	*    The list of reference elements that intersect at the node. Each element of the list responds to @href CATICciGridElemRef interface.
	* @param oDistanceList
	*    The list of positions of the node along each reference element.
	*/
	virtual HRESULT GetReferenceElements(CATLISTV(CATICciGridElemRef_var) & oElemRefList, CATListOfDouble & oDistanceList) = 0;
	
	/**
	* @deprecated V5R26
	* Use @see #GetReferenceElements overloaded method instead.
    * Returns the reference elements that correspond to the node and the position of the node on each element.
	* @param oElemRefList
	*    The list of reference elements that intersect at the node. Each element of the list responds to @href CATICciGridElemRef interface.
	* @param oDistanceList
	*    The list of positions of the node along each reference element.
	*/
	virtual HRESULT GetReferenceElements(CATLISTV(CATISpecObject_var) & oElemRefList, CATListOfDouble & oDistanceList) = 0;
};

CATDeclareHandler(CATICciGridNode, CATBaseUnknown);

#endif

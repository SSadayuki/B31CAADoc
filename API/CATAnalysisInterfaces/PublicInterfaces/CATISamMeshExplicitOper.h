#ifndef CATISamMeshExplicitOper_H
#define CATISamMeshExplicitOper_H
// COPYRIGHT DASSAULT SYSTEMES 2007  
/**
  * @CAA2Level L0
  * @CAA2Usage U3
  */
//=================================================================================
#include "CATAnalysisInterface.h"
#include "CATBaseUnknown.h"

class CATAnalysisExplicitListUsr;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamMeshExplicitOper ;
#else
extern "C" const IID IID_CATISamMeshExplicitOper ;
#endif

//=================================================================================
/**
 * Tools for life cycle of Explicit Objects associated to a meshpart.
 * <b>Role</b>: Add or removes links between a set and list of children of a meshpart.
 * The API is performing the operation of links creation/Deletion and Log it for Undo/redo perpose.
 * <p> 
 * Note : <br>
 * All objects in the iChildrenList must have the same father and must be of the same category (Node or Element).
 * For Node a link is created between each node and the Nodes Set of the meshpart. (Resp element and Element Set).
 *
 * Usage of this API is limited for implementing MSHOperator operations.
 */
class ExportedByCATAnalysisInterface CATISamMeshExplicitOper: public CATBaseUnknown
{
	CATDeclareInterface;

	public:

 /**
 * Perform and Log for Undo/Redo the AddChild / RemoveChild.
 * This method needs to be called only for link modification on existing objects.
 * @param iAddRemove : kind of modification.
 *	<b>Legal values</b>:
 *	<br><tt>1 :</tt>   AddChild
 * 	<br><tt>2:</tt>    RemoveChild
 * @param iChildrenList : The children list.
 */
     virtual HRESULT LogChildModification(int iAddRemove, 
                                          CATAnalysisExplicitListUsr& iChildrenList) = 0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATISamMeshExplicitOper, CATBaseUnknown );

#endif

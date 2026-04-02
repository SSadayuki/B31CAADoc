#ifndef CATISamMeshSubscriber_H
#define CATISamMeshSubscriber_H
// COPYRIGHT DASSAULT SYSTEMES 2000  
//===================================================================
/**
  * @CAA2Level L1
  * @CAA2Usage U4 CATEAnalysisEntityPreproSubscriber
  */
//===================================================================

#include "CATAnalysisInterface.h"
#include "CATBaseUnknown.h"
#include "CATBoolean.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamMeshSubscriber ;
#else
extern "C" const IID IID_CATISamMeshSubscriber ;
#endif

//------------------------------------------------------------------

/**
 * Management of the entities notified by mesh modification.
 * <b>Role:</b> Interface designed to manage <b>Analysis Entities</b>
 * notified by mesh modification.<br>
 * <p>
 * In the Analysis Model, when <b>the mesh</b> is modified 
 * it is necessary to notify some entities of this changes. This
 * is done by subscribing thanks to CATISamMeshNegociator<p> 
 * The interface allow to :
 * <ul>
 *<li>React to mesh changes </li>
 *<li>OverLoad the default behavior</li>
 * </ul>
 * <p><b>BOA information</b>: this interface can be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page. 
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 * @see CATISamMeshNegociator
 */ 
class ExportedByCATAnalysisInterface CATISamMeshSubscriber: public CATBaseUnknown
{
	CATDeclareInterface;

	public:

/**
 * Reaction to mesh changes.
 * Default implementation sets the feature Not Up ToDate.
 */
		virtual HRESULT Clean() = 0;

/**
 * OverLoad some default behavior.
 * Default implementation returns FALSE is feature is in the meshing container. TRUE Otherwise. 
 */
		virtual CATBoolean CheckIfNeedToSubScribe() const = 0;

  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

//------------------------------------------------------------------

CATDeclareHandler( CATISamMeshSubscriber, CATBaseUnknown );

#endif

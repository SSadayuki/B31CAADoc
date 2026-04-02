#ifndef CATISamMeshNegociator_H
#define CATISamMeshNegociator_H
// COPYRIGHT DASSAULT SYSTEMES 2000  
//------------------------------------------------------------------
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */


#include "CATAnalysisInterface.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"

class CATISpecObject;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamMeshNegociator ;
#else
extern "C" const IID IID_CATISamMeshNegociator ;
#endif

//------------------------------------------------------------------

/**
 * Interface for changes triggered by mesh modification.
 * <b>Role:</b> Interface designed to manage <b>changes</b>due to mesh modifications.<br>
 * <p>
 * In the Analysis Model, when <b>the mesh</b> is modified 
 * it is necessary to notify some entities of this changes. <p> 
 * The interface allow to :
 * <ul><li>Set or Retreive the impacting mesh </li>
 *     <li>Set ,unset, test or retreive the entities that must be notified</li>
 * </ul>
 */ 
class ExportedByCATAnalysisInterface CATISamMeshNegociator: public CATBaseUnknown
{
	CATDeclareInterface;

	public:

  /**
   * Defines the <b> iLauncher </b> that will impact
	 * all the subscribers when it is modified.
   * @param iLauncher The object that will propagate.
   */
		virtual HRESULT SetLauncher(CATISpecObject* iLauncher) = 0;

  /**
   * Retrieves the object called launcher.
   * @param oLauncher  [out , CATBaseUnknown#Release]
   * The object that propagates.
   */
		virtual HRESULT GetLauncher(CATISpecObject*& oLauncher) = 0;

 /**
   * Specifies that <b> iSubscriber </b> should
   * be notified that the Mesh has been modified.
   * @param iSubscriber The object that is notified.
   */
		virtual HRESULT Subscribe(CATISpecObject* iSubscriber) = 0;

 /**
   * Removes the impacted object.
   * @param iSubscriber The object that will no more be notified.
   */
		virtual HRESULT UnSubscribe(CATISpecObject* iSubscriber) = 0;

  /**
   * Retrieves all the objects that have subscribed to mesh
   * changes.
   * @param oSubscribers The list of objects that require to be notified.
   */
		virtual HRESULT GetSubscribers(CATLISTV(CATBaseUnknown_var)& oSubscribers) = 0;

	/**
   * Checks is an object is already defined as impacted.
   * @param iSubscriber The object to check.
   */
		virtual HRESULT HasSubscribed(CATISpecObject* iSubscriber) = 0;

  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

//------------------------------------------------------------------

CATDeclareHandler( CATISamMeshNegociator, CATBaseUnknown );

#endif

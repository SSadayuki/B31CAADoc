#ifndef CATIOptUpdateManagement_H
#define CATIOptUpdateManagement_H
// COPYRIGHT DASSAULT SYSTEMES  2003
//===================================================================
//
//	This interface is used to ask for an update model in the
//  Optimization context (the optimization feature adheres to this
//  interface).
//
//===================================================================
/** 
 * @CAA2Level L1
 * @CAA2Usage U3
 */

/*  CAA2Reviewed by FRH */

#include "OptimizationItfCPP.h"

#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByOptimizationItfCPP IID IID_CATIOptUpdateManagement;
#else
extern "C" const IID IID_CATIOptUpdateManagement;
#endif

/**
* Interface to ask for an update model in the Optimization context.
* The optimization feature adheres to this interface.
*/
class ExportedByOptimizationItfCPP CATIOptUpdateManagement : public CATBaseUnknown
{
	CATDeclareInterface;

public:
	/**
	* Arguments for the method SetUpdateMode.
	* Defines the behavior of the Update used by the optimization.
	* <li> <b>Lean:</b> the optimization only updates its outputs.</li>
	* <li> <b>Global:</b> the optimization updates the documents globally.</li> 
	* <li> <b>Unload:</b> during the update the model can be partially unloaded.</li> 
	* <li <b>Mixed:</b> In the context of Part documents this stratgey consists in first updating variational elements
	* of the full document and then to update the skectches and finish by the output of the optimization.
	* This mode has no meaning in the context of CATProducts
	*/
	enum PEOUpdateMode { 
		GlobalWithUnload = 1,
		GlobalWithoutUnload = 2,
		LeanWithUnload = 3,
		LeanWithoutUnload = 4,
		Mixed = 5,
		NotSet = 32000
	};

	/**
	* Initializes the list of objects that will be recomputed.
	* It is done in accordance with the inputs modifications at each call of the @href CATIOptUpdateManagement#LaunchUpdate method.
	* @param objects : the list of objects to be recomputed.
	*/
	virtual void SetOutputs(const CATLISTV(CATBaseUnknown_var) *objects) = 0;

	/**
	* Initializes the list of objects whose modifications will be taken in account during the update.
	* the @href CATIOptUpdateManagement#LaunchUpdate computes the new values of outputs.
	* @param objects : the list of object to taken into account.
	*/
	virtual void SetInputs(const CATLISTV(CATBaseUnknown_var) *objects) = 0;
	
	/**
	* Initializes the update engine on the current document, in accordance with the given inputs and outputs.
	* !!! You have to call it after calling the SetInputs() and/or SetOutputs() methods !!! 
	*/
	virtual void Init() = 0;

	/**
	* Launches the ouputs computations in accordance with the inputs modifications.
	* @param beforeLastUpdate
	* Set it to 1 if you are calling this method for the last time.
	* @return
	* 1 if update succeeded, 0 else.
	*  FIXME: add a policy for editability.
	*/
	virtual int LaunchUpdate(int beforeLastUpdate = 0) = 0;

	/**
	* Returns the average update duration since last reset (ResetUpdateDurationCalculus).
	* @return
	* The average update duration in seconds.
	*/
	virtual double GetAverageUpdateDuration() = 0;

	/**
	* Returns the last update duration.
	* @return
	* The average update duration in seconds.
	*/
	virtual long GetLastUpdateDuration() = 0;

	/**
	* Resets the average update duration calculus.
	*/
	virtual void ResetUpdateDurationCalculus() = 0;

	/**
	* This method is called after the last update asked by the optimization. 
	* It has a cleaning purpose.
	*/
	virtual void AfterLastUpdate () = 0;

	/**
	* This method is called before the first update asked by the optimization algorithm.
	* It has an initialization purpose.
	*/
	virtual void BeforeFirstUpdate () = 0;
	/**
	* This method is called before the last update asked by the optimization algorithm.
	* It has a warning and preparatory exit purpose.
	*/
	virtual void BeforeLastUpdate() = 0;

};

CATDeclareHandler(CATIOptUpdateManagement, CATBaseUnknown);

#endif

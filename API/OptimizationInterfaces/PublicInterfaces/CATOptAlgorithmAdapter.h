// COPYRIGHT DASSAULT SYSTEMES 2002
#ifndef CATOptAlgorithmAdapter_H
#define CATOptAlgorithmAdapter_H

#include "OptimizationItfCPP.h"

// System
#include "CATEventSubscriber.h"
#include "CATCallbackManager.h"
#include "CATNotification.h"
#include "CATLISTV_CATBaseUnknown.h"

// OptimizationInterfaces
#include "CATIOptOptimization.h"
class CATIOptAlgorithmUpdateHelper;

/** 
 * @CAA2Level L1
 * @CAA2Usage U2 
 */

/**   
 * CAA Adapter to CATIOptAlgorithm Interface.
 * <b>Role</b>: This class should be derived to implement features extension to @href CATIOptAlgorithm.<br>
 * @href CATIOptAlgorithm is the interface used by the product PEO to indentify and use the new algorithms.<br>
 */
class ExportedByOptimizationItfCPP CATOptAlgorithmAdapter: public CATEventSubscriber
{
	
public:
	

	CATOptAlgorithmAdapter ();
	virtual ~CATOptAlgorithmAdapter ();

    /**
    * Triggers the computation of the user algorithm.
	* <b>Role</b>: This method must be overloaded in derived classes.
	* Write your algorithm code here. It may be a loop of the following type :
	* while the termination criteria are not reached, do a modification of
	* the inputs values, update the outputs and check the termination criteria.
	* To do that, you will have to call the protected methods of this class in the
	* following order :
	* <pre>
	* InitUpdate()
	* BeforeFirstUpdate()
	*
	* While (...)
	* {
	*		If("it is the last update")
	*			BeforeLastUpdate()
	*
	*		LaunchUpdate()		
	* }
	*
	* AfterLastUpdate()
	* </pre>
	* @param spiOptim
	* The optimization linked to this algorithm. It is used to access the update
	* engine used in the @href #InitUpdate() and @href #LaunchUpdate() methods. In most cases
	* the algorithm is working on its optimization free parameters and goals, so
	* that the optimization may be used to get the inputs and outputs to update.
	* @return
	* S_OK if the operation succeeded, E_FAIL else
	*/
	virtual HRESULT Run (CATIOptOptimization_var & spiOptim) = 0;
	
    /**
	* Sets an algorithm setting. This setting is defined by its attribute name.
	* For pre-requisites restriction constraints, you have to overload it in derived classes.
	*
	* @example
	* <pre>
	* Here is the code you have to write in your derived class --
	* {	
	*	CATISpecAttrAccess_var access = this;
	*	if (!access)
	*		return E_FAIL;
	*
	*	CATISpecAttrKey_var key = access->GetAttrKey(attrName);
	*	if (!key)
	*		return E_FAIL;
	*
	*	key->Release();
	*	
    *	CATAttrKind type = key->GetType();
	*	if (type == tk_integer)
	*		access->SetInteger(key, (int)content);
	*	else if (type == tk_double)
	*		access->SetDouble(key, content);
	*	else
	*		return E_FAIL;
	*
	*	return S_OK;
	* }
	* </pre>
	* @param iAttrName
	* The name of the settings attribute to set.
	* @param iContent
	* The value of the setting to set. it is given as a double but can be an integer.
	* @return
	* S_OK if the operation succeeded, E_FAIL else (non existing attribute)
	*/
	HRESULT SetSetting(const char* iAttrName, double iContent);


	/**
	* Gets an algorithm setting. The setting is defined by its attribute name.
	* For pre-requisites restriction constraints, you have to overload it in derived classes.
	*
	* @example
	* <pre>
	* Here is the code you have to write in your derived class
	* {
	*	CATISpecAttrAccess_var access = this;
	*	if (!access)
	*		return E_FAIL;	
	*
	*	CATISpecAttrKey_var key = access->GetAttrKey(attrName);
	*	if (!key)
	*		return E_FAIL;
	*
	*	key->Release();
	*
	*	CATAttrKind type = key->GetType();
	*	if (type == tk_integer)
	*		content = (double) access->GetInteger(key);
	*	else if (type == tk_double)
	*		content = access->GetDouble(key);
	*	else
	*		return E_FAIL;
	*
	*	return S_OK;
	* }
	* </pre>
	* @param iAttrName
	* The name of the settings attribute to get.
	* @param oContent
	* The returned value of the setting. it is given as a double but can be an integer.
	* @return
	* S_OK if the operation succeeded, E_FAIL else (non existing attribute)
	*/
	HRESULT GetSetting(const char* iAttrName, double &oContent);

    /**
    * Retrieves the event send when an iteration of the algorithm is done.
	* If you use the @href #SendEndIterationNotification() method after each iteration,
	* this event is triggered when the algorithm has finished an iteration	
	* (each iteration corresponds to a model update)<p>	
	* In your dialog, put a callback on this method to receive the
	* end iteration notification.
	*/
	CATCallbackEvent GetEndIterationNotification () const ;

	/**
	* Returns the index of the Opimization Log corresponding to the best solution found according to the problem defined.
	* @param oBestResultIndex
	* The index of the best point found by the optimizer.
	* @return
	* S_OK if the best is found. E_FAIL if it was not found. E_NOTIMPLEMENTED for algorithms (such as DOEs) for which this notion 
	* is meaningless.
	*/
	HRESULT GetBestResultIndex(int& oBestResultIndex);

	/**
	* Returns a string describing the history of the optimization algorithm.
	* @return
	* The string containing the evolution of the free parameters, objective and constraints. 
	* Contains additional information with respect to the design table output of the optimization.
	*/
	virtual CATUnicodeString AllHistoricToString();

	/**
	* @param oBestResultIndex
	* The index of the historic to be dumped.
	* Returns a string describing the history of the optimization algorithm.
	* @return
	* The string containing the evolution of the free parameters, objective and constraints. 
	* Contains additional information with respect to the design table output of the optimization.	*/
	virtual CATUnicodeString OneHistoricToString(int iHistoricIndex);
	
protected:
	

	/**
	* Sends the end of iteration notification.
	* It can be caugth everywhere you want (for example, in the stop dialog in order to update it during the run).
	* @param
	* The notification you want to send.
	* @return
	* S_OK if the operation succeeded, E_FAIL else.
	*/
	virtual HRESULT SendEndIterationNotification(CATNotification* iNotif);

	/**
	* Initializes the update management engine.
	* It has to be called (at least) one time , before running the others (@href #LaunchUpdate, @href #BeforeFirstUpdate, 
	* @href #BeforeLastUpdate and @href #AfterLastUpdate) else each one of those methods will do nothing but returning E_FAIL !
	* @param iOptim
	* the optimization whose settings have to be used during the update (like Visu/No Visu). In most cases, it is
	* the optimization linked to the algorithm.
	* @param iInputs
	* The inputs that have to be updated (in most cases, they are the given optimization free parameters, but 
	* they may be different).
	* @param iOutputs
	* The outputs that have to be updated (in most cases, they are the given optimization goals, but 
	* they may be different).
	* Return E_FAIL if something fails.
	*/
	HRESULT InitUpdate(const CATIOptOptimization_var& iOptim, const CATLISTV(CATBaseUnknown_var)* iInputs, const CATLISTV(CATBaseUnknown_var)* iOutputs);
	
	/**
	* Asks the update management engine to launch the update of the inputs/outputs.
    * This update is given in the @href #InitUpdate method, according to the settings of the given optimization.
	* @return
	* E_FAIL if something fails (update management engine not initialized...).
	*/
	HRESULT LaunchUpdate();

	/**
	* Initializes Settings.
	* This method modifies some settings (measure) to assure that the model will be
	* correctly updated according to the given optimization settings (visu/no visu).
	* It has to be called one time :
	* - after the @href #InitUpdate method
	* - before calling the @href #LaunchUpdate() method for the first time.
	* @return
	* E_FAIL if something fails (update management engine not initialized...).
	*/
	HRESULT BeforeFirstUpdate();

	/**
	* Allows to restore the visualization settings for the last update.
	* It has to be called one time, before running the last update.
	* @return
	* E_FAIL if something fails (update management engine not initialized...).
	*/
	HRESULT BeforeLastUpdate();

	/**
	* Allows to restore the settings impacted by the BeforeFirstUpdate() method.
	* @href #BeforeFirstUpdate().
	* It has to be called one time, after running the last update.
	* @return
	* E_FAIL if something fails (update management engine not initialized...).
	*/
	HRESULT AfterLastUpdate();


		
private:
	// The copy constructor and the equal operator must not be implemented
	// -------------------------------------------------------------------
	CATOptAlgorithmAdapter (CATOptAlgorithmAdapter &);
	CATOptAlgorithmAdapter& operator=(CATOptAlgorithmAdapter&);

	// define the event can be published by this class
	CATDefineCBEvent(EventEndIteration)
	int _Version;

	// For internal use only.
	CATIOptAlgorithmUpdateHelper* _UpdateHelper;

};

//-----------------------------------------------------------------------

#endif

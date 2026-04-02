// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
//
// CATIOptOptimization.h
// Define the CATIOptOptimization interface
//
//===================================================================
/** 
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#ifndef CATIOptOptimization_H
#define CATIOptOptimization_H

#include "OptimizationItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATApplicationFrame.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByOptimizationItfCPP IID IID_CATIOptOptimization ;
#else
extern "C" const IID IID_CATIOptOptimization ;
#endif

class CATIOptFreeParameter_var;
class CATIOptProblem_var;
class CATIOptAlgorithm_var;
class CATUnicodeString;
class CATIOptimizationLog_var;

#include "CATLISTV_CATBaseUnknown.h"

#include "CATIOptUpdateManagement.h"

//------------------------------------------------------------------
/**
* Interface dedicated to the management of the optimization feature.
* 
* @see CATIOptFactory
*
*/
class ExportedByOptimizationItfCPP CATIOptOptimization: public CATBaseUnknown
{
	CATDeclareInterface;
	
public:

	/**
	* Optimization possible types. 
	* @param DS_Optimization for Optimization created/modified thanks to the PEO "Optimization" command.
	* @param DS_DoE for Design Of Experiments created/modified thanks to the PEO "Design Of Experiments" command.
	* @param PARTNERS_Methods for optimization method created/modified through the "Defines a PEO problem" command.
	* @param Undefined default value for optimization method created by an other way (VB, CAA ...)
	*/
	enum Type 
	{
		DS_Optimization,
		DS_DoE,
		PARTNERS_Methods,
		Undefined
	};

	/**
	* Optimization possible running mode.
	* @param LockTransactions enable to run the optimization without logging transactions. 

	* @param LockOptimizationInputs prevents any modification of the optimization input list.
	*/
	enum OptimizationMode 
	{
		UnlockAll = 0,
		LockTransactions = 1,
		LockOptimizationInputs = 2
	};
	/**
    * Returns the interface describing the problem to optimize.
	* @return
	* the interface describing the problem to optimize.
	*/
	virtual CATIOptProblem_var GetProblemToSolve() const = 0;

	/**
	* Sets the problem to optimize.
	*/
	virtual HRESULT SetProblemToSolve(const CATIOptProblem_var &pb) = 0;


	/**
	* Returns the collection of free parameters.
	* A free parameter is a parameter that can be modified during the optimization.
	* This list mustn't be freed.
	*/
	virtual CATLISTV(CATBaseUnknown_var) * GetFreeParameters() = 0;

	/**
	* Adds a free parameter (the free parameters can be modified during the optimization).
	* @param
	* spiFreeParameter
	* the free parameter to add.
	* @return
	* S_OK if the operation succeeded, E_FAIL else.
	*/
	virtual HRESULT AddFreeParameter(const CATIOptFreeParameter_var &spiFreeParameter) = 0;

	/**
	* Removes a free parameter (by handler or by index if handler null).
	* @return
	* S_OK if the operation succeeded, E_FAIL else.
	*/
	virtual HRESULT RemoveFreeParameter(const CATIOptFreeParameter_var &spiFreeParameter, int iIndex) = 0;
	

	/**
	* Gets the algorithm used for this optimization.
	* @return
	* NULL_var if no algorithm is associated or if it failed.
	*/
	virtual CATIOptAlgorithm_var GetAlgorithm() const = 0;
	
	/**
	* Sets the algorithm to use for this optimization.
	* @param
	* spiAlgo
	* The algorithm to set
	* @return
	* S_OK if the operation succeeded, E_FAIL else.
	*/
	virtual HRESULT SetAlgorithm(const CATIOptAlgorithm_var &spiAlgo) = 0;


	/**
	* Gets the optimization log used.
	* @return
	* NULL_var if no optimization log is associated or if it failed.
	*/
	virtual CATIOptimizationLog_var GetOptimizationLog() const = 0;

	/**
	* Set the optimization log.
	* @param
	* spiOptimLog
	* The optimization log to set. Give NULL_var if you want to remove
	* the existing one.
	* @return
	* S_OK if the operation succeeded, E_FAIL else.
	*/
	virtual HRESULT SetOptimizationLog(const CATIOptimizationLog_var &spiOptimLog) = 0;


	/**
	* @nodoc and further: Use KnowledgeInterfaces CATIAllowUserInfo::GetComment method.  
	* Sets the optimization comment
	*/
	virtual CATUnicodeString GetComment() const = 0;

	/**
	* @nodoc and further: Use KnowledgeInterfaces CATIAllowUserInfo::SetComment method.  
	* Gets the optimization comment
	*/
	virtual HRESULT SetComment(const CATUnicodeString &comment) = 0;


	/**
	* Indicates or forces if the optimization run has to stop or not.
	* @param reset.
    *   <br><b>Legal values</b>: <br>
	*		- default value = 2 if you want to know if the run has to stop.<br>
	*		- 0 if the optimization run is authorized to continue.<br>
	*		- 1 if the optimization run has to stop.
	* @return flag int.
    *   <br><b>Legal values</b>: <br>
	*		- 0 if the optimization run is authorized to continue.<br>
	*		- 1 if the optimization run has to stop because of a user interaction (stop button).
	*/
	virtual int* RunHasToStop(int reset = 2) = 0;


	/**
	* Launches a model update. 
	* For example, call it when you have valuated
	* the free parameters (in the algorithm run) and you want the model to be up to date.
	* @ param iBuildUpdateContext
	* Set it to 1 if :
	* - you call this method for the first time
	* - you have modified the list of optimisation free parameters, or 
	*   the list of problem goals, or the list of problem constraints
	* Default value is 1 (to be sure to perform the update by taking in account
	* the most recent changes), but if it is not really needed, it will decrease
	* functionality performances.
	* @ param pUserOutputsToUpdate
	* By Default, this method will perform the update of all the goals and constraints
	* impacted by the free parameters modifications. If you want to update more parameters,
	* put them in a list, and give here the adress of this list.
	* @ return
	* E_FAIL if the model update failed, and S_OK else.
	*/
	virtual HRESULT LaunchUpdate(int iBuildUpdateContext = 1, CATLISTV(CATBaseUnknown_var)* pUserOutputsToUpdate = NULL) = 0;


	/**
	* Sends an optimization error.
	* In an interactive context, optimization errors
	* are caugth after checking compatibility between the optimization and its algorithm
	* and after running the algorithm (see CATIOptAlgorithm). Then, errors are displayed
	* in a popup window.
	* @param iMessage
	* the error explanation (what happened, what to do etc ...)
	* @param iSummary
	* the error message in few words
	* By default, severity is set to 2.
	* @return
	* S_OK if the error is sent and E_FAIL else.
	*/
	virtual HRESULT SendOptimizationError(  const CATUnicodeString &iMessage, const CATUnicodeString&	iSummary = " ")= 0;


	/**
	* Gets the update visualization flag.
	* @return
	* 1 if the model modifications are visible during the run, and O else.
	*/
	virtual int GetUpdateVisualizationFlag() const = 0;

	/**
	* Sets the update visualization flag.
	* Set it to 1 if you want to see the model modifications during the run, and O else.
	* Notice that for optimization purpose, it is better to set it to 0.
	* @return
	* S_OK if the operation succeeded, E_FAIL else.
	*/
	virtual HRESULT SetUpdateVisualizationFlag(const int& iUpdateVisu) = 0;

	/**
	* Gets the running mode flag.
	* @return
	* 1 if the undo log is locked during the run ("Light Run"), and O else.
	*/
	virtual int GetRunningModeFlag() const = 0;

	/**
	* Sets the running mode flag.
	* @param iWithoutUndo.
   	*   <br><b>Legal values</b>: <br>
	*		- 1 if you want to lock the undo log during the run.<br>

	* Advantage :
	* Locking the undo log avoid memory saturation (big models, lot of updates).
	* because data used by the undo functionnality will not be stored during the run.
	* Drawback :
	* All the actions done before running the optimization won't be undoable after the run.
	* @return
	* S_OK if the operation succeeded, E_FAIL else.
	*/
	virtual HRESULT SetRunningModeFlag(const int& iWithoutUndo) = 0;


	/**
	* Sets the Optimization Type.
	* @param iOptimType.
	* Must be one of the types given by the "enum" described above.
	* @return
	* S_OK if succeeded, E_FAIL else.
	*/
	virtual HRESULT SetOptimizationType(CATIOptOptimization::Type iOptimType) = 0;

	/**
	* Gets the Optimization type.
	* @return
	* The Optimization type.
	*/
	virtual CATIOptOptimization::Type GetOptimizationType() const = 0;

	/**
	* Specifies if some attributes of the optimization can be modified.
	* @param iIdentifier The number identifying what must be locked or unlocked.
   	*   <br><b>Legal values</b>: <br>
	*		- 1 Inputs.<br>
	*		- 2 Outputs.<br>
	*		- 3 Run.<br>
	* @param iLock 0 for unlocked, 1 for locked, 2 for seen, 3 for hidden (2,3 for Run only).
	* @return the success (S_OK) or failure (E_FAIL) of the method.
	*/
	virtual  HRESULT LockOptimization(CATULong iIdentifier, CATULong iLock) = 0;
	
	/**
	* Returns the lock or unlocked status of some optimization attributes.
	* @param iIdentifier The number identifying what must be locked or unlocked.
   	*   <br><b>Legal values</b>: <br>
	*		- 1 Inputs.<br>
	*		- 2 Outputs.<br>
	*		- 3 Run.<br>
	* @param oLock, the lock status 0 for not locked, 1 for locked, 2 for seen, 3 for hidden (2,3 for Run only).
	* @return the success (S_OK) or failure (E_FAIL) of the method.
	*/
	virtual  HRESULT GetOptimizationLock(CATULong iIdentifier, CATULong& oLock) = 0;

	/**
	* Specifies the Update Mode used in Product/Part/Analysis environement.
	* @param iUpdateMode The update mode.
	*/
	virtual void SetUpdateMode(CATIOptUpdateManagement::PEOUpdateMode iUpdateMode) = 0;
	/**
	* Returns the Update Mode used in Product/Part/Analysis environement.
	* @param iUpdateMode The update mode.
	*/
	virtual CATIOptUpdateManagement::PEOUpdateMode GetUpdateMode() const = 0;

};

CATDeclareHandler( CATIOptOptimization, CATBaseUnknown );

#endif

// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
//
// CATIOptAlgorithm.h
// Define the CATIOptAlgorithm interface
//
//===================================================================
/** 
 * @CAA2Level L1
 * @CAA2Usage U4 CATOptAlgorithmAdapter
 */
#ifndef CATIOptAlgorithm_H
#define CATIOptAlgorithm_H

#include "OptimizationItfCPP.h"
#include "CATInterfaceEvents.h"

#include "CATEventSubscriberTypedefs.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByOptimizationItfCPP IID IID_CATIOptAlgorithm ;
#else
extern "C" const IID IID_CATIOptAlgorithm ;
#endif


class CATIOptOptimization_var;
class CATICkeType_var;
class CATUnicodeString;

/**
* Defines for the termination criterion decoding (ie criterion = CATOptTerminationTime | CATOptTerminationNoImprovement | CATOptUserDefinedCriterion).
*/
#define CATOptTerminationTime 1
/**
* Defines for the termination criterion decoding (ie criterion = CATOptTerminationTime | CATOptTerminationNoImprovement | CATOptUserDefinedCriterion).
*/
#define CATOptTerminationNoImprovement 2

/**
* This interface describes the basic behaviour of an optimization algorithm.
* An algorithm must expose a way to edit itself (method CreateEditionFrame).
*
* <p><b>BOA information</b>: this interface CANNOT be implemented
* using the BOA (Basic Object Adapter).
* To know more about the BOA, refer to the CAA Encyclopedia home page.
* Click Middleware at the bottom left, then click the Object Modeler tab page.
* Several articles deal with the BOA.</p>
*/
class ExportedByOptimizationItfCPP CATIOptAlgorithm: public CATInterfaceEvents
{
	CATDeclareInterface;

public:
	
    /**
    * @nodoc
    * Defines the algorithm version that is used to solve the optimization problem.
    * Construction of the number: 1000*release + 10*sp. 
    * Allows to get sub sp versioning if necessary (r8sp3 -> 8030, r8sp3.1 -> 8031)
    */
	enum AlgorithmVersion { 
        r1ga = 1000,
        r8sp3 = 8030,
        r8sp4 = 8040,
        r9sp4 = 9040,
        r10sp1 = 10010,
        r11ga = 11000,
        r12ga = 12000,
        r12sp1 = 12010,
        r12sp2 = 12020,
        r12sp3 = 12030,    
        r13ga = 13000,
		r14ga = 14000,
		r14sp1 = 14010,
		r14sp2 = 14020,
		r14sp3 = 14030,
		r14sp4 = 14040,
		r15ga = 15000,
		r16ga = 16000,
		r17ga = 17000,
		r17sp1 = 17010,
		r17sp2 = 17020,
		r17sp3 = 17030,						
		r18ga = 18000,
		r18sp1 = 18010,
        CurrentVersion = 65534
	};

	/**
	* This method launches a run of optimization, with respect to the algorihtm settings, problems, and goals defined in the feature optimization.
	* In implementation, you may call the method SendOptimizationError() on the
	* CATIOptOptimization given in argument, in order to send the error(s) explanation(s)
	* to the interactiv dialog. If you do that, a popup will be displayed at the end of
	* the run so that the user will know what happened during the run.
	* Notice that if you are integrating your algorithm in the OptimizerUI, the
	* CheckCompatibility() method will be called so that it may prevent the algorithm to run.
	* @param
	* optim
	* the optimization to run.
	* @return
	* S_OK if the operation succeeded, E_FAIL else
	*/
	virtual HRESULT Run(CATIOptOptimization_var &iOptim) = 0;

	/**
	* This method checks if the global optimization definition is compatible with the current algorithm.
	* For example, your algorithm may not be able to run if the optimization has
	* only constraints and no parameter to optimize so that the optimization
	* won't be compatible with the current algorithm. In implementation, you
	* may call the method SendOptimizationError() on the CATIOptOptimization
	* given in argument, in order to send the error(s) explanation(s)
	* to the interactiv dialog. If you do that, a popup will be displayed at the end of
	* the check so that the user will know why there is a compatibility problem (to give
	* a complete list of compatibility problems, check everything, call the
	* SendOptimizationError() each time there is a problem and return E_FAIL
	* at the end of the whole check).
	*
	* WARNING : the OptimizerUI will prevent the algorithm from running
	* if at least one error is sent OR if this method returns E_FAIL.
	*
	* Since all the sent errors will be displayed to the user in interactiv mode,
	* you should distinguish the internal errors (like NULL pointers) from
	* user errors (like no free parameter selected).
	* @param iOptim
	* The optimization you want to check compatibility with.
	* @return
	* S_OK if the algorithm is compatible with the optimization, E_FAIL else.
	*/
	virtual HRESULT CheckCompatibility(CATIOptOptimization_var &iOptim) = 0;

	/**
	* Sets an algorithm setting. 
	* This setting is defined by its attribute name. 
    * The value of the setting is given as a double (but can be an integer).
	* @return
	* S_OK if the operation succeeded, E_FAIL else (non existing attribute).
	*/
	virtual HRESULT SetSetting(const char* iAttrName, double iContent) = 0;

	
	/**
	* Gets an algorithm setting. 
	* The setting is defined by its attribute name. 
    * The value of the setting is returned in a double but can be an integer.
	* @return
	* S_OK if the operation succeeded, E_FAIL else (non existing attribute).
	*/
	virtual HRESULT GetSetting(const char* iAttrName, double &oContent) = 0;

	/**
	* This event is triggered every time you want during the algorithm run.
	* It may correspond to a model update and/or an end of iteration.
	* It is used for example by the stop dialog to update its display.
	*/
	virtual CATCallbackEvent GetEndIterationNotification() const = 0;


	/**
	* Returns the index of the Opimization Log corresponding to the best solution found according to the problem defined.
	* @param oBestResultIndex
	* The index of the best point found by the optimizer.
	* @return
	* S_OK if the best is found. E_FAIL if it was not found. E_NOTIMPLEMENTED for algorithms (such as DOEs) for which this notion 
	* is meaningless.
	*/
	virtual HRESULT GetBestResultIndex(int& oBestResultIndex) const = 0;

	/**
	* Returns a string describing the history of the optimization algorithm.
	* @return
	* The string containing the evolution of the free parameters, objective and constraints. 
	* Contains additional information with respect to the design table output of the optimization.
	*/
	virtual CATUnicodeString AllHistoricToString() = 0;

	/**
	* Returns a string describing the history of the optimization algorithm.
	* @param iHistoricIndex 
	* The index of the historic to be dumped (1 to Number of constraints + objective value + best objective)
	* @return
	* The string containing the evolution of the free parameters, objective and constraints. 
	* Contains additional information with respect to the design table output of the optimization.	*/
	virtual CATUnicodeString OneHistoricToString(int iHistoricIndex) = 0;
};

//------------------------------------------------------------------

CATDeclareHandler( CATIOptAlgorithm, CATBaseUnknown );

#endif

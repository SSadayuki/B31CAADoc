// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
//
// CATIOptSolutions.h
// Define the CATIOptSolutions interface
//
//===================================================================
/** 
 * @CAA2Level L1
 * @CAA2Usage U3
 */
#ifndef CATIOptimizationLog_H
#define CATIOptimizationLog_H

#include "OptimizationItfCPP.h"
#include "CATBaseUnknown.h"

class CATUnicodeString;
class CATIDesignTable_var;
class CATICkeParm_var;

#include "CATLISTV_CATBaseUnknown.h"
#include "CATListOfInt.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByOptimizationItfCPP IID IID_CATIOptimizationLog ;
#else
extern "C" const IID IID_CATIOptimizationLog ;
#endif

/**
* Interface for the management of the data stored in the type late OptSolutions.
* This type is used by the OptOptimization feature to store parameters values during optimization
* and to store the best configurations with respect to optimization problem definition
*/
class ExportedByOptimizationItfCPP CATIOptimizationLog: public CATBaseUnknown
{
	CATDeclareInterface;
	
public:
	

	/**
	* Creates and initializes the optimization logging tools. 
	* The optim log will allow you to capture the current parameters configuration (i.e. the values of the parameters 
	* given in the iParmsList) and to store it in the output file, so
	* that the ouput file gives an historic of the optimization run.
	* Each column of the optim log gives one parameter variation, and each row represents
	* a given parameters values configuration.
	* @param
	* iPath
	* The path of the output file that will be created. If iPath = "", the historic is stored
	* in the model (persistent).
	* @param
	* iParmsList
	* The list of parameters whose values will be stored in the historic. You should give all the
	* free parameters, the constraints, the goal parameter(s) and your own parameters if needed.
	* @param
	* iWithBestParm
	* Set it to 1 if you want to have a persistent parameter that gives the best result variation,
	* else, set it to 0. If you create it, you will be able to retrieve it
	* (for example : in the algorithm Run in order to valuate it) by using the
	* GetBestParameter() method.
	* @return
	* S_OK if the operation succeeded, E_FAIL else.
	*/
	virtual HRESULT InitializeOptimLog(const CATUnicodeString &iPath, 
									   const CATLISTV(CATBaseUnknown_var)* iParmsList,
									   int iWithBestParm = 0) = 0;

	/**
	* Captures the current values of the parameters given while creating the optim log and store them next to the last row of parameters configuration.
	* @param
	* iWithSynchro
	* If you did not choose the model storage format while initializing the optimization log,
	* set it to 1 if you want to do the synchronization between the file content and 
	* the data stored in buffer. For optimization purpose, you should always set it to 0
	* except when you call this method for the last time.
	* (If you chose the model storage format while initializing the optimization log, the
	*  model is always up to date with the data stored in buffer so that we don't care about
	* the iWithSynchro value).
	* @return
	* S_OK if the operation succeeded, E_FAIL else.
	*/
	virtual HRESULT AddRowInOptimLog(const int iWithSynchro = 1) = 0;

	/**
	* Fills the given list with the content of the optimization log row.
	* @param iRowIndex
	* The index of row that you want to get (the first one as the index 1 and contains the column names).
	* @param oRowContent
	* the list filled with the row content. If this list is not empty, its content is
	* removed before filling it.
	* @return
	* S_OK if the operation succeeded, E_FAIL else (the row number iRowIndex does not exist).
	*/
	virtual HRESULT GetRowFromOptimLog(const int iRowIndex, CATListOfCATUnicodeString& oRowContent) = 0;


	/**
	* Adds an additional column corresponding to a parameter.
	* If you did not give one parameter when you call the CreateOptimizationLog() method, you can use this one to add one column associated to the given parameter.
	* @param
	* spiParm
	* the parameter that you want to add in the optimization log in order to log
	* its variation.
	* @return
	* S_OK if the operation succeeded, E_FAIL else.
	* Notice that this method has to be called after the CreateOptimizationLog() one.
	*/
	virtual HRESULT AddParameterInOptimLog(CATICkeParm_var spiParm) = 0;

	/**
	* Returns the Optimization Log path.
	* @return
	* the optimization log path given while calling CreateOptimizationLog() or
	* "" if the optim log doesn't exist or if the file has been moved after
	* it creation, so that it can't be retrieved.
	*/
	virtual CATUnicodeString GetOptimLogPath() = 0;

	/**
	* Returns the parameter valuated by the best value of the goal parameter.
	* @return
	* This method returns the parameter which was created if the optionnal parameter "iWithBestParm"
	* was choosen while calling CreateOptimizationLog().
	*/
	virtual CATICkeParm_var GetBestParameter() = 0;

	/**
	* Returns the list of Optimization log rows.
	* @return
	* The list of optimization log rows indexes. Can be used to
	* save the best results indexes or the indexes of rows for which
	* the optimization update failed.
	*/
	virtual CATListOfInt* GetOptimLogRowsIndexes() = 0;
	
	/**
	* Adds the index in the list of indexes. 
	* It is appended to the list.
	*/
	virtual void AddIndex(int index) = 0;
	
	/**
	* Removes the i th element in the list of indexes.
	*/
	virtual void RemoveIndex(int i) = 0;
	
	/**
	* Exports the optimization historic in a file.
	* If you have chosen to store the historic in the model (you called the 
	* method InitializeOptimLog with argument iPath = "" ), you have the
	* possibility to export the historic content in a file.
	* Notice that if you go on modifying the historic after the export, the
	* file won't be synchronized with the historic content (because the file
	* is just an image of the historic at the instant of the method call).
	* @param iPath
	* The path of the file that will be created. If it contains :
	* - ".xls", an excel file will be created
	* - ".123", a Lotus file will be created
	* else, a text file will be created.
	* @param iReplaceFileIfExist
	* If you give a path that corresponds to an existing file, you have to set it to 1
	* to force the file replacement (else this method will fail). By default, this
	* argument is set to 0 in order to keep the existing file.
	* @return
	* E_FAIL if the file creation or the file filling failed, and S_OK else.
	* Possible reasons of failure : you did not call the CATIOptimizationLog::InitializeOptimLog 
	*								method with an empty path (historic not stored in the
	*								model but already in a file,
	*								iPath is empty, file exists and is not in Read/Write mode,
	*								you are not allowed to write in the given location ...							
	*/
	virtual HRESULT ExportOptimLogToFile(const CATUnicodeString &iPath, int iReplaceFileIfExist = 0) = 0;


	/**
	* Returns the number of rows currently in the optimization log.
	*/
	virtual HRESULT GetMaxRowIndex(int& oNumbderOfRows) = 0;
};

CATDeclareHandler( CATIOptimizationLog, CATBaseUnknown );

#endif

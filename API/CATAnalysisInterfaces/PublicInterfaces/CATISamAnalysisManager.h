#ifndef CATISamAnalysisManager_h
#define CATISamAnalysisManager_h
/* -*-c++-*- */

// COPYRIGHT DASSAULT SYSTEMES 1999  

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATAnalysisInterface.h"
#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"
#include "CATBoolean.h"

class CATISpecObject;
class CATString;
class CATISamAnalysisModel;
class CATISamAnalysisSet;
class CATISamDocumentManager_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamAnalysisManager;
#else
extern "C" const IID IID_CATISamAnalysisManager;
#endif

/**
 * Interface to manage Analysis Manager behaviour.
 * <b>Role</b>:In the Analysis Document, an <b>Analysis Manager</b> is the data 
 * dedicated to set and manage the 
 * <ul><li><b>Analysis Models</b></li>
 *     <li><b>Analysis Cases</b></li> </ul>
 * @see CATISamAnalysisModel, CATISamAnalysisCase, CATISamDocumentManager
 */
 

class ExportedByCATAnalysisInterface CATISamAnalysisManager : public CATBaseUnknown
{
	CATDeclareInterface;

	public:
/**
 * Sets the current Analysis model.
 * @param iModel 
 * The Analysis model to set as current. The CATISpecObject is to be considered as
 * a CATISamAnalysisModel.
 * @return
 * The call status. 
 * <br><b>Legal values</b>: S_OK, E_FAIL
 */
		virtual HRESULT SetCurrentModel(const CATISpecObject* ipiModel) = 0;
/**
 * Retrieves the current Analysis model.
 * @param oModel [out , CATBaseUnknown#Release]
 * The current Analysis model.
 * @return
 * The call status. 
 * <br><b>Legal values</b>: S_OK, E_FAIL
 */
		virtual HRESULT GetCurrentModel(CATISpecObject*& opiModel) const = 0;


/**
 * Retrieves the Analysis Model whose Name is <b>iName</b>.
 * @param iName
 * Name of the case we are looking for.
 * @param oAnalysisModel [out , CATBaseUnknown#Release]
 * The AnalysisModel retreived
 */
		virtual HRESULT GetAnalysisModelByName(const CATUnicodeString& iName,
                                           CATISamAnalysisModel*& opiAnalysisModel) = 0;
/**
 * Retrieves all the Analysis Models in the context of the Analysis Manager.
 * @param oCasesList
 * collection of cases found.
 */
		virtual HRESULT GetAllAnalysisModels(CATLISTV(CATBaseUnknown_var)& oAnalysisModels) = 0;

/**
 * Retrieves the Document Manager of the current Analysis Manager.
 * @param oDocumentManager
 *  The document Manager
 */
		virtual HRESULT GetDocumentManager(CATISamDocumentManager_var& ospDocumentManager) const = 0;


/**
 * Sets the most accurate workbench.
 * @param iWorkbenchName the identifier of the Workbench
 */
		virtual HRESULT SetWorkbench(const CATString& iWorkbenchName) = 0;

/**
 * Retrieves  the most accurate workbench.
 * @param oWorkbenchName
 */
		virtual HRESULT GetWorkbench(CATString& oWorkbenchName) const = 0;


};

CATDeclareHandler(CATISamAnalysisManager,CATBaseUnknown);

#endif

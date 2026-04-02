//=================================================================================
#ifndef CATISamAnalysisModel_H
#define CATISamAnalysisModel_H

// COPYRIGHT DASSAULT SYSTEMES 1999  

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */
//=================================================================================
#include "CATIAV5Level.h"
#include "CATAnalysisInterface.h"

#include "CATLISTV_CATBaseUnknown.h"
#include "CATBaseUnknown.h"
#include "CATBoolean.h"

class CATISamAnalysisCase;
class CATISpecObject;
class CATISamMeshNegociator;
class CATISamImageModel;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamAnalysisModel ;
#else
extern "C" const IID IID_CATISamAnalysisModel ;
#endif

//=================================================================================
/**
 * Interface to define  the	analysis Model.
 * <b>Role</b>: In the analysis document, an Analysis Model is the feature
 * dedicated to set and manage all the required data for the discretization 
 * and idealization of a Finite Element model.
 */
class ExportedByCATAnalysisInterface CATISamAnalysisModel: public CATBaseUnknown
{
	CATDeclareInterface;

	public:

/**
 * Sets the Mesh Set associated with the Finite Element Model.
 * @param iMesh
 * Mesh Set to be associated.
 */
		virtual HRESULT SetMesh(CATBaseUnknown* iMesh) = 0;
/**
 * Retrieves the Mesh Set associated with the Finite Element Model.
 * @param oMesh [out , CATBaseUnknown#Release]
 * Mesh Set associated.
 */
		virtual HRESULT GetMesh(CATBaseUnknown*& oMesh) const = 0;
/**
 * Retrieves the Mesh Set Negociator associated with the Finite Element Model.
 * @param oMeshNegociator [out , CATBaseUnknown#Release]
 * Mesh Negociator associated.
 */
		virtual HRESULT GetMeshNegociator(CATISamMeshNegociator*& oMeshNegociator) = 0;

/**
 * Adds a previously created case under the analysis model in the tree.
 * @param iCase. The case to be added.
 * @param iUpdateVisualization. Defines the impact on current visualization.
 * <br><b>Legal values</b>:
 * <ul>
 * <li><font color="red">TRUE</font color="red"> Previous current case (and all its children) is hidden.</li>
 * <li><font color="red">FALSE</font color="red"> Previous current case visualization is keept.</li>
 * </ul>
 */
		virtual HRESULT AddCase(const CATISamAnalysisCase* iCase,
                            CATBoolean iUpdateVisualization=TRUE) = 0;

/**
 * Retrieves a created case with a given under the analysis model.
 * @param iName
 * Name value for search.
 * @param oFoundCase  [out , CATBaseUnknown#Release]
 * Case found.
 */

		virtual HRESULT GetNamedCase(const CATUnicodeString& iName,CATISamAnalysisCase*& oFoundCase) = 0;

/**
 * Retrieves all the cases in the context of the Analysis model.
 * @param oCasesList
 * Collection of cases found.
 */

		virtual HRESULT GetAllCases(CATLISTV(CATBaseUnknown_var)& oCasesList) = 0;

/**
 * Retrieves the current case in the context of the Analysis model.
 * @param oCase  [out , CATBaseUnknown#Release]
 * The current Case.
 */

		virtual HRESULT GetCurrentCase(CATISamAnalysisCase* &oCase) = 0;

/**
 * Sets the current case in the context of the Analysis model.
 * @param iCase The Case to make current.
 * @param iUpdateVisualization. Defines the impact on current visualization.
 * <br><b>Legal values</b>:
 * <ul>
 * <li><font color="red">TRUE</font color="red"> Previous current case (and all its children) is hidden.</li>
 * <li><font color="red">FALSE</font color="red"> Previous current case visualization is keept.</li>
 * </ul>
 */

		virtual HRESULT SetCurrentCase(const CATISamAnalysisCase* iCase,
                                   CATBoolean iUpdateVisualization=TRUE) = 0;


/**
 * Removes analysis feature from the Analysis Model.<br>
 * This methode will effectivelly delete the feature.
 * For example, if you delete an analysiset, the set will be removed from all the cases 
 * that referenced it and removed from the document.
 * @param iAnalysisFeature The feature to remove.
 * Note that the set must be created using the  @href CATISamAnalysisModelFactory#CreateUserSet method <br>
 * where the iContainingObject is the AnalysisModel.
 */
		virtual HRESULT RemoveAnalysisFeature(const CATISpecObject* iAnalysisFeature) = 0;


/**
 * Retrieves the CATISamImageModel. <br>
 * @param oImageModel  [out , CATBaseUnknown#Release]
 * The image model manager.
 */
		virtual HRESULT GetImageModel(CATISamImageModel* &oImageModel) = 0;

/**
 * Return an Integer Value. 
 */
    virtual int GetInternalCount() = 0;



};

//------------------------------------------------------------------

CATDeclareHandler( CATISamAnalysisModel, CATBaseUnknown );

#endif

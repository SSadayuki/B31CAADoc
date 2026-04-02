// COPYRIGHT DASSAULT SYSTEMES  2003
//=============================================================================
//
// CATAnalysisAssemblyManager.h
//
//=============================================================================
#ifndef CATAnalysisAssemblyManager_h
#define CATAnalysisAssemblyManager_h
/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */
#include "CATSAM0Explicit.h"
#include "CATBaseUnknown.h"
#include "CATDocumentsInSession.h"
#include "CATDocument.h"

class CATAnalysisExplicitModelHandler;
class CATAnalysisExplicitModel;
class CATMathTransformation;


/**
 * Field model assembly manager.
 * This object is used to provide services used for assembly of analysis.
 */

class ExportedByCATSAM0Explicit CATAnalysisAssemblyManager : public CATBaseUnknown
{
  friend class CATESamAnalysisAssembly;
  friend class CATESamAnalysisContainer;
  friend class CATESamExplicitPointerMP;
  friend class CATAnalysisDocManager;

public:

/**
 * Converts an Explicit model pointer into stable integer.
 * @param iExplicitModel Pointer of the model
 * @param oTag Tag of the model.
 */
    HRESULT GetModelTag(CATAnalysisExplicitModel* iExplicitModel, int & oTag) const;
/**
 * Retrieves the explicit model pointer from Tag.
 * @param iTag Tag of the model.
 * @param oExplicitModel Pointer of the model
 */
    HRESULT GetModelFromTag(int iTag, CATAnalysisExplicitModel* & oExplicitModel) const;
/**
 * Retrieves the list of linked explicit models.
 * @param oModelTab List of explicitmodel pointers.
 * @param oSize Size of the list.
 */
    HRESULT GetAssemblyExplicitModel(CATAnalysisExplicitModel * const * &oModelTab, int &oSize) const;
/**
 * Retrieves the positionning matrix of linked field model.
 * @param iExplicitModel  Pointer of the model.
 * @param oTransfo Transformation matrix.
 */
    HRESULT GetModelPosition(CATAnalysisExplicitModel* iExplicitModel, CATMathTransformation & oTransfo) const;


private:

    CATAnalysisAssemblyManager(const CATLISTV(CATBaseUnknown_var)& ProductList,
                               const CATLISTP(CATDocument)& AnalysisList,
                               const CATListOfInt & TagList); 
    virtual ~CATAnalysisAssemblyManager();

    CATAnalysisAssemblyManager(const CATAnalysisAssemblyManager &);
    CATAnalysisAssemblyManager& operator=(const CATAnalysisAssemblyManager &);

    HRESULT SetModelPosition(CATAnalysisExplicitModel* iExplicitModel, CATMathTransformation & iTransfo) ;
    // Deprecated
    HRESULT SetModelToNull  (CATAnalysisExplicitModel* iExplicitModel);

    HRESULT DefineAssemblyManager(const CATLISTV(CATBaseUnknown_var)& iProductList,
                                  const CATLISTP(CATDocument)& iAnalysisList,
                                  const CATListOfInt & iTagList); 
    // Replacement Method
    HRESULT SetModelToNullFromTag(int iModelTag);

    // DATA Members
    CATAnalysisExplicitModelHandler** _ExplicitModelsHandler;
    CATAnalysisExplicitModel**        _ExplicitModels;
		CATMathTransformation*            _ExplicitModelsPositions;
    int*                              _ExplicitModelsTag;
    int                               _Size;
  
};


#endif

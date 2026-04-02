#ifndef CATISamAnalysisAssembly_H
#define CATISamAnalysisAssembly_H
//==================================================================================
// COPYRIGHT DASSAULT SYSTEMES 2003 
//==================================================================================
/**
  * @CAA2Level L0
  * @CAA2Usage U3
  */
//==================================================================================
#include "CATAnalysisInterface.h"

#include "CATAnalysisInterface.h"

// System Prereq
#include "CATBaseUnknown.h"
#include "CATListOfCATUnicodeString.h"

// ObjectModelerBase
#include "CATDocument.h"

// CATAnalysisBase Prereq
class CATAnalysisExplicitModel;
class CATAnalysisAssemblyManager;
class CATISpecObject_var;


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamAnalysisAssembly; 
#else
extern "C" const IID IID_CATISamAnalysisAssembly ;
#endif

//------------------------------------------------------------------

/**
/* Interface to manage informations on Analysis Assembly
 * <b>Role</b>:
 * <ul><li>Manages lists of Analysis documents defined in the assembly</li></ul>
 */
class ExportedByCATAnalysisInterface CATISamAnalysisAssembly: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

 /**
 * Sets the list of active CATAnalysis documents 
 * these documents will be part of assembly structure
 * @param ProductList List of Product instances 
 * @param AnalysisList List of active CATAnalysis documents 
 */
	virtual HRESULT SetAssemblyAnalysis(CATLISTV(CATBaseUnknown_var) ProductList ,
																CATLISTV(CATUnicodeString) ShapeList) = 0;

 /**
 * Gets the list of active CATAnalysis documents 
 * @param ProductList List of Product instances 
 * @param AnalysisList List of active CATAnalysis documents 
 * @param Tag list of Tags
 * @param ShapeList list of the shape that manage the analysis representation.
 * @param iForceLoad if equals 1, analysis documents are loaded.
 */
	virtual HRESULT GetAssemblyAnalysis(CATLISTV(CATBaseUnknown_var) &ProductList ,
																CATLISTP(CATDocument) &AnalysisList,
																CATListOfInt &TagList,
																CATLISTV(CATUnicodeString) &ShapeList,
																int iForceLoad = 0) =0;

 /**
 * Gets the Tag associated to an Analysis
 * @param iAnalysisDocument the targeted analysis
 * @param oTag its Tag in assembly structure
 * @return E_FAIL if iAnalysisDocument is not in assembly, S_OK else
 */
	virtual HRESULT GetAnalysisTag(CATDocument* iAnalysisDocument, int & oTag) =0;

 /**
 * Gets the documents linked to a specific Tag
 * @param iTag the targeted Tag
 * @param oAnalysisDocument the corresponding document
 * @return E_FAIL if no document has this Tag, S_OK else
 */
	virtual HRESULT GetTagAnalysis(int iTag, CATDocument* & oAnalysisDocument) =0;

 /**
 * Gets the instance product associated to an analysis
 * @param iAnalysisDocument the targeted analysis
 * @param oProduct the associated instance
 * @return E_FAIL if iAnalysisDocument is not in assembly, S_OK else
 */
	virtual HRESULT GetAnalysisProduct(CATDocument* iAnalysisDocument,
																		 CATBaseUnknown_var & oProduct) =0;
 /**
 * Gets the documents linked to a specific product instance
 * @param iProduct the targeted instance
 * @param oAnalysisDocument the corresponding document
 * @return E_FAIL if no document is associated to this instance, S_OK else
 */
  virtual HRESULT GetProductAnalysis(CATBaseUnknown_var & iProduct,
																		 CATDocument* &oAnalysisDocument) =0;

  
 /**
 * Retrieves the AssemblyManager
 * @param oAssemblyManager  the AssemblyManager
 * oAssemblyManager must be Released.
 */
	virtual HRESULT GetAssemblyManager(CATAnalysisAssemblyManager*& oAssemblyManager) = 0;

  
};

//------------------------------------------------------------------
CATDeclareHandler( CATISamAnalysisAssembly, CATBaseUnknown );

#endif

// COPYRIGHT Dassault Systemes 2000
//================================================================================================
/**
  * @CAA2Level L1
  * @CAA2Usage U4 CATEAnalysisContextCheck
  */
//
#ifndef CATISamAnalysisContextCheck_H
#define CATISamAnalysisContextCheck_H

#include "CATAnalysisInterface.h"
#include "CATBaseUnknown.h"

class CATDocument;
class CATFrmEditor;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamAnalysisContextCheck ;
#else
extern "C" const IID IID_CATISamAnalysisContextCheck ;
#endif

//================================================================================================
/**
 * Customizes some check of the document associated to a context name.
 * This interface must be implemented on a late type defined as AnalysisCkeck_XXX where XXX 
 * is the Name of the interactif context.
 * <p><b>BOA information</b>: this interface can be implemented using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page. 
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */
class ExportedByCATAnalysisInterface CATISamAnalysisContextCheck: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Customizes some check of the document inside a Workbench transition or for the import capability.
 * @param iAnalysisDocument the current analysis document.
 * @param iImportedDoc the imported document.
 */
	virtual HRESULT Check(CATDocument * iAnalysisDocument,
		                    CATDocument * iImportedDoc = NULL) = 0;

/**
 * Informs the closure of the analysis editor.
 * @param iAnalysisEditor the analysis editor.
 */
	virtual HRESULT ClosingEditor(CATFrmEditor * iAnalysisEditor) = 0;

};

//================================================================================================

#endif


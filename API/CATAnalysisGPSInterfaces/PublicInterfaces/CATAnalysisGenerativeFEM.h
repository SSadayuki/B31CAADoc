#ifndef CATAnalysisGenerativeFEM_h
#define CATAnalysisGenerativeFEM_h
//=============================================================================
// COPYRIGHT Dassault Systemes 2002
//=============================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */
#include "CATAnalysisGPSInterfaces.h"
#include "CATError.h"

class CATDocument;
class CATUnicodeString;


/**
 * Create a generative finite element model.
 */
class ExportedByCATAnalysisGPSInterfaces CATAnalysisGenerativeFEM
{
  public:
/**
 * Creates mesh parts and properties according to the content of the imported document.
 * @param iAnalysisDocument : CATAnalysis Document for creation. 
 * @param iImportedDoc : CATPart or CATProduct Document for initial creation. 
 * if iImportedDoc set to NULL, a check af the analysis finite element model if performed. 
 */
    static HRESULT Launch(CATDocument * iAnalysisDocument,
												  CATDocument * iImportedDoc = NULL);
  private:
	  CATAnalysisGenerativeFEM();

};


#endif

// COPYRIGHT Dassault Systemes 2003
//===================================================================
//
// CATEAnalysisContextCheck.h Provide adaptor to interface CATISamAnalysisContextCheck
//
//===================================================================
// Usage notes:
//===================================================================
#ifndef CATEAnalysisContextCheck_H
#define CATEAnalysisContextCheck_H
/**
  * @CAA2Level L1
  * @CAA2Usage U2
  */

#include "CATAnalysisResources.h"
#include "CATISamAnalysisContextCheck.h"
//-----------------------------------------------------------------------

/**
 * Adapter for the implementation of CATISamAnalysisContextCheck interface.
 * This adapter allow a BOA implementation.
 * @see CATISamAnalysisContextCheck
 */

class ExportedByCATAnalysisResources CATEAnalysisContextCheck: public CATISamAnalysisContextCheck
{

  public:

/**
 * Default constructor.
 */
     CATEAnalysisContextCheck ();
/**
 * Default destructor.
 */
     virtual ~CATEAnalysisContextCheck ();

/**
 * Customizes some check of the document inside a Workbench transition or for the import capability.
 * @param iAnalysisDocument the current analysis document.
 * @param iImportedDoc the imported document.
 */
	virtual HRESULT Check(CATDocument * iAnalysisDocument,CATDocument * iImportedDoc = NULL);

/**
 * Informs the closure of the analysis editor.
 * @param iAnalysisEditor the analysis editor.
 */
  virtual HRESULT ClosingEditor(CATFrmEditor * iAnalysisEditor);

  private:

    CATEAnalysisContextCheck (CATEAnalysisContextCheck &);
    CATEAnalysisContextCheck& operator=(CATEAnalysisContextCheck&);

};

//-----------------------------------------------------------------------

#endif

// COPYRIGHT DASSAULT SYSTEMES 2002
//===================================================================
//
// CATESamImportDefineAdaptor.h
// Provide default implementation of some methods of interface
//    CATISamAnalysisSetInit for AnalysisSets
//
//===================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */
//===================================================================
#ifndef CATESamImportDefineAdaptor_H
#define CATESamImportDefineAdaptor_H
#include "CATAnalysisResources.h"

#include "CATISamImportDefine.h"

//------------------------------------------------------------------

/**
 * Adapter for the implementation of CATISamImportDefine interface.
 * It can be used for customisation of file import.
 * @see CATISamImportDefine
 */

class ExportedByCATAnalysisResources CATESamImportDefineAdaptor: public CATISamImportDefine
{
  
  public:
/**
 * Default constructor.
 */
    CATESamImportDefineAdaptor();

/**
 * Destructor.
 */
    virtual ~CATESamImportDefineAdaptor();    

 /**
  * Defines the type of file that will be imported.
  *   @param oTypes String that defines the extention of the file.
  */
  HRESULT GetFileTypes(CATListValCATString& oTypes);

	/**
  * Associate a comment to the file extention.
  *   @param oComment String that defines the comment.
  */
  HRESULT GetCommentForType(const CATString iType,CATUnicodeString& oComment);

	/**
  * Returns an interactive frame.
  *   @param iParent the parent for output frame.
  *   @param iImpotedDoc pointer to the imported document.
  *   @return the frame to display.
  */
  CATDlgFrame* GetUserFrame(CATDialog * iParent, CATDocument* iImportedDoc);

	/**
  * Implements the OK action.
  */
  HRESULT Accept();

	/**
  * Get values for customisation.
  *   @param oValues array of values.
  */
  HRESULT GetValues(CATSafeArrayVariant* & oValues);

	/**
  * Set Values for customisation.
  *   @param iValues array of values.
  */
  HRESULT SetValues(CATSafeArrayVariant* iValue);

  /**
  * Import in order to launch the import specific code.
  *   @param iFileToImport
  *      input the CATDocument to import.
  *   @param iAnalysisDocument
  *      input the current CATDocument in which the import is done.
  */
	  HRESULT Import (CATDocument * iFileToImport , CATDocument *iAnalysisDocument);

  private:
/**
 * Constructors. No implementation provided. Just declared to avoid that 
 * someone could build this class.
 */
    CATESamImportDefineAdaptor(const CATESamImportDefineAdaptor &);
    CATESamImportDefineAdaptor& operator=(const CATESamImportDefineAdaptor &);
};   

#endif




#ifndef CATISamImportDefine_H
#define CATISamImportDefine_H
// COPYRIGHT Dassault Systemes 2004
//===================================================================
/**
  * @CAA2Level L1
  * @CAA2Usage U4   CATESamImportDefineAdaptor
  */
//===================================================================


#include "CATAnalysisInterface.h"
#include "CATBaseUnknown.h"
#include "CATListOfCATString.h"
#include "CATDlgFrame.h"
#include "CATSafeArray.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamImportDefine ;
#else
extern "C" const IID IID_CATISamImportDefine ;
#endif

class CATDocument;

/**
 * Interface to define interactivity in import.
 * <p><b>BOA information</b>: this interface can be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page. 
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */
class ExportedByCATAnalysisInterface CATISamImportDefine: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

 /**
  * Defines the type of file that will be imported.
  *   @param oTypes String that defines the extention of the file.
  */
    virtual HRESULT GetFileTypes(CATListValCATString& oTypes) = 0;

	/**
  * Associate a comment to the file extention.
  *   @param oComment String that defines the comment.
  */
    virtual HRESULT GetCommentForType(const CATString iType,CATUnicodeString& oComment) = 0;

	/**
  * Returns an interactive frame.
  *   @param iParent the parent for output frame.
  *   @param iImpotedDoc pointer to the imported document.
  *   @return the frame to display.
  */
    virtual CATDlgFrame* GetUserFrame(CATDialog * iParent, CATDocument* iImportedDoc) = 0;

	/**
  * Implements the OK action.
  */
    virtual HRESULT Accept() = 0;

	/**
  * Get values for customisation.
  *   @param oValues array of values.
  */
    virtual HRESULT GetValues(CATSafeArrayVariant* & oValues) = 0;

	/**
  * Set Values for customisation.
  *   @param iValues array of values.
  */
    virtual HRESULT SetValues(CATSafeArrayVariant* iValue) = 0;

  /**
  * Import in order to launch the import specific code.
  *   @param iFileToImport
  *      input the CATDocument to import.
  *   @param iAnalysisDocument
  *      input the current CATDocument in which the import is done.
  */
	  virtual HRESULT Import (CATDocument * iFileToImport , CATDocument *iAnalysisDocument) = 0;
};

CATDeclareHandler(CATISamImportDefine, CATBaseUnknown);

#endif

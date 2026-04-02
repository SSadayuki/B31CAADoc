// COPYRIGHT DASSAULT SYSTEMES 1999
//===================================================================
//
// CATSamDocumentTools.h
// Header definition of CATSamDocumentTools
//===================================================================
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */
//===================================================================
#ifndef CATSamDocumentTools_H
#define CATSamDocumentTools_H

#include "IUnknown.h"            // HResult def
#include "CATAnalysisToolkit.h"
#include "CATInterfaceEvents.h"

class CATDocument;
class CATUnicodeString;

/**
 * General tools for document management.
 */

class ExportedByCATAnalysisToolkit CATSamDocumentTools
{

  public:

/**
 * Retrieves the File path of a CATDocument.
 * If the Document is defined as "Non CATIA Document" and this comes from ENOVIA, 
 * a local temporary projection is done on the file system.
 * @param pDoc The document.
 * @param oPath The document path.
 * Return S_OK if the document path is found
 */
    static HRESULT GetFileStorage(CATDocument* pDoc, CATUnicodeString & oPath);

/**
 * Toolkit in order to implement Save Management of "Non CATIA Document".
 * Supports only "Non CATIA Document" in File environnement.
 * Should be called in your implementation of @href CATIPersistent#SaveAs .
 * @param pDoc The document.
 * @param iCopyName The new path.
 * Return S_OK if the document is saved
 */

    static HRESULT SupportFileSaveMgt(CATDocument* pDoc, CATUnicodeString & iCopyName);
 
/**
 * Add a callback to be warned by the renaming of a document
 * Supports only File environnement.
 * @param iThis 
 *	 A pointer to the object that is expected to publish the event, your own document.
 * @param iClientData
 *	 A pointer to the analysis document that manages your external file.
 * @param iMethodToCall 
 *	 The subscriber's method to call whenever the Renaming event is published.
 * Return S_OK if the document is saved
 */

    static CATCallback AddRenameCB(CATBaseUnknown *iThis, CATBaseUnknown *iAnalysisDoc, CATSubscriberMethod iMethodToCall);

  private:
    
    CATSamDocumentTools();
  
  /**
  * @return S_OK   if the environment of a CATDocument is PDM based (ENOVIA V5, VPM V4)
  */
  static HRESULT IsAPDMDocument(CATDocument * pDoc);


};
//-----------------------------------------------------------------------
#endif

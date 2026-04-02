#ifndef CATIDrwImportDocument_H
#define CATIDrwImportDocument_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATDocument.h"

#include "DraftingItfCPP.h"
#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDraftingItfCPP IID IID_CATIDrwImportDocument ;
#else
extern "C" const IID IID_CATIDrwImportDocument ;
#endif

/**
 * Interface to manage data import in a drafting document.
 * <br>Use This interface for creating a Drafting document, but reroot the CATInit, and 
 *        CATIDrwDocumentEdit methods.
 */


class ExportedByDraftingItfCPP CATIDrwImportDocument : public CATBaseUnknown
{
   CATDeclareInterface;
   
public:

   /**
   * Creates of a "ready to use" drafting document.
   * @param iStandard
   *   Specifies the  Drafting standard : ISO,JIS,ANSI
   * @return
   *   The new drafting document.
   * <br><b>Lifecycle rules deviation</b>: Do not release the document.
   */
   
   virtual CATDocument*  CreateDraftingDocument(const CATUnicodeString iStandard)=0;
  



};
CATDeclareHandler(CATIDrwImportDocument, CATBaseUnknown);
#endif


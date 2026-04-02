/* -*-c++-*- */

#ifndef CATIExchangeInputDocument_H
#define CATIExchangeInputDocument_H

// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

//===================================================================
//
// 09/12/02: ABM: Creation
// 17/03/03: MAX: CAA Documentation 
// 01/06/04: DFB: New methode for traces : SetLogError
//
//===================================================================

#include "CATBaseUnknown.h"
#include "DataExchangeKernelItfCPP.h"
#include "CATIExchangeRepresentation.h" 
#include "CATExchangeTypeDefs.h"  

class CATUnicodeString;
class CATIExchangeLogError;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeKernelItfCPP IID IID_CATIExchangeInputDocument;
#else
extern "C" const IID IID_CATIExchangeInputDocument ;
#endif

/**
 * Interface to exchange input documents.
 * <b>Role</b>: This interface describes the XCAD input document.
 * The input document represents a CAD document to be converted Thru XCAD.
 * This interface gives access to the document (filepath, attributes), and to representations
 * which are the "units" of the document contents to be exchanged.
 * <br>Available from CATIA V5R11.
 * @see CATIExchangeOutputDocument
 */
class ExportedByDataExchangeKernelItfCPP CATIExchangeInputDocument: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Initializes transaction.
 * @param iFile
 *				Set the filepath.
 */
	virtual HRESULT Initialize(const FilePath& iFile) = 0;
  
/**
 * Queries the document for a given data representation.
 * In case of multiple documents, request of Brep on product document made of heterogeneous formats
 * will require the document to flatten its assembly representation as a single Brep (Use case to define and confirm).
 * @param iRepresentationName
 *				Set the document representation to be queried. 
 * @param oExportRep
 *				Get the export representation, NULL_var if unavailable.  
 */
	virtual HRESULT GetRepresentation  (const CATUnicodeString& iRepresentationName, CATIExchangeRepresentation_var& oExportRep) =0;

/**
 * Retrieves the document's filepath.
 * (A document may be a file on the file system).
 * @param oDocFileName
 *				Get the document's filepath. 
 */
	virtual HRESULT GetDocumentPATH(FilePath& oDocFileName ) = 0;

/**
 * Retrieves the document's URL.
 * (A document may be an URL).
 * @param oDocURL
 *				Get the document's URL. 
 */
	virtual HRESULT GetDocumentURL( URL& oDocURL ) = 0; 

/**
 * Retrieves the document's description.
 * This information is to be used in case there is a title given to the document.
 * <br>Use Case: this is used in IGES to support the product description in the header.
 * @param oDescription
 *				Get the document's description. 
 */
	virtual HRESULT GetDocumentDescription( CATUnicodeString& oDescription ) = 0;

/**
 * Initialize the Log Error File.
 * @param iLogError
 *				Set the LogError. 
 */
	virtual HRESULT SetLogError(CATIExchangeLogError* iLogError) = 0;

/**
 * Ends the transaction on the document.
 */
	virtual HRESULT Close() = 0;

/**
 * Set an XCAD option.
 * @param iOptionName
 *				Set the option name.
 * @param iOptionValue
 *				Set the option value.
 */
	virtual HRESULT SetOption(const CATUnicodeString& iOptionName, const CATUnicodeString& iOptionValue) = 0;

};
CATDeclareHandler(CATIExchangeInputDocument,CATBaseUnknown);

#endif

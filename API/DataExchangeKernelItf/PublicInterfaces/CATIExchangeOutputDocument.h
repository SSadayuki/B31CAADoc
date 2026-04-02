/* -*-c++-*- */

#ifndef CATIExchangeOutputDocument_H
#define CATIExchangeOutputDocument_H

// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

//===================================================================
//
// 09/12/02: ABM: Creation
// 10/03/03: ABM: _var& in Signature of Import 
// 17/03/03: MAX: CAA Documentation 
// 25/04/03: DFB: SaveAs method activation
//
//===================================================================

#include "CATExchangeTypeDefs.h"
#include "CATBaseUnknown.h"
#include "DataExchangeKernelItfCPP.h"
#include "CATListOfCATUnicodeString.h"
#include "XCADOptions.h"

class CATIExchangeInputDocument_var;
class CATIExchangeLogError;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByDataExchangeKernelItfCPP IID IID_CATIExchangeOutputDocument;
#else
extern "C" const IID IID_CATIExchangeOutputDocument ;
#endif

/**
 * Interface to exchange output documents.
 * <b>Role</b>: This interface describes the XCAD output document.
 * The output document represents a CAD translator. It encloses
 * the target document created thru the XCAD conversion.
 * <br>Available from CATIA V5R11.
 * @see CATIExchangeInputDocument
 */
class ExportedByDataExchangeKernelItfCPP CATIExchangeOutputDocument: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
 * Initializes transaction.
 */
	virtual HRESULT Initialize() = 0;

/**
 * Sets the options for the XCAD conversion in 2 lists of same size.
 * @param iOptionNames
 *				Set the option names.
 * @param iOptionValues
 *				Set the option values.
 */
	virtual HRESULT SetConversionOptions(const CATListOfCATUnicodeString& iOptionNames, const CATListOfCATUnicodeString& iOptionValues) = 0;

/**
 * Gets an option status
 * @param iOptionName
 *				Set the option name.
 * @param oOptionStatus
 *				Get the option status.
 * @param oOptionMessage
 *				Get an additional message.
 */
	virtual HRESULT GetOptionStatus(const CATUnicodeString& iOptionName, XCADOptionStatus& oOptionStatus, CATUnicodeString& oOptionMessage) = 0;

/**
 * Start the data translation mechanism.
 * @param iDocument
 *				Set the document to be translated.
 */
	virtual HRESULT Import(CATIExchangeInputDocument_var& iDocument) = 0;
    // ABM Comment For review: End of Import must free all resources if possible Except Mapping

/**
 * Saves the document to a given file pointer.
 * @param iFile
 *				Set the filepath.
 * @param iFileType
 *				Set the file type.
 */
	virtual HRESULT SaveAs(const FilePath* iFile) = 0;   

/**
 * Ends the transaction on the document.
 */
	virtual HRESULT Close() = 0;

/**
 * Initialize the Log Error File.
 * @param iLogError
 *				Set the LogError. 
 */
	virtual HRESULT SetLogError(const CATIExchangeLogError* iLogError) = 0;

};
CATDeclareHandler(CATIExchangeOutputDocument,CATBaseUnknown);

#endif

// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2004

//===================================================================
//
// 11/10/04: MAX: Creation
//
//===================================================================

/**
 * @CAA2Level L0
 * @CAA2Usage U0
 */

#ifndef CATExtIExchangeOutputDocument_H
#define CATExtIExchangeOutputDocument_H


#include "PartDesignDataImport.h"
#include "CATBaseUnknown.h"
#include "CATUnicodeString.h"
#include "CATListOfCATUnicodeString.h"
#include "CATListOfInt.h"
#include "CATBooleanDef.h"
#include "XCADOptions.h"
#include "CATIExchangeOutputDocument.h"

class CATIExchangeInputDocument_var;
class CATIExchangeLogError;

/**
 * Adapter for CATIExchangeOutputDocument interface.
 *
 * <b>Role</b>: This class provides default implementations for any implementation of interface CATIExchangeOutputDocument.
 * That means one should derive from this class to implement an output document component.
 *
 * Phase I : this adapter deals with the XCAD options
 */
class ExportedByPartDesignDataImport CATExtIExchangeOutputDocument: public CATBaseUnknown
{

public:

	// Constructors and destructor
	// ---------------------------
	CATExtIExchangeOutputDocument ();
	virtual ~CATExtIExchangeOutputDocument ();

	// Implementation of CATIExchangeOutputDocument interface
	virtual HRESULT SetConversionOptions(const CATListOfCATUnicodeString& iOptionNames, const CATListOfCATUnicodeString& iOptionValues);
	virtual HRESULT GetOptionStatus(const CATUnicodeString& iOptionName, XCADOptionStatus& oOptionStatus, CATUnicodeString& oOptionMessage);
	virtual HRESULT SetLogError (const CATIExchangeLogError* iLogError) ;

protected :

	// Store options concerning the output document and propagate others to the input document
	virtual HRESULT DecodeGenericOptions(CATIExchangeInputDocument_var& iDocument);
	virtual HRESULT ManageOptions(CATIExchangeInputDocument_var& iDocument) = 0;

	CATIExchangeLogError*		_pLogError;	// The error log file

	// The lists containing the famous options
	CATListOfCATUnicodeString	_listOptionNames;
	CATListOfCATUnicodeString	_listOptionValues;
	CATListOfInt				_listOptionStatus;

	// The output document specific options
	short						_OPTGeometryType;	// Value 1 for exact, 2 for facetted
	CATUnicodeString			_strOPTGeneratedDataDirectory;
	CATBoolean					_bOPTCoordSysInTessMode;
	CATBoolean					_bOPTLODInTessMode;
	CATBoolean					_bOPTOpenSurfaces;

private:
	// The copy constructor and the equal operator must not be implemented
	// -------------------------------------------------------------------
	CATExtIExchangeOutputDocument (CATExtIExchangeOutputDocument &);
	CATExtIExchangeOutputDocument& operator=(CATExtIExchangeOutputDocument&);

	void TransmitOptionToInputDoc(CATIExchangeInputDocument_var& iDocument, char* iString);

};

#endif

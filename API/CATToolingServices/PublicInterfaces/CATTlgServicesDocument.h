// COPYRIGHT DASSAULT SYSTEMES 2000

/**
  * @CAA2Level L0
  * @CAA2Usage U0
  */

//=============================================================================
//								   
// CATTlgServicesDocument :						   
// Implementation of different services of CATTlgServicesDocument
//
//=============================================================================
//	03/05/20022 : fdm; Creation 
//=============================================================================
//
#ifndef CATTlgServicesDocument_h
#define CATTlgServicesDocument_h

#include "CATTlgServices.h"

#include "CATUnicodeString.h"

/**
 * Base class to manage the document path 
 * <b>Role</b>: This service is used to verify the file document path 
 */

class ExportedByCATTlgServices CATTlgServicesDocument
{
	public:

// ===========================================================================
   /**
	* FindFileDocumentPath : Verify if the document path exist
	*   @param iDocumentPath
	*		the document path
	*   @return
	*		An HRESULT value. 
	*		<br><b>Legal values</b>:
	*		<dl>
	*			<dt>S_OK</dt>
	*			<dd>if the document was sucessfully found </dd>
	*			<dt>E_FAIL </dt>
	*			<dd>if the document couldn't be found </dd>
	*/
// ===========================================================================

static HRESULT FindFileDocumentPath(const CATUnicodeString &iDocumentPath);

	private:

};

#endif













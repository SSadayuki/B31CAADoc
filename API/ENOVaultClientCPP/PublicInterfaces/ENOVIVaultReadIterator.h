#include "VaultClientAPP.h"
#ifndef ENOVIVaultReadIterator_h
#define ENOVIVaultReadIterator_h

// =================================================================
// COPYRIGHT DASSAULT SYSTEMES 2000
// =================================================================
// VPM (c) Copyright Dassault Systemes 2000
// -----------------------------------------------------------------
//
// Contents: ENOVIVaultReadIterator, process client side.
//
// =================================================================
// Historic
// Creation : 15/09/2000  OJH
// =================================================================

/**
 *  @CAA2Level L1
 *  @CAA2Usage U1
 */ 

//-----------------------------------------------------------------------------
// INCLUDES:
//-----------------------------------------------------------------------------
#include "CATUnicodeString.h"

#include "CATListPV.h"
#include "ENOVIVaultDocumentColl.h"
#include "ENOVIVaultError.h"

/**
 * This class supplies methods to read collections of document.
 * <b>role</b>: In combination with the cache mechanism, it provides significants performance
 * improvements when reading collection of documents 
 *
 * @author    Alain   BESSEDE
 * @author    Olivier JOSEPH
 * @version   V5R6
 */

class  ExportedByENOVIVaultClientAPP  ENOVIVaultReadIterator
{
friend class ENOVIVaultResultSet;
friend class ENOVIVaultSession;
friend class ENOVIVaultUserSession;
friend class ENOVIVaultDocumentSession;

protected :

   ENOVIVaultDocumentColl  _docs;
   int                     _cursor;
   int                     _LEN;

public :

/**
 * Constructs an Iterator
 */

ENOVIVaultReadIterator();

/**
 * Constructs an iterator to be used with the document collection given as input.
 * @param iDocColl [in] - Document collection to read
 */

ENOVIVaultReadIterator (const ENOVIVaultDocumentColl & iDocColl);

~ENOVIVaultReadIterator();

/**
 * Tells if there are remaining documents to read.
 * @return CATTrue, CATFalse
 */

CATBoolean hasNext();

/**
 * Starts the read operation.
 * This method must only be called once for a given iterator
 * @param oVaultError [out] - Details about the error.
 */
 
HRESULT startRead (ENOVIVaultError & oVaultError);

/**
 * Fetches the next document to read.
 * The document can then be read using the appropriate methods 
 * on the @href ENOVIVaultDocument class
 * @param oNextDoc [out] - Next Document to read
 */

HRESULT next (ENOVIVaultDocument ** oNextDoc, ENOVIVaultError & oVaultError) ;

/**
 * Terminates the read operation.
 */

void endRead ();

};
#endif  

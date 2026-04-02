#include "ENOVIVaultClientAPP.h"
#ifndef ENOVIVaultResultSet_h
#define ENOVIVaultResultSet_h

// =================================================================
// COPYRIGHT DASSAULT SYSTEMES 2000
// =================================================================
// VPM (c) Copyright Dassault Systemes 2000
// -----------------------------------------------------------------
//
// Contents: ENOVIVaultResultSet, process client side.
//
// =================================================================
// Historic
// Creation : 20/11/2002  OJH
// =================================================================

/**
 *  @CAA2Level L1
 *  @CAA2Usage U1
 */

//-----------------------------------------------------------------------------
// INCLUDES:
//-----------------------------------------------------------------------------
#include "IUnknown.h"
#include "CATTypUtilit.h"

class ENOVIVaultError;
class ENOVIVaultDocument;
class ENOVIVaultReadIterator;
class ENOVIVaultUserSession;

/**
 * This class supplies methods to read collections of document.
 * <b>role</b>: In combination with the cache mechanism, it provides significants performance
 * improvements when reading collection of documents 
 *
 * @author    Olivier JOSEPH
 * @version   V5R10
 */

class  ExportedByENOVIVaultClientAPP  ENOVIVaultResultSet
{
friend class ENOVIVaultSession;
friend class ENOVIVaultUserSession;
friend class ENOVIVaultDocumentSession;

protected :
   SEQUENCE_octet           _OId;
   int                      _nvFetchSize;
   CATBoolean               _bvAddDocToColl;
   ENOVIVaultReadIterator * _pDocReadIterator;
   ENOVIVaultUserSession  * _pFatherUserSession;

private :
/**
 * Copy Constructor
 */
ENOVIVaultResultSet(const ENOVIVaultResultSet & iENOVIVaultResultSet);

/**
 * = Operator
 */
const ENOVIVaultResultSet & operator = (const ENOVIVaultResultSet & iENOVIVaultResultSet);

public :
/**
 * Default constructor
 */
ENOVIVaultResultSet();

/**
 * Constructs a result set.
 * @param invFetchSize [in] - fetch size.
 * @param ipFatherUserSession [in] - Vault Client father user session.
 * @param ipDocReadIterator [in] - Vault Document collection first fetch.
 */
ENOVIVaultResultSet (int                      invFetchSize,
                     ENOVIVaultUserSession  * ipFatherUserSession,
                     ENOVIVaultReadIterator * ipDocReadIterator,
                     CATBoolean               ibvAddDocToColl = TRUE);

/**
 * Destructor
 */
virtual ~ENOVIVaultResultSet();


/**
 * Fetches the next document to read.
 * @param oNextDoc [out] - Next Document to read, NULL if no more documents available.
 */
HRESULT next (ENOVIVaultDocument ** oNextDoc, ENOVIVaultError & oVaultError) ;

/**
 * Terminates the read operation.
 */
HRESULT close();

};
#endif  

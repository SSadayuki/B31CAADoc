#include "ENOVIVaultClientAPP.h"

#ifndef _ENOVIVaultUserSession_h
#define _ENOVIVaultUserSession_h

// =================================================================
// COPYRIGHT DASSAULT SYSTEMES 2000
// =================================================================
// VPM (c) Copyright Dassault Systemes 2000
// -----------------------------------------------------------------
//
// Contents: ENOVIVaultUserSession, process client side.
//
// =================================================================

/**
 *  @CAA2Level L1
 *  @CAA2Usage U1
 */ 

//-----------------------------------------------------------------------------
// INCLUDES:
//-----------------------------------------------------------------------------

#include "CATTypUtilit.h"
#include "CATListOfCATUnicodeString.h"

#include "SEQUENCE_octetColl.h"
#include "ENOVIVaultDocument.h"
#include "ENOVIVaultDocumentColl.h"
#include "VaultCacheInfo.h"
#include "VaultCacheInfoColl.h"
#include "ENOVIVaultError.h"


class ENOVIVaultSession;
class ENOVIVaultResultSet;
class ENOVIVaultReadIterator;
class VSUserSessionRMI;
class CATHttpClient;

//-----------------------------------------------------------------------------
// CLASS: ENOVIVaultUserSession
//-----------------------------------------------------------------------------

/**
 * This class represents a connection to a given Vault server. 
 * <b>role</b>: This class manages the connection to a given Vault server. It enables to create and delete documents
 * @version   V5R8
 */

class  ExportedByENOVIVaultClientAPP  ENOVIVaultUserSession
{
friend class ENOVIVaultSession;
friend class ENOVIVaultDocument;

public :

/**
 * @nodoc
 */
   ENOVIVaultUserSession();

/**
 * @nodoc
 */
   ENOVIVaultUserSession(const ENOVIVaultSession  * ipFatherSession,
                         const CATUnicodeString   & isvVaultAliasName,
                         const SEQUENCE_octet     & ibvContextOId,
                         const CATUnicodeString   & isvReadENOVIVaultName,
                         const CATUnicodeString   & isvReadENOVIVaultHostName,
                         const int                  invReadENOVIVaultListenerPort,
                               VSUserSessionRMI   * ipReadVSUserSessionRMI,
                         const CATUnicodeString   & isvWriteENOVIVaultName,
                         const CATUnicodeString   & isvWriteENOVIVaultHostName,
                         const int                  invWriteENOVIVaultListenerPort,
                               VSUserSessionRMI   * ipWriteVSUserSessionRMI);



//
// Documents managment methods
//
public :
/**
 * @nodoc
 * Creates a new document.
 * @param iDocOId [in] - Document Object Identifier.
 * @param iName [in] - Document name.
 *     <br><b>Legal Values</b>: <tt>iDescription</tt> may be set to "".
 * @param iDescription [in] - Description of the document content.
 *     <br><b>Legal Values</b>: <tt>iDescription</tt> may be set to "".
 * @param iMimeType [in] - Document mime type.
 *     <br><b>Legal Values</b>: <tt>iMimeType</tt> may be set to "".
 * @param iOriginalName [in] - Document original name.
 *     <br><b>Legal Values</b>: <tt>iOriginalName</tt> may be set to "".
 * @param iOriginalPath [in] - Document original path.
 *     <br><b>Legal Values</b>: <tt>iOriginalPath</tt> may be set to "".
 * @param iOriginalHost [in] - Document original host.
 *     <br><b>Legal Values</b>: <tt>iOriginalHost</tt> may be set to "".
 * @param oppDocument [out] - newly created vault document.
 * @param oVaultError [out] - Details about the error.
 */
HRESULT createDocument ( SEQUENCE_octet      & iDocOId,
                         CATUnicodeString    & iName,
                         CATUnicodeString    & iDescription,
                         CATUnicodeString    & iMimeType,
                         CATUnicodeString    & iOriginalName,
                         CATUnicodeString    & iOriginalPath,
                         CATUnicodeString    & iOriginalHost,
                         ENOVIVaultDocument ** oppDocument,
                         ENOVIVaultError     & oVaultError);


/**
 * Creates a new document.
 * @param iName [in] - Document name.
 *     <br><b>Legal Values</b>: <tt>iDescription</tt> may be set to "".
 * @param iDescription [in] - Description of the document content.
 *     <br><b>Legal Values</b>: <tt>iDescription</tt> may be set to "".
 * @param iMimeType [in] - Document mime type.
 *     <br><b>Legal Values</b>: <tt>iMimeType</tt> may be set to "".
 * @param iOriginalName [in] - Document original name.
 *     <br><b>Legal Values</b>: <tt>iOriginalName</tt> may be set to "".
 * @param iOriginalPath [in] - Document original path.
 *     <br><b>Legal Values</b>: <tt>iOriginalPath</tt> may be set to "".
 * @param iOriginalHost [in] - Document original host.
 *     <br><b>Legal Values</b>: <tt>iOriginalHost</tt> may be set to "".
 * @param oppDocument [out] - newly created vault document.
 * @param oVaultError [out] - Details about the error.
 */
HRESULT createDocument ( CATUnicodeString    & iName,
                         CATUnicodeString    & iDescription,
                         CATUnicodeString    & iMimeType,
                         CATUnicodeString    & iOriginalName,
                         CATUnicodeString    & iOriginalPath,
                         CATUnicodeString    & iOriginalHost,
                         ENOVIVaultDocument ** oppDocument,
                         ENOVIVaultError     & oVaultError);

/**
 * Removes the supplied document.
 * Beware to reset iDocument pointer to NULL after method use because<br>
 * this method delete the pointed document object.
 * @param ipDocument [in] - pointer on the document to remove.
 * @param oVaultError [out] - Details about the error.
 */
   HRESULT removeDocument (const ENOVIVaultDocument * ipDocument,
			                        ENOVIVaultError    & oVaultError);

/**
 * Unbinds a document.
 * Deletes the @href ENOVIVaultDocument object on the client. Does not remove the actual document on the server.
 * @param iURL [in] - Document to unbind.
 * @param iDocument [in] - @href ENOVIVaultDocument object to remove.
 * @param oVaultError [out] - Details about the error.
 */
   HRESULT unBindDocument (const ENOVIVaultDocument * ipDocument,
			                        ENOVIVaultError    & oVaultError);


/**
 * @nodoc
 * Removes the supplied document proxy from the document proxy collection.
 * @param ipDocument [in] - pointer on the document to remove.
 * @param oVaultError [out] - Details about the error.
 */
   HRESULT removeDocProxyFromColl (const ENOVIVaultDocument * ipDocument,
			                                ENOVIVaultError    & oVaultError);


/**
 * Supplies the Document content pertainning to the <code>iUUD</code> parameter.
 * @param iOIdDoc [in] - vault document identifier (OID).
 * @param oppDocument [out] - ENOVIVaultDocument object.
 *     <br><b>Lifecycle rules deviation</b>: <tt>oppDocument</tt> parameter must only be dealocated using the @href #unBindDocument method.
 * @param oDocContent [out] - Document content.
 *     <br><b>You are supposed to delete oDocContent object after user.</b>
 * @param oVaultError [out] - Details about the error.
 */
   HRESULT getDocContent(const SEQUENCE_octet       & iOIdDoc,
                               ENOVIVaultDocument  ** oppDocument,
                               SEQUENCE_octet       & oDocContent,
                               ENOVIVaultError      & oVaultError);

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 */
   HRESULT getDocContent(const SEQUENCE_octet       & iOIdDoc,
	                     const CATBoolean           & iNotMutableDoc,
                               ENOVIVaultDocument  ** oppDocument,
                               SEQUENCE_octet       & oDocContent,
                               ENOVIVaultError      & oVaultError);



/**
 * @nodoc
 * Supplies the Document pertainning to the <code>iUUD</code> parameter in open read mode.
 * @param iOIdDoc [in] - vault document identifier (OID).
 * @param oppDocument [out] - ENOVIVaultDocument object.
 *     <br><b>Lifecycle rules deviation</b>: <tt>oppDocument</tt> parameter must only be dealocated using the @href #unBindDocument method.
 * @param oVaultError [out] - Details about the error.
 * @since V5R14SP3
 */
   HRESULT getDocOpenRead(const SEQUENCE_octet       & iOIdDoc,
                                ENOVIVaultDocument  ** oppDocument,
                                ENOVIVaultError      & oVaultError);

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 */
   HRESULT getDocOpenRead(const SEQUENCE_octet       & iOIdDoc,
	                      const CATBoolean           & iNotMutableDoc,
                                ENOVIVaultDocument  ** oppDocument,
                                ENOVIVaultError      & oVaultError);

/**
 * Retrieves the document on ENOVIVault server pertainning to the supplied Id.
 * @param iDocumentIdentifier [in] - vault document identifier (OID).
 * @param oDocument [out] - vault document.
 * @param oVaultError [out] - Details about the error.
 */
   HRESULT getDocument  (const SEQUENCE_octet      & iDocumentIdentifier,
                               ENOVIVaultDocument ** oDocument,
                               ENOVIVaultError     & oVaultError);

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 */
   HRESULT getDocument  (const SEQUENCE_octet      & iDocumentIdentifier,
	                     const CATBoolean           & iNotMutableDoc,
                               ENOVIVaultDocument ** oDocument,
                               ENOVIVaultError     & oVaultError);


/**
 * Retrieves a documents collection on ENOVIVault server pertainning to the supplied Id collection.
 * @param iDocumentIdentifierColl [in] - vault document identifier collection.
 * @param oDocumentColl [out] - vault documents collection.
 * @param oVaultError [out] - Details about the error.
 */
   HRESULT getDocuments (const SEQUENCE_octetColl     & iDocumentIdentifierColl,
                               ENOVIVaultReadIterator & oDocumentColl,
                               ENOVIVaultError        & oVaultError) const;

/**
 * @nodoc
 * Retrieves all documents.
 * @param invFetchSize [in] - gives to Vault Server a hint as to the number of document to be fetched.
 * @param oppDocResultSet [out] - vault document result set.
 * @param oVaultError [out] - Details about the error.
 * @param ibvAddDocToColl [in] - specifies if documents should be added to collection or not.
 */
   HRESULT getDocuments (int                      invFetchSize,
                         ENOVIVaultResultSet   ** oppDocResultSet,
                         ENOVIVaultError        & oVaultError,
                         CATBoolean               ibvAddDocToColl = TRUE);

/**
 * @nodoc
 * Retrieves the documents collection of ENOVIVault documents already loaded from ENOVIVault server.
 * @param oDocumentColl [out] - vault documents collection.
 * @param oVaultError [out] - Details about the error.
 */
/*
   HRESULT getDocumentColl (ENOVIVaultDocumentColl ** oDocumentColl,
			    ENOVIVaultError         & oVaultError) ;

*/


/**
 * Supplies the ENOVIVaultUserSession Object Identifier.
 * @param oUserSessionOId [out] - ENOVIVaultUserSession Object Identifier.
 */
   HRESULT getOId(SEQUENCE_octet & oUserSessionOId) const;


/**
 * Supplies the CATlet context Object Identifier.
 * @param oCATCtxtOId [out] - CATlet context Object Identifier.
 */
   HRESULT getCATCtxtOId(SEQUENCE_octet & oCATCtxtOId) const;


/**
 * Supplies the ENOVIVaultUserSession name.
 * @param oName [out] - ENOVIVaultUserSession name.
 */
   HRESULT getName(CATUnicodeString & oName) const;


/**
 * Supplies the ENOVIVault Server alias name.
 * @param oName [out] - ENOVIVault Server alias name.
 */
   HRESULT getVaultAliasName (CATUnicodeString & oName) const;

/**
 * Supplies the father ENOVIVaultSession object.
 * @param oENOVIVaultSession [out] - double pointer on the father ENOVIVaultSession.
 */
   HRESULT getFatherVaultSession(ENOVIVaultSession ** oENOVIVaultSession) const;

/**
 * Supplies the current Vault Server timestamp.
 * @param oCurrentTimestamp [out] - remote Vault Server current timestamp.
 * @param oVaultError [out] - Details about the error.
 */
   HRESULT getCurrentTimestamp(CATUnicodeString & oCurrentTimestamp,
                               ENOVIVaultError  & ve) const;

public :
/**
 * @nodoc
 */
   ~ENOVIVaultUserSession();
/**
 * @nodoc
 * Abort all the work done in the current UserSession and do not reinit<br>
 * the UserSession after that.
 * @return S_OK, E_FAIL
 */
   HRESULT close(ENOVIVaultError & oVaultError);


/**
 * @nodoc
 * Abort in database (Rollback) all the work done in the current UserSession and reinit<br>
 * the UserSession after that.
 * @return S_OK, E_FAIL
 */
   HRESULT abort(ENOVIVaultError & oVaultError);


/**
 * @nodoc
 * Undo the Current command if it exist. Do not start a new one.
 * @return S_OK, E_FAIL
 */
   HRESULT undo(ENOVIVaultError & oVaultError);


//
// Low level transaction managment methods
//

/**
 * @nodoc
 * Prepare all the work done during the UserSession (execute orders on database but no commit).
 * @return S_OK, E_FAIL
 */
   HRESULT prepare(ENOVIVaultError & oVaultError);


/**
 * @nodoc
 * unPrepare all the work done during the UserSession (rollback orders on database but no commit).
 * @return S_OK, E_FAIL
 */
   HRESULT unPrepare(ENOVIVaultError & oVaultError);


/**
 * @nodoc
 * Commit all the work done during the UserSession (a commit is done on database).
 * @return S_OK, E_FAIL
 */
   HRESULT commit(ENOVIVaultError & oVaultError);

//
// Attributes access
//
public :

/**
 * @nodoc
 * Supplies the ENOVIVault Server name for Read.<br>
 * @param oName [out] - ENOVIVault Server name for Read.
 * @return S_OK, E_FAIL
 */
   HRESULT getReadVaultName (CATUnicodeString & oName) const;


/**
 * @nodoc
 * Supplies the ENOVIVault Server HostName for Read.<br>
 * @param oHostName [out] - ENOVIVault Server HostName for Read.
 * @return S_OK, E_FAIL
 */
   HRESULT getReadVaultHostName (CATUnicodeString & oHostName) const;


/**
 * @nodoc
 * Supplies the ENOVIVault Server listener port for Read.<br>
 * @param oPortNumber [out] - ENOVIVault Server listener port for Read.
 * @return S_OK, E_FAIL
 */
   HRESULT getReadVaultListenerPort (int & oPortNumber) const;


/**
 * @nodoc
 * Supplies the ENOVIVault Server persistency mode for Read.<br>
 * @param oMode [out] - ENOVIVault Server persistency mode for Read.
 * @return S_OK, E_FAIL
 */
   HRESULT getReadPersistencyMode (CATUnicodeString & oMode) const;


/**
 * @nodoc
 * Supplies the collection of supported Read file transfert protocols.<br>
 * @param oProtocols [out] - collection of Read file transfert protocols.
 * @return S_OK, E_FAIL
 */
   HRESULT getReadSupportedProtocols (CATListOfCATUnicodeString & oProtocols) const;

/**
 * @nodoc
 */
   HRESULT getHTTPServerHost (CATUnicodeString & oHTTPServerHost,
                              ENOVIVaultError  & oVaultError);

/**
 * @nodoc
 */
   HRESULT getHTTPServerPort (CATUnicodeString & oHTTPServerPort,
                              ENOVIVaultError  & oVaultError);

/**
 * @nodoc
 * Supplies the current Read file transfert protocol.<br>
 * @param oProtocol [out] - Current Read file transfert protocol.
 * @return S_OK, E_FAIL
 */
   HRESULT getReadProtocol (CATUnicodeString & oProtocol,
                            ENOVIVaultError  & oVaultError);

/**
 * @nodoc
 * Supplies the current Write file transfert protocol.<br>
 * @param oProtocol [out] - Current Write file transfert protocol.
 * @return S_OK, E_FAIL
 */
   HRESULT getWriteProtocol (CATUnicodeString & oProtocol,
                             ENOVIVaultError  & oVaultError);


/**
 * @nodoc
 */
   HRESULT getReadVSUserSessionRMI(VSUserSessionRMI ** oppReadVSUserSessionRMI);
   
/**
 * @nodoc
 */
   HRESULT getWriteVSUserSessionRMI(VSUserSessionRMI ** oppWriteVSUserSessionRMI);


/**
 * @nodoc
 * Supplies the ENOVIVault Server name for Write.<br>
 * @param oName [out] - ENOVIVault Server name for Write.
 * @return S_OK, E_FAIL
 */
   HRESULT getWriteVaultName (CATUnicodeString & oName) const;


/**
 * @nodoc
 * Supplies the ENOVIVault Server HostName for Write.<br>
 * @param oHostName [out] - ENOVIVault Server HostName for Write.
 * @return S_OK, E_FAIL
 */
   HRESULT getWriteVaultHostName (CATUnicodeString & oHostName) const;


/**
 * @nodoc
 * Supplies the ENOVIVault Server listener port for Write.<br>
 * @param oPortNumber [out] - ENOVIVault Server listener port for Write.
 * @return S_OK, E_FAIL
 */
   HRESULT getWriteVaultListenerPort (int & oPortNumber) const;


/**
 * @nodoc
 * Supplies the ENOVIVault Server persistency mode for Write.<br>
 * @param oMode [out] - ENOVIVault Server persistency mode for Write.
 * @return S_OK, E_FAIL
 */
   HRESULT getWritePersistencyMode (CATUnicodeString & oMode) const;


/**
 * @nodoc
 * Supplies the collection of supported Write file transfert protocols.<br>
 * @param oProtocols [out] - collection of Write file transfert protocols.
 * @return S_OK, E_FAIL
 */
   HRESULT getWriteSupportedProtocols (CATListOfCATUnicodeString & oProtocols) const;


/**
 * @nodoc
 * Set the father ENOVIVaultSession.
 * @param ipENOVIVaultSession [in] - pointer on the father ENOVIVaultSession.
 * @return S_OK, E_FAIL
 */
   HRESULT setFatherVaultSession(ENOVIVaultSession * ipENOVIVaultSession);

/**
 * @nodoc
 * Set the ENOVIVaultUserSession Object Identifier.
 * @param iUserSessionOId [in] - ENOVIVaultUserSession Object Identifier.
 * @return S_OK, E_FAIL
 */
   HRESULT setOId(const SEQUENCE_octet & iUserSessionOId);


/**
 * @nodoc
 * Set the ENOVIVaultUserSession name.
 * @param iName [in] - ENOVIVaultUserSession name.
 * @return S_OK, E_FAIL
 */
   HRESULT setName(const CATUnicodeString & iName);


/**
 * @nodoc
 * Set the ENOVIVault Server alias name.<br>
 * @param iName [in] - ENOVIVault Server alias name.
 * @return S_OK, E_FAIL
 */
   HRESULT setVaultAliasName (const CATUnicodeString & iName);
   
/**
 * @nodoc
 */
   HRESULT setReadVSUserSessionRMI(VSUserSessionRMI  * ipReadVSUserSessionRMI);
   
/**
 * @nodoc
 */
   HRESULT setWriteVSUserSessionRMI(VSUserSessionRMI * ipWriteVSUserSessionRMI);

/**
 * @nodoc
 * Set the ENOVIVault Server name for Read.<br>
 * @param iName [in] - ENOVIVault Server name for Read.
 * @return S_OK, E_FAIL
 */
   HRESULT setReadVaultName (const CATUnicodeString & iName);


/**
 * @nodoc
 * Set the ENOVIVault Server HostName for Read.<br>
 * @param iHostName [in] - ENOVIVault Server HostName for Read.
 * @return S_OK, E_FAIL
 */
   HRESULT setReadVaultHostName (const CATUnicodeString & iHostName);


/**
 * @nodoc
 * Set the ENOVIVault Server listener port for Read.<br>
 * @param iPortNumber [in] - ENOVIVault Server listener port for Read.
 * @return S_OK, E_FAIL
 */
   HRESULT setReadVaultListenerPort (const int & iPortNumber);


/**
 * @nodoc
 * Set the ENOVIVault Server persistency mode for Read.<br>
 * @param iMode [in] - ENOVIVault Server persistency mode for Read.
 * @return S_OK, E_FAIL
 */
   HRESULT setReadPersistencyMode (const CATUnicodeString & iMode);


/**
 * @nodoc
 * Set the collection of supported Read file transfert protocols.<br>
 * @param iProtocols [in] - collection of Read file transfert protocols.
 * @return S_OK, E_FAIL
 */
   HRESULT setReadProtocol (const CATUnicodeString & iProtocol);


/**
 * @nodoc
 * Set the ENOVIVault Server name for Write.<br>
 * @param iName [in] - ENOVIVault Server name for Write.
 * @return S_OK, E_FAIL
 */
   HRESULT setWriteVaultName (const CATUnicodeString & iName);


/**
 * @nodoc
 * Set the ENOVIVault Server HostName for Write.<br>
 * @param iHostName [in] - ENOVIVault Server HostName for Write.
 * @return S_OK, E_FAIL
 */
   HRESULT setWriteVaultHostName (const CATUnicodeString & oHostName);


/**
 * @nodoc
 * Set the ENOVIVault Server listener port for Write.<br>
 * @param iPortNumber [in] - ENOVIVault Server listener port for Write.
 * @return S_OK, E_FAIL
 */
   HRESULT setWriteVaultListenerPort (const int & iPortNumber);


/**
 * @nodoc
 * Set the ENOVIVault Server persistency mode for Write.<br>
 * @param iMode [in] - ENOVIVault Server persistency mode for Write.
 * @return S_OK, E_FAIL
 */
   HRESULT setWritePersistencyMode (const CATUnicodeString & iMode);


/**
 * @nodoc
 * Set the collection of supported Write file transfert protocols.<br>
 * @param iProtocols [in] - collection of Write file transfert protocols.
 * @return S_OK, E_FAIL
 */
   HRESULT setWriteProtocol (const CATUnicodeString & iProtocol);

/**
 * @nodoc
 * @return S_OK, E_FAIL
 */
    HRESULT getUpdatedDocs(const CATUnicodeString        & iTimestamp,
                                 ENOVIVaultReadIterator *& opDocumentColl,
                                 CATUnicodeString        & oTimestamp,
                                 ENOVIVaultError         & oVaultError);

/**
 * @nodoc
 * @return S_OK, E_FAIL
 */
    HRESULT getUpdatedDocs(const SEQUENCE_octetColl      & iDocumentIdentifierColl,
                           const CATUnicodeString        & iTimestamp,
                                 ENOVIVaultReadIterator *& opDocumentColl,
                                 CATUnicodeString        & oTimestamp,
                                 ENOVIVaultError         & oVaultError);

/**
 * @nodoc
 * @return S_OK, E_FAIL
 */
    HRESULT getDeletedDocs(const CATUnicodeString        & iTimestamp,
                                 ENOVIVaultReadIterator *& opDocumentColl,
                                 CATUnicodeString        & oTimestamp,
                                 ENOVIVaultError         & oVaultError);

/**
 * @nodoc
 * @return S_OK, E_FAIL
 */
   HRESULT getDocsCacheInfo(const SEQUENCE_octetColl     & iDocumentIdentifierColl,
                                  VaultCacheInfoColl     & oVaultCacheInfoColl,
                                  ENOVIVaultError        & oVaultError);

/**
 * @nodoc
 * @return S_OK, E_FAIL
 */
    HRESULT restoreReadCnx(ENOVIVaultError & oVaultError);

/**
 * @nodoc
 * @return S_OK, E_FAIL
 */
    HRESULT restoreWriteCnx(ENOVIVaultError & oVaultError);

/**
 * @nodoc
 * Test the Vault User Session by creating, committing and reading <br>
 * a document in the Vault Server
 * @return S_OK, E_FAIL
 */
   HRESULT test(ENOVIVaultError & oVaultError);

/**
 * @nodoc
 * Test the Vault User Session by creating, committing, reading and removing <br>
 * a document in the Vault Server
 * @return S_OK, E_FAIL
 */
   HRESULT VTest(ENOVIVaultError & oVaultError);

/**
 * @nodoc
 * Marks the physical documents specifed by the URL collection as been protected from deletion.
 * @param iDocOIdColl [in] - ENOVIVaultDocument object identifier collection to mark.
 * @param iFrozeId [in] - froze identifier.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL
 */
   HRESULT frozeDocImg(const SEQUENCE_octetColl  & iDocOIdColl,
                       const SEQUENCE_octet      & iFrozeId,
                             ENOVIVaultError     & oVaultError);

/**
 * @nodoc
 * Unmarks the physical documents specifed by the URL collection as been protected from deletion.
 * @param iDocOIdColl [in] - ENOVIVaultDocument object identifier collection to unmark.
 * @param iFrozeId [in] - froze identifier.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL
 */
   HRESULT unfrozeDocImg(const SEQUENCE_octetColl  & iDocOIdColl,
                         const SEQUENCE_octet      & iFrozeId,
                               ENOVIVaultError     & oVaultError);


  protected :
  SEQUENCE_octet             _OId;
  SEQUENCE_octet             _CATCtxtOId;
  ENOVIVaultSession        * _FatherSession;
  CATUnicodeString           _UserSessionName;
  CATUnicodeString           _VaultAliasName;

  CATUnicodeString           _ReadVaultName;
  CATUnicodeString           _ReadVaultHostName;
   int                       _ReadVaultListenerPort;
  CATUnicodeString           _ReadPersistencyMode;
  VSUserSessionRMI         * _ReadRMI;
  
  CATUnicodeString           _WriteVaultName;
  CATUnicodeString           _WriteVaultHostName;
  int                        _WriteVaultListenerPort;
  CATUnicodeString           _WritePersistencyMode;
  VSUserSessionRMI         * _WriteRMI;
  
  CATListOfCATUnicodeString  _ReadSupportedProtocols;
  CATListOfCATUnicodeString  _WriteSupportedProtocols;
   
  CATUnicodeString           _ReadProtocol;
  CATUnicodeString           _WriteProtocol;
  
  CATHttpClient            * _CATHttpClient;
   
  ENOVIVaultDocumentColl     _VaultDocumentColl;
  
  public :
  
/**
 * @nodoc
 */
  CATBoolean                 _IsInRestoreReadCnx;
  
/**
 * @nodoc
 */
  CATBoolean                 _IsInRestoreWriteCnx;

};


#endif

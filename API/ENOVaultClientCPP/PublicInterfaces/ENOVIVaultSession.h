#include "ENOVIVaultClientAPP.h"

#ifndef _CMA_NOWRAPPERS_
#define _CMA_NOWRAPPERS_ // see /usr/include/dce/cma_ux.h
#endif

#ifndef ENOVIVaultSession_h
#define ENOVIVaultSession_h

// =================================================================
// COPYRIGHT DASSAULT SYSTEMES 2000
// =================================================================
// VPM (c) Copyright Dassault Systemes 2000
// -----------------------------------------------------------------
//
// Contents: ENOVIVaultSession, process client side.
//
// =================================================================

/**
 *  @CAA2Level L1
 *  @CAA2Usage U1
 */ 

//-----------------------------------------------------------------------------
// INCLUDES:
//-----------------------------------------------------------------------------
#include "CATBoolean.h"
#include "CATUnicodeString.h"
#include "CATTypUtilit.h"

#include "ENOVIVaultDocument.h"
#include "ENOVIVaultDocumentColl.h"
#include "SEQUENCE_octetColl.h"
#include "ENOVIVaultUserSessionColl.h"
#include "VaultCacheInfo.h"
#include "VaultCacheInfoColl.h"
#include "ENOVIVaultError.h"
#include "ENOVIVaultReadIterator.h"

// TO BE DELIVERED IN R12
//class ServerTokenProvider;
class VCTMCallClientImpl;
class VSUserSessionFactoryRMI;

//-----------------------------------------------------------------------------
// CLASS: ENOVIVaultSession
//-----------------------------------------------------------------------------

/**
 * Class to manage client vault session.
 * <b>role</b>: This class manages all the connections to the vaults
 * It supplies methods to bind existing documents by URL
 * and to get @href ENOVIVaultUserSession Objects.
 * @version   V5R8
 */


class  ExportedByENOVIVaultClientAPP  ENOVIVaultSession
{
   friend class ENOVIVaultSessionFactory;

//
// Data member
//
public :
/**
 * @nodoc
 */
   static int  SHUTDOWN_IMMEDIATE;
/**
 * @nodoc
 */
   static int  SHUTDOWN_NOTIMMEDIATE;

protected :

   CATBoolean                 _IsTransactionMaster;
   CATUnicodeString           _TransactionMasterServerMarker;
   CATUnicodeString           _TransactionMasterHostName;
   int                        _TransactionMasterListenPort;
   CATUnicodeString           _svSessionName;
   SEQUENCE_octet             _OId;

   ENOVIVaultUserSessionColl  _ENOVIVaultUserSessionColl ;
   
public :
/**
 * @nodoc
 */
   VCTMCallClientImpl       * _pVCTMCallClientImpl;
   
public :
//
// Destructor
//
/**
 * @nodoc
 */

   ~ENOVIVaultSession();

//
// Constructors
//

/**
 * @nodoc
 */

   ENOVIVaultSession();

/**
 * @nodoc
 */

   ENOVIVaultSession(const CATUnicodeString & iTransactionMasterServerMarker,
                     const CATUnicodeString & iTransactionMasterHostName,
                     const int              & iTransactionMasterListenPort,
                     const CATBoolean       & iIsTransactionMaster);

// TO BE DELIVERED IN R12
/**
 * @nodoc
 * Closes the user session
 * It aborts all the work done in the current UserSession and do not reinit<br>
 * the UserSession after that.
 * @param ipServerTokenProvider [in] - the ServerTokenProvider object.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL.
 * @since V5R11
 */
//   HRESULT close(const ServerTokenProvider  * ipServerTokenProvider,
//                       ENOVIVaultError      & oVaultError);

/**
 * Closes the user session
 * It aborts all the work done in the current UserSession and do not reinit<br>
 * the UserSession after that.
 * @param ibvContextOId [in] - CATlet context OId.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL.
 * @since V5R11
 */
   HRESULT close(const SEQUENCE_octet  & ibvContextOId,
                       ENOVIVaultError & oVaultError);

/**
 * Closes the user session
 * It aborts all the work done in the current UserSession and do not reinit<br>
 * the UserSession after that.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL.
 * @since V5R7
 */
   HRESULT close(ENOVIVaultError & oVaultError);


// TO BE DELIVERED IN R12
/**
 * @nodoc
 * Closes the user session proxy
 * It aborts all the work done in the current UserSession and do not reinit<br>
 * the UserSession after that.
 * @param ipServerTokenProvider [in] - the ServerTokenProvider object.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL.
 * @since V5R11
 */
//   HRESULT closeProxy(const ServerTokenProvider  * ipServerTokenProvider,
//                       ENOVIVaultError      & oVaultError);

/**
 * Closes the user session proxy
 * It aborts all the work done in the current UserSession and do not reinit<br>
 * the UserSession after that.
 * @param ibvContextOId [in] - CATlet context OId.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL.
 * @since V5R11
 */
   HRESULT closeProxy(const SEQUENCE_octet  & ibvContextOId,
                            ENOVIVaultError & oVaultError);

/**
 * Closes the user session proxy
 * It aborts all the work done in the current UserSession and do not reinit<br>
 * the UserSession after that.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL.
 * @since V5R7
 */
   HRESULT closeProxy(ENOVIVaultError & oVaultError);


// TO BE DELIVERED IN R12
/**
 * @nodoc
 * Aborts all the work done in the current UserSession.
 * The UserSession is reinitialized after that.
 * @param ipServerTokenProvider [in] - the ServerTokenProvider object.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL.
 * @since V5R11
 */
//   HRESULT abort(const ServerTokenProvider  * ipServerTokenProvider,
//                       ENOVIVaultError      & oVaultError);


/**
 * Aborts all the work done in the current UserSession.
 * The UserSession is reinitialized after that.
 * @param ibvContextOId [in] - CATlet context OId.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL.
 * @since V5R11
 */
   HRESULT abort(const SEQUENCE_octet  & ibvContextOId,
                       ENOVIVaultError & oVaultError);

/**
 * Aborts all the work done in the current UserSession.
 * The UserSession is reinitialized after that.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL.
 * @since V5R7
 */
   HRESULT abort(ENOVIVaultError & oVaultError);


/**
 * @nodoc
 * Undoes the Current command if it exist. 
 * Does not start a new one.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL.
 * @since V5R7
 */
   HRESULT undo(ENOVIVaultError & oVaultError);


// TO BE DELIVERED IN R12
/**
 * @nodoc
 * Prepares all the work done during the UserSession.
 * @param ipServerTokenProvider [in] - the ServerTokenProvider object.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL.
 * @since V5R11
 */
//   HRESULT prepare(const ServerTokenProvider  * ipServerTokenProvider,
//                         ENOVIVaultError      & oVaultError);


/**
 * Prepares all the work done during the UserSession.
 * @param ibvContextOId [in] - CATlet context OId.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL.
 * @since V5R11
 */
   HRESULT prepare(const SEQUENCE_octet  & ibvContextOId,
                         ENOVIVaultError & oVaultError);

/**
 * Prepares all the work done during the UserSession.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL.
 * @since V5R7
 */
   HRESULT prepare(ENOVIVaultError & oVaultError);


// TO BE DELIVERED IN R12
/**
 * @nodoc
 * Unprepares all the work done during the UserSession.
 * @param ipServerTokenProvider [in] - the ServerTokenProvider object.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL.
 * @since V5R11
 */
//   HRESULT unPrepare(const ServerTokenProvider  * ipServerTokenProvider,
//                           ENOVIVaultError      & oVaultError);

/**
 * Unprepares all the work done during the UserSession.
 * @param ibvContextOId [in] - CATlet context OId.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL.
 * @since V5R11
 */
   HRESULT unPrepare(const SEQUENCE_octet  & ibvContextOId,
                           ENOVIVaultError & oVaultError);


/**
 * Unprepares all the work done during the UserSession.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL.
 * @since V5R7
 */
   HRESULT unPrepare(ENOVIVaultError & oVaultError);


// TO BE DELIVERED IN R12
/**
 * @nodoc
 * Commits all the work done during the UserSession.
 * @param ipServerTokenProvider [in] - the ServerTokenProvider object.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL.
 * @since V5R11
 */
//   HRESULT commit(const ServerTokenProvider  * ipServerTokenProvider,
//                        ENOVIVaultError      & oVaultError);


/**
 * Commits all the work done during the UserSession.
 * @param ibvContextOId [in] - CATlet context OId.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL.
 * @since V5R11
 */
   HRESULT commit(const SEQUENCE_octet  & ibvContextOId,
                        ENOVIVaultError & oVaultError);


/**
 * Commits all the work done during the UserSession.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL.
 * @since V5R7
 */
   HRESULT commit(ENOVIVaultError & oVaultError);


//
// Documents managment methods
//

public :

/**
 * Supplies the ENOVIVaultDocument object pertainning to the <code>iUUD</code> parameter.
 * @param iURL [in] - Document's URL to bind.
 * @param oppDocument [out] - ENOVIVaultDocument object.
 *     <br><b>Lifecycle rules deviation</b>: <tt>oppDocument</tt> parameter must only be dealocated using the @href #unBindDocument method.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL.
 * @deprecated V5R12
 */
   HRESULT bindDocument(const SEQUENCE_octet       & iURL,
  	 	   	                  ENOVIVaultDocument  ** oppDocument,
			                     ENOVIVaultError      & oVaultError);

// TO BE DELIVERED IN R12
/**
 * @nodoc
 * Supplies the ENOVIVaultDocument object pertainning to the <code>iUUD</code> parameter.
 * @param iURL [in] - Document's URL to bind.
 * @param ipServerTokenProvider [in] - the ServerTokenProvider object.
 * @param oppDocument [out] - ENOVIVaultDocument object.
 *     <br><b>Lifecycle rules deviation</b>: <tt>oppDocument</tt> parameter must only be dealocated using the @href #unBindDocument method.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL.
 * @since V5R11
 */
//   HRESULT bindDocument(const SEQUENCE_octet       & iURL,
//                        const ServerTokenProvider  * ipServerTokenProvider,
//  	 	   	      ENOVIVaultDocument  ** oppDocument,
//			      ENOVIVaultError      & oVaultError);

/**
 * Supplies the ENOVIVaultDocument object pertainning to the <code>iUUD</code> parameter.
 * @param iURL [in] - Document's URL to bind.
 * @param ibvContextOId [in] - CATlet context OId.
 * @param oppDocument [out] - ENOVIVaultDocument object.
 *     <br><b>Lifecycle rules deviation</b>: <tt>oppDocument</tt> parameter must only be dealocated using the @href #unBindDocument method.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL.
 * @since V5R11
 */
   HRESULT bindDocument(const SEQUENCE_octet       & iURL,
                        const SEQUENCE_octet       & ibvContextOId,
  	 	   	                  ENOVIVaultDocument  ** oppDocument,
			                     ENOVIVaultError      & oVaultError);

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 * Supplies the ENOVIVaultDocument object pertainning to the <code>iUUD</code> parameter.
 * @param iURL [in] - Document's URL to bind.
 * @param ipServerTokenProvider [in] - the ServerTokenProvider object.
 * @param ibvContextOId [in] - CATlet context OId.
 * @param oppDocument [out] - ENOVIVaultDocument object.
 *     <br><b>Lifecycle rules deviation</b>: <tt>oppDocument</tt> parameter must only be dealocated using the @href #unBindDocument method.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL.
 * @since V5R11
 */
   HRESULT bindDocument(const SEQUENCE_octet       & iURL,
// TO RESTORE IN R12    const ServerTokenProvider  * ipServerTokenProvider,
                        const void                 * ipServerTokenProvider,
                        const SEQUENCE_octet       & ibvContextOId,
  	 	   	                  ENOVIVaultDocument  ** oppDocument,
			                     ENOVIVaultError      & oVaultError);


/**
 * Supplies the Document content pertainning to the <code>iUUD</code> parameter.
 * @param iURL [in] - Document's URL to bind.
 * @param oppDocument [out] - ENOVIVaultDocument object.
 *     <br><b>Lifecycle rules deviation</b>: <tt>oppDocument</tt> parameter must only be dealocated using the @href #unBindDocument method.
 * @param oDocContent [out] - Document content.
 *     <br><b>You are supposed to delete oDocContent object after user.</b>
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL.
 * @deprecated V5R12
 */
   HRESULT bindAndgetDocContent(const SEQUENCE_octet       & iURL,
                                      ENOVIVaultDocument  ** oppDocument,
                                      SEQUENCE_octet       & oDocContent,
                                      ENOVIVaultError      & oVaultError);

/**
 * Supplies the Document content pertainning to the <code>iUUD</code> parameter.
 * @param iURL [in] - Document's URL to bind.
 * @param ibvContextOId [in] - CATlet context OId.
 * @param oppDocument [out] - ENOVIVaultDocument object.
 *     <br><b>Lifecycle rules deviation</b>: <tt>oppDocument</tt> parameter must only be dealocated using the @href #unBindDocument method.
 * @param oDocContent [out] - Document content.
 *     <br><b>You are supposed to delete oDocContent object after user.</b>
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL.
 * @since V5R11
 */
   HRESULT bindAndgetDocContent(const SEQUENCE_octet       & iURL,
                                const SEQUENCE_octet       & ibvContextOId,
                                      ENOVIVaultDocument  ** oppDocument,
                                      SEQUENCE_octet       & oDocContent,
                                      ENOVIVaultError      & oVaultError);

// TO BE DELIVERED IN R12
/**
 * @nodoc
 * Supplies the Document content pertainning to the <code>iUUD</code> parameter.
 * @param iURL [in] - Document's URL to bind.
 * @param ipServerTokenProvider [in] - the ServerTokenProvider object.
 * @param oppDocument [out] - ENOVIVaultDocument object.
 *     <br><b>Lifecycle rules deviation</b>: <tt>oppDocument</tt> parameter must only be dealocated using the @href #unBindDocument method.
 * @param oDocContent [out] - Document content.
 *     <br><b>You are supposed to delete oDocContent object after user.</b>
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL.
 * @since V5R11
 */
//   HRESULT bindAndgetDocContent(const SEQUENCE_octet       & iURL,
//                                const ServerTokenProvider  * ipServerTokenProvider,
//                                      ENOVIVaultDocument  ** oppDocument,
//                                      SEQUENCE_octet       & oDocContent,
//                                      ENOVIVaultError      & oVaultError);

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 * Supplies the Document content pertainning to the <code>iUUD</code> parameter.
 * @param iURL [in] - Document's URL to bind.
 * @param ipServerTokenProvider [in] - the ServerTokenProvider object.
 * @param ibvContextOId [in] - CATlet context OId.
 * @param oppDocument [out] - ENOVIVaultDocument object.
 *     <br><b>Lifecycle rules deviation</b>: <tt>oppDocument</tt> parameter must only be dealocated using the @href #unBindDocument method.
 * @param oDocContent [out] - Document content.
 *     <br><b>You are supposed to delete oDocContent object after user.</b>
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL.
 * @since V5R11
 */
   HRESULT bindAndgetDocContent(const SEQUENCE_octet       & iURL,
// TO RESTORE IN R12            const ServerTokenProvider  * ipServerTokenProvider,
                                const void                 * ipServerTokenProvider,
                                const SEQUENCE_octet       & ibvContextOId,
                                      ENOVIVaultDocument  ** oppDocument,
                                      SEQUENCE_octet       & oDocContent,
                                      ENOVIVaultError      & oVaultError);

/**
 * @nodoc
 * Supplies the Document pertainning to the <code>iUUD</code> parameter in open read mode.
 * @param iURL [in] - Document's URL to bind.
 * @param oppDocument [out] - ENOVIVaultDocument object.
 *     <br><b>Lifecycle rules deviation</b>: <tt>oppDocument</tt> parameter must only be dealocated using the @href #unBindDocument method.
 * @param oVaultError [out] - Details about the error.
 * @since V5R14SP3
 */
HRESULT bindAndgetDocOpenRead(const SEQUENCE_octet       & iURL,
                                    ENOVIVaultDocument  ** oppDocument,
                                    ENOVIVaultError      & oVaultError);


/**
 * @nodoc
 * Removes a document.<br>
 * Beware to reset iDocument pointer to NULL after method use because<br>
 * this method delete the pointed document object.
 * @param ipDocument [in] - @href ENOVIVaultDocument object to remove.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL.
 */

   HRESULT removeDocument(const ENOVIVaultDocument * ipDocument,
			                       ENOVIVaultError    & oVaultError);

/**
 * Unbinds a document.
 * Deletes the @href ENOVIVaultDocument object on the client. Does not remove the actuel document on the server.
 * @param ipDocument [in] - @href ENOVIVaultDocument object to unbind.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL.
 */

   HRESULT unBindDocument(const ENOVIVaultDocument * ipDocument,
			                       ENOVIVaultError    & oVaultError);


/**
 * Retrieves a collection of ENOVIVaultDocument objects each pertainning to the <code>iUUD</code>
 * collection parameter.
 * @param iURLs [in] - ENOVIVaultDocument URL collection to bind.
 * @param oDocuments [out] - ENOVIVaultDocument collection.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL.
 * @deprecated V5R12
 */
   HRESULT bindDocuments(const SEQUENCE_octetColl       & iURLs,
			                      ENOVIVaultReadIterator   & oDocuments,
			                      ENOVIVaultError          & oVaultError);


// TO BE DELIVERED IN R12
/**
 * @nodoc
 * Retrieves a collection of ENOVIVaultDocument objects each pertainning to the <code>iUUD</code>
 * collection parameter.
 * @param iURLs [in] - ENOVIVaultDocument URL collection to bind.
 * @param ipServerTokenProvider [in] - the ServerTokenProvider object.
 * @param oDocuments [out] - ENOVIVaultDocument collection.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL.
 * @since V5R11
 */
//   HRESULT bindDocuments(const SEQUENCE_octetColl       & iURLs,
//                         const ServerTokenProvider      * ipServerTokenProvider,
//			                        ENOVIVaultReadIterator   & oDocuments,
//			                        ENOVIVaultError          & oVaultError);

/**
 * Retrieves a collection of ENOVIVaultDocument objects each pertainning to the <code>iUUD</code>
 * collection parameter.
 * @param iURLs [in] - ENOVIVaultDocument URL collection to bind.
 * @param ibvContextOId [in] - CATlet context OId.
 * @param oDocuments [out] - ENOVIVaultDocument collection.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL.
 * @since V5R11
 */
   HRESULT bindDocuments(const SEQUENCE_octetColl       & iURLs,
                         const SEQUENCE_octet           & ibvContextOId,
			                      ENOVIVaultReadIterator   & oDocuments,
			                      ENOVIVaultError          & oVaultError);

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 * Retrieves a collection of ENOVIVaultDocument objects each pertainning to the <code>iUUD</code>
 * collection parameter.
 * @param iURLs [in] - ENOVIVaultDocument URL collection to bind.
 * @param ipServerTokenProvider [in] - the ServerTokenProvider object.
 * @param ibvContextOId [in] - CATlet context OId.
 * @param oDocuments [out] - ENOVIVaultDocument collection.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL.
 * @since V5R11
 */
   HRESULT bindDocuments(const SEQUENCE_octetColl       & iURLs,
// TO RESTORE IN R12     const ServerTokenProvider      * ipServerTokenProvider,
                         const void                     * ipServerTokenProvider,
                         const SEQUENCE_octet           & ibvContextOId,
			                      ENOVIVaultReadIterator   & oDocuments,
			                      ENOVIVaultError          & oVaultError);

//
// ENOVIVaultUserSession factory methods
//

public :

// TO BE DELIVERED IN R12
/**
 * @nodoc
 * Supplies a ENOVIVaultUserSession object pertainning to the requested ENOVIVault Server.
 * If the @href ENOVIVaultUserSession object doesn't exist yet, it will be created.<br>
 * If you are not the transaction master, it will be called in order to manage transaction<br>
 * properly on the newly created ENOVIVaultUserSession object.
 * @param isvVaultAliasName [in] - Vault Server alias name.
 * @param ipServerTokenProvider [in] - the ServerTokenProvider object.
 * @param oppENOVIVaultUserSession    [out] - ENOVIVaultUserSession object.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL.
 * @since V5R11
 */
//   HRESULT getUserSession(const CATUnicodeString       & isvVaultAliasName,
//                          const ServerTokenProvider    * ipServerTokenProvider,
//                                ENOVIVaultUserSession ** oppENOVIVaultUserSession,
//			                         ENOVIVaultError        & oVaultError);

/**
 * Supplies a ENOVIVaultUserSession object pertainning to the requested ENOVIVault Server.
 * If the @href ENOVIVaultUserSession object doesn't exist yet, it will be created.<br>
 * If you are not the transaction master, it will be called in order to manage transaction<br>
 * properly on the newly created ENOVIVaultUserSession object.
 * @param isvVaultAliasName [in] - Vault Server alias name.
 * @param ibvContextOId [in] - CATlet context OId.
 * @param oppENOVIVaultUserSession    [out] - ENOVIVaultUserSession object.
 * @param oVaultError [out] - Details about the error.
 * @param ipbvUSOId [in] - ENOVIVaultUserSession Identifier valuated by default. Do not change the default value. 
 * @return S_OK, E_FAIL.
 * @since V5R11
 */
   HRESULT getUserSession(const CATUnicodeString       & isvVaultAliasName,
                          const SEQUENCE_octet         & ibvContextOId,
                                ENOVIVaultUserSession ** oppENOVIVaultUserSession,
			                       ENOVIVaultError        & oVaultError,
                                SEQUENCE_octet         * ipbvUSOId = NULL);


/**
 * Supplies a ENOVIVaultUserSession object pertainning to the requested ENOVIVault Server.
 * If the @href ENOVIVaultUserSession object doesn't exist yet, it will be created.<br>
 * If you are not the transaction master, it will be called in order to manage transaction<br>
 * properly on the newly created ENOVIVaultUserSession object.
 * @param iENOVIVaultAliasName [in] - ENOVIVault Server alias name.
 * @param oppENOVIVaultUserSession    [out] - ENOVIVaultUserSession object.
 * @param oVaultError [out] - Details about the error.
 * @param ipbvUSOId [in] - ENOVIVaultUserSession Identifier valuated by default. Do not change the default value.
 * @return S_OK, E_FAIL.
 * @deprecated V5R12
 */
   HRESULT getUserSession(const CATUnicodeString       & iENOVIVaultAliasName,
                                ENOVIVaultUserSession ** oppENOVIVaultUserSession,
			                       ENOVIVaultError        & oVaultError,
                                SEQUENCE_octet         * ipbvUSOId = NULL);


/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 * Supplies a ENOVIVaultUserSession object pertainning to the requested ENOVIVault Server.
 * If the @href ENOVIVaultUserSession object doesn't exist yet, it will be created.<br>
 * If you are not the transaction master, it will be called in order to manage transaction<br>
 * properly on the newly created ENOVIVaultUserSession object.
 * @param isvVaultAliasName [in] - Vault Server alias name.
 * @param iWriteVaultServerName [in] - Write Vault Server Name (server marker).
 * @param iWriteVaultServerHost [in] - Write Vault Server Host.
 * @param iWriteVaultServerPort [in] - Wrtie Vault Server Port (Orbix daemon port).
 * @param iReadVaultServerName [in] - Read Vault Server Name (server marker).
 * @param iReadVaultServerHost [in] - Read Vault Server Host.
 * @param iReadVaultServerPort [in] - Read Vault Server Port (Orbix daemon port).
 * @param oppENOVIVaultUserSession    [out] - ENOVIVaultUserSession object.
 * @param oVaultError [out] - Details about the error.
 * @param ipbvUSOId [in] - ENOVIVaultUserSession Identifier valuated by default. Do not change the default value.
 * @return S_OK, E_FAIL.
 * @deprecated V5R12
 */
   HRESULT getUserSession(const CATUnicodeString       & iAlias,
                          const CATUnicodeString       & iWriteVaultServerName,
                          const CATUnicodeString       & iWriteVaultServerHost,
                          const int                    & iWriteVaultServerPort,
                          const CATUnicodeString       & iReadVaultServerName,
                          const CATUnicodeString       & iReadVaultServerHost,
                          const int                    & iReadVaultServerPort,
                                ENOVIVaultUserSession ** oppENOVIVaultUserSession,
			                       ENOVIVaultError        & oVaultError,
                                SEQUENCE_octet         * ipbvUSOId = NULL);


/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 * Supplies a ENOVIVaultUserSession object pertainning to the requested ENOVIVault Server.
 * If the @href ENOVIVaultUserSession object doesn't exist yet, it will be created.<br>
 * If you are not the transaction master, it will be called in order to manage transaction<br>
 * properly on the newly created ENOVIVaultUserSession object.
 * @param isvVaultAliasName [in] - Vault Server alias name.
 * @param ipServerTokenProvider [in] - the ServerTokenProvider object.
 * @param ibvContextOId [in] - CATlet context OId.
 * @param oppENOVIVaultUserSession    [out] - ENOVIVaultUserSession object.
 * @param oVaultError [out] - Details about the error.
 * @param ipbvUSOId [in] - ENOVIVaultUserSession Identifier valuated by default. Do not change the default value.
 * @return S_OK, E_FAIL.
 * @since V5R11
 */
   HRESULT getUserSession(const CATUnicodeString       & isvVaultAliasName,
// TO RESTORE IN R12      const ServerTokenProvider    * ipServerTokenProvider,
                          const void                   * ipServerTokenProvider,
                          const SEQUENCE_octet         & ibvContextOId,
                                ENOVIVaultUserSession ** oppENOVIVaultUserSession,
			                       ENOVIVaultError        & oVaultError,
                                SEQUENCE_octet         * ipbvUSOId = NULL);

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 * Supplies a ENOVIVaultUserSession object pertainning to the requested ENOVIVault Server.
 * If the @href ENOVIVaultUserSession object doesn't exist yet, it will be created.<br>
 * If you are not the transaction master, it will be called in order to manage transaction<br>
 * properly on the newly created ENOVIVaultUserSession object.
 * @param isvVaultAliasName [in] - Vault Server alias name.
 * @param ipServerTokenProvider [in] - the ServerTokenProvider object.
 * @param ibvContextOId [in] - CATlet context OId.
 * @param isvWriteVaultServerName [in] - Write Vault Server Name (server marker).
 * @param isvWriteVaultServerHost [in] - Write Vault Server Host.
 * @param invWriteVaultServerPort [in] - Wrtie Vault Server Port (Orbix daemon port).
 * @param isvReadVaultServerName [in] - Read Vault Server Name (server marker).
 * @param isvReadVaultServerHost [in] - Read Vault Server Host.
 * @param invReadVaultServerPort [in] - Read Vault Server Port (Orbix daemon port).
 * @param oppENOVIVaultUserSession    [out] - ENOVIVaultUserSession object.
 * @param oVaultError [out] - Details about the error.
 * @param ipbvUSOId [in] - ENOVIVaultUserSession Identifier valuated by default. Do not change the default value.
 * @return S_OK, E_FAIL.
 * @since V5R11
 */
   HRESULT getUserSession(const CATUnicodeString       & isvVaultAliasName,
// TO RESTORE IN R12      const ServerTokenProvider    * ipServerTokenProvider,
                          const void                   * ipServerTokenProvider,
                          const SEQUENCE_octet         & ibvContextOId,
                          const CATUnicodeString       & isvWriteVaultServerName,
                          const CATUnicodeString       & isvWriteVaultServerHost,
                          const int                    & invWriteVaultServerPort,
                          const CATUnicodeString       & isvReadVaultServerName,
                          const CATUnicodeString       & isvReadVaultServerHost,
                          const int                    & invReadVaultServerPort,
                                ENOVIVaultUserSession ** oppENOVIVaultUserSession,
			                       ENOVIVaultError        & oVaultError,
                                SEQUENCE_octet         * ipbvUSOId = NULL);

/**
 * @nodoc
 * Removes the corresponding ENOVIVaultUserSession from the ENOVIVaultSession.
 * @param  ipENOVIVaultUserSession [in] - pointer on the ENOVIVaultUserSession object to remove.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL
 */
//   HRESULT removeUserSession(ENOVIVaultUserSession * ipENOVIVaultUserSession);

/**
 * Ends a user session.
 * @param  ipENOVIVaultUserSession [in] - @href ENOVIVaultUserSession object to end.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL.
 * @since V5R7
 */
   HRESULT endUserSession(ENOVIVaultUserSession * ipENOVIVaultUserSession,
			                 ENOVIVaultError       & oVaultError);


/**
 * Removes a user session proxy.
 * @param ipENOVIVaultUserSession [in] - @href ENOVIVaultUserSession object to end.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL.
 * @since V5R11
 */
   HRESULT removeUserSessionProxy(ENOVIVaultUserSession * ipENOVIVaultUserSession,
                                  ENOVIVaultError       & oVaultError);

/**
 * Removes a user session.
 * @param ipENOVIVaultUserSession [in] - @href ENOVIVaultUserSession object to end.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL.
 * @since V5R11
 */
   HRESULT removeUserSession(ENOVIVaultUserSession * ipENOVIVaultUserSession,
                             ENOVIVaultError       & oVaultError);

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 * Removes a user session.
 * @param ipENOVIVaultUserSession [in] - @href ENOVIVaultUserSession object to end.
 * @param ibvServerCall [in] - specify if the Vault Server has to be called.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL.
 * @since V5R11
 */
   HRESULT removeUserSession(ENOVIVaultUserSession * ipENOVIVaultUserSession,
                             CATBoolean              ibvServerCall, 
                             ENOVIVaultError       & oVaultError);

//
// Properties methods
//

public :

/**
 * Supplies the property value pertainning to the input property name.
 * @param iPropertyName [in] - property name.
 * @param oValue [out] - property value.
 * @return S_OK, E_FAIL.
 * @since V5R7
 */
   HRESULT getProperty(const CATUnicodeString & iPropertyName, CATUnicodeString & oValue) const;


/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 * Sets the given Vault Client property.
 * @param iPropertyName [in] - property name.
 * @param iValue [in] - property value.
 * @return S_OK, E_FAIL.
 * @since V5R11
 */
   HRESULT setProperty(const CATUnicodeString & iPropertyName,
                       const CATUnicodeString & iValue) const;


//
// Admin methods
//

/**
 * Shutdown the related Vault Server.
 * @param iVaultServerAliasName [in] - Vault Server Alias Name.
 * @param iShutDownMode [in] - shutdown mode.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL, VAULT_E_CACHED
 */
   HRESULT shutdown(const CATUnicodeString & iVaultServerAliasName,
                    const int              & iShutdownMode,
                          ENOVIVaultError  & oVaultError);

/**
 * Shutdown the related Vault Server.
 * @param iVaultServerName [in] - Vault Server Name (server marker).
 * @param iVaultServerHost [in] - Vault Server Host.
 * @param iVaultServerPort [in] - Vault Server Port (Orbix daemon port).
 * @param iShutDownMode [in] - shutdown mode.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL, VAULT_E_CACHED
 */
   HRESULT shutdown(const CATUnicodeString & iVaultServerName,
                    const CATUnicodeString & iVaultServerHost,
                    const int              & iVaultServerPort,
                    const int              & iShutdownMode,
                          ENOVIVaultError  & oVaultError);

/**
 * Sets the vault server trace level.
 * @param iVaultServerAliasName [in] - Vault Server Alias Name.
 * @param int iTraceLevel [in] - the wanted vault server trace level
 * @param int oPreviousTraceLevel [out] - the previous vault server trace level
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL, VAULT_E_CACHED
 */
   HRESULT setVSTraceLevel(const CATUnicodeString & iVaultServerAliasName,
                           const int              & iTraceLevel,
                                 int              & oPreviousTraceLevel,
                                 ENOVIVaultError  & oVaultError);


/**
 * @nodoc
 * Sets the vault server trace level.
 * @param iVaultServerName [in] - Vault Server Name (server marker).
 * @param iVaultServerHost [in] - Vault Server Host.
 * @param iVaultServerPort [in] - Vault Server Port (Orbix daemon port).
 * @param int iTraceLevel [in] - the wanted vault server trace level
 * @param int oPreviousTraceLevel [out] - the previous vault server trace level
 * @param oVaultError [out] - Details about the error.
 * @@return S_OK, E_FAIL
 */
   HRESULT setVSTraceLevel(const CATUnicodeString & iVaultServerName,
                           const CATUnicodeString & iVaultServerHost,
                           const int              & iVaultServerPort,
                           const int              & iTraceLevel,
                                 int              & oPreviousTraceLevel,
                                 ENOVIVaultError  & oVaultError);


public :

/**
 * @nodoc
 * Supplies the ENOVIVault Session Object Identifier.
 * @param oSessionOId [out] - ENOVIVault Session Object Identifier.
 * @return S_OK, E_FAIL
 */
   HRESULT getOId(SEQUENCE_octet & oSessionOId) const;

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 * Sets the ENOVIVault Session Object Identifier.
 * @param iSessionOId [in] - ENOVIVault Session Object Identifier.
 * @return S_OK, E_FAIL
 */
   HRESULT setOId(const SEQUENCE_octet & iSessionOId);

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 * Supplies the ENOVIVault Session name.
 * @param osvSessionName [out] - ENOVIVault Session name.
 * @return S_OK, E_FAIL
 */
   HRESULT getName(CATUnicodeString & osvSessionName) const;

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 * Sets the ENOVIVault Session name.
 * @param iSessionName [in] - ENOVIVault Session name.
 * @return S_OK, E_FAIL
 */
   HRESULT setName(const CATUnicodeString & isvSessionName);

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 * Supplies the ENOVIVault Session IsTransactionMaster flag.
 * @param oIsTransactionMaster [out] - IsTransactionMaster flag.
 * @return S_OK, E_FAIL
 */
   HRESULT getIsTransactionMaster(CATBoolean & oIsTransactionMaster) const;

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 * Set the ENOVIVault Session IsTransactionMaster flag.
 * @param iIsTransactionMaster [in] - IsTransactionMaster flag.
 * @return S_OK, E_FAIL
 */
   HRESULT setIsTransactionMaster(const CATBoolean & iIsTransactionMaster);

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 * Supplies the ENOVIVault Session TransactionMasterServerMarker parameter.
 * @param oTransactionMasterServerMarker [out] - TransactionMasterServerMarker parameter.
 * @return S_OK, E_FAIL
 */
   HRESULT getTransactionMasterServerMarker(CATUnicodeString & oTransactionMasterServerMarker) const;

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 * Set the ENOVIVault Session TransactionMasterServerMarker parameter.
 * @param iTransactionMasterServerMarker [in] - TransactionMasterServerMarker parameter.
 * @return S_OK, E_FAIL
 */
   HRESULT setTransactionMasterServerMarker(
                               const CATUnicodeString & iTransactionMasterServerMarker);

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 * Supplies the ENOVIVault Session TransactionMasterHostName parameter.
 * @param oTransactionMasterHostName [out] - TransactionMasterHostName parameter.
 * @return S_OK, E_FAIL
 */
   HRESULT getTransactionMasterHostName(CATUnicodeString & oTransactionMasterHostName) const;

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 * Set the ENOVIVault Session TransactionMasterHostName parameter.
 * @param iTransactionMasterHostName [in] - TransactionMasterHostName parameter.
 * @return S_OK, E_FAIL
 */
   HRESULT setTransactionMasterHostName(const CATUnicodeString & iTransactionMasterHostName);

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 * Supplies the ENOVIVault Session TransactionMasterListenPort parameter.
 * @param oTransactionMasterListenPort [out] - TransactionMasterListenPort parameter.
 * @return S_OK, E_FAIL
 */
   HRESULT getTransactionMasterListenPort(int & oTransactionMasterListenPort) const ;

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 * Set the ENOVIVault Session TransactionMasterListenPort parameter.
 * @param iIsTransactionMaster [in] - TransactionMasterListenPort parameter.
 * @return S_OK, E_FAIL
 */
   HRESULT setTransactionMasterListenPort(const int & iTransactionMasterListenPort);

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 * @return S_OK, E_FAIL
 */
   HRESULT getUSFRMI(const CATUnicodeString          & iVaultServerName,
                     const CATUnicodeString          & iVaultServerHost,
                     const int                       & iVaultServerPort,
                           VSUserSessionFactoryRMI  ** oppUSFRMI,
                           ENOVIVaultError           & oVaultError);

/**
 * Reload the whole set of properties on the related Vault Server.
 * @param iVaultServerAliasName [in] - Vault Server Alias Name.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL, VAULT_E_CACHED
 */
   HRESULT reloadProperties(const CATUnicodeString & iVaultServerAliasName,
                                  ENOVIVaultError  & oVaultError);

/**
 * Reload the whole set of properties on the related Vault Server.
 * @param iVaultServerName [in] - Vault Server Name (server marker).
 * @param iVaultServerHost [in] - Vault Server Host.
 * @param iVaultServerPort [in] - Vault Server Port (Orbix daemon port).
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL, VAULT_E_CACHED
 */
   HRESULT reloadProperties(const CATUnicodeString & iVaultServerName,
                            const CATUnicodeString & iVaultServerHost,
                            const int              & iVaultServerPort,
                                  ENOVIVaultError  & oVaultError);

/**
 * Online the related Vault Server.
 * @param iVaultServerAliasName [in] - Vault Server Alias Name.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL, VAULT_E_CACHED
 */
   HRESULT onLine(const CATUnicodeString & iVaultServerAliasName,
                        ENOVIVaultError  & oVaultError);

/**
 * Online the related Vault Server.
 * @param iVaultServerName [in] - Vault Server Name (server marker).
 * @param iVaultServerHost [in] - Vault Server Host.
 * @param iVaultServerPort [in] - Vault Server Port (Orbix daemon port).
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL, VAULT_E_CACHED
 */
   HRESULT onLine(const CATUnicodeString & iVaultServerName,
                  const CATUnicodeString & iVaultServerHost,
                  const int              & iVaultServerPort,
                        ENOVIVaultError  & oVaultError);

/**
 * Offline the related Vault Server.
 * @param iVaultServerAliasName [in] - Vault Server Alias Name.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL, VAULT_E_CACHED
 */
   HRESULT offLine(const CATUnicodeString & iVaultServerAliasName,
                         ENOVIVaultError  & oVaultError);

/**
 * Offline the related Vault Server.
 * @param iVaultServerName [in] - Vault Server Name (server marker).
 * @param iVaultServerHost [in] - Vault Server Host.
 * @param iVaultServerPort [in] - Vault Server Port (Orbix daemon port).
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL, VAULT_E_CACHED
 */
   HRESULT offLine(const CATUnicodeString & iVaultServerName,
                   const CATUnicodeString & iVaultServerHost,
                   const int              & iVaultServerPort,
                         ENOVIVaultError  & oVaultError);


/**
 * Disconnect the related Vault Cache Server from VaultServer.
 * @param iVaultServerName [in] - Vault Server Name (server marker).
 * @param iVaultServerHost [in] - Vault Server Host.
 * @param iVaultServerPort [in] - Vault Server Port (Orbix daemon port).
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL
 */
   HRESULT disconnectCache(const CATUnicodeString & iVaultServerName,
                           const CATUnicodeString & iVaultServerHost,
                           const int              & iVaultServerPort,
                                 ENOVIVaultError  & oVaultError);

/**
 * Reconnect the related Vault Cache Server.
 * @param iVaultServerName [in] - Vault Server Name (server marker).
 * @param iVaultServerHost [in] - Vault Server Host.
 * @param iVaultServerPort [in] - Vault Server Port (Orbix daemon port).
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL
 */
   HRESULT connectCache(const CATUnicodeString & iVaultServerName,
                        const CATUnicodeString & iVaultServerHost,
                        const int              & iVaultServerPort,
                              ENOVIVaultError  & oVaultError);

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 * Gets the vault client properties set.
 * @param CATListOfCATUnicodeString oProperties [out] - the vault client properties list
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL
 */
   HRESULT getProperties(CATListOfCATUnicodeString & oProperties,
                         ENOVIVaultError           & oVaultError);

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 * Gets the vault server properties set pertaining to the given alias name.
 * @param iVaultServerAliasName [in] - Vault Server Alias Name.
 * @param CATListOfCATUnicodeString oProperties [out] - the vault server properties list
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL
 */
   HRESULT getProperties(const CATUnicodeString          & iVaultServerAliasName,
                               CATListOfCATUnicodeString & oProperties,
                               ENOVIVaultError           & oVaultError);

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 * Gets the vault server properties set pertaining to the given Vault Server.
 * @param iVaultServerName [in] - Vault Server Name (server marker).
 * @param iVaultServerHost [in] - Vault Server Host.
 * @param iVaultServerPort [in] - Vault Server Port (Orbix daemon port).
 * @param CATListOfCATUnicodeString oProperties [out] - the vault server properties list
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL
 */
   HRESULT getProperties(const CATUnicodeString          & iVaultServerName,
                         const CATUnicodeString          & iVaultServerHost,
                         const int                       & iVaultServerPort,
                               CATListOfCATUnicodeString & oProperties,
                               ENOVIVaultError           & oVaultError);

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 * Gets the vault server request queue state.
 * @param iVaultServerAliasName [in] - Vault Server Alias Name.
 * @param CATUnicodeString oCommitQueue [out] - the commit queue state
 * @param CATUnicodeString oHPQueue     [out] - the High priority queue state
 * @param CATUnicodeString oStdQueue    [out] - the Standard priority queue state
 * @param CATUnicodeString oLPQueue     [out] - the Low priority queue state
 * @param     oVaultError  [out] - Details about the error.
 * @return S_OK, E_FAIL
 */
   HRESULT getQState(const CATUnicodeString          & iVaultServerAliasName,
                           CATUnicodeString          & oCommitQueue,
                           CATUnicodeString          & oHPQueue,
                           CATUnicodeString          & oStdQueue,
                           CATUnicodeString          & oLPQueue,
                           ENOVIVaultError           & oVaultError);

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 * Gets the vault server request queue state.
 * @param iVaultServerName [in] - Vault Server Name (server marker).
 * @param iVaultServerHost [in] - Vault Server Host.
 * @param iVaultServerPort [in] - Vault Server Port (Orbix daemon port).
 * @param CATUnicodeString oCommitQueue [out] - the commit queue state
 * @param CATUnicodeString oHPQueue     [out] - the High priority queue state
 * @param CATUnicodeString oStdQueue    [out] - the Standard priority queue state
 * @param CATUnicodeString oLPQueue     [out] - the Low priority queue state
 * @param     oVaultError  [out] - Details about the error.
 * @return S_OK, E_FAIL
 */
   HRESULT getQState(const CATUnicodeString          & iVaultServerName,
                     const CATUnicodeString          & iVaultServerHost,
                     const int                       & iVaultServerPort,
                           CATUnicodeString          & oCommitQueue,
                           CATUnicodeString          & oHPQueue,
                           CATUnicodeString          & oStdQueue,
                           CATUnicodeString          & oLPQueue,
                           ENOVIVaultError           & oVaultError);

/**
 * Specifies if a given document is cached or not.
 * @param iURL IVaultDocument URL.
 * @param oIsDocCached [out] - true if the document is cached, false otherwise.
 * @return S_OK, E_FAIL
 * @since V5R10
 */
   HRESULT isDocumentCached(const SEQUENCE_octet      & iURL,
                                  CATBoolean          & oIsDocCached,
                                  ENOVIVaultError     & oVaultError);

/**
 * Specifies if a given alias is cached or not.
 * @param iAliasName [in] - Vault Alias Name.
 * @param oIsAliasCached [out] - true if the Vault Alias Name is cached, false otherwise.
 * @return S_OK, E_FAIL
 * @since V5R10
 */
   HRESULT isAliasCached(const CATUnicodeString    & iAliasName,
                               CATBoolean          & oIsAliasCached,
                               ENOVIVaultError     & oVaultError);

/**
 * Specifies if one of the Vault Alias Name defined in Vault Client properties is cached.
 * @param oIsCacheUsed [out] - true if one of the Vault Alias Name defined in Vault Client properties is cached, false otherwise.
 * @return S_OK, E_FAIL
 * @since V5R10
 */
   HRESULT isCacheUsed(CATBoolean          & oIsCacheUsed,
                       ENOVIVaultError     & oVaultError);


/**
 * @nodoc
 * Specifies if the given Vault Alias Name is complient with the given service name, host and port.
 * @param isvAliasName Vault Alias Name.
 * @param isvCorbaServiceName [in] - corba service name.
 * @param isvHostName [in] - serveur host name.
 * @param invDaemonPort [in] - Orbix daemon listener port.
 * @param oIsReadComplient [out] - true if one of the Vault Alias Name is complient with the given service name, host and port, false otherwise.
 * @return S_OK, E_FAIL
 * @since V5R10
 */
   HRESULT isAliasReadComplient(const CATUnicodeString & isvAliasName,
                                const CATUnicodeString & isvCorbaServiceName,
                                const CATUnicodeString & isvHostName,
                                      int                invDaemonPort,
                                      CATBoolean       & oIsReadComplient,
                                      ENOVIVaultError  & oVaultError);


/**
 * @nodoc
 * Returns the state of documents regarding Vault Cache.
 * @param iURLs [in] - ENOVIVaultDocument URL collection to bind.
 * @param oVaultCacheInfoColl [out] - collection of VaultCacheInfo object.
 * @param oDocToRefreshURLs [out] -  collection of ENOVIVaultDocument URL to refresh.
 * @return S_OK, E_FAIL
 * @deprecated V5R12
 */
   HRESULT getDocsCacheInfo(const SEQUENCE_octetColl  & iURLs,
                                  VaultCacheInfoColl  & oVaultCacheInfoColl,
                                  SEQUENCE_octetColl  & oDocToRefreshURLs,
                                  ENOVIVaultError     & oVaultError);


// TO BE DELIVERED IN R12
/**
 * @nodoc
 * Returns the state of documents regarding Vault Cache.
 * @param iURLs [in] - ENOVIVaultDocument URL collection to bind.
 * @param ipServerTokenProvider [in] - the ServerTokenProvider object.
 * @param oVaultCacheInfoColl [out] - collection of VaultCacheInfo object.
 * @param oDocToRefreshURLs [out] -  collection of ENOVIVaultDocument URL to refresh.
 * @return S_OK, E_FAIL
 * @since V5R11
 */
//    HRESULT getDocsCacheInfo(const SEQUENCE_octetColl  & iURLs,
//                             const ServerTokenProvider * ipServerTokenProvider,
//                                   VaultCacheInfoColl  & oVaultCacheInfoColl,
//                                   SEQUENCE_octetColl  & oDocToRefreshURLs,
//                                   ENOVIVaultError     & oVaultError);

/**
 * @nodoc
 * Returns the state of documents regarding Vault Cache.
 * @param iURLs [in] - ENOVIVaultDocument URL collection to bind.
 * @param ibvContextOId [in] - CATlet context OId.
 * @param oVaultCacheInfoColl [out] - collection of VaultCacheInfo object.
 * @param oDocToRefreshURLs [out] -  collection of ENOVIVaultDocument URL to refresh.
 * @return S_OK, E_FAIL
 * @since V5R11
 */
    HRESULT getDocsCacheInfo(const SEQUENCE_octetColl  & iURLs,
                             const SEQUENCE_octet      & ibvContextOId,
                                   VaultCacheInfoColl  & oVaultCacheInfoColl,
                                   SEQUENCE_octetColl  & oDocToRefreshURLs,
                                   ENOVIVaultError     & oVaultError);

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 * Returns the state of documents regarding Vault Cache.
 * @param iURLs [in] - ENOVIVaultDocument URL collection to bind.
 * @param ipServerTokenProvider [in] - the ServerTokenProvider object.
 * @param ibvContextOId [in] - CATlet context OId.
 * @param oVaultCacheInfoColl [out] - collection of VaultCacheInfo object.
 * @param oDocToRefreshURLs [out] -  collection of ENOVIVaultDocument URL to refresh.
 * @return S_OK, E_FAIL
 * @since V5R11
 */
    HRESULT getDocsCacheInfo(const SEQUENCE_octetColl  & iURLs,
// TO RESTORE IN R12         const ServerTokenProvider * ipServerTokenProvider,
                             const void                * ipServerTokenProvider,
                             const SEQUENCE_octet      & ibvContextOId,
                                   VaultCacheInfoColl  & oVaultCacheInfoColl,
                                   SEQUENCE_octetColl  & oDocToRefreshURLs,
                                   ENOVIVaultError     & oVaultError);
 

/**
 * @nodoc
 * Marks the physical documents specifed by the URL collection as been protected from deletion.
 * @param iURLs [in] - ENOVIVaultDocument URL collection to mark.
 * @param iFrozeId [in] - froze identifier.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL
 * @deprecated V5R12
 */
   HRESULT frozeDocImg(const SEQUENCE_octetColl  & iURLs,
                       const SEQUENCE_octet      & iFrozeId,
                             ENOVIVaultError     & oVaultError);

/**
 * @nodoc
 * Marks the physical documents specifed by the URL collection as been protected from deletion.
 * @param iURLs [in] - ENOVIVaultDocument URL collection to mark.
 * @param iFrozeId [in] - froze identifier.
 * @param ibvContextOId [in] - CATlet context OId.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL
 */
   HRESULT frozeDocImg(const SEQUENCE_octetColl  & iURLs,
                       const SEQUENCE_octet      & iFrozeId,
                       const SEQUENCE_octet      & ibvContextOId,
                             ENOVIVaultError     & oVaultError);

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 * Marks the physical documents specifed by the URL collection as been protected from deletion.
 * @param iURLs [in] - ENOVIVaultDocument URL collection to mark.
 * @param iFrozeId [in] - froze identifier.
 * @param ipServerTokenProvider [in] - the ServerTokenProvider object.
 * @param ibvContextOId [in] - CATlet context OId.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL
 */
   HRESULT frozeDocImg(const SEQUENCE_octetColl  & iURLs,
                       const SEQUENCE_octet      & iFrozeId,
                       const void                * ipServerTokenProvider,
                       const SEQUENCE_octet      & ibvContextOId,
                             ENOVIVaultError     & oVaultError);

/**
 * @nodoc
 * Unmarks the physical documents specifed by the URL collection as been protected from deletion.
 * @param iURLs [in] - ENOVIVaultDocument URL collection to unmark.
 * @param iFrozeId [in] - froze identifier.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL
 * @deprecated V5R12
 */
   HRESULT unfrozeDocImg(const SEQUENCE_octetColl  & iURLs,
                         const SEQUENCE_octet      & iFrozeId,
                               ENOVIVaultError     & oVaultError);


/**
 * @nodoc
 * Unmarks the physical documents specifed by the URL collection as been protected from deletion.
 * @param iURLs [in] - ENOVIVaultDocument URL collection to unmark.
 * @param iFrozeId [in] - froze identifier.
 * @param ibvContextOId [in] - CATlet context OId.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL
 */
   HRESULT unfrozeDocImg(const SEQUENCE_octetColl  & iURLs,
                         const SEQUENCE_octet      & iFrozeId,
                         const SEQUENCE_octet      & ibvContextOId,
                               ENOVIVaultError     & oVaultError);

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 * Unmarks the physical documents specifed by the URL collection as been protected from deletion.
 * @param iURLs [in] - ENOVIVaultDocument URL collection to unmark.
 * @param iFrozeId [in] - froze identifier.
 * @param ipServerTokenProvider [in] - the ServerTokenProvider object.
 * @param ibvContextOId [in] - CATlet context OId.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL
 */
   HRESULT unfrozeDocImg(const SEQUENCE_octetColl  & iURLs,
                         const SEQUENCE_octet      & iFrozeId,
                         const void                * ipServerTokenProvider,
                         const SEQUENCE_octet      & ibvContextOId,
                               ENOVIVaultError     & oVaultError);

};


#endif

#include "ENOVIVaultClientAPP.h"

#ifndef ENOVIVaultSessionFactory_h
#define ENOVIVaultSessionFactory_h

// =================================================================
// COPYRIGHT DASSAULT SYSTEMES 2000
// =================================================================
// VPM (c) Copyright Dassault Systemes 2000
// -----------------------------------------------------------------
//
// Contents: ENOVIVaultSessionFactory, process client side.
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

#include "ENOVIVaultError.h"
#include "ENOVIVaultSession.h"
#include "ENOVIVaultSessionColl.h"

// TO BE DELIVERED IN R12
//class ServerTokenProvider;

class ENOVIVaultProperties;

//-----------------------------------------------------------------------------
// CLASS: ENOVIVaultSessionFactory
//-----------------------------------------------------------------------------

/**
 * Class to manage Vault sessions.
 * <b>role</b>: This class provides static methods enabling to get and release @href ENOVIVaultSession objects. <p>
 * @version   V5R8
 */

class  ExportedByENOVIVaultClientAPP  ENOVIVaultSessionFactory
{
//
// Data member
//
protected :

   static ENOVIVaultSessionColl * _pENOVIVaultSessionColl;

//
// Methods
//
public :

// TO BE DELIVERED IN R12
/**
 * @nodoc
 * Retrieves the Vault session pertainning to the given parameters.
 * If the @href ENOVIVaultSession Object doesn't exist yet, it will be created. <br>
 * @param ipServerTokenProvider [in] - the ServerTokenProvider object.
 * @param iIsTransactionMaster [in] - specifies if this process is transaction master.
 *     <br><b>Legal Values</b>: <tt>iAction</tt> may be set to:
 *         <dl>
 *         <dt><tt>CATTrue</tt>  <dd>To indicate that the session will support all transaction related methods
 *         <dt><tt>CATFalse</tt> <dd>To indicate that the session will not support all transaction related methods. Meaning that it is part of multi-process transaction whose master is another vault session. In this case, the iTransactionMasterHostName and iTransactionMasterListenPort parameters are mandatory.
 *         </dl> 
 * @param oppENOVIVaultSession [out] - Double pointer on ENOVIVaultSession Object.
 *     <br><b>Lifecycle rules deviation</b>: <tt>oppENOVIVaultSession</tt> parameter must only be dealocated using the @href #endVaultSession method.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, VAULT_E_NOSESSION, E_FAIL
 * @since V5R11
 */
//   static HRESULT getVaultSession(const ServerTokenProvider * ipServerTokenProvider,
//                                  const CATBoolean          & iIsTransactionMaster,
//                                        ENOVIVaultSession  ** oppENOVIVaultSession,
//                                        ENOVIVaultError     & oVaultError);


/**
 * Retrieves the Vault session pertainning to the given parameters.
 * If the @href ENOVIVaultSession Object doesn't exist yet, it will be created. <br>
 * @param ibvVaultSessionOId [in] - the vault user session object identifier.
 * @param iIsTransactionMaster [in] - specifies if this process is transaction master.
 *     <br><b>Legal Values</b>: <tt>iAction</tt> may be set to:
 *         <dl>
 *         <dt><tt>CATTrue</tt>  <dd>To indicate that the session will support all transaction related methods
 *         <dt><tt>CATFalse</tt> <dd>To indicate that the session will not support all transaction related methods. Meaning that it is part of multi-process transaction whose master is another vault session. In this case, the iTransactionMasterHostName and iTransactionMasterListenPort parameters are mandatory.
 *         </dl> 
 * @param oppENOVIVaultSession [out] - Double pointer on ENOVIVaultSession Object.
 *     <br><b>Lifecycle rules deviation</b>: <tt>oppENOVIVaultSession</tt> parameter must only be dealocated using the @href #endVaultSession method.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, VAULT_E_NOSESSION, E_FAIL
 * @since V5R11
 */
   static HRESULT getVaultSession(const SEQUENCE_octet      & ibvVaultSessionOId,
                                  const CATBoolean          & iIsTransactionMaster,
                                        ENOVIVaultSession  ** oppENOVIVaultSession,
                                        ENOVIVaultError     & oVaultError);


/**
 * Retrieves the Vault session pertainning to the given parameters.
 * If the @href ENOVIVaultSession Object doesn't exist yet, it will be created. <br>
 * @param iTransactionMasterServerMarker [in] - Identifier of the server where the transaction manager is located.
 *     <br><b>Legal Values</b>: <tt>iAction</tt> may be set to "" when the Vault session is transaction master
 * @param iTransactionMasterHostName [in] - Hostname of the transaction manager process.
 *     <br><b>Legal Values</b>: <tt>iAction</tt> may be set to "" when the Vault session is transaction master
 * @param iTransactionMasterListenPort [in] - Listen port on which call the transaction manager
 *     <br><b>Legal Values</b>: <tt>iAction</tt> may be set to 0 when the Vault session is transaction master.
 * @param iIsTransactionMaster [in] - specifies if this process is transaction master.
 *     <br><b>Legal Values</b>: <tt>iAction</tt> may be set to:
 *         <dl>
 *         <dt><tt>CATTrue</tt>  <dd>To indicate that the session will support all transaction related methods
 *         <dt><tt>CATFalse</tt> <dd>To indicate that the session will not support all transaction related methods. Meaning that it is part of multi-process transaction whose master is another vault session. In this case, the iTransactionMasterHostName and iTransactionMasterListenPort parameters are mandatory.
 *         </dl> 
 * @param oppENOVIVaultSession [out] - Double pointer on ENOVIVaultSession Object.
 *     <br><b>Lifecycle rules deviation</b>: <tt>oppENOVIVaultSession</tt> parameter must only be dealocated using the @href #endVaultSession method.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, VAULT_E_NOSESSION, E_FAIL
 * @deprecated V5R12
 */
   static HRESULT getVaultSession(const CATUnicodeString & iTransactionMasterServerMarker,
                                  const CATUnicodeString & iTransactionMasterHostName,
                                  const int              & iTransactionMasterListenPort,
                                  const CATBoolean       & iIsTransactionMaster,
				  ENOVIVaultSession     ** oppENOVIVaultSession,
				  ENOVIVaultError        & oVaultError);


/**
 * Terminates a Vault session.
 * @param iENOVIVaultSession [in] - Vault session to end.
 *     <br><b>Lifecycle rules deviation</b>: The <tt>iENOVIVaultSession</tt> parameter will be deallocated.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL
 */
   static HRESULT endVaultSession(ENOVIVaultSession * ipENOVIVaultSession,
				  ENOVIVaultError   & oVaultError);

/**
 * Terminates a Vault session proxy.
 * @param iENOVIVaultSession [in] - Vault session to end.
 *     <br><b>Lifecycle rules deviation</b>: The <tt>iENOVIVaultSession</tt> parameter will be deallocated.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL
 */
   static HRESULT endVaultSessionProxy(ENOVIVaultSession * ipENOVIVaultSession,
                                       ENOVIVaultError   & oVaultError);


/**
 * Retrieves the alias name of the default Vault session.
 * @param oDefaultAliasName [out] - Alias name of the default Vault session.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL
 * @since V5R7
 */

   static HRESULT getDefaultAliasName(CATUnicodeString & oDefaultAliasName, 
                                      ENOVIVaultError  & oVaultError);

/**
 * Retrieves the alias names of all the known Vaults.
 * @param oVaultAliasNamesliste [out] - Known Vaults alias names.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL
 * @since V5R7
 */

   static HRESULT getVaultAliasNames(CATListOfCATUnicodeString & oVaultAliasNamesliste,
                                     ENOVIVaultError           & oVaultError);

/**
 * @nodoc
 * Returns the ENOVIVaultProperties class.
 * @param oppENOVIVaultProperties [out] - the ENOVIVaultProperties class.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL
 * @since V5R13
 */

   static HRESULT getVaultPropertiesClass(ENOVIVaultProperties ** oppENOVIVaultProperties,
                                          ENOVIVaultError       & oVaultError);

protected :

/**
 * @nodoc
 * Creates the ENOVIVaultSession object pertainning to the given parameters.
 * @param iTransactionMasterServerMarker [in] - Identifier of the server where the transaction manager is located
 * @param iTransactionMasterHostName [in] - Hostname of the transaction manager process.
 * @param iTransactionMasterListenPort [in] - Listen port on which call the transaction manager process.
 * @param iIsTransactionMaster [in] - specifies if this process is transaction master.
 * @param iSessionOId [in] - Session Object Identifier.
 * @param oppENOVIVaultSession [out] - double pointer on ENOVIVaultSession Object.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, VAULT_E_NOSESSION, E_FAIL
 * @since V5R7
 */
   static HRESULT createVaultSession(const CATUnicodeString   & iTransactionMasterServerMarker,
                                     const CATUnicodeString   & iTransactionMasterHostName,
                                     const int                & iTransactionMasterListenPort,
                                     const CATBoolean         & iIsTransactionMaster,
                                           ENOVIVaultSession ** oppENOVIVaultSession,
                                           ENOVIVaultError    & oVaultError);


protected :

/**
 * @nodoc
 * Remove a ENOVIVaultSession object.
 * @param ipENOVIVaultSession [in] - pointer on ENOVIVault Session Object to remove.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL
 * @since V5R7
 */
static HRESULT removeVaultSession(ENOVIVaultSession * ipENOVIVaultSession,
				  ENOVIVaultError   & oVaultError);


};


#endif

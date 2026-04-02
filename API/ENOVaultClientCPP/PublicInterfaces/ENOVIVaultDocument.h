#include "ENOVIVaultClientAPP.h"
#ifndef _ENOVIVaultDocument_h
#define _ENOVIVaultDocument_h

// =================================================================
// COPYRIGHT DASSAULT SYSTEMES 2000
// =================================================================
// VPM (c) Copyright Dassault Systemes 2000
// -----------------------------------------------------------------
//
// Contents: ENOVIVaultDocument, process client side.
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


#include "CATTypUtilit.h"
#include "CATDataType.h"
#include "CATUnicodeString.h"
#include "ENOVIDocMandAttHolder.h"
#include "ENOVIVaultError.h"

class ENOVIVaultUserSession;
class VSDocumentRMI;

//-----------------------------------------------------------------------------
// CLASS: ENOVIVaultDocument
//-----------------------------------------------------------------------------

/**
 * This class supplies methods to manage documents.
 * <b>role</b>: This class enables to access properties and content of a document
 */

// WARNING
// WARNING to bypas HP redefinition of read, write etc ... (/usr/include/dce/cma_ux.h)
// WARNING
//#ifdef _HPUX_SOURCE
#ifndef _CMA_NOWRAPPERS_
#define _CMA_NOWRAPPERS_
#endif
//#endif

class  ExportedByENOVIVaultClientAPP  ENOVIVaultDocument
{
  friend class  ENOVIVaultUserSession;
  friend class  ENOVIVaultSession;

//
// Class data member
//
public :
/**
 * @nodoc
 */
   static int  CREATED;
/**
 * @nodoc
 */
   static int  UPDATED;
/**
 * @nodoc
 */
   static int  DELETED;
/**
 * @nodoc
 */
   static int  COMMITTED;
/**
 * @nodoc
 */
   static int  EXCLUSIVELOCK;

//
public :

/**
 * @nodoc
 */
   ENOVIVaultDocument();

/**
 * @nodoc
 */
   ENOVIVaultDocument(ENOVIVaultUserSession  * ipFatherUserSession,
                      VSDocumentRMI          * ipReadVSDocumentRMI,
                      VSDocumentRMI          * ipWriteVSDocumentRMI);

//
// Destructor
//

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 */
   ~ENOVIVaultDocument();


public:
/**
 * Reads the whole document content into a bytes array. 
 * The current position is set to the document end after this operation. 
 * You are supposed to allocate and release the data buffer oReadBuffer.
 * This service uses the above @href #ReadBlock method to be efficient and performe the whole read sequence by
 * block. 
 * @param iSizeToRead [in] - data buffer to read size
 * @param oReadBuffer [out] - data buffer read from server.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL, VAULT_E_NOT_OPEN_READ
 */
   HRESULT read(const long              iSizeToRead, 
                      SEQUENCE_octet  & oReadBuffer,
                      ENOVIVaultError & oVaultError);

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 */
   HRESULT read(const long               iSizeToRead, 
                      SEQUENCE_octet   & oppReadBuffer,
                      CATUnicodeString & iLocation,
                      ENOVIVaultError  & ve);

/**
 * Supplies the ENOVIVaultDocument Unique Universal Identifier.
 * @param oURL [out] - ENOVIVaultDocument Unique Universal Identifier.
 */
   HRESULT getURL(SEQUENCE_octet & oURL) const;

/**
 * Get the Father ENOVIVaultUserSession.
 * @param oFatherUserSession [out] - Father ENOVIVaultUserSession.
 */
   HRESULT getFatherUserSession(ENOVIVaultUserSession ** oppFatherUserSession) const;


/**
 * Supplies the ENOVIVaultDocument status.
 * @param oStatus [out] - ENOVIVaultDocument status. It can be: 
 *     <br><b>Legal Values</b>: <tt>iAction</tt> may be set to:
 *         <dl>
 *         <dt><tt>CREATED</tt>  <dd>To indicate that the document have been created.
 *         <dt><tt>UPDATED</tt> <dd>To indicate that the document has been updated.
 *         <dt><tt>DELETED</tt>  <dd>To indicate that the document has been deleted.
 *         <dt><tt>COMMITTED</tt>  <dd>To indicate that there is no ongoing modification on the document.
 *         </dl> 
 */
   HRESULT getStatus(int & oStatus, ENOVIVaultError & oVaultError) const;

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 * Try to get a lock of the requested type on the ENOVIVault Document Object. <br>
 * According to the requested lock type this call may failed if the vault document <br>
 * is already locked by an other ENOVIVault users. <br>
 * A lock cannot survive the transaction end.
 * @param iRequestedLockType [in] - requested lock type.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL, VAULT_E_LOCKED, VAULT_E_DELETED
 */
   HRESULT lock(const int iRequestedLockType,ENOVIVaultError & oVaultError);

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 * Unlock the vault document if no modification has been done, else the lock is <br>
 * released at transaction end.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, VAULT_E_OBJMODIFIED, E_FAIL
 */
   HRESULT unLock(ENOVIVaultError & oVaultError);

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 * Supplies the lock status of the vault document.
 * @param oVaultError [out] - Details about the error.
 */
   HRESULT getLockStatus(int & oLockStatus,ENOVIVaultError & oVaultError) const;

// 
// -> Mandatory attributes
// 

/**
 * Supplies the document creation date.
 * @param oCreationTimestamp [out] - ENOVIVaultDocument creation date.
 * @param oVaultError [out] - Details about the error.
 */
   HRESULT getCreationTimestamp(CATUnicodeString & oCreationTimestamp, 
                                ENOVIVaultError  & oVaultError) const;

/**
 * Supplies the document last modification date.
 * @param oLastTimestamp [out] - ENOVIVaultDocument last modification date.
 * @param oVaultError [out] - Details about the error.
 */
   HRESULT getLastModTimestamp(CATUnicodeString & oLastTimestamp,
                               ENOVIVaultError  & oVaultError) const;

/**
 * Supplies the document last modification date in GMT time.
 * @param onvLastTimestamp [out] - ENOVIVaultDocument last modification date.
 * @param oVaultError [out] - Details about the error.
 */
   HRESULT getGMTLastModTimestamp(CATLONG64       & onvLastTimestamp,
                                  ENOVIVaultError & oVaultError) const;

/**
 * Supplies the document external object identifier.
 * @param oEXTOId [out] - ENOVIVaultDocument external object identifier.
 * @param oVaultError [out] - Details about the error.
 */
   HRESULT getEXTOId(SEQUENCE_octet   & oEXTOId,
                     ENOVIVaultError  & oVaultError) const;

/**
 * Supplies the document name.
 * @param oName [out] - ENOVIVaultDocument name.
 * @param oVaultError [out] - Details about the error.
 */
  HRESULT getName(CATUnicodeString & oName, ENOVIVaultError & oVaultError) const;
  
/**
 * Supplies the document original name.
 * @param oOriginalName [out] - ENOVIVaultDocument original name.
 * @param oVaultError [out] - Details about the error.
 */
  HRESULT getOriginalName (CATUnicodeString & oOriginalName, ENOVIVaultError & oVaultError) const;

/**
 * Supplies the document original path.
 * @param oOriginalPath [out] - ENOVIVaultDocument original path.
 * @param oVaultError [out] - Details about the error.
 */
  HRESULT getOriginalPath (CATUnicodeString & oOriginalPath, ENOVIVaultError & oVaultError) const;

/**
 * Supplies the document original host.
 * @param oOriginalHost [out] - ENOVIVaultDocument original host.
 * @param oVaultError [out] - Details about the error.
 */
  HRESULT getOriginalHost (CATUnicodeString & oOriginalHost, ENOVIVaultError & oVaultError) const;

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 * Supplies the document last content modification date.
 * @param oLCM [out] - ENOVIVaultDocument last content modification date in milliseconds since January 1, 1970, 00:00:00 GMT.
 * @param oVaultError [out] - Details about the error.
 */
  HRESULT getLCM(long & oLCM, ENOVIVaultError & oVaultError) const;

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 */
  HRESULT  getMandAttr(ENOVIDocMandAttHolder & oENOVIDocMandAttHolder,
                       ENOVIVaultError       & ve);

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 */
  HRESULT  setMandAttr(ENOVIDocMandAttHolder & iENOVIDocMandAttHolder,
                       ENOVIVaultError       & ve);

/**
 * Sets the document original name.
 * @param iOriginalName [in] - ENOVIVaultDocument original name.
 * @param oVaultError [out] - Details about the error.
 */
  HRESULT setOriginalName (const CATUnicodeString & iOriginalName, ENOVIVaultError & oVaultError);

/**
 * Sets the document original path.
 * @param iOriginalPath [in] - ENOVIVaultDocument original path.
 * @param oVaultError [out] - Details about the error.
 */
  HRESULT setOriginalPath ( const CATUnicodeString & oOriginalPath, ENOVIVaultError & oVaultError);

/**
 * Sets the document original host.
 * @param iOriginalHost [out] - ENOVIVaultDocument original host.
 * @param oVaultError [out] - Details about the error.
 */
  HRESULT setOriginalHost ( const CATUnicodeString & iOriginalHost , ENOVIVaultError & oVaultError);

/**
 * Supplies the document description.
 * @param oDescription [out] - ENOVIVaultDocument description.
 * @param oVaultError [out] - Details about the error.
 */
   HRESULT getDescription(CATUnicodeString & oDescription,ENOVIVaultError & oVaultError) const;

/**
 * Supplies the document size.
 * @param  oDocumentSize [out] - ENOVIVaultDocument size.
 * @param oVaultError [out] - Details about the error.
 */
   HRESULT getSize(unsigned long & oDocumentSize,ENOVIVaultError & oVaultError) const;

/**
 * Supplies the document cksum.
 * @param  oDocumentCKSum [out] - ENOVIVaultDocument size.
 * @param oVaultError [out] - Details about the error.
 */
   HRESULT getCKSum(unsigned long   & oDocumentCKSum,
                    ENOVIVaultError & oVaultError) const;

/**
 * Supplies the document mimetype.
 * @param oMimetype [out] - ENOVIVaultDocument mimetype.
 * @param oVaultError [out] - Details about the error.
 */
   HRESULT getMimeType(CATUnicodeString & oMimetype,ENOVIVaultError & oVaultError) const;


/**
 * Sets the document external object identifier.
 * @param iEXTOId [in] - ENOVIVaultDocument external object identifier.
 * @param oVaultError [out] - Details about the error.
 */
   HRESULT setEXTOId(const SEQUENCE_octet   & iEXTOId,
                           ENOVIVaultError  & oVaultError) const;

/**
 * Sets the document name.
 * @param iName [in] - ENOVIVaultDocument name.
 * @param oVaultError [out] - Details about the error.
 */
   HRESULT setName(const CATUnicodeString & iName,ENOVIVaultError & oVaultError);

/**
 * Set the document description.
 * @param iDescription [in] - ENOVIVaultDocument description.
 * @param oVaultError [out] - Details about the error.
 */
   HRESULT setDescription(const CATUnicodeString & iDescription,ENOVIVaultError & oVaultError);

/**
 * Set the ENOVIVaultDocument mimetype.
 * @param iMimetype [in] - ENOVIVaultDocument mimetype.
 * @param oVaultError [out] - Details about the error.
 */
   HRESULT setMimeType(const CATUnicodeString & iMimetype,ENOVIVaultError & oVaultError);


//
// Document access
//
public :

/**
 * Initiates a document read operation. 
 * It gives access to the last committed view. At open time 
 * the current position is set to the document beginning (value zero).
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL, VAULT_E_LOCKED, VAULT_E_ALREADY_OPEN
 */
   HRESULT openRead(ENOVIVaultError & oVaultError);


/**
 * Initiates a document write operation. 
 * To be successful, it supposes that the document
 * is not under modification. Put the size of the document to write when it is possible.
 * It should always be the case, else put the value zero by default. At open time the current
 * position is set to the document beginning (value zero).
 * <b>Performance issue:</b> Be carefull that this call trigger a document copy on ENOVIVault server side
 * off when the iFullDocWritePlanned parameter is set to false.
 * Set iFullDocWritePlanned to true each time it is possible.
 * @param iDocSize [in] - document size in bytes. 
 *     <br><b>Legal Values</b>: <tt>iDocSize</tt> setted to zero means that you do not know the document size.
 * @param iFullDocWritePlanned [in] - indicates if you are planning to write the whole document.
 *     <br><b>Legal Values</b>: 
 *         <dl>
 *         <dt><tt>CATTrue</tt>  <dd>To indicate that the whole document will be written.
 *         <dt><tt>CATFalse</tt> <dd>To indicate that only part of the document will be written.
 *         </dl> 
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL, VAULT_E_LOCKED, VAULT_E_MEDIUM_FULL, VAULT_E_ALREADY_OPEN
 */
   HRESULT openWrite(const unsigned long     iDocSize,
                     const CATBoolean        iFullDocWritePlanned,
                           ENOVIVaultError & oVaultError);


/**
 * Initiates a document read write operation. 
 * To be successful, it supposes that the document
 * is not under modification. It give access to the last committed view.
 * <b>Performance issue:</b> Be carefull that this call trigger a document copy on server side
 * off. <br>
 * Prefer others read or write methods than this one if possible.
 * @param iFullDocWritePlanned [in] - indicates if you are planning to write the whole document.
 *     <br><b>Legal Values</b>: 
 *         <dl>
 *         <dt><tt>CATTrue</tt>  <dd>To indicate that the whole document will be written.
 *         <dt><tt>CATFalse</tt> <dd>To indicate that only part of the document will be written.
 *         </dl> 
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL, VAULT_E_LOCKED, VAULT_E_ALREADY_OPEN
 */
   HRESULT openReadWrite(const CATBoolean        iFullDocWritePlanned,
                               ENOVIVaultError & oVaultError);

//
// -> Current position methods
//

/**
 * Supplies the current position in the document you are accessing. 
 * <br><b>Precondition</b>: The document must have been openned
 * @param oCurPos [out] - current position in the document.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL, VAULT_E_NOT_OPEN
 */
   HRESULT getCurPos(unsigned long & oCurPos, ENOVIVaultError & oVaultError) const;

/**
 * Set the current position in the document you are accessing.
 * <br><b>Precondition</b>: The document must have been openned
 * @param iNewCurPos [in] - new current position in the document.
 * @param oVaultError [out] - Details about the error.
 * @return S_OK, E_FAIL, VAULT_E_NOT_OPEN
 */
   HRESULT setCurPos(const unsigned long iNewCurPos, ENOVIVaultError & oVaultError);


// 
// Read methods
//

/**
 * Read a data block beginning at the current position from the server document<br>
 * into a bytes array. The current position is updated after the block read operation.<br>
 * You are suppose to allocate and release the data buffer oReadBuffer.
 * @param ioReadBuffer [inout] - data buffer read from server.
 * @param iOffset [in] - offset in the input/output buffer.
 * @param iSizeToRead [in] - data buffer to read size.
 * @return S_OK, E_FAIL, VAULT_E_NOT_OPEN
 */
   HRESULT readBlock(      SEQUENCE_octet  & ioReadBuffer, 
                     const long              iOffset, 
                     const long              iSizeToRead,
                           long            & oLengthRead,
                           ENOVIVaultError & oVaultError); 

/**
 * Copy the server document into a local file. The local file full path name is not mandatory.<br>
 * You may give only the file name or even nothing. Then use the getLocationPath method to get<br>
 * the local file full path name. The current position is set to the document end after this
 * operation.
 * @param iLocalFullPathName [in] - full path name under which the consumer application want the
 * document to be copied.
 * @param iDeleteLocalFileAtClose [in] - if set ot true, the local file will be deleted at close
 * time. 
 * @return S_OK, E_FAIL, VAULT_E_NOT_OPEN_READ, VAULT_E_MEDIUM_FULL
 */
   HRESULT copyToLocalFile(const CATUnicodeString & iLocalFullPathName, 
                           const CATBoolean         iDeleteLocalFileAtClose,
                                 ENOVIVaultError  & oVaultError);

// 
// -> Writting methods
//

/**
 * Write a data block on server beginning at the current position from a bytes array. The
 * current<br>
 * position is updated after the block write operation. You are suppose to allocate and release
 * the<br>
 * data buffer iBufferToWrite.<br>
 * @param iBufferToWrite [in] - data block to write on server.
 * @param iOffset [in] - offset in the input buffer.
 * @param iSizeToWrite [in] - number of bytes to write on server. 
 * @return S_OK, E_FAIL, VAULT_E_NOT_OPEN_WRITE, VAULT_E_MEDIUM_FULL
 */
   HRESULT writeBlock(const SEQUENCE_octet  & iBufferToWrite,
                      const long              iOffset,
                      const long              iSizeToWrite,
                            ENOVIVaultError & oVaultError);


/**
 * Copy the local document on server. The local file full path name is mandatory. The current
 * position<br>
 * is set to the document end after this operation.<br>
 * @param iLocalFullPathName [in] - local document to write full path name.
 * @param iDeleteLocalFileAtClose [in] - if set ot true, the local file will be deleted at close
 * time. 
 * @return S_OK, E_FAIL, VAULT_E_NOT_OPEN_WRITE, VAULT_E_NO_LOCALFILEFULLPATHNAME,
 * VAULT_E_MEDIUM_FULL
 */
   HRESULT copyFromLocalFile(const CATUnicodeString & iLocalFullPathName, 
                             const CATBoolean         iDeleteLocalFileAtClose,
                                   ENOVIVaultError  & oVaultError);


/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 */
  HRESULT copyDocValueFromDoc (const ENOVIVaultDocument * sourceDoc,
                                     ENOVIVaultError    & oVaultError);

/**
 * Write the whole document on server from a bytes array. The current position is set to the
 * document end<br>
 * after this operation. You are suppose to allocate and release the data buffer iBufferToWrite.<br>
 * This service use the above WriteBlock call to be efficient and performe the whole write sequence
 * by block. 
 * @param iSizeToWrite [in] - number of bytes to write on server. 
 * @param iBufferToWrite [in] - data buffer to write on server.
 * @return S_OK, E_FAIL, VAULT_E_NOT_OPEN_WRITE, VAULT_E_MEDIUM_FULL
 */
   HRESULT write(const long              iSizeToWrite,
		           const SEQUENCE_octet  & iBufferToWrite,
                       ENOVIVaultError & oVaultError);

// 
// -> General methods
//
/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 */
   HRESULT getLocationPathOnServer(CATUnicodeString & oFullPath,
                                   ENOVIVaultError  & oVaultError) const;

/**
 * Supplies when possible and according to transfer protocols, the full path name of the ENOVIVault
 * document.<br>
 * You will have an error if no open has been done on the document. If NFS transfer protocol is
 * switched<br>
 * on you will have the full path name on server side under which to write or read the document.<br>
 * After a CopyXXXLocalFile operation, it will return the given LocalFullPathName.<br>
 * @param oFullPath [out] - full path name of the vault document on the ENOVIVault server
 * @return S_OK, E_FAIL, VAULT_E_NOT_OPEN, VAULT_E_NO_LOCATION_AVAILABLE
 */
   HRESULT getLocationPath(CATUnicodeString & oFullPath,
			   ENOVIVaultError  & oVaultError) const;

/**
 * Specifies if the document is cached or not.
 * @param oIsDocCached [out] - true if the document is cached, false otherwise.
 * @return S_OK, E_FAIL
 * @since V5R10
 */
   HRESULT isCached(CATBoolean          & oIsDocCached,
                    ENOVIVaultError     & oVaultError);

/**
 * Refresh this document if it is a cached document and it is not up-to-date.
 * @since V5R10
 */
   HRESULT refresh(ENOVIVaultError & oVaultError);

//
// -> Closing Method
//

/**
 * Ends the Read, Write or ReadWrite sequence. Reset the current position to the document
 * beginning.<br>
 * Delete local file if needed.
 * @return S_OK, S_ALREADY_CLOSE, S_NOT_OPEN, E_FAIL
 */
   HRESULT close(ENOVIVaultError & oVaultError);

/**
 * Supplies the ENOVIVaultDocument Object Identifier.
 * @param oOId [out] - ENOVIVaultDocument Object Identifier.
 * @return S_OK, E_FAIL
 */
   HRESULT getOId(SEQUENCE_octet & oOId) const;

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 * Set the ENOVIVaultDocument Object Identifier.
 * @param iOId [in] - ENOVIVaultDocument Object Identifier.
 * @return S_OK, E_FAIL
 */
   HRESULT setOId(const SEQUENCE_octet & iOId);

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 * Set the ENOVIVaultDocument Unique Universal Identifier.
 * @param iURL [in] - ENOVIVaultDocument Unique Universal Identifier.
 * @return S_OK, E_FAIL
 */
   HRESULT setURL(const SEQUENCE_octet & iURL);

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 * Set the Father ENOVIVaultUserSession.
 * @param iFatherUserSession [in] - Father ENOVIVaultUserSession.
 * @return S_OK, E_FAIL
 */
   HRESULT setFatherUserSession(ENOVIVaultUserSession * ipFatherUserSession);

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 */
   HRESULT setLocationPath(CATUnicodeString & oFullPath,
			   ENOVIVaultError  & oVaultError);

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 */
   HRESULT setReadVSDocumentRMI(VSDocumentRMI     * ipReadVSDocumentRMI);
   
/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 */
   HRESULT setWriteVSDocumentRMI(VSDocumentRMI    * ipWriteVSDocumentRMI);

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 * Set the ENOVIVaultDocument creation date.
 * @param iCreationTimestamp [in] - ENOVIVaultDocument creation date.
 * @return S_OK, E_FAIL
 */
   HRESULT setCreationTimestamp(const CATUnicodeString & iCreationTimestamp,ENOVIVaultError & oVaultError);

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 */
   HRESULT getReadVSDocumentRMI(VSDocumentRMI    ** oppReadVSDocumentRMI);

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 */
   HRESULT getWriteVSDocumentRMI(VSDocumentRMI   ** oppWriteVSDocumentRMI);

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 */
   unsigned long AddRef();

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 */
   unsigned long Release();

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 */
   unsigned long RefCount();

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 */
   void BeMutable();

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 */
   void BeNotMutable();

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 */
HRESULT getGMTCreatLastModTimestamp(CATLONG64      & onvGMTCreationTimestamp,
									CATLONG64      & onvGMTLastTimestamp,
                                                     ENOVIVaultError  & ve) const;

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 */
static HRESULT toURL (const CATUnicodeString & alias,
                      const SEQUENCE_octet   & oid,
                            SEQUENCE_octet   & url,
                            CATUnicodeString & oidhexa,
							CATBoolean       & iNotMutableDoc,
                            ENOVIVaultError  & oVaultError);

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 */
static HRESULT fromURL(const SEQUENCE_octet   & iURL,
                             CATUnicodeString & alias,
                             SEQUENCE_octet   & oid,
                             CATUnicodeString & oidhexa,
                             ENOVIVaultError  & oVaultError);

/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 */
static HRESULT fromURL(const SEQUENCE_octet   & iURL,
                             CATUnicodeString & alias,
                             SEQUENCE_octet   & oid,
                             CATUnicodeString & oidhexa,
							 CATBoolean       & iNotMutableDoc,
                             ENOVIVaultError  & oVaultError);
  
/**
 * @nodoc
 * ****************** CAUTION: INTERNAL USE ONLY *******************************
 */
static HRESULT addNotMutableToURL(SEQUENCE_octet   & iURL,
                                  ENOVIVaultError  & oVaultError);

protected:
//
// Instance data member
//
   SEQUENCE_octet          _OId;                 // Cached on client
   SEQUENCE_octet          _URL;                 // Cached on client

   ENOVIVaultUserSession  * _FatherUserSession;
   VSDocumentRMI          * _ReadRMI;
   VSDocumentRMI          * _WriteRMI;

//   int                 _Status;
//   int                 _LockStatus;

   CATUnicodeString         _CreationTimestamp;  // Cached on client

   CATUnicodeString         _dvLastModTimestamp;  // Cached on client between OpenRead and close.
   CATUnicodeString         _dvGMTLastModTimestamp;  // Cached on client between OpenRead and close.
   CATUnicodeString         _svName;              // Cached on client between OpenRead and close.
   CATUnicodeString         _svDescription;       // Cached on client between OpenRead and close.
   CATUnicodeString         _svMimeType;          // Cached on client between OpenRead and close.
   CATUnicodeString         _svOriginalName;      // Cached on client between OpenRead and close.
   CATUnicodeString         _svOriginalPath;      // Cached on client between OpenRead and close.
   CATUnicodeString         _svOriginalHost;      // Cached on client between OpenRead and close.
   unsigned long            _Size;                // Cached on client between OpenRead and close.
   long                     _nvLastContentAccess; // Cached on client between Open Read/Write
                                                  // and close.
   long                     _nvLastContentModif;  // Cached on client between Open Read/Write
                                                  // and close.

   unsigned long            _CurPos;              // Cached on client

   CATUnicodeString         _svLocalfullname;
   CATUnicodeString         _svLocationPathOnServer; // Cached on client between OpenRead and close.

   CATBoolean               _moderead;
   CATBoolean               _isLocalFileToDelete;
   CATBoolean               _IsOpenRead;
   CATBoolean               _IsOpenWrite;
   CATBoolean               _IsILB2Optimized;
   CATBoolean               _IsNotMutable;
   
   unsigned long            _refCount;
};

#endif

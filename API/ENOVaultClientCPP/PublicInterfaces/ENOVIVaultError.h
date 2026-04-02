#include "ENOVIVaultClientAPP.h"

#ifndef ENOVIVaultError_h
#define ENOVIVaultError_h

// =================================================================
// COPYRIGHT DASSAULT SYSTEMES 2000
// =================================================================
// VPM (c) Copyright Dassault Systemes 2000
// -----------------------------------------------------------------
//
// Contents: ENOVIVaultError, process client side.
//
// =================================================================
// Historic
// Creation : 15/09/2000  ABE/OJH
// =================================================================

/**
 *  @CAA2Level L1
 *  @CAA2Usage U1
 */ 

//-----------------------------------------------------------------------------
// INCLUDES:
//-----------------------------------------------------------------------------
#include "CATErrorDef.h"

//-----------------------------------------------------------------------------
// CLASS: ENOVIVaultDocument
//-----------------------------------------------------------------------------


//============================================================================
//                            INFO / ERROR macros
//============================================================================

#if defined (_WINERROR_) || defined(SEVERITY_ERROR)
# undef SEVERITY_SUCCESS
# undef SEVERITY_ERROR
# undef SUCCEEDED
# undef FAILED
# undef IS_ERROR
# undef HRESULT_CODE
# undef HRESULT_SEVERITY
# undef MAKE_HRESULT
#endif

//----------------------------------------------------------------------------
// (VAULT) FACILITY codes (bits )
//    to be used with facility argument of the
//    MAKE_VAULT_HRESULT(sev,facility,code) macro
//----------------------------------------------------------------------------
#ifndef FACILITY_VAULT
# define FACILITY_VAULT      0x100 | 30
#endif

//----------------------------------------------------------------------------
// SEVERITY codes (bits 31-30 of HRESULT)
//----------------------------------------------------------------------------

# define SEVERITY_SUCCESS    0
# define SEVERITY_INFO       1
# define SEVERITY_WARNING    2
# define SEVERITY_ERROR      3

//----------------------------------------------------------------------------
// When HRESULT is used for BOOLEAN purpose (and not error),
//  S_OK    means TRUE
//  S_FALSE means FALSE
// Note that SUCCEEDED(S_FALSE) >= 0 --> function succeeded and returned FALSE
//----------------------------------------------------------------------------
#ifndef S_OK
# define S_OK                ((HRESULT)0x00000000L)
# define S_FALSE             ((HRESULT)0x00000001L)
#endif
#ifndef E_UNEXPECTED
# define E_UNEXPECTED        ((HRESULT)0x8000FFFFL)
# define E_NOTIMPL           ((HRESULT)0x80004001L)
# define E_INVALIDARG        ((HRESULT)0x80070057L)
# define E_NOINTERFACE       ((HRESULT)0x80004002L)
# define E_POINTER           ((HRESULT)0x80004003L)
# define E_HANDLE            ((HRESULT)0x80070006L)
# define E_ABORT             ((HRESULT)0x80004004L)
# define E_FAIL              ((HRESULT)0x80004005L)
#endif

//----------------------------------------------------------------------------
// HRESULT Macros redefinitions
//----------------------------------------------------------------------------
#ifndef  SUCCEEDED
# define SUCCEEDED(Status) ((HRESULT)(Status) >= 0)
# define FAILED(Status)    ((HRESULT)(Status)<0)
# define IS_ERROR(Status)  ((ULONG)(Status) >> 31 == SEVERITY_ERROR)
# define HRESULT_CODE(hr)     ((hr) & 0xFFFF)
# define HRESULT_SEVERITY(hr) (((hr) >> 30) & 0x3)
#endif
//----------------------------------------------------------------------------
/**
 * VAULT HRESULT Macros definitions.
 */
// 1. VAULT_RESULT (sev,fac,code)      to define a VAULT HRESULT code
//----------------------------------------------------------------------------
#ifndef VAULT_HRESULT
#define VAULT_HRESULT(sev,fac,code) \
    ((HRESULT) (((ULONG)(sev)<<30) | ((ULONG)(fac)<<16) | ((ULONG)(code))) )
#endif

//# define VPM_INFO(info,file,tag,hr) info.Init(file,tag,hr,__FILE__,__LINE__)

// Info codes
/**
 * There is still some data to get from the server.
 */
#ifndef S_DATAREMAINING 
#define S_DATAREMAINING VAULT_HRESULT(SEVERITY_INFO, FACILITY_VAULT, 800)
#endif

/**
 * @nodoc
 */
#ifndef VAULT_S_LATERDOCVERSNOTREAD
#define VAULT_S_LATERDOCVERSNOTREAD VAULT_HRESULT(SEVERITY_WARNING, FACILITY_VAULT, 801)
#endif

/**
 * @nodoc
 */
#ifndef VAULT_S_NOMASTERCALL
#define VAULT_S_NOMASTERCALL VAULT_HRESULT(SEVERITY_SUCCESS, FACILITY_VAULT, 802)
#endif

// =================================================================================================
// Error codes

/**
  * There was no IENOVIVaultDocument corresponding to the given oid.
  */
#ifndef VAULT_E_NOVAULTDOCUMENT_FOUND
#define VAULT_E_NOVAULTDOCUMENT_FOUND VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 1)
#endif

/** 
  *The reference IENOVIVaultDocument has no value associate with it, so there is nothing to associate.
  */
#ifndef VAULT_E_REFVAULTDOCUMENT_NOTVALUATED
#define VAULT_E_REFVAULTDOCUMENT_NOTVALUATED VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 2)
#endif

/**
 * Some parameters on the reference IENOVIVaultDocument we need in order to perform the operation are missing.
 */
#ifndef VAULT_E_REFVAULTDOCUMENT_MISSINGPARAMETERS
#define VAULT_E_REFVAULTDOCUMENT_MISSINGPARAMETERS VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 3)
#endif

/**
  * This IENOVIVaultDocument is already valuated. We do not erase the existing value, so there is nothing to do.
  */
#ifndef VAULT_E_VAULTDOCUMENT_ALREADYVALUATED
#define VAULT_E_VAULTDOCUMENT_ALREADYVALUATED VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 4)
#endif

/**
 * Some parameters on the IENOVIVaultDocument we need in order to perform the operation are missing.
 */
#ifndef VAULT_E_VAULTDOCUMENT_MISSNIGPARAMETERS
#define VAULT_E_VAULTDOCUMENT_MISSNIGPARAMETERS VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 5)
#endif

/** 
  * The requested open mode is not compatible with the current open mode. You have to perform a
  * close and re-open
  */
#ifndef VAULT_E_INCOMPATIBLEOPENMODE
#define VAULT_E_INCOMPATIBLEOPENMODE VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 6)
#endif

/**
  * The IENOVIVaultDocument object is not open in spite of it is supposed to be opened.
  */
#ifndef VAULT_E_VAULTDOCUMENTNOTOPEN
#define VAULT_E_VAULTDOCUMENTNOTOPEN    VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 7)
#endif

/**
  * The ENOVIVault Client object can't access to the given input file.
  */
#ifndef VAULT_E_CLIENTFILECANTACCESS
#define VAULT_E_CLIENTFILECANTACCESS VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 8)
#endif

/**
  * The ENOVIVault Client object wasn't able to find the given input file.
  */
#ifndef VAULT_E_CLIENTFILENOTFOUND
#define VAULT_E_CLIENTFILENOTFOUND  VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 9)
#endif

/**
  * The ENOVIVault Client object has not enought right to access to the given input file.
  */
#ifndef VAULT_E_CLIENTFILEACCESSDENIED
#define VAULT_E_CLIENTFILEACCESSDENIED VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 10)
#endif

/**
  * The ENOVIVault Client object has not enought right to access to the given input file.
  */
#ifndef VAULT_E_CLIENTFILECANTCREATEORTRUNCATE
#define VAULT_E_CLIENTFILECANTCREATEORTRUNCATE VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 11)
#endif

/**
  * The IENOVIVaultDocument has no value associate with it, so there is nothing to associate.
  */
#ifndef VAULT_E_VAULTDOCUMENT_NOTVALUATED
#define VAULT_E_VAULTDOCUMENT_NOTVALUATED VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 12)
#endif

/** 
  * There is not enough disk space to save the file.
  */
#ifndef VAULT_E_MEDIUMFULL
#define VAULT_E_MEDIUMFULL         VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 14)
#endif

/**
  * The IENOVIVaultDocument was already opened by antoher transaction.
  */
#ifndef VAULT_E_OPENEDBYANOTHERTRANSACTION
#define VAULT_E_OPENEDBYANOTHERTRANSACTION VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 15)
#endif

/** 
  * The open operation on a file failed.
  */
#ifndef VAULT_E_OPENEFILEFAILED
#define VAULT_E_OPENEFILEFAILED    VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 16)
#endif

/**
 * The seek operation on a file failed.
 */
#ifndef VAULT_E_SEEKFILEFAILED
#define VAULT_E_SEEKFILEFAILED     VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 17)
#endif

/**
  * The read operation on a file failed.
  */
#ifndef VAULT_E_READFILEFAILED
#define VAULT_E_READFILEFAILED     VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 18)
#endif

/**
  * The write operation on a file failed.
  */
#ifndef VAULT_E_WRITEFILEFAILED
#define VAULT_E_WRITEFILEFAILED    VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 19)
#endif

/**
  * The close operation on a file failed.
  */
#ifndef VAULT_E_CLOSEFILEFAILED
#define VAULT_E_CLOSEFILEFAILED    VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 20)
#endif

/** 
  * The submitted transaction is not a valid transaction.
  */
#ifndef VAULT_E_INVALIDTRANSACTION
#define VAULT_E_INVALIDTRANSACTION VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 21)
#endif

/**
  * The submitted open mode is not a valid open mode.
  */
#ifndef VAULT_E_INVALIDOPENMODE
#define VAULT_E_INVALIDOPENMODE    VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 22)
#endif

/** 
  * The write operatioin was not completed due to a disk error.
  */
#ifndef VAULT_E_WRITEFAULT
#define VAULT_E_WRITEFAULT         VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 23)
#endif

/** 
  * The IENOVIVaultDocument corresponding to the given oid was deleted.
  */
#ifndef VAULT_E_NOVAULTDOCUMENT_DELETED
#define VAULT_E_NOVAULTDOCUMENT_DELETED VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 24)
#endif

/**
  * The move operation on a file failed.
  */
#ifndef VAULT_E_MOVEFILEFAILED
#define VAULT_E_MOVEFILEFAILED     VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 25)
#endif

/**
  * The open transaction failed.
  */
#ifndef VAULT_E_OPENTRANSACTIONFAILED
#define VAULT_E_OPENTRANSACTIONFAILED VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 26)
#endif
/**
  * No current transaction.
  */
#ifndef VAULT_E_NOTRANSACTION
#define VAULT_E_NOTRANSACTION      VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 27)
#endif

/**
  * The IENOVIVaultDocument was already opened by this transaction, you are supposed to close it before re-open.
  */
#ifndef VAULT_E_ALREADYOPENED
#define VAULT_E_ALREADYOPENED      VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 28)
#endif
/**
  * The IENOVIVaultDocument was already opened by antoher transaction.
  */
#ifndef VAULT_E_MODIFYBYANOTHERTRANSACTION
#define VAULT_E_MODIFYBYANOTHERTRANSACTION VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 29)
#endif

/**
  * Database Error.
  */
#ifndef VAULT_E_DBERROR
#define VAULT_E_DBERROR            VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 30)
#endif

/**
  * Database Connection ERROR.
  */
#ifndef VAULT_E_DBCONNECTIONERROR   
#define VAULT_E_DBCONNECTIONERROR  VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 31)
#endif

/**
  * Database Insert ERROR.
  */
#ifndef VAULT_E_DBINSERTERROR
#define VAULT_E_DBINSERTERROR      VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 32)
#endif

/** 
  * Database Update ERROR.
  */
#ifndef VAULT_E_DBUPDATEERROR
#define VAULT_E_DBUPDATEERROR      VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 33)
#endif

/**
  * Database Delete ERROR.
  */
#ifndef VAULT_E_DBDELETEERROR
#define VAULT_E_DBDELETEERROR      VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 34)
#endif

/** 
  * Database Commit ERROR.
  */
#ifndef VAULT_E_DBCOMMITERROR
#define VAULT_E_DBCOMMITERROR      VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 35)
#endif

/**
  * Insert IENOVIVaultDocument Failed.
  */
#ifndef VAULT_E_INSERTDOCUMENTFAILED
#define VAULT_E_INSERTDOCUMENTFAILED   VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 36)
#endif

/**
  * Update Document Failed.
  */
#ifndef VAULT_E_UPDATEDOCUMENTFAILED
#define VAULT_E_UPDATEDOCUMENTFAILED   VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 37)
#endif

/**
  * Delete Document Failed.
  */
#ifndef VAULT_E_DELETEDOCUMENTFAILED
#define VAULT_E_DELETEDOCUMENTFAILED   VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 38)
#endif

/**
  * Transaction Commit Failed.
  */
#ifndef VAULT_E_TRANSCOMMITFAILED
#define VAULT_E_TRANSCOMMITFAILED  VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 39)
#endif

/**
  * Transaction Prepare Failed.
  */
#ifndef VAULT_E_TRANSPREPAREFAILED
#define VAULT_E_TRANSPREPAREFAILED VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 40)
#endif

/**
  * Transaction Rollback Failed.
  */
#ifndef VAULT_E_TRANSROLLBACKFAILED
#define VAULT_E_TRANSROLLBACKFAILED VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 41)
#endif

/**
  * Invalid method use.
  */
#ifndef VAULT_E_INVALIDMETHODUSE
#define VAULT_E_INVALIDMETHODUSE VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 42)
#endif

/**
  * There was no ENOVIVault Document corresponding to the given oid.
  */
#ifndef VAULT_E_NOVAULTDOC_FOUND
#define VAULT_E_NOVAULTDOC_FOUND VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 43)
#endif

/**
  * There was no ENOVIVault Document corresponding to the given oid.
  */
#ifndef VAULT_E_NOUSERSESSION_FOUND
#define VAULT_E_NOUSERSESSION_FOUND VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 44)
#endif

/**
  * Invalid status.
  */
#ifndef VAULT_E_INVALIDSTATUS
#define VAULT_E_INVALIDSTATUS VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 45)
#endif

/**
  * Transaction not prepared.
  */
#ifndef VAULT_E_TRANSNOTPREPARED
#define VAULT_E_TRANSNOTPREPARED VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 46)
#endif

/**
  * Transaction not prepared.
  */
#ifndef VAULT_E_MISSINGPROPERTY
#define VAULT_E_MISSINGPROPERTY VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 47)
#endif

/**
  * Not a USer Session.
  */
#ifndef VAULT_E_INVALIDUSERSESSION
#define VAULT_E_INVALIDUSERSESSION VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 48)
#endif

// Info codes
/**
  * There was still some data to get from the ENOVIVaultServer.
  */
#ifndef S_DATAREMAINING
#define S_DATAREMAINING VAULT_HRESULT(SEVERITY_INFO, FACILITY_VAULT, 800)
#endif


// =================================================================================================
// Error codes

/**
  * There was no IENOVIVaultDocument corresponding to the given oid.
  */
#ifndef VAULT_E_NOVAULTDOCUMENT_FOUND
#define VAULT_E_NOVAULTDOCUMENT_FOUND VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 1)
#endif

/** 
  *The reference IENOVIVaultDocument has no value associate with it, so there is nothing to associate.
  */
#ifndef VAULT_E_REFVAULTDOCUMENT_NOTVALUATED
#define VAULT_E_REFVAULTDOCUMENT_NOTVALUATED VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 2)
#endif

/**
 * Some parameters on the reference IENOVIVaultDocument we need in order to perform the operation are missing.
 */
#ifndef VAULT_E_REFVAULTDOCUMENT_MISSINGPARAMETERS
#define VAULT_E_REFVAULTDOCUMENT_MISSINGPARAMETERS VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 3)
#endif

/**
  * This IENOVIVaultDocument is already valuated. We do not erase the existing value, so there is nothing to do.
  */
#ifndef VAULT_E_VAULTDOCUMENT_ALREADYVALUATED
#define VAULT_E_VAULTDOCUMENT_ALREADYVALUATED VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 4)
#endif

/**
 * Some parameters on the IENOVIVaultDocument we need in order to perform the operation are missing.
 */
#ifndef VAULT_E_VAULTDOCUMENT_MISSNIGPARAMETERS
#define VAULT_E_VAULTDOCUMENT_MISSNIGPARAMETERS VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 5)
#endif

/** 
  * The requested open mode is not compatible with the current open mode. You have to perform a
  * close and re-open
  */
#ifndef VAULT_E_INCOMPATIBLEOPENMODE
#define VAULT_E_INCOMPATIBLEOPENMODE VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 6)
#endif

/**
  * The IENOVIVaultDocument object is not open in spite of it is supposed to be opened.
  */
#ifndef VAULT_E_VAULTDOCUMENTNOTOPEN
#define VAULT_E_VAULTDOCUMENTNOTOPEN    VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 7)
#endif

/**
  * The ENOVIVault Client object can't access to the given input file.
  */
#ifndef VAULT_E_CLIENTFILECANTACCESS
#define VAULT_E_CLIENTFILECANTACCESS VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 8)
#endif

/**
  * The ENOVIVault Client object wasn't able to find the given input file.
  */
#ifndef VAULT_E_CLIENTFILENOTFOUND
#define VAULT_E_CLIENTFILENOTFOUND  VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 9)
#endif

/**
  * The ENOVIVault Client object has not enought right to access to the given input file.
  */
#ifndef VAULT_E_CLIENTFILEACCESSDENIED
#define VAULT_E_CLIENTFILEACCESSDENIED VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 10)
#endif

/**
  * The ENOVIVault Client object has not enought right to access to the given input file.
  */
#ifndef VAULT_E_CLIENTFILECANTCREATEORTRUNCATE
#define VAULT_E_CLIENTFILECANTCREATEORTRUNCATE VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 11)
#endif

/**
  * The IENOVIVaultDocument has no value associate with it, so there is nothing to associate.
  */
#ifndef VAULT_E_VAULTDOCUMENT_NOTVALUATED
#define VAULT_E_VAULTDOCUMENT_NOTVALUATED VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 12)
#endif

/** 
  * There is not enough disk space to save the file.
  */
#ifndef VAULT_E_MEDIUMFULL
#define VAULT_E_MEDIUMFULL         VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 14)
#endif

/**
  * The IENOVIVaultDocument was already opened by antoher transaction.
  */
#ifndef VAULT_E_OPENEDBYANOTHERTRANSACTION
#define VAULT_E_OPENEDBYANOTHERTRANSACTION VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 15)
#endif

/** 
  * The open operation on a file failed.
  */
#ifndef VAULT_E_OPENEFILEFAILED
#define VAULT_E_OPENEFILEFAILED    VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 16)
#endif

/**
 * The seek operation on a file failed.
 */
#ifndef VAULT_E_SEEKFILEFAILED
#define VAULT_E_SEEKFILEFAILED     VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 17)
#endif

/**
  * The read operation on a file failed.
  */
#ifndef VAULT_E_READFILEFAILED
#define VAULT_E_READFILEFAILED     VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 18)
#endif

/**
  * The write operation on a file failed.
  */
#ifndef VAULT_E_WRITEFILEFAILED
#define VAULT_E_WRITEFILEFAILED    VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 19)
#endif

/**
  * The close operation on a file failed.
  */
#ifndef VAULT_E_CLOSEFILEFAILED
#define VAULT_E_CLOSEFILEFAILED    VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 20)
#endif

/** 
  * The submitted transaction is not a valid transaction.
  */
#ifndef VAULT_E_INVALIDTRANSACTION
#define VAULT_E_INVALIDTRANSACTION VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 21)
#endif

/**
  * The submitted open mode is not a valid open mode.
  */
#ifndef VAULT_E_INVALIDOPENMODE
#define VAULT_E_INVALIDOPENMODE    VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 22)
#endif

/** 
  * The write operatioin was not completed due to a disk error.
  */
#ifndef VAULT_E_WRITEFAULT
#define VAULT_E_WRITEFAULT         VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 23)
#endif

/** 
  * The IENOVIVaultDocument corresponding to the given oid was deleted.
  */
#ifndef VAULT_E_NOVAULTDOCUMENT_DELETED
#define VAULT_E_NOVAULTDOCUMENT_DELETED VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 24)
#endif

/**
  * The move operation on a file failed.
  */
#ifndef VAULT_E_MOVEFILEFAILED
#define VAULT_E_MOVEFILEFAILED     VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 25)
#endif

/**
  * The open transaction failed.
  */
#ifndef VAULT_E_OPENTRANSACTIONFAILED
#define VAULT_E_OPENTRANSACTIONFAILED VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 26)
#endif

/**
  * No current transaction.
  */
#ifndef VAULT_E_NOTRANSACTION
#define VAULT_E_NOTRANSACTION      VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 27)
#endif

/**
  * The IENOVIVaultDocument was already opened by this transaction, you are supposed to close it before re-open.
  */
#ifndef VAULT_E_ALREADYOPENED
#define VAULT_E_ALREADYOPENED      VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 28)
#endif

/**
  * The IENOVIVaultDocument was already opened by antoher transaction.
  */
#ifndef VAULT_E_MODIFYBYANOTHERTRANSACTION
#define VAULT_E_MODIFYBYANOTHERTRANSACTION VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 29)
#endif

/**
  * Database Error.
  */
#ifndef VAULT_E_DBERROR
#define VAULT_E_DBERROR            VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 30)
#endif

/**
  * Database Connection ERROR.
  */
#ifndef VAULT_E_DBCONNECTIONERROR   
#define VAULT_E_DBCONNECTIONERROR  VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 31)
#endif

/**
  * Database Insert ERROR.
  */
#ifndef VAULT_E_DBINSERTERROR
#define VAULT_E_DBINSERTERROR      VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 32)
#endif

/** 
  * Database Update ERROR.
  */
#ifndef VAULT_E_DBUPDATEERROR
#define VAULT_E_DBUPDATEERROR      VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 33)
#endif

/**
  * Database Delete ERROR.
  */
#ifndef VAULT_E_DBDELETEERROR
#define VAULT_E_DBDELETEERROR      VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 34)
#endif

/** 
  * Database Commit ERROR.
  */
#ifndef VAULT_E_DBCOMMITERROR
#define VAULT_E_DBCOMMITERROR      VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 35)
#endif

/**
  * Insert IENOVIVaultDocument Failed.
  */
#ifndef VAULT_E_INSERTDOCUMENTFAILED
#define VAULT_E_INSERTDOCUMENTFAILED   VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 36)
#endif

/**
  * Update Document Failed.
  */
#ifndef VAULT_E_UPDATEDOCUMENTFAILED
#define VAULT_E_UPDATEDOCUMENTFAILED   VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 37)
#endif

/**
  * Delete Document Failed.
  */
#ifndef VAULT_E_DELETEDOCUMENTFAILED
#define VAULT_E_DELETEDOCUMENTFAILED   VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 38)
#endif

/**
  * Transaction Commit Failed.
  */
#ifndef VAULT_E_TRANSCOMMITFAILED
#define VAULT_E_TRANSCOMMITFAILED  VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 39)
#endif

/**
  * Transaction Prepare Failed.
  */
#ifndef VAULT_E_TRANSPREPAREFAILED
#define VAULT_E_TRANSPREPAREFAILED VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 40)
#endif

/**
  * Transaction Rollback Failed.
  */
#ifndef VAULT_E_TRANSROLLBACKFAILED
#define VAULT_E_TRANSROLLBACKFAILED VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 41)
#endif

/**
  * Invalid method use.
  */
#ifndef VAULT_E_INVALIDMETHODUSE
#define VAULT_E_INVALIDMETHODUSE VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 42)
#endif

/**
  * There was no ENOVIVault Document corresponding to the given oid.
  */
#ifndef VAULT_E_NOVAULTDOC_FOUND
#define VAULT_E_NOVAULTDOC_FOUND VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 43)
#endif

/**
  * There was no ENOVIVault Document corresponding to the given oid.
  */
#ifndef VAULT_E_NOUSERSESSION_FOUND
#define VAULT_E_NOUSERSESSION_FOUND VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 44)
#endif

/**
  * There was no close done on VaultItem before prepare
  */
#ifndef VAULT_E_ITEMNOTCLOSE
#define VAULT_E_ITEMNOTCLOSE VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 45)
#endif

/**
  * Transaction not prepared.
  */
#ifndef VAULT_E_TRANSNOTPREPARED
#define VAULT_E_TRANSNOTPREPARED VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 46)
#endif

/**
  * Transaction not prepared.
  */
#ifndef VAULT_E_MISSINGPROPERTY
#define VAULT_E_MISSINGPROPERTY VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 47)
#endif

/**
  * Not a USer Session.
  */
#ifndef VAULT_E_INVALIDUSERSESSION
#define VAULT_E_INVALIDUSERSESSION VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 48)
#endif


/**
  * Unable to load the JDBC driver.
  */
#ifndef VAULT_E_JDBCDRIVERLOADFAILED
#define VAULT_E_JDBCDRIVERLOADFAILED VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 49)
#endif

/**
  * Error.
  */
#ifndef VAULT_E_ERROR
#define VAULT_E_ERROR VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 50)
#endif

/**
  * Invalid status.
  */
#ifndef VAULT_E_INVALIDSTATUS
#define VAULT_E_INVALIDSTATUS VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 51)
#endif

/**
  * Transaction not prepared.
  */
#ifndef VAULT_E_TRANSPREPARED
#define VAULT_E_TRANSPREPARED VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 52)
#endif

/**
  * IO Error.
  */
#ifndef VAULT_E_IOERROR
#define VAULT_E_IOERROR VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 53)
#endif

/**
 * Unknown Vault alias name.
 */
#ifndef VAULT_E_UNKNOWNVAULTALIASNAME
#define VAULT_E_UNKNOWNVAULTALIASNAME VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 54)
#endif

/**
 * Vault cache under use.
 */
#ifndef VAULT_E_CACHED
#define VAULT_E_CACHED VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 55)
#endif

/**
 * Max number of database connection reached.
 */
#ifndef VAULT_E_MAXDBCONNREACHED
#define VAULT_E_MAXDBCONNREACHED VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 56)
#endif

/**
 * Invalid property.
 */
#ifndef VAULT_E_INVALIDPROPERTY
#define VAULT_E_INVALIDPROPERTY VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 57)
#endif

/**
 * VaultServer OFFLINE.
 */
#ifndef VAULT_E_OFFLINE
#define VAULT_E_OFFLINE VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 58)
#endif

/**
 * CORBA SYSTEM EXCEPTION.
 */
#ifndef VAULT_E_CORBA_SYS_EXCEPT
#define VAULT_E_CORBA_SYS_EXCEPT VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 59)
#endif

/**
 * CORBA UNKNOWN EXCEPTION.
 */
#ifndef VAULT_E_CORBA_UNKNOWN_EXCEPT
#define VAULT_E_CORBA_UNKNOWN_EXCEPT VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 60)
#endif

/**
 * Client/Server communication failure.
 */
#ifndef VAULT_E_SERVER_COMM_FAILURE
#define VAULT_E_SERVER_COMM_FAILURE VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 61)
#endif

/**
 * Master Vault Client references are invalid.
 */
#ifndef VAULT_E_NOMASTER_REF
#define VAULT_E_NOMASTER_REF VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 62)
#endif

/**
 * Internal Use only.
 */
#ifndef VAULT_E_LASTCALLTOREPETE
#define VAULT_E_LASTCALLTOREPETE VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 63)
#endif

/**
 * Unknown method.
 */
#ifndef VAULT_E_UNKNOWN_METHOD
#define VAULT_E_UNKNOWN_METHOD VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 64)
#endif

/**
 * Vault Read Only Mode.
 */
#ifndef VAULT_E_READ_ONLY
#define VAULT_E_READ_ONLY VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 65)
#endif

/**
 * Vault Maximum file size exceeded.
 */
#ifndef VAULT_E_MAX_FILE_SIZE_EXCEEDED
#define VAULT_E_MAX_FILE_SIZE_EXCEEDED VAULT_HRESULT(SEVERITY_ERROR, FACILITY_VAULT, 66)
#endif

/**
 * This class supplies methods enabling to manage errors.
 * <b>role</b>: This class defines the Vault error codes and provides methods enabling 
 * to get detailed informations about the error.
 * <p>
 * HRESULT Values are 32 bit values layed out as follows:<br>
 *  3 3 2 2 2 2 2 2 2 2 2 2 1 1 1 1 1 1 1 1 1 1<br>
 *  1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0 9 8 7 6 5 4 3 2 1 0<br>
 * +---+-+-+-----------------------+-------------------------------+<br>
 * |Sev|C|R|     Facility          |               Code            |<br>
 * +---+-+-+-----------------------+-------------------------------+<br>
 * where<br>
 *     Sev - is the severity code<br>
 *         00 - Success<br>
 *         01 - Informational<br>
 *         10 - Warning<br>
 *         11 - Error<br>
 *     C - is the Customer code flag<br>
 *     R - is a reserved bit<br>
 *     Facility - is the facility code<br>
 *     Code - is the facility's status code<br>
 *
 * @author    Olivier JOSEPH
 * @version   V5R6
 */


#include "CATUnicodeString.h"

#include "CATListPV.h"

class  ExportedByENOVIVaultClientAPP  ENOVIVaultError
{
friend class ENOVIVaultSession;
friend class ENOVIVaultSessionFactory;
friend class ENOVIVaultUserSession;
friend class ENOVIVaultDocument;
friend class ENOVVaultServices;
friend class ENOVIDocMandAttHolder;
friend class ENOVIVaultReadIterator;
friend class ENOVIVaultResultSet;

protected  :
   ENOVIVaultError  * _before;
   HRESULT            _rc;
   CATUnicodeString   _Message;

   public :

/**
 * Constructs an empty error handler
 */
  ENOVIVaultError ();
  
  ~ENOVIVaultError ();
  
/**
 * Gets a printable message describing the error.
 * @param oMess [out] - Printable error message
 */

  void getMessage (CATUnicodeString &oMess);

/**
 * Gets the error code.
 * @param oCode [out] - Error code
 */

  void getCode (HRESULT & code);

/**
 * @nodoc
 */

  void init (const CATUnicodeString & mess,
                   HRESULT            rc,
                   ENOVIVaultError  * err=NULL);

/**
 * @nodoc
 */
  void reset ();

/**
 * @nodoc
 */
  void getStack (CATRawCollPV & list);
  
}
;
#endif

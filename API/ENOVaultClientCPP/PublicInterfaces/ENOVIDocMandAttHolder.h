#include "ENOVIVaultClientAPP.h"

#ifndef _CMA_NOWRAPPERS_
#define _CMA_NOWRAPPERS_ // see /usr/include/dce/cma_ux.h
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
#endif

#ifndef ENOVIDocMandAttHolder_h
#define ENOVIDocMandAttHolder_h

// =================================================================
// COPYRIGHT DASSAULT SYSTEMES 2000
// =================================================================
// VPM (c) Copyright Dassault Systemes 2000
// -----------------------------------------------------------------
//
// Contents: ENOVIDocMandAttHolder, process client side.
//
// =================================================================


//-----------------------------------------------------------------------------
// INCLUDES:
//-----------------------------------------------------------------------------
#include "CATUnicodeString.h"
#include "CATTypUtilit.h"

#include "SEQUENCE_octetColl.h"
#include "ENOVIVaultError.h"


//-----------------------------------------------------------------------------
// CLASS: ENOVIDocMandAttHolder
//-----------------------------------------------------------------------------


class  ExportedByENOVIVaultClientAPP  ENOVIDocMandAttHolder
{

//
// Data member
//
public :

//
// Instance data member
//
   SEQUENCE_octet      _bvOId;
   SEQUENCE_octet      _bvEXTOId;

   CATUnicodeString    _svCreationTimestamp;
   CATUnicodeString    _svLastModTimestamp;
   
   CATUnicodeString    _svName;
   CATUnicodeString    _svDescription;
   CATUnicodeString    _svMimeType;
   CATUnicodeString    _svLocation;
   unsigned long       _nvSize;
   CATUnicodeString    _svOriginalName;
   CATUnicodeString    _svOriginalPath;
   CATUnicodeString    _svOriginalHost;
   
   SEQUENCE_octet      _bvAttDocVersOId;
   int                 _nvStatus;


public :
//
// Destructor
//
/**
 * @nodoc
 */

   ~ENOVIDocMandAttHolder();

//
// Constructors
//

/**
 * @nodoc
 */
   ENOVIDocMandAttHolder();

/**
 * @nodoc
 */
   HRESULT toString(CATUnicodeString & oMandAttrString, ENOVIVaultError & oVaultError);

/**
 * @nodoc
 */
   HRESULT fromString(CATUnicodeString & iMandAttrString, ENOVIVaultError  & oVaultError);

};

#endif

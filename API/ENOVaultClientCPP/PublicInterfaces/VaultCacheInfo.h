#include "ENOVIVaultClientAPP.h"

#ifndef _CMA_NOWRAPPERS_
#define _CMA_NOWRAPPERS_ // see /usr/include/dce/cma_ux.h
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
#endif

#ifndef VaultCacheInfo_h
#define VaultCacheInfo_h

// =================================================================
// COPYRIGHT DASSAULT SYSTEMES 2003
// =================================================================
// ENOVIA LCA (c) Copyright Dassault Systemes 2003
// -----------------------------------------------------------------
//
// Contents: VaultCacheInfo, process client side.
//
// =================================================================

//-----------------------------------------------------------------------------
// INCLUDES:
//-----------------------------------------------------------------------------
#include "SEQUENCE_octetColl.h"


//-----------------------------------------------------------------------------
// CLASS: VaultCacheInfo
//-----------------------------------------------------------------------------


class  ExportedByENOVIVaultClientAPP  VaultCacheInfo
{

public :
//
// Class Data member
//
/**
 * @nodoc
 */
   static int  UNKNOWN;

/**
 * @nodoc
 */
   static int  NOTCACHED;

/**
 * @nodoc
 */
   static int  CACHEMISS;

/**
 * @nodoc
 */
   static int  NOTREFRESHED;

/**
 * @nodoc
 */
   static int  REFRESHED;


public :

//
// Instance data member
//
   SEQUENCE_octet      _DocId;
   int                 _DocState;


public :
//
// Destructor
//
/**
 * @nodoc
 */

   ~VaultCacheInfo();

//
// Constructors
//

/**
 * @nodoc
 */
   VaultCacheInfo();
};

#endif

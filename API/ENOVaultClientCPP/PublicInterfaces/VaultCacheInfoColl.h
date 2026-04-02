#include "ENOVIVaultClientAPP.h"

#ifndef _VaultCacheInfo_COLL_H_
#define _VaultCacheInfo_COLL_H_
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/

// =================================================================
// COPYRIGHT DASSAULT SYSTEMES 2003
// =================================================================
// ENOVIA LCA (c) Copyright Dassault Systemes 2003
// -----------------------------------------------------------------
//
// Contents: VaultCacheInfoColl
//
// =================================================================
// Historic
// Creation : 08/01/2003  OJH
// =================================================================

/**
 * @collection VaultCacheInfoColl
 * Collection class for pointers to VaultCacheInfo objects.
 * All the methods of pointer collection classes are available.
 */

//-----------------------------------------------------------------------------
// INCLUDES:
//-----------------------------------------------------------------------------
#include <CATLISTP_Clean.h>

#include <CATLISTP_PublicInterface.h>

#include <CATLISTP_Declare.h>
#include <VaultCacheInfo.h>

#undef CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy ExportedByENOVIVaultClientAPP

CATLISTP_DECLARE(VaultCacheInfo)

/**
 * @nodoc
 */
typedef CATLISTP(VaultCacheInfo)   VaultCacheInfoColl;
/**
 * @nodoc
 */
typedef CATLISTP(VaultCacheInfo) * VaultCacheInfoCollH;

#endif  // VaultCacheInfo_COLL_H_

#include "ENOVIVaultClientAPP.h"

#ifndef _ENOVIVault_SESSION_COLL_H_
#define _ENOVIVault_SESSION_COLL_H_

// =================================================================
// COPYRIGHT DASSAULT SYSTEMES 2000
// =================================================================
// VPM (c) Copyright Dassault Systemes 2000
// -----------------------------------------------------------------
//
// Contents: ENOVIENOVIVaultSessionColl
//
// =================================================================
// Historic
// Creation : 15/09/2000  OJH
// =================================================================

/**
 *  @CAA2Level L1
 *  @CAA2Usage U1
 */ 

/**
 * @collection ENOVIVaultSessionColl
 * Collection class for pointers to ENOVIVaultSession objects.
 * All the methods of pointer collection classes are available.
 */

//-----------------------------------------------------------------------------
// INCLUDES:
//-----------------------------------------------------------------------------
#include <CATLISTP_Clean.h>

#include <CATLISTP_PublicInterface.h>

#include <CATLISTP_Declare.h>
#include <ENOVIVaultSession.h>

#undef CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy ExportedByENOVIVaultClientAPP

CATLISTP_DECLARE(ENOVIVaultSession)

/**
 * @nodoc
 */
typedef CATLISTP(ENOVIVaultSession)   ENOVIVaultSessionColl;
/**
 * @nodoc
 */
typedef CATLISTP(ENOVIVaultSession) * ENOVIVaultSessionCollH;

#endif  // _ENOVIVault_SESSION_COLL_H_

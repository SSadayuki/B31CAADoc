#include "ENOVIVaultClientAPP.h"

#ifndef _VAULT_USER_SESSION_COLL_H_
#define _VAULT_USER_SESSION_COLL_H_

// =================================================================
// COPYRIGHT DASSAULT SYSTEMES 2000
// =================================================================
// VPM (c) Copyright Dassault Systemes 2000
// -----------------------------------------------------------------
//
// Contents: ENOVIVaultUserSessionColl
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
 * @collection ENOVIVaultUserSessionColl
 * Collection class for pointers to ENOVIVaultUserSession objects.
 * All the methods of pointer collection classes are available.
 */

//-----------------------------------------------------------------------------
// INCLUDES:
//-----------------------------------------------------------------------------
#include <CATLISTP_Clean.h>

#include <CATLISTP_PublicInterface.h>

#include <CATLISTP_Declare.h>
#include <ENOVIVaultUserSession.h>

#undef CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy ExportedByENOVIVaultClientAPP

CATLISTP_DECLARE(ENOVIVaultUserSession)

/**
 * @nodoc
 */
typedef CATLISTP(ENOVIVaultUserSession)   ENOVIVaultUserSessionColl;
/**
 * @nodoc
 */
typedef CATLISTP(ENOVIVaultUserSession) * ENOVIVaultUserSessionCollH;



#endif  // _VAULT_USER_SESSION_COLL_H_

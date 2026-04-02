#include "ENOVIVaultClientAPP.h"

#ifndef _VAULT_SEQUENCE_octet_COLL_H_
#define _VAULT_SEQUENCE_octet_COLL_H_

// =================================================================
// COPYRIGHT DASSAULT SYSTEMES 2000
// =================================================================
// VPM (c) Copyright Dassault Systemes 2000
// -----------------------------------------------------------------
//
// Contents: SEQUENCE_octetColl
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
 * @collection SEQUENCE_octetColl
 * Collection class for pointers to SEQUENCE_octet objects.
 * All the methods of pointer collection classes are available.
 */

//-----------------------------------------------------------------------------
// INCLUDES:
//-----------------------------------------------------------------------------
#include <CATLISTP_Clean.h>

#include <CATLISTP_PublicInterface.h>

#include <CATLISTP_Declare.h>
#include <CATTypUtilit.h>

#undef CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy ExportedByENOVIVaultClientAPP

CATLISTP_DECLARE(SEQUENCE_octet)

/**
 * @nodoc
 */
typedef CATLISTP(SEQUENCE_octet)   SEQUENCE_octetColl;
/**
 * @nodoc
 */
typedef CATLISTP(SEQUENCE_octet) * SEQUENCE_octetCollH;

#endif  // _VAULT_SEQUENCE_octet_COLL_H_

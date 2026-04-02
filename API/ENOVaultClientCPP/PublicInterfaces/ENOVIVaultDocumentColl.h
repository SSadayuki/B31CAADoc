#include "ENOVIVaultClientAPP.h"

#ifndef _VAULT_DOCUMENT_COLL_H_
#define _VAULT_DOCUMENT_COLL_H_

// =================================================================
// COPYRIGHT DASSAULT SYSTEMES 2000
// =================================================================
// VPM (c) Copyright Dassault Systemes 2000
// -----------------------------------------------------------------
//
// Contents: ENOVIVaultDocumentColl
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
 * @collection ENOVIVaultDocumentColl
 * Collection class for pointers to ENOVIVaultDocument objects.
 * All the methods of pointer collection classes are available.
 */

//-----------------------------------------------------------------------------
// INCLUDES:
//-----------------------------------------------------------------------------
#include <CATLISTP_Clean.h>

#include <CATLISTP_PublicInterface.h>

#include <CATLISTP_Declare.h>
#include <ENOVIVaultDocument.h>

#undef CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy ExportedByENOVIVaultClientAPP

CATLISTP_DECLARE(ENOVIVaultDocument)

/**
 * @nodoc
 */
typedef CATLISTP(ENOVIVaultDocument)   ENOVIVaultDocumentColl;
/**
 * @nodoc
 */
typedef CATLISTP(ENOVIVaultDocument) * ENOVIVaultDocumentCollH;

#endif  // _VAULT_DOCUMENT_COLL_H_

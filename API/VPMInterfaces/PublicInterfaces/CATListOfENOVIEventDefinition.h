//================================================================
// COPYRIGHT DASSAULT SYSTEMES 1999
//================================================================
// Usage Notes:
//
//	Include: CATListOfENOVIEventDefinition.h
//=================================================================
// 
//===================================================================

#ifndef _CATListOfENOVIEventDefinition_H_
#define _CATListOfENOVIEventDefinition_H_

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "GUIDVPMInterfaces.h"
#include "ENOVIEventDefinition.h"

/**
 * @collection CATListOfENOVIEventDefinition
 * Collection class for ENOVIEventDefinition.
 * Only the following methods of collection classes are available:
 * <ul>
 * <li><tt>Append</tt></li>
 * </ul>
 * Refer to the articles dealing with collections in the encyclopedia.
 */
#include "CATLISTV_Clean.h"
#define CATLISTV_Append
#include "CATLISTV_Declare.h"

#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy ExportedByGUIDVPMInterfaces

CATLISTV_DECLARE( ENOVIEventDefinition_var )

typedef CATLISTV( ENOVIEventDefinition_var ) CATListOfENOVIEventDefinition;

#endif  

// COPYRIGHT DASSAULT SYSTEMES 2000

#ifndef  _CATListOfENOVISubScribeGroupMod_H_
#define  _CATListOfENOVISubScribeGroupMod_H_

/**
 *   @CAA2Level L1
 *   @CAA2Usage U1
 */


#include "ENOVISubScribeGroupMod.h"
#include "CATLISTV_Clean.h"

/**
 * @collection CATListOfENOVISubScribeGroupMod_var
 * Collection class for ENOVISubScribeGroupMod_var.
 * Only the following methods of collection classes are available:
 * <ul>
 * <li><tt>Append</tt></li>
 * <li><tt>RemoveAll</tt></li>
 * </ul>
 * Refer to the articles dealing with collections in the encyclopedia.
 */

#define CATLISTV_Append
// #define CATLISTV_Locate
// #define CATLISTV_RemoveValue
// #define CATLISTV_RemovePosition
// #define CATLISTV_RemoveDuplicatesCount
// #define CATLISTV_RemoveList
#define CATLISTV_RemoveAll

#include "CATLISTV_Declare.h"

// exporting module
#include "GUIDVPMInterfaces.h"
#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy	ExportedByGUIDVPMInterfaces

CATLISTV_DECLARE(ENOVISubScribeGroupMod_var)
typedef CATLISTV(ENOVISubScribeGroupMod_var) CATListOfENOVISubScribeGroupMod_var;

#endif  

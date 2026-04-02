//================================================================
//COPYRIGHT DASSAULT SYSTEMES 2001 
//================================================================

/**
 *   @CAA2Level L1
 *   @CAA2Usage U1
*/
#ifndef _CATListOfCATICfgVariabilitySpace_H_
#define _CATListOfCATICfgVariabilitySpace_H_

#include "CATICfgVariabilitySpace.h"

#include "CATLISTV_Clean.h"
/**
 * @collection CATLISTV(CATICfgVariabilitySpace_var)
 * Collection class for Variability Space objects.
 * Only the following methods of collection classes are available:
 * <ul>
 * <li><tt>Append</tt></li>
 * <li><tt>AppendList</tt></li>
 * <li><tt>Locate</tt></li>
 * <li><tt>RemoveValue</tt></li>
 * <li><tt>RemovePosition</tt></li>
 * <li><tt>RemoveDuplicatesCount</tt></li>
 * <li><tt>RemoveList</tt></li>
 * </ul>
 * Refer to the articles dealing with collections in the encyclopedia.
 */
#define CATLISTV_Append
#define CATLISTV_AppendList
#define CATLISTV_Locate
#define CATLISTV_RemoveValue
#define CATLISTV_RemovePosition
#define CATLISTV_RemoveDuplicatesCount
#define CATLISTV_RemoveList

#include "CATLISTV_Declare.h"

// exporting module
#include "GUIDVPMInterfaces.h"
#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy	ExportedByGUIDVPMInterfaces

CATLISTV_DECLARE(CATICfgVariabilitySpace_var)
typedef CATLISTV(CATICfgVariabilitySpace_var) CATListOfCATICfgVariabilitySpace_var;

#endif  

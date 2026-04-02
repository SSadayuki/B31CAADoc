//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================

/**
 *@CAA2Level L1
 *@CAA2Usage U1
 */

#ifndef _CATListOfCATICfgHistory_H_
#define _CATListOfCATICfgHistory_H_

#include "CATICfgHistory.h"
#include "CATLISTV_Clean.h"

#define CATLISTV_Append
#define CATLISTV_AppendList
#define CATLISTV_Locate
#define CATLISTV_RemoveDuplicatesCount
#define CATLISTV_RemoveList
#define CATLISTV_QuickSort

/**
 * @collection CATListOfCATICfgHistory_var
 * Collection class for CATICfgHistory_var.
 * Only the following methods of collection classes are available:
 * <ul>
 * <li><tt>Append</tt></li>
 * <li><tt>AppendList</tt></li>
 * <li><tt>Locate</tt></li>
 * <li><tt>RemoveDuplicatesCount</tt></li>
 * <li><tt>RemoveList</tt></li>
 * <li><tt>QuickSort</tt></li>
 * </ul>
 * Refer to the articles dealing with collections in the encyclopedia.
 */


#include "CATLISTV_Declare.h"

// exporting module
#include "GUIDVPMInterfaces.h"

#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy ExportedByGUIDVPMInterfaces
CATLISTV_DECLARE(CATICfgHistory_var)
typedef CATLISTV(CATICfgHistory_var) CATListOfCATICfgHistory_var;

#endif

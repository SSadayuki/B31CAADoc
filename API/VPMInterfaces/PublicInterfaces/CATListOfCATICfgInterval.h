//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================

/**
 *   @CAA2Level L1
 *   @CAA2Usage U1
*/

#ifndef _CATListOfCATICfgInterval_H_
#define _CATListOfCATICfgInterval_H_

#include "CATICfgInterval.h"

#include "CATLISTV_Clean.h"

#define CATLISTV_Append
#define CATLISTV_Locate

/**
 * @collection CATListOfCATICfgInterval_var
 * Collection class for CATICfgInterval_var.
 * Only the following methods of collection classes are available:
 * <ul>
 * <li><tt>Append</tt></li>
 * <li><tt>Locate</tt></li>
 * </ul>
 * Refer to the articles dealing with collections in the encyclopedia.
 */

#include "CATLISTV_Declare.h"

// exporting module
#include "GUIDVPMInterfaces.h"
#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy	ExportedByGUIDVPMInterfaces

CATLISTV_DECLARE(CATICfgInterval_var)
typedef CATLISTV(CATICfgInterval_var) CATListOfCATICfgInterval_var;

#endif  

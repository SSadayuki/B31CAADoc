//================================================================
//COPYRIGHT DASSAULT SYSTEMES 2001 
//================================================================


/**
 *   @CAA2Level L1
 *   @CAA2Usage U1
*/

#ifndef _CATListOfCATICfgFilter_H_
#define _CATListOfCATICfgFilter_H_

#include "CATICfgFilter.h"

#include "CATLISTV_Clean.h"

/**
 * @collection CATListOfCATICfgFilter_var
 * Collection class for CATICfgFilter_var.
 * Only the following methods of collection classes are available:
 * <ul>
 * <li><tt>Append</tt></li>
 * </ul>
 * Refer to the articles dealing with collections in the encyclopedia.
 */

#define CATLISTV_Append

#include "CATLISTV_Declare.h"

// exporting module
#include "GUIDVPMInterfaces.h"
#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy	ExportedByGUIDVPMInterfaces

CATLISTV_DECLARE(CATICfgFilter_var)
typedef CATLISTV(CATICfgFilter_var) CATListOfCATICfgFilter_var;

#endif  

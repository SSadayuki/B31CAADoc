//================================================================
//COPYRIGHT DASSAULT SYSTEMES 2001 
//================================================================

/**
 *   @CAA2Level L1
 *   @CAA2Usage U1
*/

#ifndef _CATListOfCATICfgModification_H_
#define _CATListOfCATICfgModification_H_

#include "CATICfgModification.h"

#include "CATLISTV_Clean.h"

/**
 * @collection CATListOfCATICfgModification_var
 * Collection class for CATICfgModification_var.
 * Only the following methods of collection classes are available:
 * <ul>
 * <li><tt>Append</tt></li>
 * <li><tt>AppendList</tt></li>
 * <li><tt>Locate</tt></li>
 * <li><tt> RemoveValue</tt></li>
 * </ul>
 * Refer to the articles dealing with collections in the encyclopedia.
 */

#define CATLISTV_Append
#define CATLISTV_AppendList
#define CATLISTV_Locate
#define CATLISTV_RemoveValue


#include "CATLISTV_Declare.h"

// exporting module
#include "GUIDVPMInterfaces.h"
#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy	ExportedByGUIDVPMInterfaces

CATLISTV_DECLARE(CATICfgModification_var)
typedef CATLISTV(CATICfgModification_var) CATListOfCATICfgModification_var;

#endif  

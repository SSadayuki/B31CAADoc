//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
#ifndef _CATListOfCATICfgBasicEffectivity_H_
#define _CATListOfCATICfgBasicEffectivity_H_

/**
 *   @CAA2Level L1
 *   @CAA2Usage U1
*/

#include "CATICfgBasicEffectivity.h"
#include "CATLISTV_Clean.h"

/**
 * @collection CATListOfCATICfgBasicEffectivity_var
 * Collection class for CATICfgBasicEffectivity_var.
 * Only the following methods of collection classes are available:
 * <ul>
 * <li><tt>Append</tt></li>
 * <li><tt>AppendList</tt></li>
 * <li><tt>RemovePosition</tt></li>
 * </ul>
 * Refer to the articles dealing with collections in the encyclopedia.
 */

#define CATLISTV_Append
#define CATLISTV_AppendList
#define CATLISTV_RemovePosition

#include "CATLISTV_Declare.h"

// exporting module
#include "GUIDVPMInterfaces.h"

#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy ExportedByGUIDVPMInterfaces
CATLISTV_DECLARE(CATICfgBasicEffectivity_var)
typedef CATLISTV(CATICfgBasicEffectivity_var) CATListOfCATICfgBasicEffectivity_var;

#endif

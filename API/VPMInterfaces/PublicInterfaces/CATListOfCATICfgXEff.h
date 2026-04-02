// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 *   @CAA2Level L1
 *   @CAA2Usage U1
 */
/**
 * @collection CATLISTV(CATICfgXEff)
 * Collection class for CATICfgXEff.
 * Only the following methods of collection classes are available:
 * <ul>
 * <li><tt>Append</tt></li>
 * <li><tt>AppenList</tt></li>
 * <li><tt>Locate</tt></li>
 * <li><tt>RemoveValue</tt></li>
 * <li><tt>RemovePostion</tt></li>
 * <li><tt>RemoveDuplicatesCount</tt></li>
 * <li><tt>RemoveList</tt></li>
 * </ul>
 * Refer to the articles dealing with collections in the encyclopedia.
 */

#ifndef _CATListOfCATICfgXEff_H_
#define _CATListOfCATICfgXEff_H_

#include "CATICfgXEff.h"
#include "CATLISTV_Clean.h"

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
#define CATCOLLEC_ExportedBy ExportedByGUIDVPMInterfaces
CATLISTV_DECLARE(CATICfgXEff_var)
typedef CATLISTV(CATICfgXEff_var) CATListOfCATICfgXEff_var;

#endif




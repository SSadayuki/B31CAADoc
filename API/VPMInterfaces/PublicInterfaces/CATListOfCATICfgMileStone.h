//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
#ifndef _CATListOfCATICfgMileStone_H_
#define _CATListOfCATICfgMileStone_H_

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATICfgMileStone.h"

#include "CATLISTV_Clean.h"

/**
 * @collection CATListOfCATICfgMileStone_var
 * Collection class for CATICfgMileStone_var.
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

CATLISTV_DECLARE(CATICfgMileStone_var)
typedef CATLISTV(CATICfgMileStone_var) CATListOfCATICfgMileStone_var;

#endif  

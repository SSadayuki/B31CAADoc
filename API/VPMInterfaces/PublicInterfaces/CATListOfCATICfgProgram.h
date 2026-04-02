//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================
#ifndef _CATListOfCATICfgProgram_H_
#define _CATListOfCATICfgProgram_H_

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATICfgProgram.h"

#include "CATLISTV_Clean.h"

/**
 * @collection CATListOfCATICfgProgram_var
 * Collection class for CATICfgProgram_var.
 * Only the following methods of collection classes are available:
 * <ul>
 * <li><tt>Append</tt></li>
 * <li><tt>Locate</tt></li>
 * </ul>
 * Refer to the articles dealing with collections in the encyclopedia.
 */

#define CATLISTV_Append
#define CATLISTV_Locate

#include "CATLISTV_Declare.h"

// exporting module
#include "GUIDVPMInterfaces.h"
#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy	ExportedByGUIDVPMInterfaces

CATLISTV_DECLARE(CATICfgProgram_var)
typedef CATLISTV(CATICfgProgram_var) CATListOfCATICfgProgram_var;

#endif  

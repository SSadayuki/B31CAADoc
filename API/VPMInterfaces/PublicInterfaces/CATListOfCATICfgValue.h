//================================================================
// COPYRIGHT DASSAULT SYSTEMES 1998
//================================================================
// Usage Notes:
//
//	Include: CATListOfCATICfgValue.h
//=================================================================
// Mars 98      Creation                                        JPP 
//=================================================================

/**
 *   @CAA2Level L1
 *   @CAA2Usage U1
*/


#ifndef _CATListOfCATICfgValue_H_
#define _CATListOfCATICfgValue_H_

#include "CATICfgValue.h"

#include "CATLISTV_Clean.h"

/**
 * @collection CATListOfCATICfgValue_var
 * Collection class for CATICfgValue_var.
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

CATLISTV_DECLARE(CATICfgValue_var)
typedef CATLISTV(CATICfgValue_var) CATListOfCATICfgValue_var;

#endif  

//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
//=============================================================================

/**
 *   @CAA2Level L1
 *   @CAA2Usage U1
*/

#ifndef _CATListOfCATICfgSpecANDExpression_H_
#define _CATListOfCATICfgSpecANDExpression_H_

#include "CATICfgSpecANDExpression.h"
#include "CATLISTV_Clean.h"

#define CATLISTV_Append
#define CATLISTV_Locate

/**
 * @collection CATListOfCATICfgSpecANDExpression_var
 * Collection class for CATICfgSpecANDExpression_var.
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
#define CATCOLLEC_ExportedBy ExportedByGUIDVPMInterfaces
CATLISTV_DECLARE(CATICfgSpecANDExpression_var)
typedef CATLISTV(CATICfgSpecANDExpression_var) CATListOfCATICfgSpecANDExpression_var;

#endif

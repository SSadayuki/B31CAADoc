//================================================================
//COPYRIGHT DASSAULT SYSTEMES 2001 
//================================================================


/**
 *   @CAA2Level L1
 *   @CAA2Usage U1
*/

#ifndef CATListOfCATICfgANDExpression_h
#define CATListOfCATICfgANDExpression_h

#include "CATICfgANDExpression.h"

#include "CATLISTV_Clean.h"

/**
 * @collection CATListOfCATICfgANDExpression_var
 * Collection class for CATICfgANDExpression_var.
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

CATLISTV_DECLARE(CATICfgANDExpression_var)
typedef CATLISTV(CATICfgANDExpression_var) CATListOfCATICfgANDExpression_var;

#endif  

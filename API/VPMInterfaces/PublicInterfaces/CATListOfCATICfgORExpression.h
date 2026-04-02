//================================================================
//COPYRIGHT DASSAULT SYSTEMES 2001 
//================================================================


/**
 *   @CAA2Level L1
 *   @CAA2Usage U1
*/

#ifndef CATListOfCATICfgORExpression_h
#define CATListOfCATICfgORExpression_h

#include "CATICfgORExpression.h"

#include "CATLISTV_Clean.h"

/**
 * @collection CATListOfCATICfgORExpression_var
 * Collection class for CATICfgORExpression_var.
 * Only the following methods of collection classes are available:
 * <ul>
 * <li><tt>Append</tt></li>
 * <li><tt>Locate</tt></li>
 * <li><tt>RemoveValue</tt></li>
 * <li><tt>RemovePosition</tt></li>
 * <li><tt>RemoveDuplicatesCount</tt></li>
 * <li><tt>RemoveList</tt></li>
 * <li><tt>Compare</tt></li>
 * </ul>
 * Refer to the articles dealing with collections in the encyclopedia.
 */

#define CATLISTV_Append
#define CATLISTV_Locate
#define CATLISTV_RemoveValue
#define CATLISTV_RemovePosition
#define CATLISTV_RemoveDuplicatesCount
#define CATLISTV_RemoveList
#define CATLISTV_Compare

#include "CATLISTV_Declare.h"

// exporting module
#include "GUIDVPMInterfaces.h"
#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy	ExportedByGUIDVPMInterfaces

CATLISTV_DECLARE(CATICfgORExpression_var)
typedef CATLISTV(CATICfgORExpression_var) CATListOfCATICfgORExpression_var;

#endif  

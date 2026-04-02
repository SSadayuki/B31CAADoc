//================================================================
// COPYRIGHT DASSAULT SYSTEMES 1998
//================================================================
// Usage Notes:
//
//	Include: CATListOfCATICfgSimpleSpecification.h
//=================================================================
// Juin 98      Creation                                        JPP 
//=================================================================

/**
 *   @CAA2Level L1
 *   @CAA2Usage U1
*/


#ifndef _CATListOfCATICfgSimpleSpecification_H_
#define _CATListOfCATICfgSimpleSpecification_H_

#include "CATICfgSimpleSpecification.h"

#include "CATLISTV_Clean.h"

/**
 * @collection CATListOfCATICfgSimpleSpecification_var
 * Collection class for CATICfgSimpleSpecification_var.
 * Only the following methods of collection classes are available:
 * <ul>
 * <li><tt>Append</tt></li>
 * <li><tt>AppendList</tt></li>
 * <li><tt>Locate</tt></li>
 * <li><tt>RemoveValue</tt></li>
 * <li><tt>RemovePosition</tt></li>
 * <li><tt>RemoveDuplicatesCount</tt></li>
 * <li><tt>RemoveList</tt></li>
 * </ul>
 * Refer to the articles dealing with collections in the encyclopedia.
 */

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
#define CATCOLLEC_ExportedBy	ExportedByGUIDVPMInterfaces

CATLISTV_DECLARE(CATICfgSimpleSpecification_var)
typedef CATLISTV(CATICfgSimpleSpecification_var) CATListOfCATICfgSimpleSpecification_var;

#endif  

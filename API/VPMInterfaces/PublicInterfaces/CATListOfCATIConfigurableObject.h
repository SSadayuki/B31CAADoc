//================================================================
//COPYRIGHT DASSAULT SYSTEMES 2001 
//================================================================


/**
 *   @CAA2Level L1
 *   @CAA2Usage U1
*/

#ifndef CATListOfCATIConfigurableObject_h
#define CATListOfCATIConfigurableObject_h

#include "CATIConfigurableObject.h"

#include "CATLISTV_Clean.h"

/**
 * @collection CATListOfCATIConfigurableObject_var
 * Collection class for CATIConfigurableObject_var.
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
#define CATLISTV_InsertAt


#include "CATLISTV_Declare.h"

// exporting module
#include "GUIDVPMInterfaces.h"
#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy	ExportedByGUIDVPMInterfaces

CATLISTV_DECLARE(CATIConfigurableObject_var)
typedef CATLISTV(CATIConfigurableObject_var) CATListOfCATIConfigurableObject_var;

#endif  

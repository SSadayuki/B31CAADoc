// COPYRIGHT DASSAULT SYSTEMES 2000
#ifndef CATListOfCATIAVPMItemInstance_H_
#define CATListOfCATIAVPMItemInstance_H_
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */
#include "CATIAVPMItemInstance.h"

#include "CATLISTV_Clean.h"

/**
 * @collection CATListOfCATIAVPMItemInstance
 * Collection class for Item Instances.
 * Only the following methods of value collection classes are available:
 * <ul>
 * <li><tt>Append</tt></li>
 * <li><tt>AppendList( List )</tt></li>
 * <li><tt>Locate</tt></li>
 * <li><tt>RemoveValue</tt></li>
 * <li><tt>RemoveDuplicatesCount</tt></li>
 * </ul>
 * Refer to the articles dealing with collections in the encyclopedia.
 */
#define CATLISTV_Append
#define CATLISTV_AppendList
#define CATLISTV_Locate
#define CATLISTV_RemoveValue
#define CATLISTV_RemoveDuplicatesCount

#include "CATLISTV_Declare.h"

// exporting module
#include "GUIDVPMInterfaces.h"
#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy	ExportedByGUIDVPMInterfaces

CATLISTV_DECLARE(CATIAVPMItemInstance_var)
typedef CATLISTV(CATIAVPMItemInstance_var) CATListOfCATIAVPMItemInstance;

#endif



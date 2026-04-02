// COPYRIGHT DASSAULT SYSTEMES	1999

#ifndef CATListOfCATIMf3DAxisSystem_H
#define CATListOfCATIMf3DAxisSystem_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

class CATIMf3DAxisSystem_var;

#include "MecModItfCPP.h"

#include "CATLISTV_Clean.h"

#define CATLISTV_Append
#define CATLISTV_InsertAt
#define CATLISTV_InsertAfter
#define CATLISTV_AppendList
#define CATLISTV_Locate
#define CATLISTV_RemoveValue
#define CATLISTV_RemoveAll
#define CATLISTV_RemovePosition
#define CATLISTV_RemoveDuplicatesCount
#define CATLISTV_RemoveList
#define CATLISTV_Replace
#define CATLISTV_Intersection

#include "CATLISTV_Declare.h"

#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy    ExportedByMecModItfCPP

/**
 * @collection CATLISTV(CATIMf3DAxisSystem_var)
 * Collection class CATIMf3DAxisSystem interface handler.
 * Only the following methods of collection classes are available:
 * <ul>
 * <li>Append</li>,
 * <li>InsertAt</li>,
 * <li>InsertAfter</li>,
 * <li>AppendList</li>,
 * <li>Locate</li>,
 * <li>RemoveValue</li>,
 * <li>RemoveAll</li>,
 * <li>RemovePosition</li>,
 * <li>RemoveDuplicatesCount</li>,
 * <li>RemoveList</li>,
 * <li>Replace</li>,
 * <li>Intersection</li>.
 * </ul>
 * Refer to the articles dealing with collections in the encyclopedia.
 */
CATLISTV_DECLARE (CATIMf3DAxisSystem_var)
//
#endif

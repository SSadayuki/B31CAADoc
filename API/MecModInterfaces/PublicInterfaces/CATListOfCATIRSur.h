#ifndef CATListOfCATIRSur_h
#define CATListOfCATIRSur_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "MecModItfCPP.h"
#include "CATLISTP_Clean.h"

/**
 * @collection CATLISTP(CATIRSur)
 * Collection class for pointers to CATIRSur interface.
 * Only the following methods of pointer collection classes are available:
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
class CATIRSur;

#define CATLISTP_Append
#define CATLISTP_InsertAt
#define CATLISTP_InsertAfter
#define CATLISTP_AppendList
#define CATLISTP_Locate
#define CATLISTP_RemoveValue
#define CATLISTP_RemoveAll
#define CATLISTP_RemovePosition
#define CATLISTP_RemoveDuplicatesCount
#define CATLISTP_RemoveList
#define CATLISTP_Replace
#define CATLISTP_Intersection
#include "CATLISTP_Declare.h"

#undef CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy ExportedByMecModItfCPP

CATLISTP_DECLARE (CATIRSur)

#endif


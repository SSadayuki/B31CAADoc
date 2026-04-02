#ifndef CATListOfCATIMmiUseRSur_h
#define CATListOfCATIMmiUseRSur_h

// COPYRIGHT DASSAULT SYSTEMES 2009

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATMecModUseItf.h"
#include "CATLISTP_Clean.h"

/**
 * @collection CATLISTP(CATIMmiUseRSur)
 * Collection class for pointers to CATIMmiUseRSur interface.
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
class CATIMmiUseRSur;

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
#define CATCOLLEC_ExportedBy ExportedByCATMecModUseItf

CATLISTP_DECLARE (CATIMmiUseRSur)

#endif


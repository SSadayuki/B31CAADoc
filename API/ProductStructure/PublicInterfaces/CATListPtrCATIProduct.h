#ifndef CATListPtrCATIProduct_H
#define CATListPtrCATIProduct_H

// COPYRIGHT DASSAULT SYSTEMES  1999
/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

class CATIProduct;
#include "CATLISTP_Clean.h"

/**
 * @collection CATLISTP(CATIProduct).
 * Collection class for CATIProduct.
 * Only the following methods of collection classes are available:
 * <ul>
 * <li><tt>CtorFromArrayPtrs</tt></li>
 * <li><tt>Append</tt></li>
 * <li><tt>RemovePosition</tt</li>
 * <li><tt>RemoveAll</tt</li>
 * <li><tt>AppendList</tt</li>
 * <li><tt>Locate</tt</li>
 * <li><tt>RemoveDuplicatesCount</tt</li>
 * </ul> 
 * Refer to the articles dealing with collections in the encyclopedia.
 */
#define CATLISTP_CtorFromArrayPtrs
#define CATLISTP_Append
#define CATLISTP_RemovePosition
#define CATLISTP_RemoveAll
#define CATLISTP_AppendList
#define CATLISTP_Locate
#define CATLISTP_RemoveDuplicatesCount

#include "AS0STARTUP.h"
#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy    ExportedByAS0STARTUP

#include "CATLISTP_Declare.h"
CATLISTP_DECLARE( CATIProduct )

#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy
#endif


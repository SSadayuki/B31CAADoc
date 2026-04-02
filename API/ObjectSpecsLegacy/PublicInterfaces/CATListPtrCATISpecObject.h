/* -*-c++-*- */
#ifndef CATListPtrCATISpecObject_H_
#define CATListPtrCATISpecObject_H_

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * @collection CATLISTP(CATISpecObject)
 * Collection class for pointers to CATISpecObject.
 * Only the following methods of pointer collection classes are available:
 * <ul>
 * <li><tt>AppendList</tt></li>
 * </ul>
 * Refer to the articles dealing with collections in the encyclopedia.
 */
class CATISpecObject;

#include  "CATLISTP_Clean.h"

#include "CATLISTP_PublicInterface.h"

#include  "CATLISTP_Declare.h"

#define	CATLISTP_AppendList



#include  "AC0SPBAS.h"
#undef	CATCOLLEC_ExportedBy
#define	CATCOLLEC_ExportedBy	ExportedByAC0SPBAS


CATLISTP_DECLARE( CATISpecObject )

typedef CATLISTP(CATISpecObject) CATLISTP_CATISpecObject;

#endif

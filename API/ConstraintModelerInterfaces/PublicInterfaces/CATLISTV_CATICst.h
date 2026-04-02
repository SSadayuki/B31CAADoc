#ifndef CATLISTV_CATICst_h
#define CATLISTV_CATICst_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

class CATICst_var;

#include "CATConstraintModelerItf.h"

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
#define CATCOLLEC_ExportedBy    ExportedByCATConstraintModelerItf

/**
 * @collection CATLISTV(CATICst_var)
 * Collection class for mechanical constraints.
 * All the methods of collection classes are available.
 * Refer to the articles dealing with collections in the encyclopedia.
 */

CATLISTV_DECLARE (CATICst_var)
//
#endif

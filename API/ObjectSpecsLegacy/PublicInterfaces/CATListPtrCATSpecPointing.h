#ifndef CATListPtrCATSpecPointing_H_
#define CATListPtrCATSpecPointing_H_
// COPYRIGHT DASSAULT SYSTEMES  2004
//=============================================================================
// Class CATListPtrCATSpecPointing
//
// List of class used to handle a pointing object
// specifying the key used to point a target.
//
//=============================================================================

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

#include "AC0SPBAS.h"
class CATSpecPointing;

/**
 * @collection CATLISTP(CATSpecPointing)
 * Collection class for pointers to CATSpecPointing.
 * Only the following methods of pointer collection classes are available:
 * <ul>
 * <li><tt>AppendList</tt></li>
 * </ul>
 * Refer to the articles dealing with collections in the encyclopedia.
 */

#include "CATLISTP_Clean.h"

#include "CATLISTP_PublicInterface.h"

#include "CATLISTP_Declare.h"

#define CATLISTP_AppendList

#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy ExportedByAC0SPBAS

CATLISTP_DECLARE(CATSpecPointing)

#endif



// COPYRIGHT DASSAULT SYSTEMES  2001
#ifndef	CATListOfSdaiAppInstance_H
#define	CATListOfSdaiAppInstance_H
#include <KS0LATE.h>


/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * @collection CATListPtrSdaiAppInstance
 * Collection class for pointers to SdaiAppInstances.
 * Only the following methods of pointer collection classes are available:
 * <ul>
 * <li><tt>ReSize</tt></li>
 * <li><tt>InsertAfter</tt></li>
 * <li><tt>InsertBefore</tt></li>
 * <li><tt>QuickSort</tt></li>
 * <li><tt>RemovePosition</tt></li>
 * <li><tt>RemoveAll</tt></li>
 * <li><tt>RemoveNulls</tt></li>
 * <li><tt>Swap</tt></li>
 * <li><tt>ostreamOP</tt></li>
 * </ul>
 * Refer to the articles dealing with collections in the encyclopedia.
 */

// clean previous functions requests
#include  <CATLISTP_Clean.h>

// require needed functions : a minimum for the average developer
//#include  <CATLISTP_AllFunct.h>
//#undef CATLISTP_ApplyDelete
#include "CATLISTP_PublicInterface.h"
#define CATLISTP_ReSize
//#define CATLISTP_Append
#define CATLISTP_InsertAfter
#define CATLISTP_InsertBefore
#define CATLISTP_RemovePosition
#define CATLISTP_RemoveAll
#define CATLISTP_RemoveNulls
#define CATLISTP_Swap
#define CATLISTP_QuickSort
////#define CATLISTP_PrintAddr
#define CATLISTP_ostreamOP

// get macros
#include  <CATLISTP_Declare.h>

#undef CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy ExportedByKS0LATE

// if element-class operations are required
// (i.e. if ArrayVals
//       or ApplyDelete
//       or ostreamOP are defined)
class SdaiAppInstance;

//
// generate interface of collection-class 
// (functions declarations)
//
CATLISTP_DECLARE( SdaiAppInstance )


#endif	// _CAT_LIST_OF_CAT_SDAI_APP_INSTANCE_H_

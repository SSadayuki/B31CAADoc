// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
//
// CATIReplayList.h
//   This interface allows the management of a list of Replay.
//
//===================================================================
#ifndef CATIReplayList_H
#define CATIReplayList_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

/**
 * @collection CATIReplayList
 * Collection class for pointers to CATIReplay.
 * Only the following methods of pointer collection classes are available:
 * <ul>
 * <li><tt>Append</tt></li>
 * <li><tt>Size</tt></li>
 * <li><tt>Operator[]</tt></li>
 * <li><tt>RemovePosition</tt></li>
 * <li><tt>RemoveAll</tt></li>
 * </ul>
 * Refer to the articles dealing with collections in the encyclopedia.
 */

#include "SimulationItfCPP.h"
class CATIReplay;

// clean previous functions requests
#include  <CATLISTP_Clean.h>

// require needed functions
#define CATLISTP_Append
#define CATLISTP_RemovePosition
#define CATLISTP_RemoveAll

// get macros
#include  <CATLISTP_Declare.h>

// generate interface of collection-class
// (functions declarations)
#undef	CATCOLLEC_ExportedBy
#define	CATCOLLEC_ExportedBy	ExportedBySimulationItfCPP

/**
 * @nodoc
 */
CATLISTP_DECLARE(CATIReplay)
typedef CATLISTP(CATIReplay) CATIReplayList ;
#endif


// ==================================================================
// COPYRIGHT Dassault Systemes 2000
// ==================================================================
#ifndef CATLISTV_CATISamAnalysisSet_H
#define CATLISTV_CATISamAnalysisSet_H
/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * @collection CATLISTV(CATISamAnalysisSet_var).
 * Collection class for Analysis Set.
 * Only the following methods of handler collection classes are available:
 * <ul>
 * <li><tt>Append</tt></li>
 * <li><tt>AppendList</tt></li>
 * <li><tt>InsertAt</tt></li>
 * <li><tt>Locate</tt></li>
 * <li><tt>RemoveValue</tt></li>
 * <li><tt>RemovePosition</tt></li>
 * <li><tt>RemoveAll</tt></li>
 * <li><tt>RemoveDuplicatesCount</tt></li>
 * <li><tt>ReSize</tt></li>
 * <li><tt>QuickSort</tt></li>
 * </ul> 
 * Refer to the articles dealing with collections in the encyclopedia.
 */

#include "CATAnalysisInterface.h"
// --------------------------------------------------------------------------
//                       Clean previous functions requests
// --------------------------------------------------------------------------

#include "CATLISTV_Clean.h"

#define  CATLISTV_Append
#define  CATLISTV_AppendList
#define  CATLISTV_InsertAt
#define  CATLISTV_Intersection
#define  CATLISTV_Locate
#define  CATLISTV_RemoveValue
#define  CATLISTV_RemovePosition
#define  CATLISTV_RemoveDuplicatesCount
#define  CATLISTV_ReSize 


// --------------------------------------------------------------------------
//                                  Get macros
// --------------------------------------------------------------------------

#include "CATLISTV_Declare.h"

// --------------------------------------------------------------------------
//                       Generate interface of collection-class
// --------------------------------------------------------------------------

#include "CATISamAnalysisSet.h"

#undef	CATCOLLEC_ExportedBy
#define	CATCOLLEC_ExportedBy	ExportedByCATAnalysisInterface

CATLISTV_DECLARE( CATISamAnalysisSet_var )


#endif



// ==================================================================
// COPYRIGHT Dassault Systemes 2001
// ==================================================================
#ifndef CATLISTP_CATAnalysisEntityCollector_H
#define CATLISTP_CATAnalysisEntityCollector_H

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * @collection CATLISTP(CATAnalysisEntityCollector).
 * Collection class for CATAnalysisEntityCollector.
 * Only the following methods of handler collection classes are available:
 * <ul>
 * <li><tt>Append</tt></li>
 * <li><tt>RemoveValue</tt</li>
 * <li><tt>RemovePosition</tt</li>
 * <li><tt>RemoveAll</tt</li>
 * </ul> 
 * Refer to the articles dealing with collections in the encyclopedia.
 */
// ==========================================================================
//           Declarations For liste of CATAnalysisEntityCollector
// ==========================================================================
#include "CATSAM0Explicit.h"
// --------------------------------------------------------------------------
#include "CATLISTP_Clean.h"

#define  CATLISTP_Append
#define  CATLISTP_RemoveValue
#define  CATLISTP_RemovePosition
#define  CATLISTP_RemoveAll
// --------------------------------------------------------------------------
//                                  Get macros
// --------------------------------------------------------------------------
#include "CATLISTP_Declare.h"
// --------------------------------------------------------------------------
//                       Generate interface of collection-class
// --------------------------------------------------------------------------
#include "CATAnalysisEntityCollector.h"

#undef	CATCOLLEC_ExportedBy
#define	CATCOLLEC_ExportedBy	ExportedByCATSAM0Explicit

CATLISTP_DECLARE( CATAnalysisEntityCollector )


#endif



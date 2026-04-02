/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES	2001
//=============================================================================
// June 99      Creation                                            C. Cressend
// November 01  Modification                                            S. Dami
//              Insert CAA2 documentation                                 
//=============================================================================

#ifndef _CATListOfCATIVpmAFLHistory_H_
#define _CATListOfCATIVpmAFLHistory_H_

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATIVpmAFLHistory.h"

#include "CATLISTV_Clean.h"

/**
 * @collection CATListOfCATIVpmAFLHistory
 * Collection class for CATIVpmAFLHistory_var.
 * The following methods for handling collections are supported:
 * <ul>
 * <li><tt>Append</tt></li>
 * <li><tt>Locate</tt></li>
 * <li><tt>RemoveValue</tt></li>
 * <li><tt>RemovePosition</tt></li>
 * <li><tt>RemoveAll</tt></li>
 * <li><tt>NbOccur</tt></li>
 * <li><tt>QuickSort</tt></li>
 * </ul>
 * For further details, please refer to the articles dealing with collections in the encyclopedia.
 */
#define CATLISTV_Append
#define CATLISTV_Locate
#define CATLISTV_RemoveValue
#define CATLISTV_RemovePosition
#define CATLISTV_RemoveAll
#define CATLISTV_NbOccur
#define CATLISTV_QuickSort

#include "CATLISTV_Declare.h"

// exporting module
#include "GUIDVPMInterfaces.h"
#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy	ExportedByGUIDVPMInterfaces

CATLISTV_DECLARE(CATIVpmAFLHistory_var)
typedef CATLISTV(CATIVpmAFLHistory_var) CATListOfCATIVpmAFLHistory;

#endif  

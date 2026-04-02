/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES	2001
//=============================================================================
// February 00  Creation                                            C. Cressend
// November 01  Modification                                            S. Dami
//              Insert CAA2 documentation                                 
//=============================================================================

#ifndef _CATListOfCATIVpmAFLAttachement_H_
#define _CATListOfCATIVpmAFLAttachement_H_

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATIVpmAFLAttachement.h"

#include "CATLISTV_Clean.h"

/**
 * @collection CATListOfCATIVpmAFLAttachement
 * Collection class for CATIVpmAFLAttachement_var.
 * The following methods for handling collections are supported:
 * <ul>
 * <li><tt>Append</tt></li>
 * <li><tt>RemoveAll</tt></li>
 * <li><tt>QuickSort</tt></li>
 * </ul>
 * For further details, please refer to the articles dealing with collections in the encyclopedia.
 */
#define CATLISTV_Append
#define CATLISTV_RemoveAll
#define CATLISTV_QuickSort

#include "CATLISTV_Declare.h"

// exporting module
#include "GUIDVPMInterfaces.h"
#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy	ExportedByGUIDVPMInterfaces

CATLISTV_DECLARE(CATIVpmAFLAttachement_var)
typedef CATLISTV(CATIVpmAFLAttachement_var) CATListOfCATIVpmAFLAttachement;

#endif  

//=================================================================
// COPYRIGHT DASSAULT SYSTEMES 1998
//=================================================================
// VPM (c) Copyright Dassault Systemes 1998               
//=================================================================
// Usage Notes:
//=================================================================
// History:
// October 99 - SFA - Creation 
//=================================================================

#ifndef CATListOfCATIAVPMDocumentVersion_H_
#define CATListOfCATIAVPMDocumentVersion_H_

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATIAVPMDocumentVersion.h"

#include "CATLISTV_Clean.h"

/**
 * @collection CATListOfCATIAVPMDocumentVersion
 * Collection class for document versions.
 * Only the following methods of value collection classes are available:
 * <ul>
 * <li><tt>Append</tt></li>
 * <li><tt>Append( List )</tt></li>
 * <li><tt>Locate</tt></li>
 * <li><tt>RemovePosition</tt></li>
 * <li><tt>RemoveDuplicates</tt></li>
 * </ul>
 * Refer to the articles dealing with collections in the encyclopedia.
 */

#define CATLISTV_Append
#define CATLISTV_AppendList
#define CATLISTV_Locate
#define CATLISTV_RemovePosition
#define CATLISTV_RemoveDuplicatesCount

#include "CATLISTV_Declare.h"

// exporting module
#include "GUIDVPMInterfaces.h"
#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy	ExportedByGUIDVPMInterfaces

CATLISTV_DECLARE(CATIAVPMDocumentVersion_var)
typedef CATLISTV(CATIAVPMDocumentVersion_var) CATListOfCATIAVPMDocumentVersion;

#endif



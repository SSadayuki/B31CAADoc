//================================================================
// COPYRIGHT DASSAULT SYSTEMES 2003
//================================================================
// Usage Notes:
//
//	Include: CATListOfENOVITechPackVersion.h
//=================================================================
// 
//===================================================================

/**
 *  @CAA2Required
 */

#ifndef _CATListOfENOVITechPackVersion_H
#define _CATListOfENOVITechPackVersion_H

class ENOVITechPackVersion_var;

#include "CATLISTV_Clean.h"
#define CATLISTV_Append
#define CATLISTV_AppendList
#define CATLISTV_Locate
//#define CATLISTV_RemoveValue
//#define CATLISTV_RemovePosition

#include "CATLISTV_Declare.h"
#include "GUIDVPMInterfaces.h"
#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy ExportedByGUIDVPMInterfaces

CATLISTV_DECLARE(ENOVITechPackVersion_var)
typedef CATLISTV(ENOVITechPackVersion_var) CATListOfENOVITechPackVersion;

#endif  

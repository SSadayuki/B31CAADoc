//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
//=============================================================================
#ifndef _CATListOfCATICfgProductType_H_
#define _CATListOfCATICfgProductType_H_

#include "CATICfgProductType.h"
#include "CATLISTV_Clean.h"

#define CATLISTV_Append
#define CATLISTV_Locate
// #define CATLISTV_RemoveValue
// #define CATLISTV_RemovePosition
#define CATLISTV_RemoveDuplicatesCount
// #define CATLISTV_RemoveList

#include "CATLISTV_Declare.h"

// exporting module
#include "GUIDVPMInterfaces.h"

#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy ExportedByGUIDVPMInterfaces
CATLISTV_DECLARE(CATICfgProductType_var)
typedef CATLISTV(CATICfgProductType_var) CATListOfCATICfgProductType_var;

#endif

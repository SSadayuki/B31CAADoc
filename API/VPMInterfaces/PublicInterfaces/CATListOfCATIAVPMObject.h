//=================================================================
// COPYRIGHT DASSAULT SYSTEMES 1998
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
//=================================================================
// VPM (c) Copyright Dassault Systemes 1998               
//=================================================================
// Usage Notes:
//=================================================================
// History:
// Avril 98 - SMI - Creation 
//=================================================================

#ifndef CATListOfCATIAVPMObject_H_
#define CATListOfCATIAVPMObject_H_

// COPYRIGHT DASSAULT SYSTEMES 2000

#include "CATIAVPMObject.h"

#include "CATLISTV_Clean.h"

#define CATLISTV_Append
#define CATLISTV_AppendList
#define CATLISTV_InsertAt
#define CATLISTV_Locate
#define CATLISTV_RemoveValue
#define CATLISTV_RemovePosition
#define CATLISTV_RemoveDuplicatesCount
#define CATLISTV_RemoveList

#include "CATLISTV_Declare.h"

// exporting module
#include "GUIDVPMInterfaces.h"
#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy	ExportedByGUIDVPMInterfaces

CATLISTV_DECLARE(CATIAVPMObject_var)
typedef CATLISTV(CATIAVPMObject_var) CATListOfCATIAVPMObject;

#endif



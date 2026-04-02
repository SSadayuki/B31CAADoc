//================================================================
// COPYRIGHT DASSAULT SYSTEMES 1996
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
//================================================================
// Usage Notes:
//
//	Include: CATListOfCATILinkableObject.h
//=================================================================
// April 97   Creation                                  A.HAMONIC 
//=================================================================

#ifndef _CATListOfCATILinkableObject_H_
#define _CATListOfCATILinkableObject_H_

#include "CATILinkableObject.h"

#include "CATLISTV_Clean.h"

#define CATLISTV_Append
#define CATLISTV_AppendList
#define CATLISTV_Locate
#define CATLISTV_RemoveValue
#define CATLISTV_RemovePosition
#define CATLISTV_InsertAt

#include "CATLISTV_Declare.h"

// exporting module
#include "GUIDVPMInterfaces.h"
#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy	ExportedByGUIDVPMInterfaces

CATLISTV_DECLARE(CATILinkableObject_var)
typedef CATLISTV(CATILinkableObject_var) CATListOfCATILinkableObject;

#endif  

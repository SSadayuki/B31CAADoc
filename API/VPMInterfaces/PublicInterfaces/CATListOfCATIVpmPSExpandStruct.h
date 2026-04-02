// -*-C++-*-
/** @CAA2Required */
/***********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/***********************************************************************/

//=================================================================
// COPYRIGHT DASSAULT SYSTEMES 2003
//=================================================================
// VPM (c) Copyright Dassault Systemes 2003
//=================================================================
// Usage Notes:
//=================================================================
// History:
// July 03 - RLX - Creation 
//=================================================================

#ifndef CATListOfCATIVpmPSExpandStruct_H_
#define CATListOfCATIVpmPSExpandStruct_H_

#include "CATIVpmPSExpandStruct.h"

#include "CATLISTV_Clean.h"

#define CATLISTV_Append
// #define CATLISTV_AppendList
// #define CATLISTV_Locate
// #define CATLISTV_RemoveValue
// #define CATLISTV_RemovePosition
#define CATLISTV_RemoveAll

#include "CATLISTV_Declare.h"

// exporting module
#include "GUIDVPMInterfaces.h"
#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy	ExportedByGUIDVPMInterfaces

CATLISTV_DECLARE(CATIVpmPSExpandStruct_var)
typedef CATLISTV(CATIVpmPSExpandStruct_var) CATListOfCATIVpmPSExpandStruct;

#endif

#ifndef CATLISTP_CATEcwLightNwkArcForPercentFill_H_
#define CATLISTP_CATEcwLightNwkArcForPercentFill_H_

// COPYRIGHT DASSAULT SYSTEMES  1999
/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

// ============================================================================
// |
// |   Component Identifier: CATLISTP_CATEcwLightNwkArcForPercentFill.h
// |
// ============================================================================
// |
// |   Description:
// |   This is a CAA exposed class, meant to represent the collection of CAA 
// |   exposed class of Node object
// |   as defined in ECV (Electrical Cableway Route Management) application
// |   This class shall be required by the CAA user, so as to calculate Percent Fill
// |   (hereafter referred as PF) information. 
// |      
// |===========================================================================
// |
// |   Usage Notes:
// |
// ============================================================================
// |
// |   Audit Trail:
// |      Author:
// |      Date:       Aug. 4, 2008
// |      Chg ID: 
// |      Chg nature: Creation
// |
// |      Modified:
// |      Date:
// |      Chg ID:
// |      Chg nature:
// |
// ============================================================================

//  ----------------------------------------
//  Clean previous functions request
//  ----------------------------------------
#include "CATLISTP_Clean.h"

//  ----------------------------------------
//  Require needed functions
//  ----------------------------------------
//#include "CATLISTP_AllFunct.h"
#define CATLISTP_Append
#define CATLISTP_AppendList
#define CATLISTP_InsertAt
#define CATLISTP_Locate
#define CATLISTP_RemoveAll
#define CATLISTP_RemoveValue
#define CATLISTP_RemovePosition
#define CATLISTP_RemoveDuplicatesCount

//  ----------------------------------------
//  Get macros
//  ----------------------------------------
#include "CATLISTP_Declare.h"

//  ----------------------------------------
//  Generate interface of collection-class
//  ----------------------------------------
#include "CATEcwLightNwkArcForPercentFill.h"
#include "CATCommonLayoutItfCPP.h"
//class CATLISTP_CATEcwLightNwkArcForPercentFill.h;

#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy ExportedByCATCommonLayoutItfCPP

CATLISTP_DECLARE (CATEcwLightNwkArcForPercentFill)

#endif

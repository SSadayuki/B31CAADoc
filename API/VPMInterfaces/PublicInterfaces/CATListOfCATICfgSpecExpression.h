//================================================================
// COPYRIGHT DASSAULT SYSTEMES 1998
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
//================================================================
// Usage Notes:
//
//	Include: CATListOfCATICfgSpecExpression.h
//=================================================================
// Juillet 98   Creation                                        JPP 
//=================================================================

#ifndef _CATListOfCATICfgSpecExpression_H_
#define _CATListOfCATICfgSpecExpression_H_

#include "CATICfgSpecExpression.h"

#include "CATLISTV_Clean.h"

#define CATLISTV_Append
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

CATLISTV_DECLARE(CATICfgSpecExpression_var)
typedef CATLISTV(CATICfgSpecExpression_var) CATListOfCATICfgSpecExpression_var;

#endif  

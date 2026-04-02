/* -*-c++-*- */
#ifndef CATLISTV_CATIRuleBaseComponent_H
#define CATLISTV_CATIRuleBaseComponent_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/** 
* @CAA2Level L1
* @CAA2Usage U3
*/

class CATIRuleBaseComponent_var;

#include "Rule.h"
#include "CATLISTV_Clean.h"

#define  CATLISTV_Append
#define  CATLISTV_AppendList
#define  CATLISTV_InsertAt
#define  CATLISTV_Locate
#define  CATLISTV_RemoveValue
#define  CATLISTV_RemovePosition
#define  CATLISTV_RemoveDuplicatesCount
#define  CATLISTV_RemoveAll

#include "CATLISTV_Declare.h"

#undef	CATCOLLEC_ExportedBy
#define	CATCOLLEC_ExportedBy	ExportedByRule

CATLISTV_DECLARE(CATIRuleBaseComponent_var)

#endif

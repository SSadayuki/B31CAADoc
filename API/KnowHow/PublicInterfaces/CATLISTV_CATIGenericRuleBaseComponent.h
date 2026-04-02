/* -*-c++-*- */
#ifndef CATLISTV_CATIGenericRuleBaseComponent_H
#define CATLISTV_CATIGenericRuleBaseComponent_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/** 
* @CAA2Level L1
* @CAA2Usage U3
*/

class CATIGenericRuleBaseComponent_var;

#include "Rule.h"

// Clean previous functions requests
#include "CATLISTV_Clean.h"

#define  CATLISTV_Append
#define  CATLISTV_AppendList
#define  CATLISTV_InsertAt
#define  CATLISTV_Locate
#define  CATLISTV_RemoveValue
#define  CATLISTV_RemovePosition
#define  CATLISTV_RemoveDuplicatesCount
#define  CATLISTV_RemoveAll

// Get macros
#include "CATLISTV_Declare.h"

// Generate interface of collection-class

#undef	CATCOLLEC_ExportedBy
#define	CATCOLLEC_ExportedBy	ExportedByRule

/**
* List of CATIGenericRuleBaseComponent_var.
*/


CATLISTV_DECLARE(CATIGenericRuleBaseComponent_var)


#endif

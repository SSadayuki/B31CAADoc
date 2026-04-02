/* -*-c++-*- */
#ifndef CATLISTV_CATICheckReport_H
#define CATLISTV_CATICheckReport_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/** 
* @CAA2Level L1
* @CAA2Usage U3
*/

class CATICheckReport_var;

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

#undef	CATCOLLEC_ExportedBy
#define	CATCOLLEC_ExportedBy	ExportedByRule

/**
* List of CATICheckReport_var.
*/

CATLISTV_DECLARE(CATICheckReport_var)

#endif

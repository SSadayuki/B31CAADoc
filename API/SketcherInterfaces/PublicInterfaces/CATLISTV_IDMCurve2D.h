/* -*-c++-*- */
#ifndef CATLISTV_IDMCurve2D_H
#define CATLISTV_IDMCurve2D_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

// Exported by module
#include "CATSketcherInterfaces.h"

// Clean previous functions requests
#include "CATLISTV_Clean.h"

// Require needed functions
#define  CATLISTV_Append
#define  CATLISTV_RemoveValue
#define  CATLISTV_InsertAfter
#define  CATLISTV_RemoveDuplicatesCount

// Get macros
#include "CATLISTV_Declare.h"

// Generate interface of collection-class
#undef	CATCOLLEC_ExportedBy
#define	CATCOLLEC_ExportedBy	ExportedByCATSketcherInterfaces

CATLISTV_DECLARE(IDMCurve2D_var)

#endif

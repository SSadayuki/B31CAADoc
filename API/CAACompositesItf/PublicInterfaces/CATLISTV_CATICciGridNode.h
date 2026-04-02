
#ifndef CATLISTV_CATICciGridNode_H
#define CATLISTV_CATICciGridNode_H

// COPYRIGHT Dassault Systemes 2010
//===================================================================
//
// CATLISTV_CATICciGridNode.h
// Header definition of CATLISTV_CATICciGridNode
//
//===================================================================
//
// Usage notes:
//
//===================================================================

#include "CAACompositesItf.h"
#include "CATBaseUnknown.h"
/**
  * @CAA2Level L0
  * @CAA2Usage U1
  */
//-----------------------------------------------------------------------

#include "CATICciGridNode.h"

#include  "CATLISTV_Clean.h"

#define    CATLISTV_Append
#define    CATLISTV_AppendList
#define    CATLISTV_InsertAt
#define    CATLISTV_Intersection  
#define    CATLISTV_Locate
#define    CATLISTV_RemoveValue
#define    CATLISTV_RemovePosition
#define    CATLISTV_RemoveDuplicatesCount
#define    CATLISTV_ReSize
#define    CATLISTV_Swap

#include "CATLISTV_Declare.h"

#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy  ExportedByCAACompositesItf

CATLISTV_DECLARE(CATICciGridNode_var)

#endif

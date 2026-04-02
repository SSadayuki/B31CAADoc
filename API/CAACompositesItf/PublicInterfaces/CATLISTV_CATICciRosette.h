#ifndef CATLISTV_CATICciRosette_H
#define CATLISTV_CATICciRosette_H

// COPYRIGHT Dassault Systemes 2014
//===================================================================
//
// CATLISTV_CATICciRosette.h
// Header definition of CATLISTV_CATICciRosette
//
//===================================================================
//
// Usage notes:
//
//===================================================================

/**
  * @CAA2Level L0
  * @CAA2Usage U1
  */
#include "CAACompositesItf.h"
#include "CATBaseUnknown.h"

//-----------------------------------------------------------------------

#include "CATICciRosette.h"

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

CATLISTV_DECLARE(CATICciRosette_var)

#endif

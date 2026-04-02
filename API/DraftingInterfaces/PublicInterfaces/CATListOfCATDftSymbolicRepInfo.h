// COPYRIGHT DASSAULT SYSTEMES 2012
#ifndef CATListOfCATDftSymbolicRepInfo_h
#define CATListOfCATDftSymbolicRepInfo_h
/**
 * @CAA2Level L0
 * @CAA2Usage U1
 */
#include <CATLISTP_Clean.h>

#define CATLISTP_Append
#define CATLISTP_RemovePosition
#define CATLISTP_RemoveAll
#define CATLISTP_InsertAt
#define CATLISTP_Size

#include <CATLISTP_Declare.h>
#include "CATDftGenStruct.h"

#include "DraftingItfCPP.h"

#undef	CATCOLLEC_ExportedBy
#define	CATCOLLEC_ExportedBy	ExportedByDraftingItfCPP

CATLISTP_DECLARE(CATDftSymbolicRepInfo)
#endif

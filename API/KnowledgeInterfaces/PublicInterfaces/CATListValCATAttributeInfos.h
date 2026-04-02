#ifndef CATListOfCATAtributeInfos_h
#define CATListOfCATAtributeInfos_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/** 
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/*  CAA2Reviewed */

#include "CATLifSpecs.h"

#include "CATAttributeInfos.h"

#include "CATLISTV_Clean.h"

#define	CATLISTV_AppendList
#define	CATLISTV_InsertAt
#define	CATLISTV_ReSize
#define	CATLISTV_Locate
#define	CATLISTV_RemoveValue
#define	CATLISTV_RemovePosition
#define	CATLISTV_Compare
#define	CATLISTV_Replace
#define	CATLISTV_NbOccur
#define	CATLISTV_Intersection
#define	CATLISTV_Apply
#define	CATLISTV_RemoveDuplicatesCount

#include "CATLISTV_Declare.h"

#undef	CATCOLLEC_ExportedBy
#define	CATCOLLEC_ExportedBy	ExportedByCATLifSpecs

/**
* List of @href CATAttributeInfos .
*/

CATLISTV_DECLARE( CATAttributeInfos );

#endif

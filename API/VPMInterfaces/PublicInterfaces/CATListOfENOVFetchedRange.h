#ifndef	CATListOfENOVFetchedRange_h 
#define	CATListOfENOVFetchedRange_h
// COPYRIGHT DASSAULT SYSTEMES 2003
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
class ENOVFetchedRange;

// clean previous functions requests
#include <CATLISTP_Clean.h>

#define CATLISTP_Append
#define CATLISTP_ApplyDelete
#define CATLISTP_RemoveAll
#define CATLISTP_RemoveDuplicates

#include <CATLISTP_Declare.h>
#include "GUIDVPMInterfaces.h"
#undef CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy ExportedByGUIDVPMInterfaces


CATLISTP_DECLARE( ENOVFetchedRange )

typedef  CATLISTP(ENOVFetchedRange) CATListOfENOVFetchedRange;

#endif 	

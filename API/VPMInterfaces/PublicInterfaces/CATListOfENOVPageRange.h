// --------------------------------------------------------------
// VPM (c) Copyright Dassault Systemes 2011                           
// --------------------------------------------------------------
// Responsable : JDV                                                 
// --------------------------------------------------------------
// Header      : CATListOfENOVPageRange.h                                      
// --------------------------------------------------------------
// Content     : Light Query page definitions
// --------------------------------------------------------------
// History     :                                                          
// Creation    : 2011/05/25 > JDV                                          
// --------------------------------------------------------------

/** @CAA2Level L0
  * @CAA2Usage U0
 */

#ifndef	CATListOfENOVPageRange_h 
#define	CATListOfENOVPageRange_h

class ENOVPageRange;

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


CATLISTP_DECLARE( ENOVPageRange )

typedef  CATLISTP( ENOVPageRange ) CATListOfENOVPageRange;

#endif 	

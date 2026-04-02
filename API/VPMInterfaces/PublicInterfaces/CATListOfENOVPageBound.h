// --------------------------------------------------------------
// VPM (c) Copyright Dassault Systemes 2011                           
// --------------------------------------------------------------
// Responsable : JDV                                                 
// --------------------------------------------------------------
// Header      : CATListOfENOVPageBound.h                                      
// --------------------------------------------------------------
// Content     : Light Query page values definitions
// --------------------------------------------------------------
// History     :                                                          
// Creation    : 2011/05/27 > JDV                                          
// --------------------------------------------------------------

/** @CAA2Level L0
  * @CAA2Usage U0
 */

#ifndef	CATListOfENOVPageBound_h 
#define	CATListOfENOVPageBound_h

#include "ENOVPageBound.h"

// clean previous functions requests
#include <CATLISTP_Clean.h>
#include "CATLISTP_PublicInterface.h"

#define CATLISTP_Append
#define CATLISTP_ApplyDelete
#define CATLISTP_RemoveAll
#define CATLISTP_RemoveDuplicates

#include <CATLISTP_Declare.h>
#include "GUIDVPMInterfaces.h"
#undef CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy ExportedByGUIDVPMInterfaces


CATLISTP_DECLARE( ENOVPageBound )

typedef  CATLISTP( ENOVPageBound ) CATListOfENOVPageBound;

#endif 	

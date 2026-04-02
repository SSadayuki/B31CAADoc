// --------------------------------------------------------------
// VPM (c) Copyright Dassault Systemes 2011                           
// --------------------------------------------------------------
// Responsable : JDV                                                 
// --------------------------------------------------------------
// Header      : CATListOfCATIVpmLightExpandObject.h                                      
// --------------------------------------------------------------
// Content     : List of Light Expand result objects
// --------------------------------------------------------------
// History     :                                                          
// Creation    : 2011/09/19 > JDV                                          
// --------------------------------------------------------------

/** @CAA2Level L1
  * @CAA2Usage U1
 */

#ifndef	CATListOfCATIVpmLightExpandObject_h 
#define	CATListOfCATIVpmLightExpandObject_h

#include "CATIVpmLightExpandObject.h"

// clean previous functions requests
#include <CATLISTP_Clean.h>
#include "CATLISTP_PublicInterface.h"

#define CATLISTP_Append
#define CATLISTP_ApplyDelete
#define CATLISTP_RemoveAll
#define CATLISTP_RemoveDuplicates
#define CATLISTP_InsertAt    //YJC: Light Refresh HL 4/14/2012

#include <CATLISTP_Declare.h>
#include "GUIDVPMInterfaces.h"
#undef CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy ExportedByGUIDVPMInterfaces


CATLISTP_DECLARE(CATIVpmLightExpandObject)

typedef  CATLISTP(CATIVpmLightExpandObject) CATListOfCATIVpmLightExpandObject;

#endif 	

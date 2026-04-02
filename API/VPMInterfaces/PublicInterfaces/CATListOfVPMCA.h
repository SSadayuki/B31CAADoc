#ifndef CATListOfVPMCA_H
#define CATListOfVPMCA_H
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
// ================================================================    
// CPI/VPM (c) Copyright Dassault Systemes 1997                        
// --------------------------------------------------------------       
// Include: CATListOfVPMCA.h                                      
// --------------------------------------------------------------       
// Contenu:  Attribute definition                   
// ================================================================    
// Historique:                                                          
// Creation  :                                                  AHC 
// ================================================================    
//
// --> Definition de la collection 
//
#include "CATAttributeDescription.h"
#include "GUIDVPMInterfaces.h"
#include <CATLISTP_Clean.h>
//
#define CATLISTP_Append
#define CATLISTP_RemoveValue
#define CATLISTP_RemovePosition
#define CATLISTP_RemoveAll
#define CATLISTP_Locate
#define CATLISTP_QuickSort
//
#include <CATLISTP_Declare.h>
#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy    ExportedByGUIDVPMInterfaces

CATLISTP_DECLARE( VPMCA )

#define CATListOfVPMCA  CATLISTP(VPMCA)

#endif


// -------------------------------------------------------------------  
// CPI/SDM (c) Copyright Dassault Systemes 1997                        
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
//---------------------------------------------------------------------
// Responsable: AHC                                                     
//--------------------------------------------------------------------- 
// Contenu de la macro:  Pre-Declarations 
//--------------------------------------------------------------------- 
// Historique:                                                          
// Creation : 96/07/04 > AHC                                           
//---------------------------------------------------------------------
//
#ifndef CATVpmType_H
#define CATVpmType_H 
//
//-------------------------------------------------------

/**
*	@CAA2Level L1
*	@CAA2Usage U1
*/


enum VPM_Logical {lFalse, lTrue, lUnset, lUnknown} ;
enum VPM_Boolean {bFalse, bTrue, bUnset} ;

typedef struct VpmAccess 
       {
       VPM_Boolean   _Exist    ;
       VPM_Boolean   _Read     ;
       VPM_Boolean   _Write    ;
       VPM_Boolean   _Execute  ;
       } VPM_Access   ;



#endif

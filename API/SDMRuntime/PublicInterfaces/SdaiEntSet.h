// COPYRIGHT DASSAULT SYSTEMES  2001
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************
#ifndef _SDAIENT_SET_H_
#define _SDAIENT_SET_H_

// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiBag -- Header
// ------------------------------------------------------------------------------------------------

// ------------------------------------------------------------------------------------------------
// Auteurs :
//	
//	PYR  (Novembre 1995)
// ------------------------------------------------------------------------------------------------
//  Historique :
//
//	MODIFICATION	: 01
//	DATE		: Nov 1995
//	AUTEUR		: PYR
//	NATURE		: Refonte complete de la version d'aout 93,suppression des 
//                        templates.  
//	DESCRIPTION	: Norme ISO 10303-22 (annexe D)
//
// ------------------------------------------------------------------------------------------------

//#include <SdaiMacro.h>
//#include <SdaiEntUnorderedCollection.h>
//#include <limits.h>
#include <SdaiSet.h>

// ------------------------------------------------------------------------------------------------
// Definition :
//
//      Une instance de 'SdaiSet' est une instance du type SET 
//
// ------------------------------------------------------------------------------------------------
// Definition EXPRESS :
//
//      ENTITY   set_instance
//
//              SUBTYPE OF (unordered_collection) ;
//
//              datatype          : set_type             ;  (* Le type EXPRESS de l'instance *)
//              contents          : SET OF primitive     ;  (* les valeurs du SET *)
//
//      END_ENTITY ;
//
// ------------------------------------------------------------------------------------------------

#define SDAI_ENT_SET_HEADER(TypeH)	SDAISET_HEADER(TypeH,INSTANCE)					
#endif 



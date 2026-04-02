// COPYRIGHT DASSAULT SYSTEMES  2001
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************
#ifndef _SDAIENT_UNORDERED_COLLECTION_H_
#define _SDAIENT_UNORDERED_COLLECTION_H_

// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiOrderedCollection
// ------------------------------------------------------------------------------------------------
// Auteurs :
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
//#include <SdaiEntAggr.h>
#include <SdaiUnorderedCollection.h>

// ------------------------------------------------------------------------------------------------
// Definition :
//
// ------------------------------------------------------------------------------------------------
// Definition EXPRESS :
//
//	ENTITY   unordered_collection
//
//		ABSTRACT SUPERTYPE OF 	(
//			ONEOF ( bag_instance, set_instance ) ) ; 
//		SUBTYPE OF ( aggregate_instance ) ;
//
//	END_ENTITY ;
//
// ------------------------------------------------------------------------------------------------

#define SDAI_ENT_UNORDERED_HEADER(TypeH) SDAIUNORDERED_HEADER(TypeH,INSTANCE)

#endif

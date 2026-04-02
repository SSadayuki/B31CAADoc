// COPYRIGHT DASSAULT SYSTEMES  2001
#ifndef _SDAIAPP_LIST_H_
#define _SDAIAPP_LIST_H_


/** @CAA2Required */
/***********************************************************************/
/* HEADER REQUIRED BY THE SDM COMPILER                                 */
/***********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/***********************************************************************/



/// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiList -- Header
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


#include <SdaiList.h>
//#include <SdaiAppOrderedCollection.h>
//#include <limits.h>

// ------------------------------------------------------------------------------------------------
// Definition :
//
//
// ------------------------------------------------------------------------------------------------
// Definition EXPRESS :
//
//	ENTITY   list_instance
//
//		SUBTYPE OF (ordered_collection) ;
//
//		datatype	: list_type ;
//		contents	: LIST OF primitive ;
//
//	END_ENTITY ;
//
// ------------------------------------------------------------------------------------------------
// References :
//	Definition de la norme SDAI ISO 10303-22, paragraphe 8.4.15, p. 41
//	Operations de la norme SDAI ISO 10303-22, paragraphe 9.10.12.7, p. 98
//	Binding C++ de la norme SDAI ISO 10303-22, paragraphe D.11.6.*, p. 383 a 385
// ------------------------------------------------------------------------------------------------

#define SDAI_APP_LIST_HEADER(TypeH)	 SDAILIST_HEADER(TypeH,INSTANCE)								\

#endif




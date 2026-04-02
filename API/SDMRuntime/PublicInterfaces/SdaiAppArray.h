// COPYRIGHT DASSAULT SYSTEMES  2001
#ifndef _SDAIAPP_ARRAY_H_
#define _SDAIAPP_ARRAY_H_


/** @CAA2Required */
/***********************************************************************/
/* HEADER REQUIRED BY THE SDM COMPILER                                 */
/***********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/***********************************************************************/


// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiArray -- Header
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
#include <SdaiArray.h>


// ------------------------------------------------------------------------------------------------
// Definition :
//
//
// ------------------------------------------------------------------------------------------------
// Definition EXPRESS :
//
//	ENTITY   array_instance
//
//		SUBTYPE OF (ordered_collection) ;
//
//              datatype	: array_type ;
//              contents	: ARRAY[datatype.lower : datatype.upper] OF primitive ; 
//
//	END_ENTITY ;
//
// ------------------------------------------------------------------------------------------------

#define SDAI_APP_ARRAY_HEADER(TypeH)	 SDAIARRAY_HEADER(TypeH,INSTANCE)	

#endif	/* _SDAIAPP_ARRAY_H_ */





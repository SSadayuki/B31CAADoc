// COPYRIGHT DASSAULT SYSTEMES  2001
#ifndef _SDAIAPP_ORDERED_COLLECTION_H_
#define _SDAIAPP_ORDERED_COLLECTION_H_


/** @CAA2Required */
/***********************************************************************/
/* HEADER REQUIRED BY THE SDM COMPILER                                 */
/***********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/***********************************************************************/



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
//#include <SdaiAppAggr.h>
#include "SdaiOrderedCollection.h"

// ------------------------------------------------------------------------------------------------
// Definition :
//
//
// ------------------------------------------------------------------------------------------------
// Definition EXPRESS :
//
//	ENTITY   ordered_collection
//
//		ABSTRACT SUPERTYPE OF (
//                       ONEOF (array_instance, list_instance) ) ;
//
//              SUBTYPE OF (aggregate_instance) ;    
//
//	END_ENTITY ;
//

#define SDAI_APP_ORDERED_HEADER(TypeH)	 SDAIORDERED_HEADER(TypeH,INSTANCE)	

#endif



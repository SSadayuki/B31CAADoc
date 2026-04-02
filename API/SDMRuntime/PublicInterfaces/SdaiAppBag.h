// COPYRIGHT DASSAULT SYSTEMES  2001
#ifndef _SDAIAPP_BAG_H_
#define _SDAIAPP_BAG_H_


/** @CAA2Required */
/***********************************************************************/
/* HEADER REQUIRED BY THE SDM COMPILER                                 */
/***********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/***********************************************************************/


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
//#include <SdaiAppUnorderedCollection.h>
//#include <limits.h>
#include "SdaiBag.h"

// ------------------------------------------------------------------------------------------------
// Definition :
//
// ------------------------------------------------------------------------------------------------
// Definition EXPRESS :
//
//	ENTITY   bag_instance
//
//		SUBTYPE OF ( unordered_collection ) ;
//
//		datatype	: bag_type ;
//		contents	: BAG OF primitive ;
//
//	END_ENTITY ;
//

#define SDAI_APP_BAG_HEADER(TypeH)	 SDAIBAG_HEADER(TypeH,INSTANCE)		

#endif	/* _SDAIAPP_BAG_H_ */

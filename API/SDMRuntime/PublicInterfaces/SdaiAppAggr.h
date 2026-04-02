// COPYRIGHT DASSAULT SYSTEMES  2001
#ifndef _SDAI_APP_AGGR_H_
#define _SDAI_APP_AGGR_H_


/** @CAA2Required */
/***********************************************************************/
/* HEADER REQUIRED BY THE SDM COMPILER                                 */
/***********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/***********************************************************************/


// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiAggr -- Header
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

//#include <SdaiPrimitiveH.h>
//#include <SdaiAggrInstance.h>
#include "SdaiAggr.h"

//class SDAIAGGR(SdaiAggr,SdaiAppInstanceH);

//class SdaiBoolean;
/*
// ------------------------------------------------------------------------------------------------
//                      ============== SdaiAggr ====================
//                      Formerly template <class TypeH> class SdaiAggr
//                    cannot be worse as a macro than it was as a template 
// -----------------------------------------------------------------------------------------------
*/
#define SDAI_APP_AGGR_HEADER(TypeH)	 //SDAIAGGR_HEADER(TypeH,INSTANCE)	
// now defined in SDAI_ITER_BODY

#endif	/* _SDAI_APP_AGGR_H_ */




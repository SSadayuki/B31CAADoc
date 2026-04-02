// COPYRIGHT DASSAULT SYSTEMES  2001
#ifndef _SDAI_ENT_AGGR_H_
#define _SDAI_ENT_AGGR_H_
// ------------------------------------------------------------------------------------------------
// SDAI -- C++ Language Binding -- SdaiEntAggr -- Header
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
//class SDAIAGGR(SdaiAggr,SdaiEntityInstanceH);
//class SdaiBoolean;

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "SdaiAggr.h"

/*
// ------------------------------------------------------------------------------------------------
//                      ============== SdaiAggr ====================
//                      Formerly template <class TypeH> class SdaiAggr
//                    cannot be worse as a macro than it was as a template 
// -----------------------------------------------------------------------------------------------
*/
/** @nodoc */
#define SDAI_ENT_AGGR_HEADER(TypeH)						SDAIAGGR_HEADER(TypeH,INSTANCE)
#endif	/* _SDAI_ENT_AGGR_H_ */




// COPYRIGHT DASSAULT SYSTEMES 2003
/************************************************************************/
/* Fichier CATListOfValCatIExchangeEdgeUse.h                               */
/*      Classe necessaire a l'utilisation du type                       */
/*      CATLISTV(CATIExchangeEdgeUse).                                     */
/*      CATLISTV fait partie du framework Collections.                  */
/************************************************************************/
//  Modifications:
//
//  10/03/2003: JHH: M2V5: Ajout de la methode pour supprimer un element a une position

/**
 * @CAA2Level L0
 * @CAA2Usage U1
 */

#ifndef _H_CAT_LIST_OF_EXCHANGE_EdgeUse

#include "DataExchangeBaseRepsItfCPP.h"

class CATIExchangeEdgeUse;

/* Includes necessaires */
#include  "CATLISTV_Clean.h" /* Clean previous functions requests */

#define CATLISTV_Append
#define CATLISTV_RemoveAll
#define CATLISTV_RemovePosition

#include "CATLISTV_Declare.h" /* Get macros */

#undef CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy ExportedByDataExchangeBaseRepsItfCPP

/* Generate interface of collection-class 
 (functions declarations) */
CATLISTV_DECLARE( CATIExchangeEdgeUse_var )

#define _H_CAT_LIST_OF_EXCHANGE_EdgeUse
#endif

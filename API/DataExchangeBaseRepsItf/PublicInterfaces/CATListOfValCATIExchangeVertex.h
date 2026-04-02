// COPYRIGHT DASSAULT SYSTEMES 2003
/************************************************************************/
/* Fichier CATListOfValCatIExchangeVertex.h                               */
/*      Classe necessaire a l'utilisation du type                       */
/*      CATLISTV(CATIExchangeVertex).                                     */
/*      CATLISTV fait partie du framework Collections.                  */
/************************************************************************/

/**
 * @CAA2Level L0
 * @CAA2Usage U1
 */

#ifndef _H_CAT_LIST_OF_EXCHANGE_VERTEX

#include "DataExchangeBaseRepsItfCPP.h"

class CATIExchangeVertex;

/* Includes necessaires */
#include  "CATLISTV_Clean.h" /* Clean previous functions requests */

#define CATLISTV_Append
#define CATLISTV_RemoveAll

#include "CATLISTV_Declare.h" /* Get macros */

#undef CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy ExportedByDataExchangeBaseRepsItfCPP

/* Generate interface of collection-class 
 (functions declarations) */
CATLISTV_DECLARE( CATIExchangeVertex_var )

#define _H_CAT_LIST_OF_EXCHANGE_VERTEX
#endif

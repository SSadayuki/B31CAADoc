// COPYRIGHT DASSAULT SYSTEMES 2003
/************************************************************************/
/* ALN 08/11/98                                                         */
/* Fichier CATListOfValCatIExchangeVolume.h                             */
/*      Classe necessaire a l'utilisation STEP du type                  */
/*      CATLISTV(CATIExchangeVolume).                                   */
/*      cad d'une liste de pointeur de volumes.                         */
/*      CATLISTV fait partie du framework Collections.                  */
/************************************************************************/

/**
 * @CAA2Level L0
 * @CAA2Usage U1
 */

#ifndef _H_CAT_LIST_OF_EXCHANGE_VOLUME

#include "DataExchangeBaseRepsItfCPP.h"

class CATIExchangeVolume;

/* Includes necessaires */
#include  "CATLISTV_Clean.h" /* Clean previous functions requests */

#define CATLISTV_Append
#define CATLISTV_RemoveAll

#include "CATLISTV_Declare.h" /* Get macros */

#undef CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy ExportedByDataExchangeBaseRepsItfCPP

/* Generate interface of collection-class 
 (functions declarations) */
CATLISTV_DECLARE( CATIExchangeVolume_var )

#define _H_CAT_LIST_OF_EXCHANGE_VOLUME
#endif

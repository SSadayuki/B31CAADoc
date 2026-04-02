// COPYRIGHT DASSAULT SYSTEMES 2003
/************************************************************************/
/* ALN 08/11/98                                                         */
/* Fichier CATListOfValCatIExchangeShell.h                        */
/*      Classe necessaire a l'utilisation STEP du type                  */
/*      CATLISTV(CATIExchangeShell).                              */
/*      cad d'une liste de pointeur de skins ou de volumes.             */
/*      CATLISTV fait partie du framework Collections.                  */
/************************************************************************/

/**
 * @CAA2Level L0
 * @CAA2Usage U1
 */

#ifndef _H_CAT_LIST_OF_EXCHANGE_SHELL

#include "DataExchangeBaseRepsItfCPP.h"

class CATIExchangeShell;

/* Includes necessaires */
#include  "CATLISTV_Clean.h" /* Clean previous functions requests */

#define CATLISTV_Append
#define CATLISTV_RemoveAll

#include "CATLISTV_Declare.h" /* Get macros */

#undef CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy ExportedByDataExchangeBaseRepsItfCPP

/* Generate interface of collection-class 
 (functions declarations) */
CATLISTV_DECLARE( CATIExchangeShell_var )

#define _H_CAT_LIST_OF_EXCHANGE_SHELL
#endif

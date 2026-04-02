/* -*-c++-*- */

//  COPYRIGHT DASSAULT SYSTEMES PROVENCE 2002

/**
 * @CAA2Level L0
 * @CAA2Usage U1
 */

#ifndef _H_CAT_LIST_OF_EXCHANGE_Wire

#include "DataExchangeBaseRepsItfCPP.h"

class CATIExchangeWire;

/* Includes necessaires */
#include  "CATLISTV_Clean.h" /* Clean previous functions requests */

#define CATLISTV_Append
#define CATLISTV_RemoveAll

#include "CATLISTV_Declare.h" /* Get macros */

#undef CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy ExportedByDataExchangeBaseRepsItfCPP

/* Generate interface of collection-class 
 (functions declarations) */
CATLISTV_DECLARE( CATIExchangeWire_var )

#define _H_CAT_LIST_OF_EXCHANGE_Wire
#endif

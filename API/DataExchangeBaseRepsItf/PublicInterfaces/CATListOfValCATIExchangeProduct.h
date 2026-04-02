// COPYRIGHT 2002 Dassault Systemes Provence
//===================================================================
//
// CATListOfValCATIExchangeProduct.h
//
//===================================================================
//
// Usage notes:
//
//===================================================================
//
// 30/09/02: JHH: Creation
//===================================================================

/**
 * @CAA2Level L0
 * @CAA2Usage U1
 */

#ifndef _H_CAT_LIST_OF_EXCHANGE_PRODUCT

#include "DataExchangeBaseRepsItfCPP.h"

class CATIExchangeProduct;

/* Includes necessaires */
#include  "CATLISTV_Clean.h" /* Clean previous functions requests */

#define CATLISTV_Append
#define CATLISTV_RemoveAll
#define CATLISTV_RemoveValue

#include "CATLISTV_Declare.h" /* Get macros */

#undef CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy ExportedByDataExchangeBaseRepsItfCPP

/* Generate interface of collection-class 
 (functions declarations) */
CATLISTV_DECLARE( CATIExchangeProduct_var )

#define _H_CAT_LIST_OF_EXCHANGE_PRODUCT
#endif

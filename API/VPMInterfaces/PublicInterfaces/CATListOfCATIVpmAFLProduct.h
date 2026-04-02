/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES	2001
//=============================================================================
// June 99      Creation                                            C. Cressend
// November 01  Modification                                            S. Dami
//              Insert CAA2 documentation                                 
//=============================================================================

#ifndef _CATListOfCATIVpmAFLProduct_H_
#define _CATListOfCATIVpmAFLProduct_H_

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATIVpmAFLProduct.h"

#include "CATLISTV_Clean.h"

/**
 * @collection CATListOfCATIVpmAFLProduct
 * Collection class for CATIVpmAFLProduct_var.
 * The following methods for handling collections are supported:
 * <ul>
 * <li><tt>Append</tt></li>
 * <li><tt>RemoveAll</tt></li>
 * </ul>
 * For further details, please refer to the articles dealing with collections in the encyclopedia.
 */
#define CATLISTV_Append
#define CATLISTV_RemoveAll

#include "CATLISTV_Declare.h"

// exporting module
#include "GUIDVPMInterfaces.h"
#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy	ExportedByGUIDVPMInterfaces

CATLISTV_DECLARE(CATIVpmAFLProduct_var)
typedef CATLISTV(CATIVpmAFLProduct_var) CATListOfCATIVpmAFLProduct;

#endif  

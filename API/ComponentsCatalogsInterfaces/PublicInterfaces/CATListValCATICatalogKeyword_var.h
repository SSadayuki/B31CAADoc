/* -*-c++-*- */
#ifndef CATLISTV_CATICatalogKeyword_H_
#define CATLISTV_CATICatalogKeyword_H_
// COPYRIGHT DASSAULT SYSTEMES 2000
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * @collection CATLISTV(CATICatalogKeyword_var)
 * Collection class for CATICatalogKeyword interface handler.
 * Only the following methods of collection classes are available:
 * <ul>
 * <li><tt>AppendList</tt></li>
 * <li><tt>Append</tt></li>
 * <li><tt>InsertAt</tt></li>
 * <li><tt>Locate</tt></li>
 * <li><tt>RemovePosition</tt></li>
 * <li><tt>RemoveValue</tt></li>
 * <li><tt>RemoveDuplicatesCount</tt></li>
 * </ul>
 * Refer to the articles dealing with collections in the encyclopedia.
 * @see CATICatalogKeyword
*/
// --------------------------------------------------------------------------
//                              Exported by module
// --------------------------------------------------------------------------

#include "CATCclInterfaces.h"

// --------------------------------------------------------------------------
//                       Clean previous functions requests
// --------------------------------------------------------------------------

#include "CATLISTV_Clean.h"

// --------------------------------------------------------------------------
//                           Require needed functions
// --------------------------------------------------------------------------

#define  CATLISTV_Append
#define  CATLISTV_AppendList
#define  CATLISTV_InsertAt
#define  CATLISTV_Locate
#define  CATLISTV_RemoveValue
#define  CATLISTV_RemovePosition
#define  CATLISTV_RemoveDuplicatesCount

// --------------------------------------------------------------------------
//                                  Get macros
// --------------------------------------------------------------------------

#include "CATLISTV_Declare.h"

// --------------------------------------------------------------------------
//                       Generate interface of collection-class
// --------------------------------------------------------------------------

#include "CATICatalogKeyword.h"

#undef	CATCOLLEC_ExportedBy
#define	CATCOLLEC_ExportedBy	ExportedByCATCclInterfaces

CATLISTV_DECLARE( CATICatalogKeyword_var )


#endif



// COPYRIGHT DASSAULT SYSTEMES 1996
//================================================================
// Usage Notes:
//
//	Include: CATListOfCATIVpmFactoryObject.h
//=================================================================
// Oct 96   Creation                                  A.HAMONIC 
//===================================================================

/**
*	@CAA2Level L1
*	@CAA2Usage U1
*/
#ifndef _CATListOfCATIVpmFactoryObject_H_
#define _CATListOfCATIVpmFactoryObject_H_

#include "CATIVpmFactoryObject.h"

#include "CATLISTV_Clean.h"

/**
 * @collection CATListOfCATIVpmFactoryObject
 * Collection class for factory objects.
 * Only the following methods of value collection classes are available:
 * <ul>
 * <li><tt>Append</tt></li>
 * <li><tt>Locate</tt></li>
 * <li><tt>AppendList</tt></li>
 * <li><tt>RemoveValue</tt></li>
 * </ul>
 * Refer to the articles dealing with collections in the encyclopedia.
 */

#define CATLISTV_Append
#define CATLISTV_Locate
#define CATLISTV_AppendList
#define CATLISTV_ReSize
#define CATLISTV_RemoveValue

#include "CATLISTV_Declare.h"

// exporting module
#include "GUIDVPMInterfaces.h"
#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy	ExportedByGUIDVPMInterfaces

CATLISTV_DECLARE(CATIVpmFactoryObject_var)
typedef CATLISTV(CATIVpmFactoryObject_var) CATListOfCATIVpmFactoryObject;

#endif  

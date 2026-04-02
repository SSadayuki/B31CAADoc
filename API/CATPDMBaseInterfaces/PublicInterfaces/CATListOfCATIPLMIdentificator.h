//=================================================================
// COPYRIGHT DASSAULT SYSTEMES 2007
//=================================================================
// 
//=================================================================
// Usage Notes:
//=================================================================
// 
// 
//=================================================================

#ifndef CATListOfCATIPLMIdentificator_H_
#define CATListOfCATIPLMIdentificator_H_

// COPYRIGHT DASSAULT SYSTEMES 2007

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATIPLMIdentificator.h"

#include "CATLISTV_Clean.h"

/**
 * @collection CATListOfCATIPLMIdentificator
 * Collection class for document versions.
 * Only the following methods of value collection classes are available:
 * <ul>
 * <li><tt>Append</tt></li>
 * <li><tt>Append( List )</tt></li>
 * <li><tt>Locate</tt></li>
 * <li><tt>RemovePosition</tt></li>
 * <li><tt>RemoveDuplicates</tt></li>
 * <li><tt>RemoveAll</tt></li>
 * </ul>
 * Refer to the articles dealing with collections in the encyclopedia.
 */

#define CATLISTV_Append
#define CATLISTV_AppendList
#define CATLISTV_Locate
#define CATLISTV_RemovePosition
#define CATLISTV_RemoveDuplicatesCount
#define CATLISTV_RemoveAll

#include "CATLISTV_Declare.h"

// exporting module
#include "CATPDMBaseItfCPP.h"
#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy	ExportedByCATPDMBaseItfCPP

CATLISTV_DECLARE(CATIPLMIdentificator_var)
typedef CATLISTV(CATIPLMIdentificator_var) CATListOfCATIPLMIdentificator;

#endif



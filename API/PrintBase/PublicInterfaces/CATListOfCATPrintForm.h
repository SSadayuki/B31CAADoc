#ifndef CATLISTOFCATPRINTFORM_H
#define CATLISTOFCATPRINTFORM_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * @collection CATLISTV(CATPrintForm)
 * Collection class for CATPrintForm.
 * Only the following methods of collection classes are available:
 * <ul>
 * <li><tt>Append</tt</li>
 * <li><tt>RemoveAll</tt</li>
 * </ul>
 * Refer to the articles dealing with collections in the encyclopedia.
 * @see CATPrintForm
 */

#include "CATLISTV_Clean.h"

#define CATLISTV_Append
#define CATLISTV_RemoveAll

#include "CATLISTV_Declare.h"
#include "CATPrintForm.h"

#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy ExportedByCATPrintBase

CATLISTV_DECLARE(CATPrintForm);

#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy

#endif


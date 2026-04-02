#ifndef CATLISTOFCATPRINTIMAGE_H
#define CATLISTOFCATPRINTIMAGE_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * @collection CATLISTP(CATPrintImage)
 * Collection class for pointers to <tt>CATPrintImage</tt>.
 * All the methods of pointer collection classes are available.
 * Refer to the articles dealing with collections in the encyclopedia.
 * @see CATPrintImage
 */

#include "CATLISTP_Clean.h"

#define CATLISTP_Append
#define CATLISTP_RemovePosition
#define CATLISTP_RemoveAll
#define CATLISTP_Swap

#include "CATPrintImage.h"
#include "CATLISTP_Declare.h"

#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy ExportedByCATPrintBase

CATLISTP_DECLARE(CATPrintImage);

#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy

#endif

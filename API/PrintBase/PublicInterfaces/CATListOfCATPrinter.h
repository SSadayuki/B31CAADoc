#ifndef CATLISTOFCATPRINTER_H
#define CATLISTOFCATPRINTER_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * @collection CATLISTP(CATPrinter)
 * Collection class for pointers to <tt>CATPrinter</tt>.
 * All the methods of pointer collection classes are available.
 * Refer to the articles dealing with collections in the encyclopedia.
 * @see CATPrinter
 */

#include "CATLISTP_Clean.h"

#define CATLISTP_Append
#define CATLISTP_RemovePosition
#define CATLISTP_RemoveAll
#define CATLISTP_Swap

#include "CATPrinter.h"
#include "CATLISTP_Declare.h"

#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy ExportedByCATPrintBase

CATLISTP_DECLARE(CATPrinter);

#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy

#endif

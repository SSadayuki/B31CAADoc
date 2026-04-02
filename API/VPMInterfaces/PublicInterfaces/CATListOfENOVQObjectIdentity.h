// -*- c++ -*-
#ifndef _CATLISTOFENOVQObjectIdentity_H
#define _CATLISTOFENOVQObjectIdentity_H
// COPYRIGHT DASSAULT SYSTEMES 2013

 /**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

// definition of a list of ENOVQObjectIdentity

#include "GUIDVPMInterfaces.h"
#include "ENOVQObjectIdentity.h"


#include <CATLISTP_Clean.h>
#define CATLISTP_Append
#define CATLISTP_ApplyDelete
#define CATLISTP_RemoveAll
#define CATLISTP_ReSize
#define CATLISTP_RemoveDuplicates
#define CATLISTP_RemovePosition
#include <CATLISTP_Declare.h>

#undef CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy ExportedByGUIDVPMInterfaces


/**
 * you must take care of the lifecycle of the list elements, since it's a list of pointers
 *
*/

CATLISTP_DECLARE(ENOVQObjectIdentity);
typedef CATLISTP(ENOVQObjectIdentity) CATListOfENOVQObjectIdentity;


#endif

#ifndef INCL_CATLISTPCATPPRHubObjectDescriptor_h
#define INCL_CATLISTPCATPPRHubObjectDescriptor_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L0
 * @CAA2Usage U1
 */

/**
 * @collection CATLISTP(CATPPRHubObjectDescriptor)
 * Collection class for pointers to <tt>CATPPRHubObjectDescriptor</tt>.
 * All the methods of pointer collection classes are available.
 * Refer to the articles dealing with collections in the encyclopedia.
 * @see CATPPRHubObjectDescriptor
 */

// Clean previous functions requests
#include  <CATLISTP_Clean.h>

// Specify the function to take into account.
#include <CATLISTP_AllFunct.h>

// Get macros
#include  <CATLISTP_Declare.h>

// Define the NT DLL export macro
//#include "CATPPRHubWtpBase.h"
#include "CATPPRHubLocator.h"
#undef	CATCOLLEC_ExportedBy
//#define	CATCOLLEC_ExportedBy ExportedByCATPPRHubWtpBase
#define	CATCOLLEC_ExportedBy ExportedByCATPPRHubLocator

// Declare the CATLISTP(CATPPRHubObjectDescriptor) type.
#include "CATPPRHubObjectDescriptor.h"
CATLISTP_DECLARE( CATPPRHubObjectDescriptor )

#endif

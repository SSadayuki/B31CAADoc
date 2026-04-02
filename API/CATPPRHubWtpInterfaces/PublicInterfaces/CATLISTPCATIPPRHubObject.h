#ifndef INCL_CATLISTPCATIPPRHubObject_h
#define INCL_CATLISTPCATIPPRHubObject_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
  * @CAA2Level L0
  * @CAA2Usage U1
**/

/**
 * @collection CATLISTP(CATIPPRHubObject)
 * Collection class for pointers to <tt>CATIPPRHubObject</tt>.
 * All the methods of pointer collection classes are available.
 * Refer to the articles dealing with collections in the encyclopedia.
 * @see CATIPPRHubObject
 */

// Clean previous functions requests
#include  <CATLISTP_Clean.h>

// Specify the function to take into account.
#include <CATLISTP_AllFunct.h>

// Get macros
#include  <CATLISTP_Declare.h>

// Define the NT DLL export macro
#include "CATPPRHubWtpItfCPP.h"
#undef	CATCOLLEC_ExportedBy
#define	CATCOLLEC_ExportedBy ExportedByCATPPRHubWtpItfCPP

// Declare the CATLISTP(CATIPPRHubObject) type.
#include "CATIPPRHubObject.h"
CATLISTP_DECLARE( CATIPPRHubObject )

#endif

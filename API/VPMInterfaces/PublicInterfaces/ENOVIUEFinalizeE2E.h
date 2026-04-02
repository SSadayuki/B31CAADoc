//
// COPYRIGHT DASSAULT SYSTEMES 2007
//------------------------------------------------------------------------------
// Interface  : ENOVIUEFinalizeE2E 
// Author     : 
// Date       : 
//------------------------------------------------------------------------------
#ifndef ENOVIUEFinalizeE2E_H
#define ENOVIUEFinalizeE2E_H

/**
 *      @CAA2Level L0
 *      @CAA2Usage U5
 */

#include "CATBaseUnknown.h"
#include "GUIDVPMInterfaces.h"
#include "CATLISTV_CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByGUIDVPMInterfaces IID IID_ENOVIUEFinalizeE2E;
#else
extern "C" const IID IID_ENOVIUEFinalizeE2E ;
#endif


/**
* Interface to execute user-exit for post-processing the new objects created from the originals. 
*
* <br><b>Role:</b>Provide customer to update new objects just created from the original WP
*
**/
class ExportedByGUIDVPMInterfaces ENOVIUEFinalizeE2E : public CATBaseUnknown
{

    CATDeclareInterface;

    public:
// No constructors or destructors on this pure virtual base class
// --------------------------------------------------------------

/**
* Enable to handle list of objects newly created by the E2E command. 
*
*  @param iListObjs
*    (input) The list of objects computed are those which are created by the E2E command and may be either Part Version or Document revisions.
*
* @return 
*   <ul>
*     <li><tt>S_OK</tt>: Function executed successfully</li> 
*     <li><tt>E_FAIL</tt>: Error occurred during execution failed</li>
*  </ul>
*/

virtual HRESULT Run(const CATLISTV(CATBaseUnknown_var)& iListObs)=0;
};
//-----------------------------------------------------------------
// Handler definition
//-----------------------------------------------------------------
//CATDeclareHandler(ENOVIUEFinalizeE2E, CATBaseUnknown);
//
#endif

// COPYRIGHT Dassault Systemes 2017
//===================================================================
//
// CATPDMPVSServices.h
// Header definition of CATPDMPVSServices
//
//===================================================================
//
// Usage notes:
//
//===================================================================
//
//  Jun 2017  Creation
//
//===================================================================

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

#ifndef CATPDMPVSServices_H
#define CATPDMPVSServices_H

#include "CATCollec.h"
#include "IUnknown.h"

#include "ExportedByCATPDMBaseEnoviaV5CAA.h"

class CATIPLMIdentificator_var;
class CATLISTV(CATIPLMIdentificator_var);

/** 
* Interface to get the PLMIdentificators of Item Instances given the corresponding PLMIdentificators of PVS objects as input.
*
* <br><b>Role</b>: Returns the List of PLMIdentificators of Item Instances if list of corresponding PLMIdentificators of PVS objects is given as input .
*<p>
* @param iPVSIdentificators 
*    (input) The list of object identifiers of PVS objects.
* @param oItemInstancesIdentificators
*    (output) The list of object identifiers of corresponding Item Instances
* @return 
*   <ul>
*     <li><tt>S_OK</tt>: Identifier list of all Item Instances corresponding to input list of all PVS identifiers is retrived successfully </li> 
*     <li><tt>E_FAIL</tt>: Function has failed. Possible errors may be: 
*       <ul>
*        <li>Connection to ENOVIAV5 Server was not established,</li>
*        <li>Unable to retrieve Item Instances corresponding atleast one input PVS object,</li>
*        <li>A service is not supported on the current Server,</li>
*        <li>Some P&O priveleges are missing for the current user,</li>
*        <li>An abnormal error has been encountered.</li>
*       </ul>
*     </li>
*     <li><tt>E_INVALIDARG</tt>: The input parameter [iPVSIdentificators] is empty.</li>
*   </ul>
*/

ExportedByCATPDMBaseEnoviaV5CAA  HRESULT GetIIsFromPVS(CATLISTV(CATIPLMIdentificator_var)& iPVSIdentificators  , CATLISTV(CATIPLMIdentificator_var)& oItemInstancesIdentificators  );

#endif





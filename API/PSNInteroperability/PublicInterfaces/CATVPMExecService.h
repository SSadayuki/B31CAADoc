/* -*-c++-*- */
#ifndef CATVPMExecService__H
#define CATVPMExecService__H

// COPYRIGHT DASSAULT SYSTEMES  2004

/**
* @CAA2Level L1
* @CAA2Usage U1
*/

// COPYRIGHT Dassault Systemes 2004
//===================================================================
//
// CATVPMExecService.h
// Header definition of CATVPMExecService
//
//===================================================================
//
// Usage notes:
//
//===================================================================

#include "CATBaseUnknown.h"
#include "CATPinServices.h"


//-----------------------------------------------------------------------

/**
* Executes a User Exit on ENOVIAvpm V4.
*
* <br><b>Role:</b>This method sends a message to ENOVIAvpm V4 that will enable trigger
* the execution within ENOVIAvpm V4 of a specific User Defined function identified by the message.
* <br>
* The arguments are In/Out arguments.
*<p><b>Note:</b> The return code of this method is not the returned code of the function
* executed on the server. The server function return code should be returned in the message
* sent as a reply from the server.
*
*<p>If needed, your Imakefile.mk should include the module: <b>CATPinServices</b> </p>
*<p>
*
*   @param ioLng
*      Length of the Message
*   @param ioMsg
*      Message sent to ENOVIAvpm V4 as input and message received from ENOVIAvpm V4 as output. 
*   @return 
*  <ul>
*   <li><tt>S_OK</tt>: The message has been successfuly sent</li> 
*   <li><tt>E_FAIL</tt>: Failed to send to message.</li> 
*  </ul>
*/
HRESULT ExportedByCATPinServices ExecuteOnServer(int* ioLng, char** ioMsg);


//-----------------------------------------------------------------------

#endif

/* -*-c++-*- */
#ifndef CATBatchServices2__H
#define CATBatchServices2__H

// COPYRIGHT DASSAULT SYSTEMES  1999

/**
* @CAA2Level L1
* @CAA2Usage U1
*/

#include "CATPinServices.h"
#include "IUnknown.h"

/**
* Services used to initialize  with a dedicated ENOVIAvpm server.
*/

/**
* Initialize the V5 session to communicate with an ENOVIAvpm V4 server
* <br><b>Role:</b>This method initializes the CATIA V5 session and establishes the connection
* with ENOVIAvpm V4 running on a dedicated Unix host.
* <p>
* This method creates a CATIA V5 session if it is not yet initialized. 
* Use @href CATTerminateBatch at the end of the application to close this session.
* <br>If there is no server running to which this method can connect to, 
* a new ENOVIAvpm V4 server is launched on the dedicated Unix host by submitting 
* the <tt>StartVPMBatchFromV5Batch.sh</tt> shell script.
* <br>The <tt>CV5VpmStart</tt> environment variable can be declared to set the unix directory where the 
* <tt>StartVPMBatchFromV5Batch.sh</tt> shell script is located on the dedicated Unix host.
* <br>
* the <tt>CV5VpmStartTimeOut</tt> environment variable can be declared 
*    to set the timeout of the connection. By default, the timeout is <tt>300</tt>.
* <br>
* This method can be used for Unix and Windows clients.  
* For Unix client, the dedicated host can be the current local host. 
* @see @href CATInitBatch .
* </p>
*
*<p>If needed, your Imakefile.mk should include the module: <b>CATPinServices</b> </p>
*<p>
* @param iHostName
*    Unix host name
*
* @return
*  <ul>
*   <li><tt>S_OK</tt>: The communication channel is successfuly established</li> 
*   <li><tt>E_FAIL</tt>: The input string for Hostname is empty
*   <li><tt>E_FAIL</tt>: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
*   <ul>
*      <li><tt>ERR_2001</tt>: ENOVIAvpm server cannot be launched</li>   
*   </ul>
*  </ul>
*/
HRESULT ExportedByCATPinServices CATInitBatchOnHost (char* iHostName);

extern char nameServer[];

#endif


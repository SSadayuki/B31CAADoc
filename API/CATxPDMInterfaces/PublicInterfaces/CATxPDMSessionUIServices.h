#ifndef CATxPDMSessionUIServices_H
#define CATxPDMSessionUIServices_H
//COPYRIGHT DASSAULT SYSTEMES 2006

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATBaseUnknown.h" 
#include "ExportedByCATxPDMInterfaces.h"
#include "CATUnicodeString.h"

/**
  * Class for PDM to manage interactive feedbacks of PDM in CATIA Session.
  * <p>All the methods pre-requisites the PX1 license </p>
  *
  * @see CATIxPDMItem , CATIxPDMSessionServices
  */
class ExportedByCATxPDMInterfaces CATxPDMSessionUIServices
{
 public:
    /**
    * Activate all PX1 interactive feedbacks.
    * <br><b>Role:</b>This method activates PX1 interactive feedbacks.
    * After connection, a specific icon will be automatically added on all item with Read-Only
    * status on disk. When you check-out or check-in a file, you have to update
    * its read-write status on disk and to call CATxPDMSessionServices#RefreshItemInformation
    * to update interactive display.
    * You have to call this method when you connect to your PDM.
    * 
    * @return
    *   <ul>
    *   <li><tt>S_OK</tt>: Connection successfull. </li> 
    *   <li><tt>S_FALSE</tt>: Already connected. </li> 
    *   <li><tt>E_FAIL</tt>: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
    *   <ul>
    *      <li><tt>InputERR_1001:</tt></li>
    *       The PX1 licence is not available.
    *  </ul>
    *  </ul>
    */
    static HRESULT ConnectToPX1();

    /**
    * Activate all PX1 interactive feedbacks.
    * <br><b>Role:</b>This method activates PX1 interactive feedbacks.
    * After connection, a specific icon will be automatically added on all item with Read-Only
    * status on disk. When you check-out or check-in a file, you have to update
    * its read-write status on disk and to call CATxPDMSessionServices#RefreshItemInformation
    * to update interactive display.
    * You have to call this method when you connect to your PDM.
    * 
	 * @param iPX1SessionIdentifier
	 *   This parameter is necessary to support several connection from different PDMs at same time.
    *   PX1 will be effectively disconnected only when all PDMs are disconnected.
    *   Same identifier should be used for connect and disconnect.
    * @return
    *   <ul>
    *   <li><tt>S_OK</tt>: Connection successfull. </li> 
    *   <li><tt>S_FALSE</tt>: Already connected. </li> 
    *   <li><tt>E_FAIL</tt>: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
    *   <ul>
    *      <li><tt>InputERR_1001:</tt></li>
    *       The PX1 licence is not available.
    *  </ul>
    *  </ul>
    */
    static HRESULT ConnectToPX1(const char* iPX1SessionIdentifier);

    /**
    * Disconnect from PX1.
    * <br><b>Role:</b>This method disconnect from PX1 interactive feedbacks.
    * All specific icons are removed. You have to call this method when you disconnect
    * from your PDM.
    * 
    * @return
    *   <ul>
    *   <li><tt>S_OK</tt>: Disconnect successfull. </li> 
    *   <li><tt>E_FAIL</tt>: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
    *   <ul>
    *      <li><tt>InputERR_1001:</tt></li>
    *       The PX1 licence is not available.
    *  </ul>
    *  </ul>
    */
    static HRESULT DisconnectFromPX1();

    /**
    * Disconnect from PX1.
    * <br><b>Role:</b>This method disconnect from PX1 interactive feedbacks.
    * All specific icons are removed. You have to call this method when you disconnect
    * from your PDM.
    * 
	 * @param iPX1SessionIdentifier
	 *   This parameter is necessary to support several connection from different PDMs at same time.
    *   PX1 will be effectively disconnected only when all PDMs are disconnected.
    *   Same identifier should be used for connect and disconnect.
    * @return
    *   <ul>
    *   <li><tt>S_OK</tt>: Disconnect successfull. </li> 
    *   <li><tt>S_FALSE</tt>: Disconnect successfull but still connected by another PDM. </li> 
    *   <li><tt>E_FAIL</tt>: The method has failed. The possible <b>returned errors </b> (listed by their identifier) are:</li>
    *   <ul>
    *      <li><tt>InputERR_1001:</tt></li>
    *       The PX1 licence is not available.
    *  </ul>
    *  </ul>
    */
    static HRESULT DisconnectFromPX1(const char* iPX1SessionIdentifier);

    /**
    * Retrieve current directory.
    * <br><b>Role:</b>This method retrieve current directory : last directory used for file operations like
    * Open or Save. This method should be used if you want to initialize your panel with same directory
    * than standard interactive Open and Save commands. Notice that this directory is only an interactive
    * default, it does not mean that all file will be opened or saved in this directory.
    * This directory could be null if no file selection has been performed in session.
    * 
	 * @param oCurrentDirectory
	 *   The current directory used in interactive file selection box.
    * @return
    *   <ul>
    *   <li><tt>S_OK</tt>: Directory successfully returned. </li> 
    *   <li><tt>E_FAIL</tt>: Impossible to retrieve the directory:</li>
    *  </ul>
    */
    static HRESULT GetCurrentDirectory(CATUnicodeString& oCurrentDirectory);

};
#endif

#ifndef CATCmdHeaderSensitivityMngt_H
#define CATCmdHeaderSensitivityMngt_H

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

// COPYRIGHT DASSAULT SYSTEMES 2013

#include "ApplicationFrame.h"

#include "CATDlgUtility.h"

class CATString;

/**
 * Class providing services to manage toolbar components sensitivity.
*/
class ExportedByApplicationFrame CATCmdHeaderSensitivityMngt
{
public:

  /** 
   * Get the sensitivity manager.
   * @see CATAfrAccessChangedNotification
   * @param opSensitivityManager
   *  (output) the sensitivity manager to which you can subscribe to CATAfrAccessChangedNotification.
   * @return 
   *   <b>Legal values</b>:
   *   <br><tt>S_OK: </tt> on success i.e. manager is valid.
   *   <br><tt>E_FAIL: </tt> manager is not valid.
   */
   static HRESULT GetSensitivityManager (CATBaseUnknown *& opSensitivityManager);

  /** 
   * Set the sensitivity status of a toolbar component.
   * @param iPaletteName
   *  Name of the toolbar. This is the last argument of NewAccess(CATCmdContainer,...) macro which creates the toolbar.
   * @param iHeaderName
   *  Name of the command header represented in the toolbar. This is the first argument of CATCommandHeader constructor and the second argument of SetAccessCommand macro.
   * @param iState
   *  CATDlgEnable or CATDlgDisable depending on you want to set the command header representation available or unavailable.
   * @return 
   *   <b>Legal values</b>:
   *   <br><tt>S_OK: </tt> on success i.e. component was found and sensitivity was set.
   *   <br><tt>E_FAIL: </tt> component was not found.
   */
   static HRESULT SetSensitivity (CATString & iPaletteName, CATString & iHeaderName, CATULong iState);

 
private :

   CATCmdHeaderSensitivityMngt ();
   virtual ~CATCmdHeaderSensitivityMngt ();

   CATCmdHeaderSensitivityMngt (CATCmdHeaderSensitivityMngt &);
   CATCmdHeaderSensitivityMngt& operator=(CATCmdHeaderSensitivityMngt&);
};
#endif

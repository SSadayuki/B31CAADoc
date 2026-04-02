// COPYRIGHT DASSAULT SYSTEMES 2003
//===================================================================
//
// CATIPDMSaveAction.h
//
//===================================================================
// A user exit to control the save process can be developped, implementing the intfCATIPDMUESaveProcess
// Functions of that intf have one argument of the type CATIPDMSaveAction
// It lets the user exit influence the save process
//
//===================================================================
//
//===================================================================
//  Feb-03   Creation
//===================================================================

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#ifndef CATIPDMSaveAction_H
#define CATIPDMSaveAction_H

#include "CATPDMBaseItfCPP.h"
#include "CATBaseUnknown.h"

class CATUnicodeString;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATPDMBaseItfCPP IID IID_CATIPDMSaveAction;
#else
extern "C" const IID IID_CATIPDMSaveAction;
#endif

class ExportedByCATPDMBaseItfCPP CATIPDMSaveAction: public CATBaseUnknown
{
  CATDeclareInterface;

public:

	/** Report an error to the user
   * If called from BeforeSaveDialog, OnOK, BeforeStartingSave it interupts the save, similarly to this function returning a failure
   *
   * @param iMsg Message to be reported to the user
   * 
   * @return
   *    S_OK:   Success 
   *    E_FAIL: Failure
   */	
  virtual HRESULT PostErrorMsg(CATUnicodeString &iMsg) = 0;

	/** Report a warning to the user, but does not interupt the save.
   * To be noticed that warning issued from BeforeSaveDialog, OnOK
   * - are reported to the user after it presses OnOK (even if the warning was coming from BeforeSaveDialog)
   * - stop the user in the save command: The work flow is the following
   *        1./ The user Selects the OK button on the save pannel
   *        2./ He Gets the pannel with the warning
   *        3./ He has to destroy the reporting pannel
   *        4./ He is back then to the save pannel for potential edition and has to OK again in order to save. This to let him
   *            take potential corrective actions that he has been warned about
   * This means certain precautions should be taken when calling PostWarningMsg fom OnOK, to not end up with an endless loop..
   *
   * @param iMsg Message to be reported to the user
   * 
   * @return
   *    S_OK:   Success 
   *    E_FAIL: Failure
   */
  virtual HRESULT PostWarningMsg(CATUnicodeString &iMsg) = 0;

  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

//------------------------------------------------------------------

CATDeclareHandler( CATIPDMSaveAction, CATBaseUnknown );

#endif

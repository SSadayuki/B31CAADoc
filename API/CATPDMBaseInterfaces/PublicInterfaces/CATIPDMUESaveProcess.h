// COPYRIGHT DASSAULT SYSTEMES 2003
//===================================================================
//
// CATIPDMUESaveProcess.h
// This interface lets user exit participates the saving process, being called at precise point of this process
// The user exit should be of late type CATUEPDMSaveProcess and implement the current interface
// It could use the passed in argument of type CATIPDMSaveInfo to enquire information about the save context
// And communicate relevant action to the save process by the argument of type  CATIPDMSaveAction
// 
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

#ifndef CATIPDMUESaveProcess_H
#define CATIPDMUESaveProcess_H

#include "CATPDMBaseItfCPP.h"
#include "CATBaseUnknown.h"
#include "sequence_octet.h"
#include "CATDocument.h"
class CATUnicodeString;
class CATIPDMSaveInfo;
class CATIPDMSaveAction;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATPDMBaseItfCPP IID IID_CATIPDMUESaveProcess;
#else
extern "C" const IID IID_CATIPDMUESaveProcess;
#endif

class ExportedByCATPDMBaseItfCPP CATIPDMUESaveProcess: public CATBaseUnknown
{
  CATDeclareInterface;
  
public:
  
/** Calls to the user exit occur at the following point in time
* BeforeSaveDialog   : Before the save pannel is proposed to the user
* OnOK               : When the OnOK is pressed by the user
* BeforeStartingSave : Before the save action is started 
* OnSaveSucceeded    : At successfull completion of the save action
* OnSaveFailed       : At failure of the save action
*
* They have all the same signature: 
*
* @param iDocsToSave List of documents that are being saved
*
* @param ipInfo   Interface pointer to let the user exit acess information about the saving context.
*                 Refer to the intf definition for available info
*
* @param ipAction Interface pointer to let the user exit influence the save process
*                 Refer to the intf definition for available action
* 
* @return
*    S_OK:   Success 
*    E_FAIL: Failure If returns from BeforeSaveDialog, OnOK, BeforeStartingSave interupt the save 
(an aternate way to interup the save it to post an error calling ipAction->PostErrorMessage
*/
  virtual HRESULT BeforeSaveDialog(CATLISTP(CATDocument)* iDocsToSave, CATIPDMSaveInfo *ipInfo, CATIPDMSaveAction *ipAction) = 0;

/** Calls to the user exit occur at the following point in time
* OnOK               : When the OnOK is pressed by the user
*/
  virtual HRESULT OnOK(CATLISTP(CATDocument)* iDocsToSave, int onOKNumber, CATIPDMSaveInfo *ipInfo, CATIPDMSaveAction *ipAction) = 0;

/** Calls to the user exit occur at the following point in time
* BeforeStartingSave : Before the save action is started 
*/
  virtual HRESULT BeforeStartingSave(CATLISTP(CATDocument)* iDocsToSave, CATIPDMSaveInfo *ipInfo, CATIPDMSaveAction *ipAction) = 0;

/** Calls to the user exit occur at the following point in time
* OnSaveSucceeded    : At successfull completion of the save action
*/
  virtual HRESULT OnSaveSucceeded(CATLISTP(CATDocument)* iDocsToSave, CATIPDMSaveInfo *ipInfo, CATIPDMSaveAction *ipAction) = 0;

/** Calls to the user exit occur at the following point in time
* OnSaveFailed       : At failure of the save action
*/
  virtual HRESULT OnSaveFailed(CATLISTP(CATDocument)* iDocsToSave, CATIPDMSaveInfo *ipInfo, CATIPDMSaveAction *ipAction) = 0;
  
  /** 
  * Method to implement user-exit before commit “Save in ENOVIA”.
  *
  * <br><b>Role</b>: When implemented, this method will be called when Save process is completed successfully and before Commit the ENOVIA session.
  *<p>
  * @param iDocsToSave
  *    (input) The list of documents involved in the Save process.
  * @param ipInfo
  *    (input) The list of information related to the documents given in first parameter.
  ** @param ipAction
  *    (input) The list of actions related to the documents given in first parameter.
  *
  * @return 
  *   <ul>
  *     <li><tt>E_FAIL</tt>: Function has failed, and as consequence Rollback of the ENOVIA session will be 
  *                          performed. Notice also that in case user-exit BeforeRollback is implemented, 
  *                          it will be executed before actually rolling back the ENOVIA session 
  *                          (see BeforeRollBack).</li>
  *     <li><tt>Otherwise</tt>: Function is considered successfull, and hence Commit will be performed.</li> 
  *  </ul>
  */
  virtual HRESULT BeforeCommit (CATLISTP(CATDocument)* iDocsToSave, CATIPDMSaveInfo* ipInfo, CATIPDMSaveAction* ipAction) = 0;

  /** 
  * Method to implement user-exit before Rollback ENOVIA session.
  *
  * <br><b>Role</b>: When implemented, this method will be called when Save process failed and before Rollback the ENOVIA session.
  *<p>
  * @param iDocsToSave
  *    (input) The list of documents involved in the Save process.
  * @param ipInfo
  *    (input) The list of information related to the documents given in first parameter.
  ** @param ipAction
  *    (input) The list of actions related to the documents given in first parameter.
  *
  * @return: Whatever is the function returned code, the Rollback will be performed
  */
  virtual HRESULT BeforeRollback (CATLISTP(CATDocument)* iDocsToSave, CATIPDMSaveInfo* ipInfo, CATIPDMSaveAction* ipAction) = 0;

  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

//------------------------------------------------------------------

CATDeclareHandler( CATIPDMUESaveProcess, CATBaseUnknown );

#endif

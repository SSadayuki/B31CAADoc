#ifndef CATMMUIPanelStateCmd_h
#define CATMMUIPanelStateCmd_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

#include "CATMMUIStateCommand.h"
#include "CATCustomizableState.h"
#include "CATMechanicalModelerUI.h"

/**
 * Base class for mechanical feature creation and edition commands.
 * <b>Role</b>: Derives this class to implement your command.
 * Overrides the <tt>GiveMyPanel</tt> method to return the dialog box
 * associated with your command.
 * Overrides the <tt>OkAction</tt>, <tt>ApplyAction</tt>,... to customize
 * the actions on click button events.
 */

class ExportedByCATMechanicalModelerUI CATMMUIPanelStateCmd : public CATMMUIStateCommand
{
public:

  CmdDeclareResource(CATMMUIPanelStateCmd,CATMMUIStateCommand)

    /**
    * Constructs the commands.
    * @param iName
    *   as in CATStateCommand.
    * @param iBehavior
    *   as in CATStateCommand.
    * @param iStatus
    *   as in CATStateCommand.
    * @param iCreateCommand
    *   The command mode: 
    *   <br><b>Legal values</b>:
    *   <ul><li>0: edition mode.
    *   <li>1: creation mode.</ul>
    * @see CATStateCommand
    */
   CATMMUIPanelStateCmd(const CATString &iName,
                        CATDlgEngBehavior iBehavior = NULL, 
                        CATCommandMode iStatus = CATCommandModeExclusive,
                        int iCreateCommand = 0,
                        const CATPathElement* iWorkingPath = 0,
                        const CATPathElement* iActiveObjectPath = 0);

   /**
   * Deletes the command.
   * If the command has been constructed with the third argument iStatus equal to CATCommandModeUndefined, 
   * it must be deleted by calling the method RequestDelayedDestruction. 
   * In the other cases, it it will be automatically deleted.
   * Never call a delete on it.
   */
   virtual ~CATMMUIPanelStateCmd();

   /**
    * Builds the command graph.
    * @see CATStateCommand
    */
   virtual void BuildGraph();

   /**
    * Cancels the command.
    * @see CATCommand
	 * @param iCmd
    *   The command that requests to cancel the current one
	 * @param iNotif
    *   The notification sent
    */
   virtual CATStatusChangeRC Cancel(CATCommand* iCmd, CATNotification* iNotif);

   /**
    * Creates a CATCustomizableState associated with your dialog box.
    * @param iId
    *   The resource identifier used to retrieve the state prompt in the command
    *   message file.
    * @return
    * The created CATCustomizableState.
    * Do not release the return value.
    */
   CATCustomizableState * AddPanelState (const CATString &iId);

   /**
    * Returns the first CATCustomizableState associated with your dialog box.
    * @param iId
    *   The resource identifier used to retrieve the state prompt in the command
    *   message file.
    * @return
    * The first CATCustomizableState.
    * Do not release the return value.
    */
   CATCustomizableState * GetInitialPanelState (const CATString &iId);

   /**
    * Deals with Ok button click event.
	 * @param iData
    *   An object that can be useful for the action.
    */
   virtual CATBoolean OkAction(void *iData);

   /**
    * Deals with Appply button click event.
	 * @param iData
    *   An object that can be useful for the action.
    */
   virtual CATBoolean ApplyAction (void *iData);

   /**
    * Deals with Cancel button click event.
	 * @param iData
    *   An object that can be useful for the action.
    */
   virtual CATBoolean CancelAction(void *iData);

   /**
    * Deals with Ok button click event. Update is OK.
	 * @param iData
    *   An object that can be useful for the action.
    */
   virtual CATBoolean UpdateOKAction(void *iData);

   /**
    * Deals with Ok button click event. Update is KO.
	 * @param iData
    *   An object that can be useful for the action.
    */
   virtual CATBoolean UpdateKOAction(void *iData);

   /**
    * Deals with Preview button click event.
	 * @param iData
    *   An object that can be useful for the action.
    */
   virtual CATBoolean PreviewAction(void *iData);

   /** @nodoc 
   Allows the derived command to execute code when entering the user state returned by @href GetInitialPanelState .
   */
   virtual CATBoolean EnterFirstStateAction (void *);
 
   /** @nodoc 
   Condition when ending the command from the update state.
   It is TRUE if the created or edited feature has got no update error.
   */
   virtual CATBoolean UpdateOK(void *);

   /** @nodoc 
   Returns the update state of the command. 
   */
   CATDialogState* GetUpdateState();
   
    /** @nodoc 
   Returns the current state of the command when OK is pressed. 
   */
   CATDialogState* GetOKState(); 
 
   /**
    * Gets the dialog box.
    * Override this method to return your own dialog box.
    * @return
    * The dialog box associated with the command.
    */
   virtual CATDlgDialog* GiveMyPanel() = 0;

   /**
    * Gets the command mode.
    * @return
    *   The value.
    *   <br><b>Legal values</b>: <ul>
    *   <li>0 edit mode.</li>
    *   <li>1 create mode.</li></ul>
    */
   virtual int GetMode(); 

protected:

   CATBoolean _InterruptedUpdate;

private:
   // associates the actions on OK, Apply, Cancel, UpdateKO and Preview to the transitions of the user state
   void FillPanelState (CATCustomizableState * PanelState);
   // The command mode: edit or create. 0: edition mode. 1: creation mode.
   int _CreateCommand;   
   // the update state 
   CATDialogState* _UpdateState;    
   // the state that is current when Ok is pressed
   CATDialogState* _CurrentOkState;
};
#endif

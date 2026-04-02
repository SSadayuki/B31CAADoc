#ifndef CATPrtPanelStateCmd_h
#define CATPrtPanelStateCmd_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

#include "CATMMUIPanelStateCmd.h"
#include "CATISpecObject.h"
#include "CATPathElement.h"
#include "CATMechanicalModelerUI.h"

/**
 * Basic class for creation and edition commands with a dialog box in Part Design context.
 * <b>Role</b>: Derives this class to implement your command.
 * <br>
 * <br>The data members to create are:
 * <ul>
 * <li>@href CATMMUIStateCommand#_MyFeature : The feature modified or created during the command. This 
 *  data will be returned by the @href CATMMUIStateCommand#GiveMyFeature method.</li>
 * <li>A dialog box to display parameters of the feature. The recommended styles for this dialog box are:
 * <ul>
 *  <li><tt>CATDlgWndBtnOKCancel</tt>: OK and Cancel Buttons
 *  <li><tt>CATDlgWndBtnOKCancelPreview</tt>: Ok, Cancel and Preview Buttons
 * </ul></li>
 *</ul>
 *
 * The main methods to override are:
 * <ul>
 * <li>@href #BuildGraph : Constructs the state chart</li>
 * <li>@href CATMMUIPanelStateCmd#GiveMyPanel : it returns the dialog box created by your command. </li>
 * <li>@href #OkAction : to customize the actions on the OK click button events.</li>
 * <li>@href #PreviewAction : to customize the actions on the Preview click button events.</li>
 * <li>@href #CancelAction : to customize the actions on the Cancel or the Close click button events.</li>
 * </ul>

 */
class ExportedByCATMechanicalModelerUI CATPrtPanelStateCmd : public CATMMUIPanelStateCmd
{
public:

   /**
    * Constructs a panel state command.
    * @param iName
    * The identifier of the command. 
    * @param iBehavior
    * The recommended style is <tt>CATDlgEngOneShot</tt>
    * @param iFocusMode
    *   The focus mode.
    *   <br><b>Legal values</b>: With the default mode 
    *   <tt>CATCommandModeExclusive</tt>, the command takes the focus and 
    *   cancels the other commands. This mode is mandatory if the command 
    *   modifies the model.
    *   <br>The other possible mode is <tt>CATCommandModeShared</tt>: the command
    *   only deactivates the active command and takes the focus. The previous
    *   command will resume when the current command ends.
    *   <br>The <tt>CATCommandModeUndefined</tt> mode is forbidden with a main 
    *   state command since it needs to take the focus.
    * @param iCommandMode
    * <b>Legal values</b>:
    * <ul>
    * <li>1: Default value, the command is in creation mode</li>
    * <li>0:The command is in edition mode</li>
    * </ul>
    * @param iWorkingPath
    * Sets the default value.
    * @param iActiveObjectPath
    * Sets the default value.
    */
   CATPrtPanelStateCmd(const CATString &     iName,
                       CATDlgEngBehavior     iBehavior = NULL, 
                       CATCommandMode        iFocusMode = CATCommandModeExclusive,
                       int                   iCommandMode = 0,
                       const CATPathElement* iWorkingPath = 0,
                       const CATPathElement* iActiveObjectPath = 0);

   virtual ~CATPrtPanelStateCmd();

   /**
    * Builds the command state chart.
    * <br><b>Role:</b> This method constructs the state chart with states, agents and transitions.
    * <br>To associate the dialog box with a state, create this state by:
    * <ul>
    * <li>@href CATMMUIPanelStateCmd#GetInitialPanelState, if the state is the initial state</li>
    * <li>@href CATMMUIPanelStateCmd#AddPanelState, otherwise</li>
    * </ul>
    * Caution: your state chart must have only one state associated with the dialog box returned
    * by the @href CATMMUIPanelStateCmd#GiveMyPanel . 
    * <br><br>From this specific state, named <tt>PanelState</tt> for example, 
    * some transitions are automatically defined:
    * <ol>
    * <li>From the <tt>PanelState</tt> state to the <tt>Update</tt> state:</li>
    * <br>The <tt>Update</tt> state is defined by the <tt>CATMMUIStateCommand</tt> class. 
    * <ul>
    * <li>Condition: The end user pushes the Ok Button</li>
    * <li>Action Method: @href #OkAction </li>
    * </ul>
    * <li>From the <tt>PanelState</tt> state to the <tt>Cancel</tt> state:</li>
    * <br>The <tt>Cancel</tt> state is defined by the <tt>CATStateCommand</tt> class.
    * <ul>
    * <li>Condition: if the end user pushes the Cancel or the Close Buttons</li>
    * <li>Action Method: @href #CancelAction </li>
    * </ul>
    * <li>From the <tt>PanelState</tt> state to the <tt>PanelState</tt> state:</li>
    * <ul>
    * <li>Condition: if the end user pushes the Preview Button</li>
    * <li>Action Method: @href #PreviewAction </li>
    * </ul>
    * <li>From <tt>Update</tt> state to the <tt>PanelState</tt> state</li>
    * <ul>
    * <li>Condition: The update applied to the feature
    *  returned by the @href CATMMUIStateCommand#GiveMyFeature method is wrong</li>
    * <li>Action Method: @href #UpdateKOAction </li>
    * </ul>
    * <li>From <tt>Update</tt> state to the <tt>NULL</tt> state:</li>
    * <ul>
    * <li>Condition: The update applied to the feature
    *  returned by the @href CATMMUIStateCommand#GiveMyFeature method is OK</li>
    * <li>Action Method: @href #UpdateOKAction </li>
    * </ul> 
    * </ol>
    * @see CATStateCommand#BuildGraph
    */
   virtual void BuildGraph();

   /**
    * Deals with Ok button click event.
    * <br><b>Role:</b>Action method sets on the transaction between the state created
    * by the @href CATMMUIPanelStateCmd#GetInitialPanelState and an internal <tt>Update</tt> state. 
    * <br>Override this function to customize the actions on the OK button click event, and at the end
    * of the method, call the current method.
    * @param iUseless
    *   There is no data as argument of the 
    *   <tt>ActionMethod</tt> methods. 
    *   
    */
   virtual CATBoolean OkAction(void * iUseless);

   /**
    * Deals with Preview button click event.
    * <br><b>Role:</b>Action method sets on the loop transaction between the state created
    * by the @href CATMMUIPanelStateCmd#GetInitialPanelState. 
    * <br>Override this function to customize the actions on the Preview button click event, and at the end
    * of the method, call the  current method.
    * @param iUseless
    *   There is no data as argument of this 
    *   <tt>ActionMethod</tt> method. 
    *   
    */
   virtual CATBoolean PreviewAction (void * iUseless);

   /**
    * Deals with Cancel or Close button click events.
    * <br><b>Role:</b>Action method sets on a transaction between the state created
    * by the @href CATMMUIPanelStateCmd#GetInitialPanelState and the <tt>Cancel</tt> state
    * (defined in the @href CATStateCommand class). 
    * <br>Override this function to customize the actions on the Cancel or Close button click events, and at the end
    * of the method, call the current method.
    * @param iUseless
    *   There is no data as argument of this 
    *   <tt>ActionMethod</tt> method. 
    *   
    */
   virtual CATBoolean CancelAction(void * iUseless);

   /**
    * Deals a good update after OK. 
    * <br><b>Role:</b>When the end user has pushed the Ok Button, the state chart goes to
    * the internal <tt>Update</tt> state. At this moment two possible cases. The update called on
    * the feature returned by 
    * @href CATMMUIStateCommand#GiveMyFeature method is:
    * <ol>
    * <li>OK: The state chart goes to the NULL state, the command is ended. The action method sets
    * on this transition is <tt>UpdateOKAction</tt></li>
    * <li>KO: The state chart returns to the @href CATMMUIPanelStateCmd#GetInitialPanelState state.
    * The action method sets on this transition is <tt>UpdateKOAction</tt></li>
    * </ol>
    * <br>Override this function to customize the actions when the update is OK and at the end
    * of the method, call the current method.
    * @param iUseless
    *   There is no data as argument of this
    *   <tt>ActionMethod</tt> method. 
    *   
    */
   virtual CATBoolean UpdateOKAction(void * iUseless);

   /**
    * Deals a wrong update after OK. 
    * <br><b>Role:</b>When the end user has pushed the Ok Button, the state chart goes to
    * the internal <tt>Update</tt> state. At this moment two possible cases. The update called on
    * the feature  returned by 
    * @href CATMMUIStateCommand#GiveMyFeature method is:
    * <ol>
    * <li>OK: The state chart goes to the NULL state, the command is ended. The action method sets
    * on this transition is <tt>UpdateOKAction</tt></li>
    * <li>KO: The state chart returns to the @href CATMMUIPanelStateCmd#GetInitialPanelState state.
    * The action method sets on this transition is <tt>UpdateKOAction</tt></li>
    * </ol>
    * <br>Override this function to customize the actions when the update is KO and at the end
    * of the method, call the  current method.
    * @param iUseless
    *   There is no data as argument of this
    *   <tt>ActionMethod</tt> method. 
    *   
    */
   virtual CATBoolean UpdateKOAction(void * iUseless);

   /**
    * Cancels the command.
    * <br><b>Role:</b>Called when the command selector gives the focus to an exclusive command,
    * or if this command completes. In this latter case, the focus is given to 
    * the default command (usually Select). 
    * You should not take care of the command destruction. This is done
    * by the dialog state command engine.
    * <br>If you override this method, call at the end the current method.
	 * @param iCmd
    *   The command that requests to cancel the current one
    * @param iNotif
    *   The notification sent
    */
   virtual CATStatusChangeRC Cancel(CATCommand* iCmd, CATNotification* iNotif);


    /**
    * @nodoc 
    */
   virtual CATBoolean ApplyAction (void * iUseful);

   /**
    * @nodoc 
    */
   virtual CATBoolean InitAction(void * iUseful);

   /** @nodoc */
   virtual CATBoolean EnterFirstStateAction (void * );

   /** @nodoc */
   void SetActiveObject(CATBaseUnknown* object); 

private:

   int _InitCompteur;
   CATISpecObject_var _initialcurrentfeature;
   CATPathElement _initialactivepath;
};
#endif

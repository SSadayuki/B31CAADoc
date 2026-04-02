#ifndef CATPrtUpdateCom_h
#define CATPrtUpdateCom_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATMechanicalModelerUI.h"
#include "CATISpecObject.h"
#include "CATCommand.h"
#include "CATError.h"
#include "CATLISTV_CATISpecObject.h"

class CATUpdateUI;

/**
 * Class to update the part or a selected feature.
 * <b>Role</b>: This class is the command to update a feature or a part in the user interface.
 * The update diagnosis dialog box is automatically displayed if an update error occurs.
 * This command should be run at the end of a command that creates or modifies a feature. In this case, 
 * do not call delete on it, because it is automatically deleted when the father command is deleted. 
 * On the other hand, it should not be used in a batch code, where @href CATISpecObject#Update is enough.
 */
class ExportedByCATMechanicalModelerUI CATPrtUpdateCom : public CATCommand
{
public:
  /**
   * Runs the command.
   * @param iArg
   * The string specifying what has to be updated.
   * <br><b>Legal values</b>:
   * <ul>
   * <li>"PartUpdate" : updates the whole part and the external references. A progress bar is displayed.</li>
   * <li>"PartUpdateKeepReport" : same as "PartUpdate", except a better management of the update diagnosis report, if the feature is modified after pressing the "Edit" button.</li>
   * <li>"AutoUpdate" : updates the whole part, if the automatic update option is checked, else only the UI active feature in manual update.</li>
   * <li>"AutoUpdateKeepReport" : same as "AutoUpdate", except a better management of the update diagnosis report, if the feature is modified after pressing the "Edit" button.</li>
   * <li>"FeatureUpdate" : updates only the selected feature (@href CATCSO ).</li>
   * </ul>
   */
  CATPrtUpdateCom(CATString *iArg = NULL);

  /**
   * Runs the command.
   * @param iObjectToUpdate
   * The object to update. It may be NULL_var, then the UI active object is updated.
   * @param iAutoUpdate
   * The automatic update flag.
   * <br><b>Legal values</b>: 
   * <ul>
   * <li>0 to update the iObjectToUpdate only.</li>
   * <li>1 to update the part in automatic update mode or the iObjectToUpdate in manual update mode.</li>
   * </ul>
   * @param iCreation
   * The current action on the feature. It may be returned by @href CATMMUIPanelStateCmd#GetMode .
   * <br><b>Legal values</b>:
   * <ul>
   * <li>1 if the object iObjectToUpdate is being created.</li>
   * <li>0 if it is being edited.</li>
   * </ul>
   * @param iVisu
   * Not used argument.
   * @param iStartMode
   * The start mode of the command. 
   * <br>It is is better to use CATCommandModeUndefined. Thus, the command may be lauched from another command without cancelling it. 
   * Moreover, the error report is displayed only in this mode.
   */
  CATPrtUpdateCom(CATISpecObject_var iObjectToUpdate,
                  const int iAutoUpdate = 0,
                  const int iCreation = 0, 
                  int iVisu = 1, 
                  CATCommandMode iStartMode = CATCommandModeUndefined );
  /**    
  * @nodoc
  * Deletes the command.
  * Usually do not call delete on this command after a new because it is 
  * automatically deleted when its father command is deleted.
  */
  virtual ~CATPrtUpdateCom();

  /**  @nodoc   */
  CATStatusChangeRC Activate(CATCommand*, CATNotification*);
 
private:
  CATISpecObject_var _UIfeature;       // The UI active feature
  CATISpecObject_var _Updfeature;      // The feature to update
  CATISpecObject_var _UpdfeatIn;       // The feature passed as argument
  // 1 if the feature is being created, 0 if it is being edited.
  int _ModeCreat;
  // Method doing the update
  void UpdateCom();
  // Object doing the update 
  CATUpdateUI* _UpdateUI;
  // 1: the first time the command is activated; else 0
  int _first_activate;
  // The update type argument
  CATString _arg;
};
#endif


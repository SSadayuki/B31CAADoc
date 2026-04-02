/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
//===================================================================
// COPYRIGHT Dassault Systemes 2005
//===================================================================
//
// CATIMmiPartInfrastructurePreferencesAtt.h
//
//===================================================================
//
// Usage notes:
//   This interface gathers methods to access preferences managed
//   by MechanicalModeler.
//
//===================================================================
//
#ifndef CATIMmiPartInfrastructurePreferencesAtt_H
#define CATIMmiPartInfrastructurePreferencesAtt_H

#include "MecModItfCPP.h"
#include "CATBaseUnknown.h"
#include "CATEventSubscriberTypedefs.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByMecModItfCPP IID IID_CATIMmiPartInfrastructurePreferencesAtt;
#else
extern "C" const IID IID_CATIMmiPartInfrastructurePreferencesAtt;
#endif

class CATUnicodeString;

/**
 * Interface to retrieve application preferences related to Part Infrastructure.
 * <b>Role:</b> This interface describes all the application preferences related 
 * to Part infrastructure. 
 * Preferences are not displayed in Tools/Options and are not administered. They 
 * are stored in .CATPreferences files.
 * <br/>Here under is an example on how to retrieve a pointer to this interface:
 * <code><pre>
 * #include "CATInstantiateComponent.h" //System
 * #include "CATIMmiPartInfrastructurePreferencesAtt.h"  //MecModInterfaces
 * { 
 *  ...
 *  CATIMmiPartInfrastructurePreferencesAtt *pIPreferencesController=NULL;
 *  CATCallbackEvent event;
 *  if(SUCCEEDED(::CATInstantiateComponent("CATMmuPartInfrastructurePreferencesCtrl", 
 *               IID_CATIMmiPartInfrastructurePreferencesAtt,(void**)&pIPreferencesController)))
 *    {
 *     <b>//insert your code here</b>
 *     pIPreferencesController->Release(); pIPreferencesController=NULL;
 *    }
 *  ...
 *  }
 * </pre></code>
 * <br/>Values are saved into the PartInfrastructure.CATPreferences file at the end of 
 * the application session.
 */
class ExportedByMecModItfCPP CATIMmiPartInfrastructurePreferencesAtt: public CATBaseUnknown
{
  /**
   * Macro for interface declaration.
   */
  CATDeclareInterface;

public:
  /**
   * List of types for modes.
   * <br/><b>Role:</b> The modes are used in the following values of the preferences.
   * @param NoMode
   *     The preference is not set.
   * @param PermanentMode
   *     The preference is set and stays set unless unset.
   *     <br/> Note: This state corresponds to a double click on the linked command button.
   * @param TemporaryMode 
   *     The preference is set for one use, and then resetted to NoMode as soon as the ValidateXxMode method is called.
   *     <br/> Note: This state corresponds to a single click on the linked command button.
   */
  enum PreferenceMode {NoMode=0,PermanentMode=1,TemporaryMode=2} ;
  
  // ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++  
  /**
   * Retrieves the Datum mode.
   * <br/><b>Role:</b> The datum mode determines if created components do not remain associative. This means 
   * that there are no links to the other entities that were used to create that component.
   * <br/>This mode is displayed and changeable through the "Create Datum" command (GSD/Part/FreeStyle/...). 
   * @param oMode 
   *   The possible values are:
   *      <ul><li><code>NoMode</code>, when created components are procedural (or associative). This is the classic instantiation mode.</li>
   *      <li><code>PermanentMode</code>, for components to keep being created in a datum mode (i.e. non associative),</li>
   *      <li><code>TemporaryMode</code>, for a component to be created in a datum mode. A call to @href #ValidateDatumMode will set the mode to NoMode.</li>
   *      </ul>
   * @return
   *   S_OK if the parameter is correctly retrieved, E_FAIL otherwise.
   */
  virtual HRESULT GetDatumMode(CATIMmiPartInfrastructurePreferencesAtt::PreferenceMode& oMode) = 0;

  /**
   * Sets the Datum mode.
   * @param iMode 
   *   The possible values are <code>NoMode</code>, <code>PermanentMode</code>, and 
   *   <code>TemporaryMode</code>.
   *   <br/>If <code>TemporaryMode</code> mode is set, a call to @href #ValidateDatumMode will set the 
   *   mode to NoMode.
   * @param iSendEvent
   *   <ul><li><code>TRUE</code> so that the event defined in @href #GetDatumModeEvent is sent. 
   *   <br/>This happens only if the value is different from the one stored in the preference.</li>
   *   <li><code>FALSE</code> for no event to be sent.</li></ul>
   * @return
   *   S_OK if the parameter is correctly set, E_FAIL otherwise.
   */
  virtual HRESULT SetDatumMode(CATIMmiPartInfrastructurePreferencesAtt::PreferenceMode iMode, CATBoolean iSendEvent=TRUE) = 0;

  /**
   * Sets the mode to <code>NoMode</code> if it is set to <code>TemporaryMode</code>.
   * <br/><b>Role:</b> If the mode is set to <code>TemporaryMode</code>, a call to this function 
   * will set it to <code>NoMode</code>, and send the event if asked to. 
   * @param iSendEvent
   *   To send an event if the mode is reverted to <code>NoMode</code>.
   * @return
   *   S_OK if the call to the method was processed without errors.
   */
  virtual HRESULT ValidateDatumMode(CATBoolean iSendEvent=TRUE) = 0;

  /**
   * Retrieves the name of the event class dispatched when a change of value is made.
   * <br/><b>Role:</b> This method enables an application to be warned whenever a change of value occurs.
   * <br/>Refer to comments in @href #GetImportRepRepModeEvent for a code sample.
   * @param oEvent
	*   The event class. 
   * @return
   *   S_OK if the parameter is correctly retrieved, E_FAIL otherwise.  
   */
  virtual HRESULT GetDatumModeEvent(CATCallbackEvent& oEvent) = 0;

  // ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++ 
  /**
   * Retrieves the Insert mode.
   * <br/><b>Role:</b> The Insert mode determines if a created element will be inserted 
   * within the specification tree, at its logical positioning (mode on) and not its 
   * chronological positioning (mode off).
   * <br/>The logical position within the specification tree is next to its main parents.
   * <br/>This mode is displayed and changeable through the "Insert Mode" command (GSD/Part/FreeStyle/...). 
   * @param oMode 
   *   The possible values are:
   *      <ul><li><code>NoMode</code>, when created components are inserted chronologically,</li>
   *      <li><code>PermanentMode</code>, when created components are inserted logically,</li>
   *      <li><code>TemporaryMode</code>, when created components are inserted logically. 
   *      A call to @href #ValidateDatumMode will set the mode to NoMode.</li>
   *      </ul>
   * @return
   *   S_OK if the parameter is correctly retrieved, E_FAIL otherwise.
   */
  virtual HRESULT GetInsertMode(CATIMmiPartInfrastructurePreferencesAtt::PreferenceMode &oMode) = 0;

  /**
   * Sets the Insert mode.
   * @param iMode 
   *   The possible values are <code>NoMode</code>, <code>PermanentMode</code>, and 
   *   <code>TemporaryMode</code>.
   *   <br/>If <code>TemporaryMode</code> mode is set, a call to @href #ValidateInsertMode will set the 
   *   mode to NoMode.
   * @param iSendEvent
   *   <ul><li><code>TRUE</code> so that the event defined in @href #GetInsertModeEvent is sent. 
   *   <br/>This happens only if the value is different from the one stored in the preference.</li>
   *   <li><code>FALSE</code> for no event to be sent.</li></ul>
   * @return
   *   S_OK if the parameter is correctly set, E_FAIL otherwise.
   */
  virtual HRESULT SetInsertMode(CATIMmiPartInfrastructurePreferencesAtt::PreferenceMode iMode, CATBoolean iSendEvent=TRUE) = 0;

  /**
   * Sets the mode to <code>NoMode</code> if it is set to <code>TemporaryMode</code>.
   * <br/><b>Role:</b> If the mode is set to <code>TemporaryMode</code>, a call to this function 
   * will set it to <code>NoMode</code>, and send the event if asked to. 
   * @param iSendEvent
   *   To send an event if the mode is reverted to <code>NoMode</code>.
   * @return
   *   S_OK if the call to the method was processed without errors.
   */
  virtual HRESULT ValidateInsertMode(CATBoolean iSendEvent=TRUE) = 0;

  /**
   * Retrieves the name of the event class dispatched when a change of value is made.
   * <br/><b>Role:</b> This method enables an application to be warned whenever a change of value occurs.
   * <br/>Refer to comments in @href #GetImportRepRepModeEvent for a code sample.
   * @param oEvent
   *   The event class. 
   * @return
   *   S_OK if the parameter is correctly retrieved, E_FAIL otherwise.
   */
  virtual HRESULT GetInsertModeEvent(CATCallbackEvent& oEvent) = 0;


  // ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
  /**
   * Retrieves the "GridFilter" mode.
   * <br/><b>Role:</b> This mode enables to select sub-elements from the grid (3D-support).
   * <br/>This mode is displayed and changeable through the "Work on Support" command located in the "User Selection Filter" toolbar.
   * @param oMode 
   *   The possible values are:
   *      <ul><li><code>NoMode</code>, when the mode is not active,</li>
   *      <li><code>PermanentMode</code>, when the mode is permanently active,</li>
   *      <li><code>TemporaryMode</code>, when the mode is temporarily active.
   *      A call to @href #ValidateGridFilterMode will set the mode to NoMode.</li>
   *      </ul>
   * @return
   *   S_OK if the parameter is correctly retrieved, E_FAIL otherwise.
   */
  virtual HRESULT GetGridFilterMode(CATIMmiPartInfrastructurePreferencesAtt::PreferenceMode &oMode) = 0;

  /**
   * Sets the "Grid Filter" mode.
   * @param iMode 
   *   The possible values are <code>NoMode</code>, <code>PermanentMode</code>, and 
   *   <code>TemporaryMode</code>.
   *   <br/>If <code>TemporaryMode</code> mode is set, a call to @href #ValidateGridFilterMode will set the 
   *   mode to NoMode.
   * @param iSendEvent
   *   <ul><li><code>TRUE</code> so that the event defined in @href #GetGridFilterModeEvent is sent. 
   *   <br/>This happens only if the value is different from the one stored in the preference.</li>
   *   <li><code>FALSE</code> for no event to be sent.</li></ul>
   * @return
   *   S_OK if the parameter is correctly set, E_FAIL otherwise.
   */
  virtual HRESULT SetGridFilterMode(CATIMmiPartInfrastructurePreferencesAtt::PreferenceMode iMode, CATBoolean iSendEvent=TRUE) = 0;

  /**
   * Sets the mode to <code>NoMode</code> if it is set to <code>TemporaryMode</code>.
   * <br/><b>Role:</b> If the mode is set to <code>TemporaryMode</code>, a call to this function 
   * will set it to <code>NoMode</code>, and send the event if asked to. 
   * @param iSendEvent
   *   To send an event if the mode is reverted to <code>NoMode</code>.
   * @return
   *   S_OK if the call to the method was processed without errors.
   */
  virtual HRESULT ValidateGridFilterMode(CATBoolean iSendEvent=TRUE) = 0;

  /**
   * Retrieves the name of the event class dispatched when a change of value is made.
   * <br/><b>Role:</b> This method enables an application to be warned whenever a change of value occurs.
   * <br/>Refer to comments in @href #GetImportRepRepModeEvent for a code sample.
   * @param oEvent
   *   The event class. 
   * @return
   *   S_OK if the parameter is correctly retrieved, E_FAIL otherwise.
   */
  virtual HRESULT GetGridFilterModeEvent(CATCallbackEvent& oEvent) = 0;

  // ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++  
  /**
   * Retrieves the "Intersection Edge" mode.
   * <br/><b>Role:</b> The role of this mode is extensively described in @href #CATIMfIntersectionEdge .
   * <br/>This mode is displayed and changeable through the dedicated command located in the 
   * "User Selection Filter" toolbar.
   * @param oMode 
   *   The possible values are:
   *      <ul><li><code>NoMode</code>, when the mode is not active,</li>
   *      <li><code>PermanentMode</code>, when the mode is permanently active,</li>
   *      <li><code>TemporaryMode</code>, when the mode is temporarily active.
   *      A call to @href #ValidateIntersectionEdgeMode will set the mode to NoMode.</li>
   *      </ul>
   * @return
   *   S_OK if the parameter is correctly retrieved, E_FAIL otherwise.
   */
  virtual HRESULT GetIntersectionEdgeMode(CATIMmiPartInfrastructurePreferencesAtt::PreferenceMode &oMode) = 0;
  /**
   * Sets the "Intersection Edge" mode.
   * @param iMode 
   *   The possible values are <code>NoMode</code>, <code>PermanentMode</code>, and 
   *   <code>TemporaryMode</code>.
   *   <br/>If <code>TemporaryMode</code> mode is set, a call to @href #ValidateIntersectionEdgeMode will set the 
   *   mode to NoMode.
   * @param iSendEvent
   *   <ul><li><code>TRUE</code> so that the event defined in @href #GetIntersectionEdgeModeEvent is sent. 
   *   <br/>This happens only if the value is different from the one stored in the preference.</li>
   *   <li><code>FALSE</code> for no event to be sent.</li></ul>
   * @return
   *   S_OK if the parameter is correctly set, E_FAIL otherwise.
   */
  virtual HRESULT SetIntersectionEdgeMode(CATIMmiPartInfrastructurePreferencesAtt::PreferenceMode iMode, CATBoolean iSendEvent=TRUE) = 0;

  /**
   * Sets the mode to <code>NoMode</code> if it is set to <code>TemporaryMode</code>.
   * <br/><b>Role:</b> If the mode is set to <code>TemporaryMode</code>, a call to this function 
   * will set it to <code>NoMode</code>, and send the event if asked to. 
   * @param iSendEvent
   *   To send an event if the mode is reverted to <code>NoMode</code>.
   * @return
   *   S_OK if the call to the method was processed without errors.
   */
  virtual HRESULT ValidateIntersectionEdgeMode(CATBoolean iSendEvent=TRUE) = 0;

  /**
   * Retrieves the name of the event class dispatched when a change of value is made.
   * <br/><b>Role:</b> This method enables an application to be warned whenever a change of value occurs.
   * <br/>Refer to comments in @href #GetImportRepRepModeEvent for a code sample.
   * @param oEvent
   *   The event class. 
   * @return
   *   S_OK if the parameter is correctly retrieved, E_FAIL otherwise.
   */
  virtual HRESULT GetIntersectionEdgeModeEvent(CATCallbackEvent& oEvent) = 0;

  // ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++  
  /**
   * Retrieves the "Intersection C1Edge" mode.
   * <br/><b>Role:</b> The role of this mode is extensively described in @href #CATIMfIntersectionEdge .
   * <br/>This mode is displayed and changeable through the dedicated command located in the 
   * "User Selection Filter" toolbar.
   * @param oMode 
   *   The possible values are:
   *      <ul><li><code>NoMode</code>, when the mode is not active,</li>
   *      <li><code>PermanentMode</code>, when the mode is permanently active,</li>
   *      <li><code>TemporaryMode</code>, when the mode is temporarily active.
   *      A call to @href #ValidateIntersectionEdgeMode will set the mode to NoMode.</li>
   *      </ul>
   * @return
   *   S_OK if the parameter is correctly retrieved, E_FAIL otherwise.
   */
  virtual HRESULT GetIntersectionC1EdgeMode(CATIMmiPartInfrastructurePreferencesAtt::PreferenceMode &oMode) = 0;
  /**
   * Sets the "Intersection C1Edge" mode.
   * @param iMode 
   *   The possible values are <code>NoMode</code>, <code>PermanentMode</code>, and 
   *   <code>TemporaryMode</code>.
   *   <br/>If <code>TemporaryMode</code> mode is set, a call to @href #ValidateIntersectionC1EdgeMode will set the 
   *   mode to NoMode.
   * @param iSendEvent
   *   <ul><li><code>TRUE</code> so that the event defined in @href #GetIntersectionC1EdgeModeEvent is sent. 
   *   <br/>This happens only if the value is different from the one stored in the preference.</li>
   *   <li><code>FALSE</code> for no event to be sent.</li></ul>
   * @return
   *   S_OK if the parameter is correctly set, E_FAIL otherwise.
   */
  virtual HRESULT SetIntersectionC1EdgeMode(CATIMmiPartInfrastructurePreferencesAtt::PreferenceMode iMode, CATBoolean iSendEvent=TRUE) = 0;

  /**
   * Sets the mode to <code>NoMode</code> if it is set to <code>TemporaryMode</code>.
   * <br/><b>Role:</b> If the mode is set to <code>TemporaryMode</code>, a call to this function 
   * will set it to <code>NoMode</code>, and send the event if asked to. 
   * @param iSendEvent
   *   To send an event if the mode is reverted to <code>NoMode</code>.
   * @return
   *   S_OK if the call to the method was processed without errors.
   */
  virtual HRESULT ValidateIntersectionC1EdgeMode(CATBoolean iSendEvent=TRUE) = 0;

  /**
   * Retrieves the name of the event class dispatched when a change of value is made.
   * <br/><b>Role:</b> This method enables an application to be warned whenever a change of value occurs.
   * <br/>Refer to comments in @href #GetImportRepRepModeEvent for a code sample.
   * @param oEvent
   *   The event class. 
   * @return
   *   S_OK if the parameter is correctly retrieved, E_FAIL otherwise.
   */
  virtual HRESULT GetIntersectionC1EdgeModeEvent(CATCallbackEvent& oEvent) = 0;

  // ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
  /**
   * Retrieves the "ImportRepRep" mode.
   * <br/><b>Role:</b> This mode enables to copy an element from a .CATPart document 
   * into an other one without using the ProductStructure context.
   * @param oMode 
   *   Current "ImportRepRep" mode
   *      <ul><li>TRUE if the mode is active,</li>
   *      <li>FALSE otherwise.</li></ul>
   * @return
   *   S_OK if the parameter is correctly retrieved, E_FAIL otherwise.
   */
  virtual HRESULT GetImportRepRepMode(CATBoolean& oMode) = 0;

  /**
   * Sets the "ImportRepRep" mode.
   * @param iMode
   *   "ImportRepRep" mode
   *      <ul><li>TRUE to activate it,</li>
   *      <li>FALSE to deactivate it.</li></ul>
   * @param iSendEvent
   *   <ul><li>TRUE so that the event defined in @href #GetImportRepRepModeEvent is sent. 
   *   <br/>This happens only if the value is different from the one stored in the preference.</li>
   *   <li>FALSE for no event to be sent.</li></ul>
   * @return
   *   S_OK if the parameter is correctly set, E_FAIL otherwise.
   */
  virtual HRESULT SetImportRepRepMode(CATBoolean iMode, CATBoolean iSendEvent=TRUE) = 0;
  
  /**
   * Retrieves the name of the event class dispatched when a change of value is made.
   * <br/><b>Role:</b> This method enables an application to be warned whenever a change of value occurs.
   * <br/>
   * Here is a coding sample for the use of this event:<code><pre>
   *  #include "CATInstantiateComponent.h" //System
   *  #include "CATIMmiPartInfrastructurePreferencesAtt.h" //MecModInterfaces
   *  { //Subscription
   *   CATIMmiPartInfrastructurePreferencesAtt *pIPreferencesCtrl=NULL;
   *   CATCallbackEvent eventName=""; //CATCallbackEvent = const char*
   *   if(SUCCEEDED(::CATInstantiateComponent("CATMmuPartInfrastructurePreferencesCtrl", 
   *                IID_CATIMmiPartInfrastructurePreferencesAtt,(void**)&pIPreferencesCtrl)))
   *    {
   *     if(SUCCEEDED(pIPreferencesCtrl->Get<b><i>PreferenceName</i></b>Event(eventName)))
   *         _callbackId=AddCallback(this, pIPreferencesCtrl, eventName,
   *                                 (CATSubscriberMethod)&MyClass::OnPreferenceChange,NULL);
   * 
   *     pIPreferencesCtrl->Release(); pIPreferencesCtrl=NULL;
   *    }
   *  }
   *  
   *  { //Unsubscription
   *  CATIMmiPartInfrastructurePreferencesAtt *pIPreferencesCtrl=NULL;
   *  if(_callbackId && 
   *     SUCCEEDED(::CATInstantiateComponent("CATMmuPartInfrastructurePreferencesCtrl", IID_CATIMmiPartInfrastructurePreferencesAtt, (void**)&pIPreferencesCtrl)))
   *    {
   *     RemoveCallback(this, pIPreferencesCtrl, _callback);
   *     pIPreferencesCtrl->Release(); pIPreferencesCtrl=NULL;
   *    }
   *  }
   * </pre></code>
   * @param oEvent
   *   The event class. 
   * @return
   *   S_OK if the parameter is correctly retrieved, E_FAIL otherwise.
   */
  virtual HRESULT GetImportRepRepModeEvent(CATCallbackEvent& oEvent) = 0;

  // ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
  /**
   * Retrieves the "Under axis system" mode.
   * <br/><b>Role:</b> This mode determines whether the axis systems are to be created under 
   * the "Axis System" tree node or under the node of the current CATIGSMTool.
   * @param oMode 
   *   <code>TRUE</code> if axis systems are created under the "Axis System" tree node.
   *   <code>FALSE</code> if axis systems are created under the node of the current CATIGSMTool.
   * @return
   *   S_OK if the parameter is correctly retrieved, E_FAIL otherwise.
   */
  virtual HRESULT GetUnderAxisSystemsNodeMode(CATBoolean& oMode) = 0;

  /**
   * Sets the "Under axis system" mode.
   * @param iMode 
   *   <ul><li><code>TRUE</code> if axis systems are created under the "Axis System" tree node.</li>
   *   <ul><code>FALSE</code> if axis systems are created under the node of the current CATIGSMTool.</li></ul>
   * @param iSendEvent
   *   <ul><li><code>TRUE</code> so that the event defined in @href #GetUnderAxisSystemsNodeModeEvent is sent. 
   *   <br/>This happens only if the value is different from the one stored in the preference.</li>
   *   <li><code>FALSE</code> for no event to be sent.</li></ul>
   * @return
   *   S_OK if the parameter is correctly set, E_FAIL otherwise.
   */
  virtual HRESULT SetUnderAxisSystemsNodeMode(CATBoolean iMode, CATBoolean iSendEvent=TRUE) = 0;

  /**
   * Retrieves the name of the event class dispatched when a change of value is made.
   * <br/><b>Role:</b> This method enables an application to be warned whenever a change of value occurs.
   * <br/>Refer to comments in @href #GetImportRepRepModeEvent for a code sample.
	* @param oEvent
   *   The event class. 
   * @return
   *   S_OK if the parameter is correctly retrieved, E_FAIL otherwise.  
   */
  virtual HRESULT GetUnderAxisSystemsNodeModeEvent(CATCallbackEvent& oEvent) = 0;

  // ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
  /**
   * Retrieves the visibility of the "Historical graph" panel.
   * <br/><b>Role:</b> The Part Editor is a special viewer launched in GSD through Tools/Historical graph.
   * @param oOffOrOn 
   *   Current "Historical graph" panel visibility
   *      <ul><li><code>TRUE</code>if the viewer is visible,</li>
   *      <li><code>FALSE</code> if the viewer is invisible.</li></ul>
   * @return
   *   S_OK if the parameter is correctly retrieved, E_FAIL otherwise.
   */
  virtual HRESULT GetHistoricalGraphDisplayState(CATBoolean &oOffOrOn) = 0;

  /**
   * Sets the "Historical graph" display state.
   * @param iOffOrOn
   *   <ul><li><code>FALSE</code> to hide it,</li>
   *   <li><code>TRUE</code> to display it.</li>
   * @param iSendEvent
   *   <ul><li><code>TRUE</code> so that the event defined in @href #GetHistoricalGraphDisplayStateEvent is sent. 
   *   <br/>This happens only if the value is different from the one stored in the preference.</li>
   *   <li><code>FALSE</code> for no event to be sent.</li></ul>
   * @return
   *   S_OK if the parameter is correctly set, E_FAIL otherwise.
   */
  virtual HRESULT SetHistoricalGraphDisplayState(CATBoolean iOffOrOn, CATBoolean iSendEvent=TRUE) = 0;

  /**
   * Sends the "Historical graph" event.
   * <br/><b>Role:</b> Sends the event retrieved through @href #GetHistoricalGraphDisplayStateEvent..
   * @return
   *   Always S_OK.
   */
  virtual HRESULT SendHistoricalGraphDisplayStateEvent() = 0;

  /**
   * Retrieves the name of the event class dispatched when a change of value is made.
   * <br/><b>Role:</b> This method enables an application to be warned whenever a change of value occurs.
   * <br/>Refer to comments in @href #GetImportRepRepModeEvent for a code sample.
   * @param oEvent
   *   The event class. 
   * @return
   *   S_OK if the parameter is correctly retrieved, E_FAIL otherwise.
   */
  virtual HRESULT GetHistoricalGraphDisplayStateEvent(CATCallbackEvent& oEvent) = 0;

  // ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
  /**
   * Retrieves the visibility of the "Parametrization Analysis" panel.
   * <br/><b>Role:</b> The Parametrization Analysis panel is launched in Part/GSD/... through the 
   * Tools/Parametrization Analysis command.
   * @param oOffOrOn 
   *   Current "Parametrization Analysis" panel visibility
   *      <ul><li><code>TRUE</code>if the viewer is visible,</li>
   *      <li><code>FALSE</code> if the viewer is invisible.</li></ul>
   * @return
   *   S_OK if the parameter is correctly retrieved, E_FAIL otherwise.
   */
  virtual HRESULT GetSketchAnalysisDisplayState(CATBoolean &oOffOrOn) = 0;

  /**
   * Sets the "SketchAnalysisDisplay" state.
   * @param iOffOrOn
   *   <ul><li><code>FALSE</code> to hide it,</li>
   *   <li><code>TRUE</code> to display it.</li>
   * @param iSendEvent
   *   <ul><li><code>TRUE</code> so that the event defined in @href #GetSketchAnalysisDisplayStateEvent is sent. 
   *   <br/>This happens only if the value is different from the one stored in the preference.</li>
   *   <li><code>FALSE</code> for no event to be sent.</li></ul>
   * @return
   *   S_OK if the parameter is correctly set, E_FAIL otherwise.
   */
  virtual HRESULT SetSketchAnalysisDisplayState(CATBoolean iOffOrOn, CATBoolean iSendEvent=TRUE) = 0;
  
  /**
   * Sends the "SketchAnalysisDisplay" event. retrieved through @href #GetScanGraphPanelModeEvent.
   * <br/><b>Role:</b> Sends the event retrieved through @href #GetScanGraphPanelModeEvent.
   * @return
   *   Always S_OK.
   */
  virtual HRESULT SendSketchAnalysisDisplayStateEvent() = 0;

  /**
   * Retrieves the name of the event class dispatched when a change of value is made.
   * <br/><b>Role:</b> This method enables an application to be warned whenever a change of value occurs.
   * <br/>Refer to comments in @href #GetImportRepRepModeEvent for a code sample.
   * @param oEvent
   *   The event class. 
   * @return
   *   S_OK if the parameter is correctly retrieved, E_FAIL otherwise.
   */
  virtual HRESULT GetSketchAnalysisDisplayStateEvent(CATCallbackEvent& oEvent) = 0;

  // ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
  /**
   * Retrieves the visibility of the "Scan graph" panel.
   * <br/><b>Role:</b> The Scan graph is a special viewer linked to the Scan command.
   * <br/>There is a possibility for the user to display or not this dedicated viewer 
   * in addition to the Scan command.
   * @param oVisible 
   *   Current "Scan graph" panel visibility
   *      <ul><li><code>TRUE</code>if the viewer is visible when launching the Scan command,</li>
   *      <li><code>FALSE</code> if the viewer is not visible.</li></ul>
   * @return
   *   S_OK if the parameter is correctly retrieved, E_FAIL otherwise.
   */
  virtual HRESULT GetScanGraphPanelMode(CATBoolean &oVisible) = 0;

  /**
   * Sets the visibility of the "Scan graph" panel.
   * @param iVisible 
   *      <ul><li><code>TRUE</code>if the viewer is to be visible when launching the Scan command,</li>
   *      <li><code>FALSE</code> if the viewer is to not be displayed.</li></ul>
   * @param iSendEvent
   *   <ul><li><code>TRUE</code> so that the event defined in @href #GetScanGraphPanelModeEvent is sent. 
   *   <br/>This happens only if the value is different from the one stored in the preference.</li>
   *   <li><code>FALSE</code> for no event to be sent.</li></ul>
   * @return
   *   S_OK if the parameter is correctly set, E_FAIL otherwise.
   */
  virtual HRESULT SetScanGraphPanelMode(CATBoolean iVisible, CATBoolean iSendEvent=TRUE) = 0;


  /**
   * Retrieves the name of the event class dispatched when a change of value is made.
   * <br/><b>Role:</b> This method enables an application to be warned whenever a change of value occurs.
   * <br/>Refer to comments in @href #GetImportRepRepModeEvent for a code sample.
   * @param oEvent
   *   The event class. 
   * @return
   *   S_OK if the parameter is correctly retrieved, E_FAIL otherwise.
   */
  virtual HRESULT GetScanGraphPanelModeEvent(CATCallbackEvent& oEvent) = 0;

  // ++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
  /**
   * Retrieves the society identifier related to a caa partner's startup.
   * <br/><b>Role:</b> This preference is only to be used for UserFeatures type.
   * @param oSocietyId 
   *   The society identifier.
   * @return
   *   S_OK if the parameter is correctly retrieved, E_FAIL otherwise.
   */
  virtual HRESULT GetSocietyIdentifier(CATUnicodeString &oSocietyId) = 0;

  /**
   * Sets the society identifier.
   * <br/><b>Role:</b> This preference is only to be used for UserFeatures type.
   * @param iSocietyId 
   *   The society identifier.
   * @param iSendEvent
   *   Code to manage events.
   * @return
   *   S_OK if the parameter is correctly retrieved, E_FAIL otherwise.
   */
  virtual HRESULT SetSocietyIdentifier(const CATUnicodeString &iSocietyId, CATBoolean iSendEvent=TRUE) = 0;

  /**
   * Retrieves the name of the event class dispatched when a change of value is made.
   * <br/><b>Role:</b> This method enables an application to be warned whenever a change of value occurs.
   * <br/>Refer to comments in @href #GetImportRepRepModeEvent for a code sample.
   * @param oEvent
   *   The event class. 
   * @return
   *   S_OK if the parameter is correctly retrieved, E_FAIL otherwise.
   */
  virtual HRESULT GetSocietyIdentifierEvent(CATCallbackEvent& oEvent) = 0;
};

CATDeclareHandler(CATIMmiPartInfrastructurePreferencesAtt,CATBaseUnknown);

#endif

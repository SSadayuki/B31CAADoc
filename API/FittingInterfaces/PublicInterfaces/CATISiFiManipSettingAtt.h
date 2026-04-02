//==============================================================================
// COPYRIGHT Dassault Systemes 2004
//==============================================================================
//
// CATISiFiManipSettingAtt.h
// Define the CATISiFiManipSettingAtt interface
//
//==============================================================================
//
// Usage notes:
//   Interface CATISiFiManipSettingAtt : Used to interact with the 
//   DMU Manip tools options settings
//
//==============================================================================
//
// Modification History :
//      cre     dcg     01/01/2004      original implementation
//      mod     mli     05/13/2004      Changed CAA2Usage to U3, per RSH.
//
//==============================================================================

#ifndef CATISiFiManipSettingAtt_H
#define CATISiFiManipSettingAtt_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "G60I0FIT.h"
#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"
#include "CATBaseUnknown.h"

#include "CATManipAutoInsertMode.h"
#include "CATManipClashMode.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByG60I0FIT IID IID_CATISiFiManipSettingAtt;
#else
extern "C" const IID IID_CATISiFiManipSettingAtt ;
#endif

class CATSettingInfo;
class CATUnicodeString;


//------------------------------------------------------------------

/**  
 * Interface to handle parameters of DMU Manip Tools Options Tab page
 * <b>Role</b>: This interface is implemented by a component which 
 * represents the controller of DMU Manip Tools Options parameter settings.
 * <ul>
 * <li>Methods to set value of each parameter</li>
 * <li>Methods to get value of each parameter</li>
 * <li>Methods to get information on each parameter</li>
 * <li>Methods to lock/unlock value of each parameter</li>
 * </ul>
 */

class ExportedByG60I0FIT CATISiFiManipSettingAtt : public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Returns the Clash Sound parameter
     * <br><b>Role</b>: Returns the Clash Sound parameter
     * @param oClashSound
     *     If Clash Beep feedback is to be used.
     *     <b>Legal values</b>:
     *     <br><tt>TRUE</tt>  Clash Beep feedback is enabled
     *     <br><tt>FALSE</tt> Clash Beep feedback is disabled
     * @return
     *     S_OK   : if the Clash Sound value was correctly obtained
     *     E_FAIL : if the Clash Sound value was not correctly obtained
     */

     virtual HRESULT GetClashSound ( CATBoolean & oClashSound ) = 0;

    /**
     * Sets the Clash Sound parameter
     * <br><b>Role</b>: Sets the Clash Sound parameter
     * @param iClashSound
     *     If Clash Beep feedback is to be used.
     *     <b>Legal values</b>:
     *     <br><tt>TRUE :</tt>   to enable Clash Beep feedback
     *     <br><tt>FALSE:</tt>   to disable Clash Beep feedback
     * @return
     *     S_OK   : if the Clash Sound value was set correctly
     *     E_FAIL : if the Clash Sound value was not set correctly
     */

     virtual HRESULT SetClashSound ( const CATBoolean iClashSound ) = 0;

    /**
     * Retrieves the state of the ClashSoundInfo parameter.
     * @param oInfo
     *     Address of an object CATSettingInfo.
     * @return
     *     <b>Legal values</b>:
     *     <br><tt>S_OK :</tt>   on Success
     *     <br><tt>E_FAIL:</tt>  on failure
     */

     virtual HRESULT GetClashSoundInfo ( CATSettingInfo* oInfo ) = 0;

    /**
     * Locks or unlocks the ClashSound parameter.
     * <br><b>Role</b>:Locks or unlocks the ClashSound parameter if it is possible
     * in the current administrative context. In user mode this method will always
     * return E_FAIL.
     * @param iLocked
     *     the locking operation to be performed
     *     <b>Legal values</b>:
     *     <br><tt>TRUE :</tt>   to lock the parameter.
     *     <br><tt>FALSE:</tt>   to unlock the parameter.
     * @return
     *     <b>Legal values</b>:
     *     <br><tt>S_OK :</tt>   on Success
     *     <br><tt>E_FAIL:</tt>  on failure
     */

     virtual HRESULT SetClashSoundLock ( unsigned char iLocked ) = 0;


    /**
     * Returns the RecordMode for Auto Insert configuration 
     * <br><b>Role</b>: Returns the RecordMode for Auto Insert configuration
     * @param oMode
     *     The Record Mode that will be used for auto insert
     *     <b>Legal values</b>:
     *     <br><tt>CATOnMouseRelease</tt>     On each mouse release
     *     <br><tt>CATWhileMouseMoving</tt>   On specific parameters
     * @return
     *     S_OK   : if the RecordMode value was correctly obtained
     *     E_FAIL : if the RecordMode value was not correctly obtained
     */

     virtual HRESULT GetRecordMode ( CATManipAutoInsertMode & oMode ) = 0;

    /**
     * Sets the RecordMode for Auto Insert configuration
     * <br><b>Role</b>: Sets the RecordMode if angle limitation is being used
     * @param iMode
     *     The Record Mode that will be used for auto insert
     *     <b>Legal values</b>:
     *     <br><tt>CATOnMouseRelease</tt>     On each mouse release
     *     <br><tt>CATWhileMouseMoving</tt>   On specific parameters
     * @return
     *     S_OK   : if the RecordMode value was set correctly
     *     E_FAIL : if the RecordMode value was not set correctly
     */

     virtual HRESULT SetRecordMode ( const CATManipAutoInsertMode iMode ) = 0;

    /**
     * Retrieves the state of the RecordModeInfo parameter.
     * @param oInfo
     *     Address of an object CATSettingInfo.
     * @return
     *     <b>Legal values</b>:
     *     <br><tt>S_OK :</tt>   on Success
     *     <br><tt>E_FAIL:</tt>  on failure
     */

     virtual HRESULT GetRecordModeInfo ( CATSettingInfo* oInfo ) = 0;

    /**
     * Locks or unlocks the RecordMode parameter.
     * <br><b>Role</b>:Locks or unlocks the RecordMode parameter if it is possible
     * in the current administrative context. In user mode this method will always
     * return E_FAIL.
     * @param iLocked
     *     the locking operation to be performed
     *     <b>Legal values</b>:
     *     <br><tt>TRUE :</tt>   to lock the parameter.
     *     <br><tt>FALSE:</tt>   to unlock the parameter.
     * @return
     *     <b>Legal values</b>:
     *     <br><tt>S_OK :</tt>   on Success
     *     <br><tt>E_FAIL:</tt>  on failure
     */

     virtual HRESULT SetRecordModeLock ( unsigned char iLocked ) = 0;


    /**
     * Returns the Distance Step parameter
     * <br><b>Role</b>: Returns the Distance Step parameter
     * @param oDefaultSpeed
     *     <br>Will be set to the current value of the Distance Step
     * @return
     *     S_OK   : if the Distance Step value was correctly obtained
     *     E_FAIL : if the Distance Step value was not correctly obtained
     */

     virtual HRESULT GetDistanceStep ( float & oDistanceStep ) = 0;

    /**
     * Sets the Distance Step  parameter
     * <br><b>Role</b>: Returns the Distance Step parameter
     * @param iDefaultSpeed
     *     <br>Used to set the Distance Step parameter
     * @return
     *     S_OK   : if the Distance Step value was correctly obtained
     *     E_FAIL : if the Distance Step value was not correctly obtained
     */

     virtual HRESULT SetDistanceStep ( const float iDistanceStep ) = 0;

    /**
     * Retrieves the state of the DistanceStepInfo parameter.
     * @param oInfo
     *     Address of an object CATSettingInfo.
     * @return
     *     <b>Legal values</b>:
     *     <br><tt>S_OK :</tt>   on Success
     *     <br><tt>E_FAIL:</tt>  on failure
     */

     virtual HRESULT GetDistanceStepInfo ( CATSettingInfo* oInfo ) = 0;

    /**
     * Locks or unlocks the DistanceStep parameter.
     * <br><b>Role</b>:Locks or unlocks the DistanceStep parameter if it is possible
     * in the current administrative context. In user mode this method will always
     * return E_FAIL.
     * @param iLocked
     *     the locking operation to be performed
     *     <b>Legal values</b>:
     *     <br><tt>TRUE :</tt>   to lock the parameter.
     *     <br><tt>FALSE:</tt>   to unlock the parameter.
     * @return
     *     <b>Legal values</b>:
     *     <br><tt>S_OK :</tt>   on Success
     *     <br><tt>E_FAIL:</tt>  on failure
     */

     virtual HRESULT SetDistanceStepLock ( unsigned char iLocked ) = 0;


    /**
     * Returns the Angle Step parameter
     * <br><b>Role</b>: Returns the Angle Step parameter
     * @param oDefaultSpeed
     *     <br>Will be set to the current value of the Angle Step
     * @return
     *     S_OK   : if the Angle Step value was correctly obtained
     *     E_FAIL : if the Angle Step value was not correctly obtained
     */

     virtual HRESULT GetAngleStep ( float & oAngleStep ) = 0;

    /**
     * Sets the Angle Step  parameter
     * <br><b>Role</b>: Sets the Angle Step parameter
     * @param iDefaultSpeed
     *     <br>Used to set the Angle Step parameter
     * @return
     *     S_OK   : if the Angle Step value was correctly obtained
     *     E_FAIL : if the Angle Step value was not correctly obtained
     */

     virtual HRESULT SetAngleStep ( const float iAngleStep ) = 0;

    /**
     * Retrieves the state of the AngleStepInfo parameter.
     * @param oInfo
     *     Address of an object CATSettingInfo.
     * @return
     *     <b>Legal values</b>:
     *     <br><tt>S_OK :</tt>   on Success
     *     <br><tt>E_FAIL:</tt>  on failure
     */

     virtual HRESULT GetAngleStepInfo ( CATSettingInfo* oInfo ) = 0;

    /**
     * Locks or unlocks the AngleStep parameter.
     * <br><b>Role</b>:Locks or unlocks the AngleStep parameter if it is possible
     * in the current administrative context. In user mode this method will always
     * return E_FAIL.
     * @param iLocked
     *     the locking operation to be performed
     *     <b>Legal values</b>:
     *     <br><tt>TRUE :</tt>   to lock the parameter.
     *     <br><tt>FALSE:</tt>   to unlock the parameter.
     * @return
     *     <b>Legal values</b>:
     *     <br><tt>S_OK :</tt>   on Success
     *     <br><tt>E_FAIL:</tt>  on failure
     */

     virtual HRESULT SetAngleStepLock ( unsigned char iLocked ) = 0;


    /**
     * Returns the ClashMode (manipulation mode) for simulation and tracks
     * <br><b>Role</b>: Returns the ClashMode (manipulation mode) for simulation
     * and tracks
     * @param oMode
     *     The ClashMode (manipulation mode) for simulation and tracks
     *     <b>Legal values</b>:
     *     <br><tt>CATManipClashModeNo</tt>     Clash Detection is set to OFF
     *     <br><tt>CATManipClashModeOn</tt>     Clash Detection is set to ON
     *     <br><tt>CATManipClashModeStop</tt>   Clash Detection is set to STOP
     * @return
     *     S_OK   : if the ClashMode value was correctly obtained
     *     E_FAIL : if the ClashMode value was not correctly obtained
     */

     virtual HRESULT GetClashMode ( CATManipClashMode & oMode ) = 0;

    /**
     * Sets the ClashMode (manipulation mode) for simulation and tracks
     * <br><b>Role</b>: Sets the ClashMode (manipulation mode) for simulation
     * and tracks
     * @param iMode
     *     The ClashMode (manipulation mode) for simulation and tracks
     *     <b>Legal values</b>:
     *     <br><tt>CATManipClashModeNo</tt>     Clash Detection is set to OFF
     *     <br><tt>CATManipClashModeOn</tt>     Clash Detection is set to ON
     *     <br><tt>CATManipClashModeStop</tt>   Clash Detection is set to STOP
     * @return
     *     S_OK   : if the ClashMode value was set correctly
     *     E_FAIL : if the ClashMode value was not set correctly
     */

     virtual HRESULT SetClashMode ( const CATManipClashMode iMode ) = 0;

    /**
     * Retrieves the state of the ClashModeInfo parameter.
     * @param oInfo
     *     Address of an object CATSettingInfo.
     * @return
     *     <b>Legal values</b>:
     *     <br><tt>S_OK :</tt>   on Success
     *     <br><tt>E_FAIL:</tt>  on failure
     */

     virtual HRESULT GetClashModeInfo ( CATSettingInfo* oInfo ) = 0;

    /**
     * Locks or unlocks the ClashMode parameter.
     * <br><b>Role</b>:Locks or unlocks the ClashMode parameter if it is possible
     * in the current administrative context. In user mode this method will always
     * return E_FAIL.
     * @param iLocked
     *     the locking operation to be performed
     *     <b>Legal values</b>:
     *     <br><tt>TRUE :</tt>   to lock the parameter.
     *     <br><tt>FALSE:</tt>   to unlock the parameter.
     * @return
     *     <b>Legal values</b>:
     *     <br><tt>S_OK :</tt>   on Success
     *     <br><tt>E_FAIL:</tt>  on failure
     */

     virtual HRESULT SetClashModeLock ( unsigned char iLocked ) = 0;


    /**
     * Returns the ManipAutoInsert parameter
     * <br><b>Role</b>: Returns the ManipAutoInsert (Automatic insert for manipulation
     * mode) parameter.
     * @param oManipAutoInsert
     *     If Automatic insert for manipulation mode is to be used.
     *     <b>Legal values</b>:
     *     <br><tt>TRUE</tt>  Automatic insert for manipulation mode is enabled
     *     <br><tt>FALSE</tt> Automatic insert for manipulation mode is disabled
     * @return
     *     S_OK   : if the ManipAutoInsert value was correctly obtained
     *     E_FAIL : if the ManipAutoInsert value was not correctly obtained
     */

     virtual HRESULT GetManipAutoInsert ( CATBoolean & oManipAutoInsert ) = 0;

    /**
     * Sets the ManipAutoInsert parameter
     * <br><b>Role</b>: Sets the ManipAutoInsert (Automatic insert for manipulation
     * mode) parameter.
     * @param iManipAutoInsert
     *     If Automatic insert for manipulation mode is to be used.
     *     <b>Legal values</b>:
     *     <br><tt>TRUE :</tt>   to enable Automatic insert for manipulation mode
     *     <br><tt>FALSE:</tt>   to disable Automatic insert for manipulation mode
     * @return
     *     S_OK   : if the ManipAutoInsert value was set correctly
     *     E_FAIL : if the ManipAutoInsert value was not set correctly
     */

     virtual HRESULT SetManipAutoInsert ( const CATBoolean iManipAutoInsert ) = 0;

    /**
     * Retrieves the state of the ManipAutoInsertInfo parameter.
     * @param oInfo
     *     Address of an object CATSettingInfo.
     * @return
     *     <b>Legal values</b>:
     *     <br><tt>S_OK :</tt>   on Success
     *     <br><tt>E_FAIL:</tt>  on failure
     */

     virtual HRESULT GetManipAutoInsertInfo ( CATSettingInfo* oInfo ) = 0;

    /**
     * Locks or unlocks the ManipAutoInsert parameter.
     * <br><b>Role</b>:Locks or unlocks the ManipAutoInsert parameter if it is possible
     * in the current administrative context. In user mode this method will always
     * return E_FAIL.
     * @param iLocked
     *     the locking operation to be performed
     *     <b>Legal values</b>:
     *     <br><tt>TRUE :</tt>   to lock the parameter.
     *     <br><tt>FALSE:</tt>   to unlock the parameter.
     * @return
     *     <b>Legal values</b>:
     *     <br><tt>S_OK :</tt>   on Success
     *     <br><tt>E_FAIL:</tt>  on failure
     */

     virtual HRESULT SetManipAutoInsertLock ( unsigned char iLocked ) = 0;


    /**
     * Returns the Snap Position parameter
     * <br><b>Role</b>: Returns the Position parameter of the Snap Sensitivity
     * @param oSnapPosition
     *     <br>Will be set to the current value of the Position parameter of the 
     *     Snap Sensitivity
     * @return
     *     S_OK   : if the Snap Position value was correctly obtained
     *     E_FAIL : if the Snap Position value was not correctly obtained
     */

     virtual HRESULT GetSnapPosition ( float & oSnapPosition ) = 0;

    /**
     * Sets the Snap Position parameter
     * <br><b>Role</b>: Sets the Position parameter of the Snap Sensitivity
     * @param iSnapPosition
     *     <br>Used to set the Snap Position parameter of the Snap Sensitivity
     * @return
     *     S_OK   : if the Snap Position value was correctly obtained
     *     E_FAIL : if the Snap Position value was not correctly obtained
     */

     virtual HRESULT SetSnapPosition ( const float iSnapPosition ) = 0;

    /**
     * Retrieves the state of the SnapPositionInfo parameter.
     * @param oInfo
     *     Address of an object CATSettingInfo.
     * @return
     *     <b>Legal values</b>:
     *     <br><tt>S_OK :</tt>   on Success
     *     <br><tt>E_FAIL:</tt>  on failure
     */

     virtual HRESULT GetSnapPositionInfo ( CATSettingInfo* oInfo ) = 0;

    /**
     * Locks or unlocks the SnapPosition parameter.
     * <br><b>Role</b>:Locks or unlocks the SnapPosition parameter if it is possible
     * in the current administrative context. In user mode this method will always
     * return E_FAIL.
     * @param iLocked
     *     the locking operation to be performed
     *     <b>Legal values</b>:
     *     <br><tt>TRUE :</tt>   to lock the parameter.
     *     <br><tt>FALSE:</tt>   to unlock the parameter.
     * @return
     *     <b>Legal values</b>:
     *     <br><tt>S_OK :</tt>   on Success
     *     <br><tt>E_FAIL:</tt>  on failure
     */

     virtual HRESULT SetSnapPositionLock ( unsigned char iLocked ) = 0;


    /**
     * Returns the Snap Angle Distance parameter
     * <br><b>Role</b>: Returns the Angle Distance parameter of the Snap Sensitivity
     * @param oSnapPosition
     *     <br>Will be set to the current value of the Angle Distance parameter of the 
     *     Snap Sensitivity
     * @return
     *     S_OK   : if the Snap Angle Distance value was correctly obtained
     *     E_FAIL : if the Snap Angle Distance value was not correctly obtained
     */

     virtual HRESULT GetSnapAngleDistance ( float & oSnapAngleDistance ) = 0;

    /**
     * Sets the Snap Angle Distance parameter
     * <br><b>Role</b>: Sets the Angle Distance parameter of the Snap Sensitivity
     * @param iSnapPosition
     *     <br>Used to set the Angle Distance parameter of the Snap Sensitivity
     * @return
     *     S_OK   : if the Snap Angle Distance value was correctly obtained
     *     E_FAIL : if the Snap Angle Distance value was not correctly obtained
     */

     virtual HRESULT SetSnapAngleDistance ( const float iSnapAngleDistance ) = 0;

    /**
     * Retrieves the state of the SnapAngleDistanceInfo parameter.
     * @param oInfo
     *     Address of an object CATSettingInfo.
     * @return
     *     <b>Legal values</b>:
     *     <br><tt>S_OK :</tt>   on Success
     *     <br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetSnapAngleDistanceInfo ( CATSettingInfo* oInfo ) = 0;

    /**
     * Locks or unlocks the SnapAngleDistance parameter.
     * <br><b>Role</b>:Locks or unlocks the SnapAngleDistance parameter if it is possible
     * in the current administrative context. In user mode this method will always
     * return E_FAIL.
     * @param iLocked
     *     the locking operation to be performed
     *     <b>Legal values</b>:
     *     <br><tt>TRUE :</tt>   to lock the parameter.
     *     <br><tt>FALSE:</tt>   to unlock the parameter.
     * @return
     *     <b>Legal values</b>:
     *     <br><tt>S_OK :</tt>   on Success
     *     <br><tt>E_FAIL:</tt>  on failure
     */

     virtual HRESULT SetSnapAngleDistanceLock ( unsigned char iLocked ) = 0;


  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

//------------------------------------------------------------------
CATDeclareHandler ( CATISiFiManipSettingAtt, CATBaseUnknown ) ;

#endif

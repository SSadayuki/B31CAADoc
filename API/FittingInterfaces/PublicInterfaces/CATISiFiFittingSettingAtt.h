//==============================================================================
// COPYRIGHT Dassault Systemes 2004
//==============================================================================
//
// CATISiFiFittingSettingAtt.h
// Define the CATISiFiFittingSettingAtt interface
//
//==============================================================================
//
// Usage notes:
//   Interface CATISiFiFittingSettingAtt : used to interact between 
//   the DMU Fitting tools option settings
//
//==============================================================================
//
// Modification History :
//      cre     dcg     01/01/2004      original implementation
//      mod     mli     05/13/2004      Changed CAA2Usage to U3, per RSH.
//
//==============================================================================

#ifndef CATISiFiFittingSettingAtt_H
#define CATISiFiFittingSettingAtt_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "G60I0FIT.h"
#include "CATBaseUnknown.h"
#include "CATBooleanDef.h"

#include "CATFittingShuttleVector.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByG60I0FIT IID IID_CATISiFiFittingSettingAtt;
#else
extern "C" const IID IID_CATISiFiFittingSettingAtt ;
#endif


class CATSettingInfo;
class CATUnicodeString;


//------------------------------------------------------------------

/**  
 * Interface to handle parameters of DMU Fitting Tools Options Tab page.
 * <b>Role</b>: This interface is implemented by a component which 
 * represents the controller of DMU Fitting Tools Options parameter settings.
 * <ul>
 * <li>Methods to set value of each parameter</li>
 * <li>Methods to get value of each parameter</li>
 * <li>Methods to get information on each parameter</li>
 * <li>Methods to lock/unlock value of each parameter</li>
 * </ul>
 */

class ExportedByG60I0FIT CATISiFiFittingSettingAtt: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    /**
     * Returns the Shuttle Angle Limit parameter.
     * <br><b>Role</b>: Returns the Shuttle Angle Limit parameter
     * @param oAngleLimit
     *     If shuttle angle limitation is to be used.
     *     <b>Legal values</b>:
     *     <br><tt>TRUE</tt>  Angle Limitation is enabled
     *     <br><tt>FALSE</tt> Angle Limitation is disabled
     * @return
     *     S_OK   : if the AngleLimit value was correctly obtained
     *     E_FAIL : if the AngleLimit value was not correctly obtained
     */

     virtual HRESULT GetAngleLimit ( CATBoolean & oAngleLimit ) = 0;

    /**
     * Sets the Shuttle Angle Limit parameter.
     * <br><b>Role</b>: Sets the Shuttle Angle Limit parameter
     * @param iAngleLimit
     *     If shuttle angle limitation is to be used.
     *     <b>Legal values</b>:
     *     <br><tt>TRUE :</tt>   to enable Angle Limitation 
     *     <br><tt>FALSE:</tt>   to disable Angle Limitation 
     * @return
     *     S_OK   : if the Angle Limitation value was set correctly
     *     E_FAIL : if the Angle Limitation value was not set correctly
     */

     virtual HRESULT SetAngleLimit ( const CATBoolean iAngleLimit ) = 0;

    /**
     * Retrieves the state of the AngleLimitInfo parameter.
     * @param oInfo
     *     Address of an object CATSettingInfo.
     * @return
     *     <b>Legal values</b>:
     *     <br><tt>S_OK :</tt>   on Success
     *     <br><tt>E_FAIL:</tt>  on failure
     */

     virtual HRESULT GetAngleLimitInfo ( CATSettingInfo* oInfo ) = 0;

    /**
     * Locks or unlocks the Shuttle Angle Limit parameter.
     * <br><b>Role</b>:Locks or unlocks the Shuttle Angle Limit parameter if it is possible
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

     virtual HRESULT SetAngleLimitLock ( unsigned char iLocked ) = 0;


    /**
     * Returns the Maximum Angle if angle limitation is being used.
     * <br><b>Role</b>: Returns the Maximum Angle if angle limitation is being used
     * @param oMaxAngle
     *     <br>Will be set to the current value of the Maximum Angle for shuttle
     *     angle limitation validation.
     * @return
     *     S_OK   : if the Max Validation value was correctly obtained
     *     E_FAIL : if the Max Validation value was not correctly obtained
     */

     virtual HRESULT GetMaxAngle (float & oMaxAngle) = 0;

    /**
     * Sets the Maximum Angle if angle limitation is being used.
     * <br><b>Role</b>: Sets the Maximum Angle if angle limitation is being used
     * @param iMaxAngle
     *     <br>Will be used to set the Maximum Angle for shuttle angle limitation
     *     validation.
     * @return
     *     S_OK   : if the Max Validation value was set correctly
     *     E_FAIL : if the Max Validation value was not set correctly
     */

     virtual HRESULT SetMaxAngle (float iMaxAngle) = 0;

    /**
     * Retrieves the state of the MaxAngleInfo parameter.
     * @param oInfo
     *     Address of an object CATSettingInfo.
     * @return
     *     <b>Legal values</b>:
     *     <br><tt>S_OK :</tt>   on Success
     *     <br><tt>E_FAIL:</tt>  on failure
     */

     virtual HRESULT GetMaxAngleInfo ( CATSettingInfo* oInfo ) = 0;

    /**
     * Locks or unlocks the Shuttle Angle Limit value parameter.
     * <br><b>Role</b>:Locks or unlocks the MaxAngle parameter if it is possible
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

     virtual HRESULT SetMaxAngleLock ( unsigned char iLocked ) = 0;


    /**
     * Returns the Vector if angle limitation is being used.
     * <br><b>Role</b>: Returns the Vector if angle limitation is being used
     * @param oVector
     *     The axis that will be used for shuttle angle validation
     *     <b>Legal values</b>:
     *     <br><tt>CATFittingShuttleVectorX</tt>   Along the vector X axis
     *     <br><tt>CATFittingShuttleVectorY</tt>   Along the vector Y axis
     *     <br><tt>CATFittingShuttleVectorZ</tt>   Along the vector Z axis
     * @return
     *     S_OK   : if the Vector value was correctly obtained
     *     E_FAIL : if the Vector value was not correctly obtained
     */

     virtual HRESULT GetVector ( CATFittingShuttleVector & oVector ) = 0;

    /**
     * Sets the Vector if angle limitation is being used.
     * <br><b>Role</b>: Sets the Vector if angle limitation is being used
     * @param iVector
     *     The axis that will be used for shuttle angle validation
     *     <b>Legal values</b>:
     *     <br><tt>CATFittingShuttleVectorX</tt>   Along the vector X axis
     *     <br><tt>CATFittingShuttleVectorY</tt>   Along the vector Y axis
     *     <br><tt>CATFittingShuttleVectorZ</tt>   Along the vector Z axis
     * @return
     *     S_OK   : if the Vector value was set correctly
     *     E_FAIL : if the Vector value was not set correctly
     */

     virtual HRESULT SetVector ( const CATFittingShuttleVector iVector ) = 0;

    /**
     * Retrieves the state of the VectorInfo parameter.
     * @param oInfo
     *     Address of an object CATSettingInfo.
     * @return
     *     <b>Legal values</b>:
     *     <br><tt>S_OK :</tt>   on Success
     *     <br><tt>E_FAIL:</tt>  on failure
     */

     virtual HRESULT GetVectorInfo ( CATSettingInfo* oInfo ) = 0;

    /**
     * Locks or unlocks the Shuttle Vector parameter.
     * <br><b>Role</b>:Locks or unlocks the Shuttle Vector parameter if it is possible
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

     virtual HRESULT SetVectorLock ( unsigned char iLocked ) = 0;


    /**
     * Returns the Path Finder Automatic Smooth parameter.
     * <br><b>Role</b>: Returns the Path Finder Automatic Smooth parameter
     * @param oPathFinderSmooth
     *     If Path Finder Automatic Smooth is to be used.
     *     <b>Legal values</b>:
     *     <br><tt>TRUE</tt>  Path Finder Automatic Smooth is enabled
     *     <br><tt>FALSE</tt> Path Finder Automatic Smooth is disabled
     *     used
     * @return
     *     S_OK   : if the Path Finder Automatic Smooth value was correctly obtained
     *     E_FAIL : if the Path Finder Automatic Smooth value was not correctly obtained
     */

     virtual HRESULT GetPathFinderSmooth ( CATBoolean & oPathFinderSmooth ) = 0;

    /**
     * Sets the Path Finder Automatic Smooth parameter.
     * <br><b>Role</b>: Sets the Path Finder Automatic Smooth parameter
     * @param iPathFinderSmooth
     *     If Path Finder Automatic Smooth is to be used.
     *     <b>Legal values</b>:
     *     <br><tt>TRUE :</tt>   to enable Path Finder Automatic Smooth
     *     <br><tt>FALSE:</tt>   to disable Path Finder Automatic Smooth
     * @return
     *     S_OK   : if the Angle Limitation value was set correctly
     *     E_FAIL : if the Angle Limitation value was not set correctly
     */

     virtual HRESULT SetPathFinderSmooth ( const CATBoolean iPathFinderSmooth ) = 0;

    /**
     * Retrieves the state of the PathFinderSmoothInfo parameter.
     * @param oInfo
     *    Address of an object CATSettingInfo.
     * @return
     *    <b>Legal values</b>:
     *    <br><tt>S_OK :</tt>   on Success
     *    <br><tt>E_FAIL:</tt>  on failure
     */

     virtual HRESULT GetPathFinderSmoothInfo ( CATSettingInfo* oInfo ) = 0;

    /**
     * Locks or unlocks the PathFinderSmooth parameter.
     * <br><b>Role</b>:Locks or unlocks the PathFinderSmooth parameter if it is 
     * possible in the current administrative context. In user mode this method 
     * will always return E_FAIL.
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

     virtual HRESULT SetPathFinderSmoothLock ( unsigned char iLocked ) = 0;


    /**
     * Returns the Automatic Track Update parameter.
     * <br><b>Role</b>: Returns the Automatic Track Update parameter
     * @param oTrackAutoUpdate
     *     If Automatic Track Update is to be used.
     *     <b>Legal values</b>:
     *     <br><tt>TRUE</tt>  Automatic Track Update is enabled
     *     <br><tt>FALSE</tt> Automatic Track Update is disabled
     *     used
     * @return
     *     S_OK   : if the Automatic Track Update value was correctly obtained
     *     E_FAIL : if the Automatic Track Update value was not correctly obtained
     */

     virtual HRESULT GetTrackAutoUpdate ( CATBoolean & oTrackAutoUpdate ) = 0;

    /**
     * Sets the Automatic Track Update parameter.
     * <br><b>Role</b>: Sets the Automatic Track Update parameter
     * @param iTrackAutoUpdate
     *     If Automatic Track Update is to be used.
     *     <b>Legal values</b>:
     *     <br><tt>TRUE :</tt>   to enable Automatic Track Update
     *     <br><tt>FALSE:</tt>   to disable Automatic Track Update
     * @return
     *     S_OK   : if the Automatic Track Update value was set correctly
     *     E_FAIL : if the Automatic Track Update was not set correctly
     */

     virtual HRESULT SetTrackAutoUpdate ( const CATBoolean iTrackAutoUpdate ) = 0;

    /**
     * Retrieves the state of the TrackAutoUpdateInfo parameter.
     * @param oInfo
     *     Address of an object CATSettingInfo.
     * @return
     *     <b>Legal values</b>:
     *     <br><tt>S_OK :</tt>   on Success
     *     <br><tt>E_FAIL:</tt>  on failure
     */

     virtual HRESULT GetTrackAutoUpdateInfo ( CATSettingInfo* oInfo ) = 0;

    /**
     * Locks or unlocks the TrackAutoUpdate parameter.
     * <br><b>Role</b>:Locks or unlocks the TrackAutoUpdate parameter if it is 
     * possible in the current administrative context. In user mode this method 
     * will always return E_FAIL.
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

     virtual HRESULT SetTrackAutoUpdateLock ( unsigned char iLocked ) = 0;


    /**
     * Returns the Default Speed parameter.
     * <br><b>Role</b>: Returns the Default Speed parameter for a track
     * @param oDefaultSpeed
     *     <br>Will be set to the current value of the Default Speed for a track
     * @return
     *     S_OK   : if the Default Speed value was correctly obtained
     *     E_FAIL : if the Default Speed value was not correctly obtained
     */

     virtual HRESULT GetDefaultSpeed ( double & oDefaultSpeed ) = 0;

    /**
     * Sets the Default Speed parameter.
     * <br><b>Role</b>: Returns the Default Speed parameter for a track
     * @param iDefaultSpeed
     *     <br>Used to set the Default Track Speed for a track
     * @return
     *     S_OK   : if the Default Track Speed value was correctly obtained
     *     E_FAIL : if the Default Track Speed value was not correctly obtained
     */

     virtual HRESULT SetDefaultSpeed ( double iDefaultSpeed ) = 0;

    /**
     * Retrieves the state of the DefaultSpeedInfo parameter.
     * @param oInfo
     *     Address of an object CATSettingInfo.
     * @return
     *     <b>Legal values</b>:
     *     <br><tt>S_OK :</tt>   on Success
     *     <br><tt>E_FAIL:</tt>  on failure
     */

     virtual HRESULT GetDefaultSpeedInfo ( CATSettingInfo* oInfo ) = 0;


    /**
     * Locks or unlocks the DefaultSpeed parameter.
     * <br><b>Role</b>:Locks or unlocks the DefaultSpeed parameter if it is possible
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

     virtual HRESULT SetDefaultSpeedLock ( unsigned char iLocked ) = 0;


    /**
     * Returns the Default Time parameter
     * <br><b>Role</b>: Returns the Default Time parameter for a track
     * @param oDefaultTime
     *     <br>Will be set to the current value of the Default Time for a track
     * @return
     *     S_OK   : if the Default Time value was correctly obtained
     *     E_FAIL : if the Default Time value was not correctly obtained
     */

     virtual HRESULT GetDefaultTime ( double & oDefaultTime) = 0;

    /**
     * Sets the Default Time parameter.
     * <br><b>Role</b>: Returns the Default Time parameter for a track
     * @param iDefaultTime
     *     <br>Used to set the Default Track Time for a track
     * @return
     *     S_OK   : if the Default Track Time value was correctly obtained
     *     E_FAIL : if the Default Track Time value was not correctly obtained
     */

     virtual HRESULT SetDefaultTime ( double iDefaultTime) = 0;

    /**
     * Retrieves the state of the DefaultTimeInfo parameter.
     * @param oInfo
     *     Address of an object CATSettingInfo.
     * @return
     *     <b>Legal values</b>:
     *     <br><tt>S_OK :</tt>   on Success
     *     <br><tt>E_FAIL:</tt>  on failure
     */

     virtual HRESULT GetDefaultTimeInfo ( CATSettingInfo* oInfo ) = 0;

    /**
     * Locks or unlocks the DefaultTime parameter.
     * <br><b>Role</b>:Locks or unlocks the DefaultTime parameter if it is possible
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

     virtual HRESULT SetDefaultTimeLock ( unsigned char iLocked ) = 0;


    /**
     * Returns the Clash While Moving parameter.
     * <br><b>Role</b>: Returns the Clash Detection While Moving parameter
     * @param oClashWhileMoving
     *     If Clash Detection While Moving is to be used.
     *     <b>Legal values</b>:
     *     <br><tt>TRUE</tt>  Clash Detection While Moving is enabled
     *     <br><tt>FALSE</tt> Clash Detection While Moving is disabled
     *     used
     * @return
     *     S_OK   : if the Clash While Moving value was correctly obtained
     *     E_FAIL : if the Clash While Moving value was not correctly obtained
     */

     virtual HRESULT GetClashWhileMoving ( CATBoolean & oClashWhileMoving ) = 0;

    /**
     * Sets the Clash While Moving parameter.
     * <br><b>Role</b>: Sets the Clash Detection While Moving parameter
     * @param iAngleLimit
     *     If Clash Detection While Moving is to be used.
     *     <b>Legal values</b>:
     *     <br><tt>TRUE :</tt>   to enable Clash Detection While Moving 
     *     <br><tt>FALSE:</tt>   to disable Clash Detection While Moving 
     * @return
     *     S_OK   : if the Clash While Moving value was set correctly
     *     E_FAIL : if the Clash While Moving value was not set correctly
     */

     virtual HRESULT SetClashWhileMoving ( const CATBoolean iClashWhileMoving ) = 0;

    /**
     * Retrieves the state of the ClashWhileMovingInfo parameter.
     * @param oInfo
     *     Address of an object CATSettingInfo.
     * @return
     *     <b>Legal values</b>:
     *     <br><tt>S_OK :</tt>   on Success
     *     <br><tt>E_FAIL:</tt>  on failure
     */

     virtual HRESULT GetClashWhileMovingInfo ( CATSettingInfo* oInfo ) = 0;

    /**
     * Locks or unlocks the ClashWhileMoving parameter.
     * <br><b>Role</b>:Locks or unlocks the ClashWhileMoving parameter if it is possible
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

     virtual HRESULT SetClashWhileMovingLock ( unsigned char iLocked ) = 0;


  // No constructors or destructors on this pure virtual base class
  // --------------------------------------------------------------
};

//------------------------------------------------------------------
CATDeclareHandler( CATISiFiFittingSettingAtt, CATBaseUnknown) ;

#endif

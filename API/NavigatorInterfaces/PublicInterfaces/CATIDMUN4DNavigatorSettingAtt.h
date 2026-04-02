// COPYRIGHT Dassault Systemes 2003
//===================================================================
//
// CATIDMUN4DNavigatorSettingAtt.h
// Define the CATIDMUN4DNavigatorSettingAtt interface
//
//===================================================================
//
//  Nov 2003  Creation: YRX
//
//===================================================================
#ifndef CATIDMUN4DNavigatorSettingAtt_H
#define CATIDMUN4DNavigatorSettingAtt_H

/**
* @CAA2Level L1
* @CAA2Usage U3
*/

#include "CATNavigatorItf.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATNavigatorItf IID IID_CATIDMUN4DNavigatorSettingAtt;
#else
extern "C" const IID IID_CATIDMUN4DNavigatorSettingAtt ;
#endif

class CATSettingInfo;
class CATUnicodeString;

//------------------------------------------------------------------

/**
* Interface to handle the parameters of the DMU Navigator workbench.
* 
* <b>Role</b>: This interface is implemented by a component which
* represents the controller of DMU Navigator settings.
* <br>This interface defines:
* <ul>
* <li>A method to set each parameter</li>
* <li>A method to get the value of each parameter</li>
* <li>A method to lock/unlock each parameter</li>
* <li>A method to retrieve the informations concerning each parameter</li>
* </ul>
*/

class ExportedByCATNavigatorItf CATIDMUN4DNavigatorSettingAtt: public CATBaseUnknown
{
    CATDeclareInterface;
    
public:
    
    
    
    /**
    * Retrieves the DMUClashPreview activation state.
    * @param oMode
    *   <b>Legal values</b>:
    *  <br><tt>0:</tt>   turned off
    *  <br><tt>1:</tt>   turned on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetDMUClashPreview(unsigned char &oMode)=0;
    
    /**
    * Turns ON/OFF the DMUClashPreview activation.
    * <br><b>Role</b>: Activates or desactivates the clash preview display.
    * @param iMode
    *  <b>Legal values</b>:
    *  <br><tt>0:</tt>   to turn off
    *  <br><tt>1:</tt>   to turn on
    * @return
    *  <b>Legal values</b>:
    *  <br><tt>S_OK :</tt>   on Success
    *  <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUClashPreview( unsigned char iMode )=0;
    
    
    /** 
    * Retrieves the state of the parameter DMUClashPreview.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetDMUClashPreviewInfo( CATSettingInfo* oInfo)=0;
    
    /**
    * Locks or unlocks the DMUClashPreview parameter.
    * <br><b>Role</b>:Locks or unlocks the DMUClashPreview parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUClashPreviewLock(unsigned char iLock)=0;
    
    
    
    /**
    * Retrieves the DMUDistancePreview activation state.
    * @param oMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   turned off
    *   <br><tt>1:</tt>   turned on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetDMUDistancePreview(unsigned char &oMode)=0;
    
    /**
    * Turns ON/OFF the DMUDistancePreview activation.
    * <br><b>Role</b>: Activates or desactivates the distance preview display.
    * @param iMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   to turn off
    *   <br><tt>1:</tt>   to turn on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUDistancePreview( unsigned char iMode )=0;
    
    
    /** 
    * Retrieves the state of the parameter DMUDistancePreview.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetDMUDistancePreviewInfo( CATSettingInfo* oInfo)=0;
    
    /**
    * Locks or unlocks the DMUDistancePreview parameter.
    * <br><b>Role</b>:Locks or unlocks the DMUDistancePreview parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUDistancePreviewLock(unsigned char iLock)=0;
    
    
    
    /**
    * Retrieves the DMUGroupPreview activation state.
    * @param oMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   turned off
    *   <br><tt>1:</tt>   turned on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetDMUGroupPreview(unsigned char &oMode)=0;
    
    /**
    * Turns ON/OFF the DMUGroupPreview activation.
    * <br><b>Role</b>: Activates or desactivates the group preview display.
    * @param iMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   to turn off
    *   <br><tt>1:</tt>   to turn on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUGroupPreview( unsigned char iMode )=0;
    
    
    /**
    * Retrieves the state of the parameter DMUGroupPreview.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetDMUGroupPreviewInfo( CATSettingInfo* oInfo)=0;
    
    /**
    * Locks or unlocks the DMUGroupPreview parameter.
    * <br><b>Role</b>:Locks or unlocks the DMUGroupPreview parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUGroupPreviewLock(unsigned char iLock)=0;
    
    
    
    /**
    * Retrieves the DMUSectionPreview activation state.
    * @param oMode
    *   <b>Legal values</b>:
    *  <br><tt>0:</tt>   turned off
    *  <br><tt>1:</tt>   turned on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetDMUSectionPreview(unsigned char &oMode)=0;
    
    /**
    * Turns ON/OFF the DMUSectionPreview activation.
    * <br><b>Role</b>: Activates or desactivates the section preview display.
    * @param iMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   to turn off
    *   <br><tt>1:</tt>   to turn on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUSectionPreview( unsigned char iMode )=0;
    
    
    /** 
    * Retrieves the state of the parameter DMUSectionPreview.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetDMUSectionPreviewInfo( CATSettingInfo* oInfo)=0;
    
    /**
    * Locks or unlocks the DMUSectionPreview parameter.
    * <br><b>Role</b>:Locks or unlocks the DMUSectionPreview parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUSectionPreviewLock(unsigned char iLock)=0;
    
    
    /**
    * Retrieves the DMUShuttlePreview activation state.
    * @param oMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   turned off
    *   <br><tt>1:</tt>   turned on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetDMUShuttlePreview(unsigned char &oMode)=0;
    
    /**
    * Turns ON/OFF the DMUShuttlePreview activation.
    * <br><b>Role</b>: Activates or desactivates the shutlle preview display.
    * @param iMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   to turn off
    *   <br><tt>1:</tt>   to turn on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUShuttlePreview( unsigned char iMode )=0;
    
    
    /** 
    * Retrieves the state of the parameter DMUShuttlePreview.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetDMUShuttlePreviewInfo( CATSettingInfo* oInfo)=0;
    
    /**
    * Locks or unlocks the DMUShuttlePreview parameter.
    * <br><b>Role</b>:Locks or unlocks the DMUShuttlePreview parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUShuttlePreviewLock(unsigned char iLock)=0;
    
    
    /**
    * Retrieves the DMUThicknessPreview activation state.
    * @param oMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   turned off
    *   <br><tt>1:</tt>   turned on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetDMUThicknessPreview(unsigned char &oMode)=0;
    
    /**
    * Turns ON/OFF the DMUThicknessPreview	activation.
    * <br><b>Role</b>: Activates or desactivates the thickness preview display.
    * @param iMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   to turn off
    *   <br><tt>1:</tt>   to turn on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUThicknessPreview( unsigned char iMode )=0;
    
    
    /** 
    * Retrieves the state of the parameter DMUThicknessPreview.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetDMUThicknessPreviewInfo( CATSettingInfo* oInfo)=0;
    
    /**
    * Locks or unlocks the DMUThicknessPreview parameter.
    * <br><b>Role</b>:Locks or unlocks the DMUThicknessPreview parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUThicknessPreviewLock(unsigned char iLock)=0;
    
    
    /**
    * Retrieves the DMUOffsetPreview activation state.
    * @param oMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   turned off
    *   <br><tt>1:</tt>   turned on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetDMUOffsetPreview(unsigned char &oMode)=0;
    
    /**
    * Turns ON/OFF the DMUOffsetPreview activation.
    * <br><b>Role</b>: Activates or desactivates the offset preview display.
    * @param iMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   to turn off
    *   <br><tt>1:</tt>   to turn on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUOffsetPreview( unsigned char iMode )=0;
    
    
    /** 
    * Retrieves the state of the parameter DMUOffsetPreview.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetDMUOffsetPreviewInfo( CATSettingInfo* oInfo)=0;
    
    /**
    * Locks or unlocks the DMUOffsetPreview parameter.
    * <br><b>Role</b>:Locks or unlocks the DMUOffsetPreview parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUOffsetPreviewLock(unsigned char iLock)=0;
    
    
    /**
    * Retrieves the DMUSweptVolPreview activation state.
    * @param oMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   turned off
    *   <br><tt>1:</tt>   turned on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetDMUSweptVolPreview(unsigned char &oMode)=0;
    
    /**
    * Turns ON/OFF the DMUSweptVolPreview activation.
    * <br><b>Role</b>: Activates or desactivates the swept volume preview display.
    * @param iMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   to turn off
    *   <br><tt>1:</tt>   to turn on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUSweptVolPreview( unsigned char iMode )=0;
    
    
    /** 
    * Retrieves the state of the parameter DMUSweptVolPreview.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetDMUSweptVolPreviewInfo( CATSettingInfo* oInfo)=0;
    
    /**
    * Locks or unlocks the DMUSweptVolPreview parameter.
    * <br><b>Role</b>:Locks or unlocks the DMUSweptVolPreview parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUSweptVolPreviewLock(unsigned char iLock)=0;
    
    
    
    /**
    * Retrieves the DMUSilhouettePreview activation state.
    * @param oMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   turned off
    *   <br><tt>1:</tt>   turned on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetDMUSilhouettePreview(unsigned char &oMode)=0;
    
    /**
    * Turns ON/OFF the DMUSilhouettePreview activation.
    * <br><b>Role</b>: Activates or desactivates the silhouette preview display.
    * @param iMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   to turn off
    *   <br><tt>1:</tt>   to turn on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUSilhouettePreview( unsigned char iMode )=0;
    
    
    /** 
    * Retrieves the state of the parameter DMUSilhouettePreview.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetDMUSilhouettePreviewInfo( CATSettingInfo* oInfo)=0;
    
    /**
    * Locks or unlocks the DMUSilhouettePreview parameter.
    * <br><b>Role</b>:Locks or unlocks the DMUSilhouettePreview parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUSilhouettePreviewLock(unsigned char iLock)=0;
    
    
    
    
    /**
    * Retrieves the DMUWrappingPreview activation state.
    * @param oMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   turned off
    *   <br><tt>1:</tt>   turned on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetDMUWrappingPreview(unsigned char &oMode)=0;
    
    /**
    * Turns ON/OFF the DMUWrappingPreview activation.
    * <br><b>Role</b>: Activates or desactivates the wrapping preview display.
    * @param iMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   to turn off
    *   <br><tt>1:</tt>   to turn on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUWrappingPreview( unsigned char iMode )=0;
    
    
    /** 
    * Retrieves the state of the parameter DMUWrappingPreview.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetDMUWrappingPreviewInfo( CATSettingInfo* oInfo)=0;
    
    /**
    * Locks or unlocks the DMUWrappingPreview parameter.
    * <br><b>Role</b>:Locks or unlocks the DMUWrappingPreview parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUWrappingPreviewLock(unsigned char iLock)=0;
    
    
    
    /**
    * Retrieves the DMUFreeSpacePreview activation state.
    * @param oMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   turned off
    *   <br><tt>1:</tt>   turned on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetDMUFreeSpacePreview(unsigned char &oMode)=0;
    
    /**
    * Turns ON/OFF the DMUFreeSpacePreview activation.
    * <br><b>Role</b>: Activates or desactivates the free space preview display.
    * @param iMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   to turn off
    *   <br><tt>1:</tt>   to turn on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUFreeSpacePreview( unsigned char iMode )=0;
    
    
    /** 
    * Retrieves the state of the parameter DMUFreeSpacePreview.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetDMUFreeSpacePreviewInfo( CATSettingInfo* oInfo)=0;
    
    /**
    * Locks or unlocks the DMUFreeSpacePreview parameter.
    * <br><b>Role</b>:Locks or unlocks the DMUFreeSpacePreview parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUFreeSpacePreviewLock(unsigned char iLock)=0;
    
    
    
    /**
    * Retrieves the DMUSimplifPreview activation state.
    * @param oMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   turned off
    *   <br><tt>1:</tt>   turned on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetDMUSimplifPreview(unsigned char &oMode)=0;
    
    /**
    * Turns ON/OFF the DMUSimplifPreview activation.
    * <br><b>Role</b>: Activates or desactivates the mesh simplification preview display.
    * @param iMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   to turn off
    *   <br><tt>1:</tt>   to turn on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUSimplifPreview( unsigned char iMode )=0;
    
    
    /** 
    * Retrieves the state of the parameter DMUSimplifPreview.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetDMUSimplifPreviewInfo( CATSettingInfo* oInfo)=0;
    
    /**
    * Locks or unlocks the DMUSimplifPreview parameter.
    * <br><b>Role</b>:Locks or unlocks the DMUSimplifPreview parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUSimplifPreviewLock(unsigned char iLock)=0;
    
    
    
    /**
    * Retrieves the DMUVibrationVolPreview activation state.
    * @param oMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   turned off
    *   <br><tt>1:</tt>   turned on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetDMUVibrationVolPreview(unsigned char &oMode)=0;
    
    /**
    * Turns ON/OFF the DMUVibrationVolPreview activation.
    * <br><b>Role</b>: Activates or desactivates the vibration volume preview display.
    * @param iMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   to turn off
    *   <br><tt>1:</tt>   to turn on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUVibrationVolPreview( unsigned char iMode )=0;
    
    
    /** 
    * Retrieves the state of the parameter DMUVibrationVolPreview.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetDMUVibrationVolPreviewInfo( CATSettingInfo* oInfo)=0;
    
    /**
    * Locks or unlocks the DMUVibrationVolPreview parameter.
    * <br><b>Role</b>:Locks or unlocks the DMUVibrationVolPreview parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUVibrationVolPreviewLock(unsigned char iLock)=0;
    
    
    
    /**
    * Retrieves the DMUCut3DPreview activation state.
    * @param oMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   turned off
    *   <br><tt>1:</tt>   turned on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetDMUCut3DPreview(unsigned char &oMode)=0;
    
    /**
    * Turns ON/OFF the DMUCut3DPreview activation.
    * <br><b>Role</b>: Activates or desactivates the 3D cut preview display.
    * @param iMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   to turn off
    *   <br><tt>1:</tt>   to turn on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUCut3DPreview( unsigned char iMode )=0;
    
    
    /** 
    * Retrieves the state of the parameter DMUCut3DPreview.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetDMUCut3DPreviewInfo( CATSettingInfo* oInfo)=0;
    
    /**
    * Locks or unlocks the DMUCut3DPreview parameter.
    * <br><b>Role</b>:Locks or unlocks the DMUCut3DPreview parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUCut3DPreviewLock(unsigned char iLock)=0;
    
    
    
    /**
    * Retrieves the DMUMergerPreview activation state.
    * @param oMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   turned off
    *   <br><tt>1:</tt>   turned on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetDMUMergerPreview(unsigned char &oMode)=0;
    
    /**
    * Turns ON/OFF the DMUMergerPreview activation.
    * <br><b>Role</b>: Activates or desactivates the merger preview display.
    * @param iMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   to turn off
    *   <br><tt>1:</tt>   to turn on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUMergerPreview( unsigned char iMode )=0;
    
    
    /** 
    * Retrieves the state of the parameter DMUMergerPreview.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetDMUMergerPreviewInfo( CATSettingInfo* oInfo)=0;
    
    /**
    * Locks or unlocks the DMUMergerPreview parameter.
    * <br><b>Role</b>:Locks or unlocks the DMUMergerPreview parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUMergerPreviewLock(unsigned char iLock)=0;
    
    
    
    /**
    * Retrieves the NumUrlName activation state.
    * @param oMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   turned off
    *   <br><tt>1:</tt>   turned on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetNumUrlName(unsigned char &oMode)=0;
    
    /**
    * Turns ON/OFF the NumUrlName activation.
    * <br><b>Role</b>: Activates or desactivates the name display for hyperlink representation.
    * @param iMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   to turn off
    *   <br><tt>1:</tt>   to turn on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetNumUrlName( unsigned char iMode )=0;
    
    
    /** 
    * Retrieves the state of the parameter NumUrlName.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetNumUrlNameInfo( CATSettingInfo* oInfo)=0;
    
    /**
    * Locks or unlocks the NumUrlName parameter.
    * <br><b>Role</b>:Locks or unlocks the NumUrlName parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetNumUrlNameLock(unsigned char iLock)=0;
    
    
    
    /**
    * Retrieves the MarkerAutoUpdate activation state.
    * @param oMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   turned off
    *   <br><tt>1:</tt>   turned on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetMarkerAutoUpdate(unsigned char &oMode)=0;
    
    /**
    * Turns ON/OFF the MarkerAutoUpdate activation.
    * <br><b>Role</b>: Activates or desactivates the update on product structure modifications and scenes activation .
    * @param iMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   to turn off
    *   <br><tt>1:</tt>   to turn on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetMarkerAutoUpdate( unsigned char iMode )=0;
    
    
    /** 
    * Retrieves the state of the parameter MarkerAutoUpdate.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetMarkerAutoUpdateInfo( CATSettingInfo* oInfo)=0;
    
    /**
    * Locks or unlocks the MarkerAutoUpdate parameter.
    * <br><b>Role</b>:Locks or unlocks the MarkerAutoUpdate parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetMarkerAutoUpdateLock(unsigned char iLock)=0;    
    
    
    
    /**
	* @deprecated R17
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#GetMarkerDefaultsColor
    * Retrieves the MarkerDefaultsColor values.
    * @param oR
    *   the red value
    * @param oG
    *   the green value
    * @param oB
    *   the blue value
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetMarkerDefaultsColor(unsigned int &oR, unsigned int &oG, unsigned int &oB)=0;
    
    /**
	* @deprecated R17
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#SetMarkerDefaultsColor
    * Set the MarkerDefaultsColor values.
    * <br><b>Role</b>: Set the default color for a 2d annotation.
    * @param iR
    *   the red value
    * @param iG
    *   the green value
    * @param iB
    *   the blue value
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetMarkerDefaultsColor( unsigned int iR, unsigned int iG, unsigned int iB)=0;
    
    
    /** 
	* @deprecated R17
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#GetMarkerDefaultsColorInfo
    * Retrieves the state of the parameter MarkerDefaultsColor.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetMarkerDefaultsColorInfo( CATSettingInfo* oInfo)=0;
    
    /**
	* @deprecated R17
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#SetMarkerDefaultsColorLock
    * Locks or unlocks the MarkerDefaultsColor parameter.
    * <br><b>Role</b>:Locks or unlocks the MarkerAutoUpdate parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetMarkerDefaultsColorLock(unsigned char iLock)=0;
    
    
    /**
	* @deprecated R17
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#GetMarkerTextColor2D
    * Retrieves the MarkerTextColor values.
    * @param oR
    *   the red value
    * @param oG
    *   the green value
    * @param oB
    *   the blue value
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetMarkerTextColor(unsigned int &oR, unsigned int &oG, unsigned int &oB)=0;
    
    /**
	* @deprecated R17
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#SetMarkerTextColor2D
    * Set the MarkerTextColor values.
    * <br><b>Role</b>: Set the color for a marker text.
    * @param iR
    *   the red value
    * @param iG
    *   the green value
    * @param iB
    *   the blue value
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetMarkerTextColor( unsigned int iR, unsigned int iG, unsigned int iB)=0;
    
    
    /** 
	* @deprecated R17
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#GetMarkerTextColor2DInfo
    * Retrieves the state of the parameter MarkerTextColor.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetMarkerTextColorInfo( CATSettingInfo* oInfo)=0;
    
    /**
	* @deprecated R17
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#SetMarkerTextColor2DLock
    * Locks or unlocks the MarkerTextColor parameter.
    * <br><b>Role</b>:Locks or unlocks the MarkerAutoUpdate parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetMarkerTextColorLock(unsigned char iLock)=0;
    
    
    /**
    * Retrieves the SceneDefaultsColor values.
    * @param oR
    *   the red value
    * @param oG
    *   the green value
    * @param oB
    *   the blue value
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetSceneDefaultsColor(unsigned int &oR, unsigned int &oG, unsigned int &oB)=0;
    
    /**
    * Set the SceneDefaultsColor values.
    * <br><b>Role</b>: Set the scene background color.
    * @param iR
    *   the red value
    * @param iG
    *   the green value
    * @param iB
    *   the blue value
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetSceneDefaultsColor( unsigned int iR, unsigned int iG, unsigned int iB)=0;
    
    
    /** 
    * Retrieves the state of the parameter SceneDefaultsColor.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetSceneDefaultsColorInfo( CATSettingInfo* oInfo)=0;
    
    /**
    * Locks or unlocks the SceneDefaultsColor parameter.
    * <br><b>Role</b>:Locks or unlocks the SceneDefaultsColor parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetSceneDefaultsColorLock(unsigned char iLock)=0;
    
    
    
    /**
    * Retrieves the PublishAutoLaunchBrowser activation state.
    * @param oMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   turned off
    *   <br><tt>1:</tt>   turned on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetPublishAutoLaunchBrowser(unsigned char &oMode)=0;
    
    /**
    * Turns ON/OFF the PublishAutoLaunchBrowser activation.
    * <br><b>Role</b>: Activates or desactivates the automatic launching of publish results.
    * @param iMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   to turn off
    *   <br><tt>1:</tt>   to turn on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetPublishAutoLaunchBrowser( unsigned char iMode )=0;
    
    
    /** 
    * Retrieves the state of the parameter PublishAutoLaunchBrowser.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetPublishAutoLaunchBrowserInfo( CATSettingInfo* oInfo)=0;
    
    /**
    * Locks or unlocks the PublishAutoLaunchBrowser parameter.
    * <br><b>Role</b>:Locks or unlocks the PublishAutoLaunchBrowser parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetPublishAutoLaunchBrowserLock(unsigned char iLock)=0;
    
    
    
    /**
	* @deprecated R17
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#GetMarker2DAutoNaming
    * Retrieves the Marker2DAutoNaming activation state.
    * @param oMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   turned off
    *   <br><tt>1:</tt>   turned on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetMarker2DAutoNaming(unsigned char &oMode)=0;
    
    /**
	* @deprecated R17
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#SetMarker2DAutoNaming
    * Turns ON/OFF the Marker2DAutoNaming activation.
    * <br><b>Role</b>: Activates or desactivates 2D marker part name recognition.
    * @param iMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   to turn off
    *   <br><tt>1:</tt>   to turn on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetMarker2DAutoNaming( unsigned char iMode )=0;
    
    
    /** 
	* @deprecated R17
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#GetMarker2DAutoNamingInfo
    * Retrieves the state of the parameter Marker2DAutoNaming.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetMarker2DAutoNamingInfo( CATSettingInfo* oInfo)=0;
    
    /**
	* @deprecated R17
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#SetMarker2DAutoNamingLock
    * Locks or unlocks the Marker2DAutoNaming parameter.
    * <br><b>Role</b>:Locks or unlocks the Marker2DAutoNaming parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetMarker2DAutoNamingLock(unsigned char iLock)=0;
    
    
    
    /**
	* @deprecated R17
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#GetMarkerDefaultsWeight
    * Retrieves the MarkerDefaultsWeight value.
    * @param oValue
    *   the marker default weight value
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetMarkerDefaultsWeight(unsigned int &oValue)=0;
    
    /**
	* @deprecated R17
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#SetMarkerDefaultsWeight
    * Set the MarkerDefaultsWeight value.
    * <br><b>Role</b>: Set the default marker weight value.
    * @param iValue
    *   the marker default weight value
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetMarkerDefaultsWeight( unsigned int iValue )=0;
    
    
    /** 
	* @deprecated R17
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#GetMarkerDefaultsWeightInfo
    * Retrieves the state of the parameter MarkerDefaultsWeight.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetMarkerDefaultsWeightInfo( CATSettingInfo* oInfo)=0;
    
    /**
	* @deprecated R17
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#SetMarkerDefaultsWeightLock
    * Locks or unlocks the MarkerDefaultsWeight parameter.
    * <br><b>Role</b>:Locks or unlocks the MarkerDefaultsWeight parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetMarkerDefaultsWeightLock(unsigned char iLock)=0;
    
    
    
    /**
	* @deprecated R17
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#GetMarkerDefaultsDashed
    * Retrieves the MarkerDefaultsDashed value.
    * @param oValue
    *   the marker default dashed value
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetMarkerDefaultsDashed(unsigned int &oValue)=0;
    
    /**
	* @deprecated R17
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#SetMarkerDefaultsDashed
    * Set the MarkerDefaultsDashed value.
    * <br><b>Role</b>: Set the default marker dashed value.
    * @param iValue
    *   the marker default dashed value
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetMarkerDefaultsDashed( unsigned int iValue )=0;
    
    
    /** 
	* @deprecated R17
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#GetMarkerDefaultsDashedInfo
    * Retrieves the state of the parameter MarkerDefaultsDashed.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetMarkerDefaultsDashedInfo( CATSettingInfo* oInfo)=0;
    
    /**
	* @deprecated R17
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#SetMarkerDefaultsDashedLock
    * Locks or unlocks the MarkerDefaultsDashed parameter.
    * <br><b>Role</b>:Locks or unlocks the MarkerDefaultsDashed parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetMarkerDefaultsDashedLock(unsigned char iLock)=0;
    
    
    
    /**
	* @deprecated R17
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#GetMarkerTextDefaultsSize2D
    * Retrieves the MarkerDefaultsSize value.
    * @param oValue
    *   the marker default size value
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetMarkerDefaultsSize(float &oValue)=0;
    
    /**
	* @deprecated R17
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#SetMarkerTextDefaultsSize2D
    * Set the MarkerDefaultsSize value.
    * <br><b>Role</b>: Set the default marker size value.
    * @param iValue
    *   the marker default size value
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetMarkerDefaultsSize( float iValue )=0;
    
    
    /** 
	* @deprecated R17
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#GetMarkerTextDefaultsSize2DInfo
    * Retrieves the state of the parameter MarkerDefaultsSize.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetMarkerDefaultsSizeInfo( CATSettingInfo* oInfo)=0;
    
    /**
	* @deprecated R17
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#SetMarkerTextDefaultsSize2DLock
    * Locks or unlocks the MarkerDefaultsSize parameter.
    * <br><b>Role</b>:Locks or unlocks the MarkerDefaultsSize parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetMarkerDefaultsSizeLock(unsigned char iLock)=0;
    
    
    
    
    /**
	* @deprecated R17
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#GetMarkerTextDefaultsFont2D
    * Retrieves the MarkerDefaultsFont value.
    * @param oFont
    *   the marker default font
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetMarkerDefaultsFont(CATUnicodeString& oFont)=0;
    
    /**
	* @deprecated R17
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#SetMarkerTextDefaultsFont2D
    * Set the MarkerDefaultsFont value.
    * <br><b>Role</b>: Set the default marker font value.
    * @param iFont
    *   the marker default font value
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetMarkerDefaultsFont( CATUnicodeString iFont )=0;
    
    
    /** 
	* @deprecated R17
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#GetMarkerTextDefaultsFont2DInfo
    * Retrieves the state of the parameter MarkerDefaultsFont.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetMarkerDefaultsFontInfo( CATSettingInfo* oInfo)=0;
    
    /**
	* @deprecated R17
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#SetMarkerTextDefaultsFont2DLock
    * Locks or unlocks the MarkerDefaultsFont parameter.
    * <br><b>Role</b>:Locks or unlocks the MarkerDefaultsFont parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetMarkerDefaultsFontLock(unsigned char iLock)=0;
    
    
    
    
    /**
	* @deprecated R17
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#GetMarkerTextWeight2D
    * Retrieves the MarkerTextWeight value.
    * @param oValue
    *   the marker text weight value
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetMarkerTextWeight(unsigned int &oValue)=0;
    
    /**
	* @deprecated R17
    * Set the MarkerTextWeight value.
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#SetMarkerTextWeight2D
    * <br><b>Role</b>: Set the marker text weight value.
    * @param iValue
    *   the marker text weight value
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetMarkerTextWeight( unsigned int iValue )=0;
    
    
    /** 
	* @deprecated R17
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#GetMarkerTextWeight2DInfo
    * Retrieves the state of the parameter MarkerTextWeight.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetMarkerTextWeightInfo( CATSettingInfo* oInfo)=0;
    
    /**
	* @deprecated R17
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#SetMarkerTextWeight2DLock
    * Locks or unlocks the MarkerTextWeight parameter.
    * <br><b>Role</b>:Locks or unlocks the MarkerTextWeight parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetMarkerTextWeightLock(unsigned char iLock)=0;
    
    
    
    
    /**
	* @deprecated R17
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#GetMarkerTextDashed2D
    * Retrieves the MarkerTextDashed value.
    * @param oValue
    *   the marker text dashed value
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetMarkerTextDashed(unsigned int &oValue)=0;
    
    /**
	* @deprecated R17
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#SetMarkerTextDashed2D
    * Set the MarkerTextDashed value.
    * <br><b>Role</b>: Set the  marker text dashed value.
    * @param iValue
    *   the marker text dashed value
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetMarkerTextDashed( unsigned int iValue )=0;
    
    
    /** 
	* @deprecated R17
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#GetMarkerTextDashed2DInfo
    * Retrieves the state of the parameter MarkerTextDashed.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetMarkerTextDashedInfo( CATSettingInfo* oInfo)=0;
    
    /**
	* @deprecated R17
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#SetMarkerTextDashed2DLock
    * Locks or unlocks the MarkerTextDashed parameter.
    * <br><b>Role</b>:Locks or unlocks the MarkerTextDashed parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetMarkerTextDashedLock(unsigned char iLock)=0;
    
    
    
    /**
    * Retrieves the ForceVoxel activation state.
    * @param oMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   turned off
    *   <br><tt>1:</tt>   turned on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetForceVoxel(unsigned char &oMode)=0;
    
    /**
    * Turns ON/OFF the ForceVoxel activation.
    * <br><b>Role</b>: Activates or desactivates the released accuracy in interactive mode.
    * @param iMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   to turn off
    *   <br><tt>1:</tt>   to turn on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetForceVoxel( unsigned char iMode )=0;
    
    
    /** 
    * Retrieves the state of the parameter ForceVoxel.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetForceVoxelInfo	( CATSettingInfo* oInfo)=0;
    
    /**
    * Locks or unlocks the ForceVoxel parameter.
    * <br><b>Role</b>:Locks or unlocks the ForceVoxel parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetForceVoxelLock(unsigned char iLock)=0;
    
    
    
    
    /**
    * Retrieves the ForceClearanceVoxel activation state.
    * @param oMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   turned off
    *   <br><tt>1:</tt>   turned on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetForceClearanceVoxel(unsigned char &oMode)=0;
    
    /**
    * Turns ON/OFF the ForceClearanceVoxel activation.
    * <br><b>Role</b>: Activates or desactivates the clearance value in interactive mode.
    * @param iMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   to turn off
    *   <br><tt>1:</tt>   to turn on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetForceClearanceVoxel( unsigned char iMode )=0;
    
    
    /** 
    * Retrieves the state of the parameter ForceClearanceVoxel.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetForceClearanceVoxelInfo( CATSettingInfo* oInfo)=0;
    
    /**
    * Locks or unlocks the ForceClearanceVoxel parameter.
    * <br><b>Role</b>:Locks or unlocks the ForceClearanceVoxel parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetForceClearanceVoxelLock(unsigned char iLock)=0;
    
    
    
    
    /**
    * Retrieves the ClearanceVoxel value.
    * @param oValue
    *   the clearance value
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetClearanceVoxel(float &oValue)=0;
    
    /**
    * Set the ClearanceVoxel value.
    * <br><b>Role</b>: Set clearence value.
    * @param iValue
    *   the clearance value
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetClearanceVoxel( float iValue )=0;
    
    
    /** 
    * Retrieves the state of the parameter ClearanceVoxel.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetClearanceVoxelInfo( CATSettingInfo* oInfo)=0;
    
    /**
    * Locks or unlocks the ClearanceVoxel parameter.
    * <br><b>Role</b>:Locks or unlocks the ClearanceVoxel parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetClearanceVoxelLock(unsigned char iLock)=0;
    
    
    
    
    /**
    * Retrieves the DMUReviewName name.
    * @param oName
    *   the DMU Review name
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetDMUReviewName(CATUnicodeString& oName)=0;
    
    /**
    * Set the DMUReviewName value.
    * <br><b>Role</b>: Set the DMU Review default name.
    * @param iName
    *   the DMU Review default name
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUReviewName( CATUnicodeString iName )=0;
    
    
    /** 
    * Retrieves the state of the parameter DMUReviewName.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetDMUReviewNameInfo( CATSettingInfo* oInfo)=0;
    
    /**
    * Locks or unlocks the DMUReviewName parameter.
    * <br><b>Role</b>:Locks or unlocks the DMUReviewName parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUReviewNameLock(unsigned char iLock)=0;
    
    
    
    /**
    * Retrieves the InsertMode state.
    * @param oMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   turned off
    *   <br><tt>1:</tt>   turned on with automatic import of applicative data
    *   <br><tt>2:</tt>   turned on with user prompt
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetInsertMode(int &oMode)=0;
    
    /**
    * Turns ON/OFF the InsertMode activation.
    * <br><b>Role</b>: Activates or desactivates the import applicative data option.
    * @param iMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   to turn off
    *   <br><tt>1:</tt>   to turn on with automatic import of applicative data
    *   <br><tt>2:</tt>   to turn on with user prompt
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetInsertMode(int iMode )=0;
    
    
    /** 
    * Retrieves the state of the parameter InsertMode.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetInsertModeInfo( CATSettingInfo* oInfo)=0;
    
    /**
    * Locks or unlocks the InsertMode parameter.
    * <br><b>Role</b>:Locks or unlocks the InsertMode parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetInsertModeLock(unsigned char iLock)=0;
    
    
    
    /**
    * Retrieves the InsertLevel state.
    * @param oLevel
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   insert is done in current review
    *   <br><tt>1:</tt>   insert is done at highest level
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetInsertLevel(int &oLevel)=0;
    
    /**
    * Turns ON/OFF the InsertLevel activation.
    * <br><b>Role</b>: tells where the importa applicative data is done.
    * @param iLevel
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   insert is done in current review
    *   <br><tt>1:</tt>   insert is done at highest level
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetInsertLevel(int iLevel)=0;
    
    
    /** 
    * Retrieves the state of the parameter InsertLevel.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetInsertLevelInfo( CATSettingInfo* oInfo)=0;
    
    /**
    * Locks or unlocks the InsertLevel parameter.
    * <br><b>Role</b>:Locks or unlocks the InsertMode parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetInsertLevelLock(unsigned char iLock)=0;
    
    
    /**
	* @deprecated R17
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#GetMarker3DAutoNaming
    * Retrieves the Marker3DAutoNaming activation state.
    * @param oMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   turned off
    *   <br><tt>1:</tt>   turned on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetMarker3DAutoNaming(unsigned char &oMode)=0;
    
    /**
	* @deprecated R17
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#SetMarker3DAutoNaming
    * Turns ON/OFF the Marker3DAutoNaming activation.
    * <br><b>Role</b>: Activates or desactivates the 3D marker with graphic message mode.
    * @param iMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   to turn off
    *   <br><tt>1:</tt>   to turn on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetMarker3DAutoNaming( unsigned char iMode )=0;
    
    
    /** 
	* @deprecated R17
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#GetMarker3DAutoNamingInfo
    * Retrieves the state of the parameter Marker3DAutoNaming.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetMarker3DAutoNamingInfo( CATSettingInfo* oInfo)=0;
    
    /**
	* @deprecated R17
	* This method will be replaced by @href CATIDMUMarkerSettingAtt#SetMarker3DAutoNamingLock
    * Locks or unlocks the Marker3DAutoNaming parameter.
    * <br><b>Role</b>:Locks or unlocks the Marker3DAutoNaming parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetMarker3DAutoNamingLock(unsigned char iLock)=0;
    
    
    
    /**
    * Retrieves the DMUGroupPreviewHiddenObjectsDisplayMode state.
    * @param oMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   same display as in main viewer
    *   <br><tt>1:</tt>   with customized graphic properties
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    virtual HRESULT GetDMUGroupPreviewHiddenObjectsDisplayMode(unsigned int &oMode)=0;
    
    /**
    * Sets the DMUGroupPreviewHiddenObjectsDisplayMode state.
    * <br><b>Role</b>: Modifies the display of hidden objects in DMU Group Preview.
    * @param iMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   same display as in main viewer
    *   <br><tt>1:</tt>   with customized graphic properties
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUGroupPreviewHiddenObjectsDisplayMode(unsigned int iMode )=0;
    
    /** 
    * Retrieves the state of the parameter DMUGroupPreviewHiddenObjectsDisplayMode.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetDMUGroupPreviewHiddenObjectsDisplayModeInfo( CATSettingInfo* oInfo)=0;
    
    /**
    * Locks or unlocks the DMUGroupPreviewHiddenObjectsDisplayMode parameter.
    * <br><b>Role</b>:Locks or unlocks the DMUGroupPreviewHiddenObjectsDisplayMode parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUGroupPreviewHiddenObjectsDisplayModeLock(unsigned char iLock)=0;
    
    
    
    /**
    * Retrieves the DMUGroupPreviewHiddenObjectsColor values.
    * @param oR
    *   the red value
    * @param oG
    *   the green value
    * @param oB
    *   the blue value
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetDMUGroupPreviewHiddenObjectsColor(unsigned int &oR, unsigned int &oG, unsigned int &oB)=0;
    
    /**
    * Set the DMUGroupPreviewHiddenObjectsColor values.
    * <br><b>Role</b>: Set the color of hidden objects in DMU Group Preview.
    * @param iR
    *   the red value
    * @param iG
    *   the green value
    * @param iB
    *   the blue value
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUGroupPreviewHiddenObjectsColor( unsigned int iR, unsigned int iG, unsigned int iB)=0;
    
    
    /** 
    * Retrieves the state of the parameter DMUGroupPreviewHiddenObjectsColor.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetDMUGroupPreviewHiddenObjectsColorInfo( CATSettingInfo* oInfo)=0;
    
    /**
    * Locks or unlocks the DMUGroupPreviewHiddenObjectsColor parameter.
    * <br><b>Role</b>:Locks or unlocks the DMUGroupPreviewHiddenObjectsColor parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUGroupPreviewHiddenObjectsColorLock(unsigned char iLock)=0;
    
    
    
    /**
    * Retrieves the DMUGroupPreviewHiddenObjectsOpacity value.
    * @param oOpacity
    *   the opacity value
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetDMUGroupPreviewHiddenObjectsOpacity(unsigned int &oOpacity)=0;
    
    /**
    * Set the DMUGroupPreviewHiddenObjectsoOpacity values.
    * <br><b>Role</b>: Set the opacity of hidden objects in DMU Group Preview.
    * @param iOpacity
    *   the opacity value
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUGroupPreviewHiddenObjectsOpacity( unsigned int iOpacity)=0;
    
    
    /** 
    * Retrieves the state of the parameter DMUGroupPreviewHiddenObjectsOpacity.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetDMUGroupPreviewHiddenObjectsOpacityInfo( CATSettingInfo* oInfo)=0;
    
    /**
    * Locks or unlocks the DMUGroupPreviewHiddenObjectsOpacity parameter.
    * <br><b>Role</b>:Locks or unlocks the DMUGroupPreviewHiddenObjectsOpacity parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUGroupPreviewHiddenObjectsOpacityLock(unsigned char iLock)=0;
    
    
    
    /**
    * Retrieves the DMUGroupPreviewHiddenObjectsLowInt activation state.
    * @param oMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   turned off
    *   <br><tt>1:</tt>   turned on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    virtual HRESULT GetDMUGroupPreviewHiddenObjectsLowInt(unsigned char &oMode)=0;
    
    /**
    * Turns ON/OFF the DMUGroupPreviewHiddenObjectsLowInt activation.
    * <br><b>Role</b>: Activates or desactivates the Low Intensity display mode for the hidden objects in DMU Group Preview.
    * @param iMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   turned off
    *   <br><tt>1:</tt>   turned on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUGroupPreviewHiddenObjectsLowInt( unsigned char iMode )=0;
    
    /** 
    * Retrieves the state of the parameter DMUGroupPreviewHiddenObjectsLowInt.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetDMUGroupPreviewHiddenObjectsLowIntInfo( CATSettingInfo* oInfo)=0;
    
    /**
    * Locks or unlocks the DMUGroupPreviewHiddenObjectsLowInt parameter.
    * <br><b>Role</b>:Locks or unlocks the DMUGroupPreviewHiddenObjectsLowInt parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUGroupPreviewHiddenObjectsLowIntLock(unsigned char iLock)=0;
    
    
    
    /**
    * Retrieves the DMUGroupPreviewHiddenObjectsPick activation state.
    * @param oMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   turned off
    *   <br><tt>1:</tt>   turned on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    virtual HRESULT GetDMUGroupPreviewHiddenObjectsPick(unsigned char &oMode)=0;
    
    /**
    * Turns ON/OFF the DMUGroupPreviewHiddenObjectsPick activation.
    * <br><b>Role</b>: Activates or desactivates the pick mode for hidden objects in DMU Group Preview.
    * @param iMode
    *   <b>Legal values</b>:
    *   <br><tt>0:</tt>   turned off
    *   <br><tt>1:</tt>   turned on
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUGroupPreviewHiddenObjectsPick( unsigned char iMode )=0;
    
    /** 
    * Retrieves the state of the parameter DMUGroupPreviewHiddenObjectsPick.
    * @param oInfo
    *   Address of an object CATSettingInfo.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT GetDMUGroupPreviewHiddenObjectsPickInfo( CATSettingInfo* oInfo)=0;
    
    /**
    * Locks or unlocks the DMUGroupPreviewHiddenObjectsPick parameter.
    * <br><b>Role</b>:Locks or unlocks the DMUGroupPreviewHiddenObjectsPick parameter if it is possible
    * in the current administrative context. In user mode this method will always
    * return E_FAIL.
    * @param iLocked
    *   the locking operation to be performed
    *   <b>Legal values</b>:
    *   <br><tt>1:</tt>   to lock the parameter.
    *   <br><tt>0:</tt>   to unlock the parameter.
    * @return
    *   <b>Legal values</b>:
    *   <br><tt>S_OK :</tt>   on Success
    *   <br><tt>E_FAIL:</tt>  on failure
    */
    
    virtual HRESULT SetDMUGroupPreviewHiddenObjectsPickLock(unsigned char iLock)=0;    
};

//------------------------------------------------------------------

#endif

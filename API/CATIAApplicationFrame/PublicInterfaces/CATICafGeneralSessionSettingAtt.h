#ifndef CATICafGeneralSessionSettingAtt_H
#define CATICafGeneralSessionSettingAtt_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// COPYRIGHT Dassault Systemes 2004

#include "CD0NTOG.h"
#include "CATBaseUnknown.h"
#include "CATBoolean.h"
#include "CATGenConferencing.h"
#include "CATGenDataSave.h"
#include "CATGenUIStyle.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCD0NTOG IID IID_CATICafGeneralSessionSettingAtt;
#else
extern "C" const IID IID_CATICafGeneralSessionSettingAtt ;
#endif

class CATSettingInfo;


/**
 * Interface to the General setting controller.
 * <b>Role</b>: The General setting controller is dedicated to manage some 
 * of the setting parameters displayed in the General property page.
 */
class ExportedByCD0NTOG CATICafGeneralSessionSettingAtt: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

    //----------------------------------------
    //  User Interface Style setting attribute
    //----------------------------------------

    /**
     * Retrieves the User Interface Style setting attribute value.
     * <br><b>Role</b>: The User Interface Style setting attribute manages the look of the user interface
     * @param ioUIStyle [inout]
     *   The User Interface Style setting attribute value
     * @return
     *   S_OK if the User Interface Style setting attribute value
     *   is successfully retrieved, and E_FAIL otherwise   
     */
     virtual HRESULT GetUIStyle(CATGenUIStyle& ioUIStyle) = 0;

    /**
     * Sets the User Interface Style setting attribute value.
     * @param iUIStyle [in]
     *   The User Interface Style setting attribute value.
     *   <br><b>Legal values</b>:
     *   <br><tt>UIStyleP1</tt>: look is P1
     *   <br><tt>UIStyleP2</tt>: look is P2
     *   <br><tt>UIStyleP3</tt>: look is P3
     * @return
     *   S_OK if the User Interface Style setting attribute value
     *   is successfully set, and E_FAIL otherwise   
     */
     virtual HRESULT SetUIStyle(const CATGenUIStyle& iUIStyle) = 0;

    /**
     * Retrieves the User Interface Style setting attribute information object.
     * @param ioInfo [inout]
     *   The User Interface Style setting attribute information object
     * @return 
     *   S_OK if the User Interface Style setting attribute information
     *   is successfully retrieved, and E_FAIL otherwise   
     */
     virtual HRESULT GetUIStyleInfo(CATSettingInfo * ioInfo) = 0;

    /**
     * Locks or unlocks the User Interface Style setting attribute.
     * <br><b>Role</b>: Locks or unlocks the User Interface Style setting attribute if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked [in]
     *   A flag to indicate whether the User Interface Style setting attribute
     *   should be locked.
     *   <br><b>Legal values</b>:
     *     <br><tt>TRUE</tt> to lock
     *     <br><tt>FALSE</tt> to unlock
     * @return
     *   S_OK if the User Interface Style setting attribute
     *   is successfully locked or unlocked, and E_FAIL otherwise   
     */
     virtual HRESULT SetUIStyleLock(unsigned char iLocked) = 0;



    //----------------------------
    // Auto Save setting attribute
    //----------------------------

    /**
     * Retrieves the Auto Save setting attribute value.
     * <br><b>Role</b>: The Auto Save setting attribute manages the automatic backup of the documents
     * @param ioAutoSave [inout]
     *   The Auto Save setting attribute value
     * @return
     *   S_OK if the Auto Save setting attribute value is successfully retrieved, and E_FAIL otherwise   
     */
     virtual HRESULT GetAutoSave(CATGenDataSave& ioAutoSave) = 0;

    /**
     * Sets the Auto Save setting attribute value.
     * @param iAutoSave [in]
     *   The Auto Save setting attribute value.
     *   <br><b>Legal values</b>:
     *   <br><tt>NoAutoBackup</tt>: No automatic backup
     *   <br><tt>AutoBackupEvery</tt>: Automatic backup every...
     *   <br><tt>IncrBackup</tt>: Incremental backup
     * @return
     *   S_OK if the Auto Save setting attribute value
     *   is successfully set, and E_FAIL otherwise   
     */
     virtual HRESULT SetAutoSave(const CATGenDataSave& iAutoSave) = 0;

    /**
     * Retrieves the Auto Save setting attribute information object.
     * @param ioInfo [inout]
     *   The Auto Save setting attribute information object
     * @return 
     *   S_OK if the Auto Save setting attribute information
     *   is successfully retrieved, and E_FAIL otherwise   
     */
     virtual HRESULT GetAutoSaveInfo(CATSettingInfo * ioInfo) = 0;

    /**
     * Locks or unlocks the Auto Save parameter.
     * <br><b>Role</b>: Locks or unlocks the Auto Save setting attribute if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked [in]
     *   A flag to indicate whether the Auto Save setting attribute
     *   should be locked.
     *   <br><b>Legal values</b>:
     *     <br><tt>TRUE</tt> to lock
     *     <br><tt>FALSE</tt> to unlock
     * @return
     *   S_OK if the Auto Save setting attribute is successfully locked or unlocked, and E_FAIL otherwise   
     */
     virtual HRESULT SetAutoSaveLock(unsigned char iLocked) = 0;

  

    //---------------------------------
    // Save Frequency setting attribute
    //---------------------------------

    /**
     * Retrieves the Save Frequency setting attribute value.
     * <br><b>Role</b>: The Save Frequency setting attribute manages the frequency of the documents backup
     * @param ioTimeRoll [inout]
     *   The Save Frequency setting attribute value
     * @return
     *   S_OK if the Save Frequency setting attribute value is successfully retrieved, and E_FAIL otherwise   
     */
     virtual HRESULT GetTimeRoll(int& ioTimeRoll) = 0;

    /**
     * Sets the Save Frequency setting attribute value.
     * @param iTimeRoll [in]
     *   The Save Frequency setting attribute value.
     *   <br><b>Legal values</b>:
     *   <br><tt>NoAutoBackup</tt>: No automatic backup
     *   <br><tt>AutoBackupEvery</tt>: Automatic backup every...
     *   <br><tt>IncrBackup</tt>: Incremental backup
     * @return
     *   S_OK if the Save Frequency setting attribute value
     *   is successfully set, and E_FAIL otherwise   
     */
     virtual HRESULT SetTimeRoll(const int& iTimeRoll) = 0;
  


    //---------------------------------------
    // Referenced Documents setting attribute
    //---------------------------------------

    /**
     * Retrieves the Referenced Documents setting attribute value.
     * <br><b>Role</b>: The Referenced Documents setting attribute manages the loading of the documents pointed by another document
     * @param ioRefDoc [inout]
     *   The Referenced Documents setting attribute value
     * @return
     *   S_OK if the Referenced Documents setting attribute value is successfully retrieved, and E_FAIL otherwise   
     */
     virtual HRESULT GetRefDoc(CATBoolean& ioRefDoc) = 0;

    /**
     * Sets the Referenced Documents setting attribute value.
     * @param iRefDoc [in]
     *   The Referenced Documents setting attribute value.
     *   <br><b>Legal values</b>: 
     *     <br><tt>TRUE</tt> to enable the loading of referenced documents
     *     <br><tt>FALSE</tt> to disable the loadinf of referenced documents
     * @return
     *   S_OK if the Referenced Documents setting attribute value
     *   is successfully set, and E_FAIL otherwise   
     */
     virtual HRESULT SetRefDoc(const CATBoolean& iRefDoc) = 0;

    /**
     * Retrieves the Referenced Documents setting attribute information object.
     * @param ioInfo [inout]
     *   The Referenced Documents setting attribute information object
     * @return 
     *   S_OK if the Referenced Documents setting attribute information
     *   is successfully retrieved, and E_FAIL otherwise   
     */
     virtual HRESULT GetRefDocInfo(CATSettingInfo * ioInfo) = 0;

    /**
     * Locks or unlocks the Referenced Documents parameter.
     * <br><b>Role</b>: Locks or unlocks the Referenced Documents setting attribute if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked [in]
     *   A flag to indicate whether the Referenced Documents setting attribute
     *   should be locked.
     *   <br><b>Legal values</b>:
     *     <br><tt>TRUE</tt> to lock
     *     <br><tt>FALSE</tt> to unlock
     * @return
     *   S_OK if the Referenced Documents setting attribute is successfully locked or unlocked, and E_FAIL otherwise   
     */
     virtual HRESULT SetRefDocLock(unsigned char iLocked) = 0;


    //-------------------------------
    // Conferencing setting attribute
    //-------------------------------
    /**
     * Retrieves the Conference driver setting attribute value.
     * <br><b>Role</b>: The Conference driver setting attribute manages the choice of the means of communication between processes
     * This property is <font color="red">not available on UNIX</font>
     * @param ioConferencing [inout]
     *   The Conference driver setting attribute value
     * @return
     *   S_OK if the Conference driver setting attribute value is successfully retrieved, and E_FAIL otherwise   
     */
     virtual HRESULT GetConferencing(CATGenConferencing& ioConferencing) = 0;

    /**
     * Sets the Conference driver setting attribute value.
     * @param iConferencing [in]
     *   The Conference driver setting attribute value.
     *   <br><b>Legal values</b>:
     *   <br><tt>NetMeeting</tt>: Microsoft® Windows® NetMeeting®
     *   <br><tt>Backbone</tt>: Backbone
     * @return
     *   S_OK if the Conference driver setting attribute value
     *   is successfully set, and E_FAIL otherwise   
     */
     virtual HRESULT SetConferencing(const CATGenConferencing& iConferencing) = 0;

    /**
     * Retrieves the Conference driver setting attribute information object.
     * @param ioInfo [inout]
     *   The Conferencing setting attribute information object
     * @return 
     *   S_OK if the Conference driver setting attribute information
     *   is successfully retrieved, and E_FAIL otherwise   
     */
     virtual HRESULT GetConferencingInfo(CATSettingInfo * ioInfo) = 0;

    /**
     * Locks or unlocks the Conference driver parameter.
     * <br><b>Role</b>: Locks or unlocks the Conference driver setting attribute if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked [in]
     *   A flag to indicate whether the Conference driver setting attribute
     *   should be locked.
     *   <br><b>Legal values</b>:
     *     <br><tt>TRUE</tt> to lock
     *     <br><tt>FALSE</tt> to unlock
     * @return
     *   S_OK if the Conference driver setting attribute is successfully locked or unlocked, and E_FAIL otherwise   
     */
     virtual HRESULT SetConferencingLock(unsigned char iLocked) = 0;


    //------------------------------
    // Drag & Drop setting attribute
    //------------------------------

    /**
     * Retrieves the Drag & Drop setting attribute value.
     * <br><b>Role</b>: The Drag & Drop setting attribute manages the possibility of dragging and dropping in the viewers (for copying, pasting or cutting purpose only)
     * @param ioDragDrop [inout]
     *   The Drag & Drop setting attribute value
     * @return
     *   S_OK if the Drag & Drop setting attribute value is successfully retrieved, and E_FAIL otherwise   
     */
     virtual HRESULT GetDragDrop(CATBoolean& ioDragDrop) = 0;

    /**
     * Sets the Drag & Drop setting attribute value.
     * @param iDragDrop [in]
     *   The Drag & Drop setting attribute value.
     *   <br><b>Legal values</b>: 
     *     <br><tt>TRUE</tt> to enable the Drag & Drop
     *     <br><tt>FALSE</tt> to disable the Drag & Drop
     * @return
     *   S_OK if the Drag & Drop setting attribute value
     *   is successfully set, and E_FAIL otherwise   
     */
     virtual HRESULT SetDragDrop(const CATBoolean& iDragDrop) = 0;

    /**
     * Retrieves the Drag & Drop setting attribute information object.
     * @param ioInfo [inout]
     *   The Drag & Drop setting attribute information object
     * @return 
     *   S_OK if the Drag & Drop setting attribute information
     *   is successfully retrieved, and E_FAIL otherwise   
     */
     virtual HRESULT GetDragDropInfo(CATSettingInfo * ioInfo) = 0;

    /**
     * Locks or unlocks the Drag & Drop parameter.
     * <br><b>Role</b>: Locks or unlocks the Drag & Drop setting attribute if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked [in]
     *   A flag to indicate whether the Drag & Drop setting attribute
     *   should be locked.
     *   <br><b>Legal values</b>:
     *     <br><tt>TRUE</tt> to lock
     *     <br><tt>FALSE</tt> to unlock
     * @return
     *   S_OK if the Drag & Drop setting attribute is successfully locked or unlocked, and E_FAIL otherwise   
     */
     virtual HRESULT SetDragDropLock(unsigned char iLocked) = 0;
};

#endif

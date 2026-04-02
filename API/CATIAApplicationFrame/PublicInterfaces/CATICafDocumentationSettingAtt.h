#ifndef CATICafDocumentationSettingAtt_H
#define CATICafDocumentationSettingAtt_H

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */


// COPYRIGHT Dassault Systemes 2004

#include "CATCafDocumentation.h"
#include "CATBaseUnknown.h"
#include "CATDocContextualPriority.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATCafDocumentation IID IID_CATICafDocumentationSettingAtt;
#else
extern "C" const IID IID_CATICafDocumentationSettingAtt ;
#endif

class CATSettingInfo;
class CATUnicodeString;

/**
 * Interface to the Documentation setting controller.
 * <b>Role</b>: The Documentation setting controller is dedicated to manage 
 * the setting parameters displayed in the Help property page.
 */
class ExportedByCATCafDocumentation CATICafDocumentationSettingAtt: public CATBaseUnknown
{
  CATDeclareInterface;

public:

    //----------------------------------------------------
    //  Technical Documentation Location setting attribute
    //----------------------------------------------------

    /**
     * Retrieves the Technical Documentation Location setting attribute value.
     * <br><b>Role</b>: The Technical Documentation Location setting attribute manages the location or path where the technical documentation is installed
     * @param ioPath [inout]
     *   The Technical Documentation Location setting attribute value
     * @return
     *   S_OK if the Technical Documentation Location setting attribute value
     *   is successfully retrieved, and E_FAIL otherwise   
     */
     virtual HRESULT GetTechnicalDocumentationPath(CATUnicodeString& ioPath) = 0;

    /**
     * Sets the Technical Documentation Location setting attribute value.
     * @param iPath [in]
     *   The Technical Documentation Location setting attribute value.
     *   <br><b>Legal values</b>: string containing the path where the technical documentation is installed
     * @return
     *   S_OK if the Technical Documentation Location setting attribute value
     *   is successfully set, and E_FAIL otherwise   
     */
     virtual HRESULT SetTechnicalDocumentationPath(const CATUnicodeString& iPath) = 0;

    /**
     * Retrieves the Technical Documentation Location setting attribute information object.
     * @param ioInfo [inout]
     *   The Technical Documentation Location setting attribute information object
     * @return 
     *   S_OK if the Technical Documentation Location setting attribute
     *   information is successfully retrieved, and E_FAIL otherwise   
     */
     virtual HRESULT GetTechnicalDocumentationPathInfo(CATSettingInfo * ioInfo) = 0;

    /**
     * Locks or unlocks the Technical Documentation Location setting attribute.
     * <br><b>Role</b>: Locks or unlocks the Technical Documentation Location setting attribute if the operation is allowed in the current administrated environment. 
     * In user mode this method will always return E_FAIL.
     * @param iLocked [in]
     *   A flag to indicate whether the Technical Documentation Location setting attribute
     *   should be locked.
     *   <br><b>Legal values</b>:
     *     <br><tt>TRUE</tt> to lock
     *     <br><tt>FALSE</tt> to unlock
     * @return
     *   S_OK if the Technical Documentation Location setting attribute
     *   is successfully locked or unlocked, and E_FAIL otherwise   
     */
     virtual HRESULT SetTechnicalDocumentationPathLock(unsigned char iLocked) = 0;


  
    //----------------------------------------------------
    //  Technical Documentation Language setting attribute
    //----------------------------------------------------

    /**
     * Retrieves the Technical Documentation Language setting attribute value.
     * <br><b>Role</b>: The Technical Documentation Language setting attribute manages the language of the technical documentation
     * @param ioLang [inout]
     *   The Technical Documentation Language setting attribute value
     * @return
     *   S_OK if the Technical Documentation Language setting attribute value
     *   is successfully retrieved, and E_FAIL otherwise   
     */
     virtual HRESULT GetDocLanguage(int& ioLang) = 0;

    /**
     * Sets the Technical Documentation Language setting attribute value.
     * @param iLang [in]
     *   The Technical Documentation Language setting attribute value.
     *   <br><b>Legal values</b>: language identifier
     * @return
     *   S_OK if the Technical Documentation Language setting attribute value
     *   is successfully set, and E_FAIL otherwise   
     */
     virtual HRESULT SetDocLanguage(const int& iLang) = 0;

    /**
     * Retrieves the Technical Documentation Language setting attribute information object.
     * @param ioInfo [inout]
     *   The Technical Documentation Language setting attribute information object
     * @return 
     *   S_OK if the Technical Documentation Language setting attribute
     *   information is successfully retrieved, and E_FAIL otherwise   
     */
     virtual HRESULT GetDocLanguageInfo(CATSettingInfo * ioInfo) = 0;

    /**
     * Locks or unlocks the Technical Documentation Language setting attribute.
     * <br><b>Role</b>: Locks or unlocks the Technical Documentation Language setting attribute if the operation is allowed in the current administrated environment. 
     * In user mode this method will always return E_FAIL.
     * @param iLocked [in]
     *   A flag to indicate whether the Technical Documentation Language setting attribute
     *   should be locked.
     *   <br><b>Legal values</b>:
     *     <br><tt>TRUE</tt> to lock
     *     <br><tt>FALSE</tt> to unlock
     * @return
     *   S_OK if the Technical Documentation Language setting attribute
     *   is successfully locked or unlocked, and E_FAIL otherwise   
     */
     virtual HRESULT SetDocLanguageLock(unsigned char iLocked) = 0;



    //-------------------------------------------
    //  User Companion Location setting attribute
    //-------------------------------------------

    /**
     * Retrieves the User Companion Location setting attribute value.
     * <br><b>Role</b>: The User Companion Location setting attribute manages the location or path where the User Companion is installed
     * @param ioPath [inout]
     *   The User Companion Location setting attribute value
     * @return
     *   S_OK if the User Companion Location setting attribute value
     *   is successfully retrieved, and E_FAIL otherwise   
     */
     virtual HRESULT GetCompanionPath(CATUnicodeString & ioPath) = 0;

    /**
     * Sets the User Companion Location setting attribute value.
     * @param iPath [in]
     *   The User Companion Location setting attribute value.
     *   <br><b>Legal values</b>: string containing the path where the User Companion is installed
     * @return
     *   S_OK if the User Companion Location setting attribute value
     *   is successfully set, and E_FAIL otherwise   
     */
     virtual HRESULT SetCompanionPath(const CATUnicodeString & iPath) = 0;

    /**
     * Retrieves the User Companion Location setting attribute information object.
     * @param ioInfo [inout]
     *   The User Companion Location setting attribute information object
     * @return 
     *   S_OK if the User Companion Location setting attribute
     *   information is successfully retrieved, and E_FAIL otherwise   
     */
     virtual HRESULT GetCompanionPathInfo(CATSettingInfo * ioInfo) = 0;

    /**
     * Locks or unlocks the User Companion Location setting attribute.
     * <br><b>Role</b>: Locks or unlocks the User Companion Location setting attribute if the operation is allowed in the current administrated environment. 
     * In user mode this method will always return E_FAIL.
     * @param iLocked [in]
     *   A flag to indicate whether the User Companion Location setting attribute
     *   should be locked.
     *   <br><b>Legal values</b>:
     *     <br><tt>TRUE</tt> to lock
     *     <br><tt>FALSE</tt> to unlock
     * @return
     *   S_OK if the User Companion Location setting attribute
     *   is successfully locked or unlocked, and E_FAIL otherwise   
     */
     virtual HRESULT SetCompanionPathLock(unsigned char iLocked) = 0;



    //---------------------------------------
    //  Contextual Priority setting attribute
    //---------------------------------------

    /**
     * Retrieves the Contextual Priority setting attribute value.
     * <br><b>Role</b>: The Contextual Priority setting attribute manages the access priority between technical documentation and User Companion
     * @param ioPriority [inout]
     *   The Contextual Priority setting attribute value
     * @return
     *   S_OK if the Contextual Priority setting attribute value
     *   is successfully retrieved, and E_FAIL otherwise   
     */
     virtual HRESULT GetPriority(CATDocContextualPriority & ioPriority) = 0;

    /**
     * Sets the Contextual Priority setting attribute value.
     * @param iPriority [in]
     *   The Contextual Priority setting attribute value.
     *   <br><b>Legal values</b>:
     *   <br><tt>CATDocContextualTechDoc</tt>: Technical documentation is launched first
     *   <br><tt>CATDocContextualUserComp</tt>: User Companion is launched first
     * @return
     *   S_OK if the Contextual Priority setting attribute value
     *   is successfully set, and E_FAIL otherwise   
     */
     virtual HRESULT SetPriority(const CATDocContextualPriority & iPriority) = 0;

    /**
     * Retrieves the Contextual Priority setting attribute information object.
     * @param ioInfo [inout]
     *   The Contextual Priority setting attribute information object
     * @return 
     *   S_OK if the Contextual Priority setting attribute information
     *   is successfully retrieved, and E_FAIL otherwise   
     */
  virtual HRESULT GetPriorityInfo(CATSettingInfo * ioInfo) = 0;

    /**
     * Locks or unlocks the Contextual Priority setting attribute.
     * <br><b>Role</b>: Locks or unlocks the Contextual Priority setting attribute if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked [in]
     *   A flag to indicate whether the Contextual Priority setting attribute
     *   should be locked.
     *   <br><b>Legal values</b>:
     *     <br><tt>TRUE</tt> to lock
     *     <br><tt>FALSE</tt> to unlock
     * @return
     *   S_OK if the Contextual Priority setting attribute
     *   is successfully locked or unlocked, and E_FAIL otherwise   
     */
  virtual HRESULT SetPriorityLock(unsigned char iLocked) = 0;

};
#endif

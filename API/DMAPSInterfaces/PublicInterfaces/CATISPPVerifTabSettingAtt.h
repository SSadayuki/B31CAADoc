#ifndef CATISPPVerifTabSettingAtt_H
#define CATISPPVerifTabSettingAtt_H

// COPYRIGHT DASSAULT SYSTEMES  2003

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "ProcessInterfaces.h"
#include "CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByProcessInterfaces IID IID_CATISPPVerifTabSettingAtt;
#else
extern "C" const IID IID_CATISPPVerifTabSettingAtt ;
#endif

class CATSettingInfo;
class CATUnicodeString;

//------------------------------------------------------------------

/**
* Interface to handle the parameters of the Verification Tab page for Visualization.
* <b>Role</b>: This interface is implemented by a component which
* represents the controller of the Verification. 
* <br>This interface defines:
* <ul>
* <li>A method to set each parameter</li>
* <li>A method to get the value of each parameter</li>
* <li>A method to lock/unlock each parameter</li>
* <li>A method to retrieve the informations concerning each parameter</li>
* </ul>
*/
class ExportedByProcessInterfaces CATISPPVerifTabSettingAtt: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

/**
* Retrieves the value of the 'Auto Reframe'.
* <br><b>Role</b>: Retrieves the value of the 'Auto Reframe' during Process Navigation
* @param ioAutoRef
*	The Value to say whether it is a 'Show' or 'Hide'. The default value needs to be 
*  passed by the caller ( Show=0, Hide=1)
* @return
*	<b>Legal values</b>:
*	<br><tt>S_OK :</tt>   on Success
* 	<br><tt>E_FAIL:</tt>  on failure
*/
     virtual HRESULT GetAutoReframeFilter( int & ioAutoRef) = 0;

     /**
     * Sets the value of the 'Auto Reframe'.
     * <br><b>Role</b>: Sets the value of the 'Resource Folder' to signify whether
     *  the Assigned Resources would be visible in the PPR tree or not
     * @param iAutoRef
     *	The Value to say whether it is a 'Show' or 'Hide' (Show=0, Hide=1)
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetAutoReframeFilter(const int & iAutoRef) = 0;

    /**
     * Retrieves the information of the 'Auto Reframe' parameter.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetAutoReframeFilterInfo( CATSettingInfo*  oInfo ) = 0;

    /** 
     * Locks or unlocks the 'Auto Reframe' parameter.
     * <br><b>Role</b>: Locks or unlocks the 'Auto Reframe' parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetAutoReframeFilterLock( unsigned char  iLocked ) = 0;

//------------------------------------------------------------------------------------
/**
* Retrieves the value to say whether the Assigned resource would be visible while
* Navigating the Process.
* <br><b>Role</b>: Retrieves the value of the 'View Implied Resource' to signify whether
*  the Assigned Resources would be visible while navigating the Process
* @param ioImplRes
*	The Value to say whether it is a 'Show' or 'Hide'.The default value needs to be 
*  passed by the caller ( Show=0, Hide=1)
* @return
*	<b>Legal values</b>:
*	<br><tt>S_OK :</tt>   on Success
* 	<br><tt>E_FAIL:</tt>  on failure
*/
     virtual HRESULT GetImpliedResourceFilter( int & ioImplRes) = 0;

     /**
     * Sets the value of the 'View Implied Resource'.
     * <br><b>Role</b>: Sets the value of the 'View Implied Resource' to signify whether
     *  the Assigned Resources would be visible while navigating the Process
     * @param iImplRes
     *	The Value to say whether it is a 'Show' or 'Hide'.( Show=0, Hide=1)
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetImpliedResourceFilter(const int & iImplRes) = 0;

    /**
     * Retrieves the state of the 'View Implied Resource' parameter.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetImpliedResourceFilterInfo( CATSettingInfo*  oInfo ) = 0;

    /** 
     * Locks or unlocks the 'View Implied Resource' parameter.
     * <br><b>Role</b>: Locks or unlocks the 'ResourceFilter' parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetImpliedResourceFilterLock( unsigned char  iLocked ) = 0;

//------------------------------------------------------------------------------------
/**
* Retrieves the value of the 'View All Resources' option.
* <br><b>Role</b>: Retrieves the value of the 'View All Resources'option to signify whether
*  all the Assigned Resources would be visible while navigating the Process
* @param ioAllRes
*	The Value to say whether it is a 'Show' or 'Hide'.The default value needs to be 
*  passed by the caller ( Show=0, Hide=1)
* @return
*	<b>Legal values</b>:
*	<br><tt>S_OK :</tt>   on Success
* 	<br><tt>E_FAIL:</tt>  on failure
*/
     virtual HRESULT GetAllResourceFilter( int & ioAllRes) = 0;

     /**
     * Sets the value of the 'View All Resources'.
     * <br><b>Role</b>: Sets the value of the 'View All Resources' option to signify whether
     *  the all the Assigned Resources would be visible while navigating the Process
     * @param iImplRes
     *	The Value to say whether it is a 'Show' or 'Hide'( Show=0, Hide=1)
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetAllResourceFilter(const int & iImplRes) = 0;

    /**
     * Retrieves the state of the 'View All Resources' parameter.
     * @param oInfo
     *	Address of an object CATSettingInfo.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT GetAllResourceFilterInfo( CATSettingInfo*  oInfo ) = 0;

    /** 
     * Locks or unlocks the 'View All Resources' parameter.
     * <br><b>Role</b>: Locks or unlocks the 'View All Resources' parameter if the
     * operation is allowed in the current administrated environment. In user mode 
     * this method will always return E_FAIL.
     * @param iLocked
     *	the locking operation to be performed
     *	<b>Legal values</b>:
     *	<br><tt>1 :</tt>   to lock the parameter.
     * 	<br><tt>0:</tt>   to unlock the parameter.
     * @return
     *	<b>Legal values</b>:
     *	<br><tt>S_OK :</tt>   on Success
     * 	<br><tt>E_FAIL:</tt>  on failure
     */
     virtual HRESULT SetAllResourceFilterLock( unsigned char  iLocked ) = 0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATISPPVerifTabSettingAtt, CATBaseUnknown) ;

#endif

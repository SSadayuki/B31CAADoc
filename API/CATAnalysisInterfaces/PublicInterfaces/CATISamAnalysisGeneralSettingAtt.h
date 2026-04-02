#ifndef CATISamAnalysisGeneralSettingAtt_H
#define CATISamAnalysisGeneralSettingAtt_H

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATBaseUnknown.h"
#include "CATAnalysisInterface.h"

class CATUnicodeString;
class CATSettingInfo;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamAnalysisGeneralSettingAtt;
#else
extern "C" const IID IID_CATISamAnalysisGeneralSettingAtt;
#endif
/**
 * Interface to handle the Analysis & Simulation "GeneralSetting".
 */

class ExportedByCATAnalysisInterface CATISamAnalysisGeneralSettingAtt : public CATBaseUnknown
{
  CATDeclareInterface;
  public :

/**
 * Retrieves if a default analysis Case will be created.
 *	<b>Legal values</b>:
 *	<br><tt>1 :</tt> No default case is set up.
 * 	<br><tt>0 :</tt> A default case is set up.
 */
    virtual HRESULT GetDefaultAnalysisFlag(int & oAllowed)=0;
/**
 * Sets that a default analysis Case will be created.
 *	<b>Legal values</b>:
 *	<br><tt>1 :</tt> No default case is set up.
 * 	<br><tt>0 :</tt> A default case is set up.
 */
    virtual HRESULT SetDefaultAnalysisFlag(const int & iAllowed)=0;
/** 
 * Retrieves environment informations for the default flag.
 * <br><b>Role</b>:Retrieves the state of the default flag in the current environment. 
 * @param AdminLevel
 *       <br>If the parameter is locked, AdminLevel gives the administration
 *       level that imposes the value of the parameter.
 *	 <br>If the parameter is not locked, AdminLevel gives the administration
 *       level that will give the value of the parameter after a reset.
 * @param oLocked   Indicates if the parameter has been locked.
 * @param oModified Indicates if the parameter has been explicitly modified or remain
 *      to the administrated value.
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
 */ 
    virtual HRESULT GetDefaultAnalysisFlagInfo( CATSettingInfo*  oInfo ) = 0;
/** 
 * Locks or unlocks the flag.
 * <br><b>Role</b>:Locks or unlocks the parameter if it is 
 * possible in the current administrated. In user mode this method 
 * will always return E_FAIL.
 * @param iLocked The locking operation to be performed
 *	<b>Legal values</b>:
 *	<br><tt>TRUE :</tt>   to lock the parameter.
 * 	<br><tt>FALSE:</tt>   to unlock the parameter.
 * @return
 * <b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
 */
    virtual HRESULT SetDefaultAnalysisFlagLock( unsigned char  iLocked ) = 0;

/**
 * Retrieves the type of default analysis Case to create.
 * @param oTemplate The Case type.
 */
    virtual HRESULT GetDefaultAnalysisTemplate(CATUnicodeString & oTemplate)=0;
/**
 * Sets up a type of default analysis Case to create.
 * @param iTemplate The Case type.
 */
    virtual HRESULT SetDefaultAnalysisTemplate(const CATUnicodeString & iTemplate)=0;
/** 
 * Retrieves environment informations for the default flag.
 * <br><b>Role</b>:Retrieves the state of the default flag in the current environment. 
 * @param AdminLevel
 *       <br>If the parameter is locked, AdminLevel gives the administration
 *       level that imposes the value of the parameter.
 *	 <br>If the parameter is not locked, AdminLevel gives the administration
 *       level that will give the value of the parameter after a reset.
 * @param oLocked   Indicates if the parameter has been locked.
 * @param oModified Indicates if the parameter has been explicitly modified or remain
 *      to the administrated value.
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
 */ 
    virtual HRESULT GetDefaultAnalysisTemplateInfo( CATSettingInfo*  oInfo ) = 0;
/** 
 * Locks or unlocks the flag.
 * <br><b>Role</b>:Locks or unlocks the parameter if it is 
 * possible in the current administrated. In user mode this method 
 * will always return E_FAIL.
 * @param iLocked The locking operation to be performed
 *	<b>Legal values</b>:
 *	<br><tt>TRUE :</tt>   to lock the parameter.
 * 	<br><tt>FALSE:</tt>   to unlock the parameter.
 * @return
 * <b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
 */
    virtual HRESULT SetDefaultAnalysisTemplateLock( unsigned char  iLocked ) = 0;

/**
 * Retrieves if the parameter set will be displayed in the feature tree.
 *	<b>Legal values</b>:
 *	<br><tt>1 :</tt> The parameter set is shown.
 * 	<br><tt>0 :</tt> The parameter set is hidden.
 */
    virtual HRESULT GetViewAnalysisParameter(int & oAllowed)=0;
/**
 * Sets up if the parameter set will be displayed in the feature tree.
 *	<b>Legal values</b>:
 *	<br><tt>1 :</tt> The parameter set is shown.
 * 	<br><tt>0 :</tt> The parameter set is hidden.
 */
    virtual HRESULT SetViewAnalysisParameter(const int & oAllowed)=0;
/** 
 * Retrieves environment informations for the default flag.
 * <br><b>Role</b>:Retrieves the state of the default flag in the current environment. 
 * @param AdminLevel
 *       <br>If the parameter is locked, AdminLevel gives the administration
 *       level that imposes the value of the parameter.
 *	 <br>If the parameter is not locked, AdminLevel gives the administration
 *       level that will give the value of the parameter after a reset.
 * @param oLocked   Indicates if the parameter has been locked.
 * @param oModified Indicates if the parameter has been explicitly modified or remain
 *      to the administrated value.
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
 */ 
    virtual HRESULT GetViewAnalysisParameterInfo( CATSettingInfo*  oInfo ) = 0;
/** 
 * Locks or unlocks the flag.
 * <br><b>Role</b>:Locks or unlocks the parameter if it is 
 * possible in the current administrated. In user mode this method 
 * will always return E_FAIL.
 * @param iLocked The locking operation to be performed
 *	<b>Legal values</b>:
 *	<br><tt>TRUE :</tt>   to lock the parameter.
 * 	<br><tt>FALSE:</tt>   to unlock the parameter.
 * @return
 * <b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
 */
    virtual HRESULT SetViewAnalysisParameterLock( unsigned char  iLocked ) = 0;

/**
 * Retrieves if the relation set will be displayed in the feature tree.
 *	<b>Legal values</b>:
 *	<br><tt>1 :</tt> The relation set is shown.
 * 	<br><tt>0 :</tt> The relation set is hidden.
 */
    virtual HRESULT GetViewAnalysisRelation(int & oAllowed)=0;
/**
 * Sets up if the relation set will be displayed in the feature tree.
 *	<b>Legal values</b>:
 *	<br><tt>1 :</tt> The relation set is shown.
 * 	<br><tt>0 :</tt> The relation set is hidden.
 */
    virtual HRESULT SetViewAnalysisRelation(const int & oAllowed)=0;
/** 
 * Retrieves environment informations for the default flag.
 * <br><b>Role</b>:Retrieves the state of the default flag in the current environment. 
 * @param AdminLevel
 *       <br>If the parameter is locked, AdminLevel gives the administration
 *       level that imposes the value of the parameter.
 *	 <br>If the parameter is not locked, AdminLevel gives the administration
 *       level that will give the value of the parameter after a reset.
 * @param oLocked   Indicates if the parameter has been locked.
 * @param oModified Indicates if the parameter has been explicitly modified or remain
 *      to the administrated value.
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
 */ 
    virtual HRESULT GetViewAnalysisRelationInfo( CATSettingInfo*  oInfo ) = 0;
/** 
 * Locks or unlocks the flag.
 * <br><b>Role</b>:Locks or unlocks the parameter if it is 
 * possible in the current administrated. In user mode this method 
 * will always return E_FAIL.
 * @param iLocked The locking operation to be performed
 *	<b>Legal values</b>:
 *	<br><tt>TRUE :</tt>   to lock the parameter.
 * 	<br><tt>FALSE:</tt>   to unlock the parameter.
 * @return
 * <b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
 */
    virtual HRESULT SetViewAnalysisRelationLock( unsigned char  iLocked ) = 0;

/**
 * Retrieves if the pointed documents are automatically loaded.
 *	<b>Legal values</b>:
 *	<br><tt>1 :</tt> pointed documents are not automatically loaded.
 * 	<br><tt>0 :</tt> pointed documents are automatically loaded.
 */
    virtual HRESULT GetAnalysisLoadMode(int & oAllowed)=0;
/**
 * Sets up if the pointed document are loaded.
 *	<b>Legal values</b>:
 *	<br><tt>1 :</tt> pointed documents are not automatically loadedd.
 * 	<br><tt>0 :</tt> pointed documents are automatically loaded.
 */
    virtual HRESULT SetAnalysisLoadMode(const int & oAllowed)=0;
/** 
 * Retrieves environment informations for the default flag.
 * <br><b>Role</b>:Retrieves the state of the default flag in the current environment. 
 * @param AdminLevel
 *       <br>If the parameter is locked, AdminLevel gives the administration
 *       level that imposes the value of the parameter.
 *	 <br>If the parameter is not locked, AdminLevel gives the administration
 *       level that will give the value of the parameter after a reset.
 * @param oLocked   Indicates if the parameter has been locked.
 * @param oModified Indicates if the parameter has been explicitly modified or remain
 *      to the administrated value.
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
 */ 
    virtual HRESULT GetAnalysisLoadModeInfo( CATSettingInfo*  oInfo ) = 0;
/** 
 * Locks or unlocks the flag.
 * <br><b>Role</b>:Locks or unlocks the parameter if it is 
 * possible in the current administrated. In user mode this method 
 * will always return E_FAIL.
 * @param iLocked The locking operation to be performed
 *	<b>Legal values</b>:
 *	<br><tt>TRUE :</tt>   to lock the parameter.
 * 	<br><tt>FALSE:</tt>   to unlock the parameter.
 * @return
 * <b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
 */
    virtual HRESULT SetAnalysisLoadModeLock( unsigned char  iLocked ) = 0;

/**
 * Retrieves if we are handling Product Structure Cache Mode.
 *	<b>Legal values</b>:
 *	<br><tt>1 :</tt> Cache Mode is handled.
 * 	<br><tt>0 :</tt> Cache Mode is not handled.
 */
    virtual HRESULT GetAnalysisCacheMode(int & oAllowed)=0;
/**
 * Sets up Product Structure Cache Mode handling.
 *	<b>Legal values</b>:
 *	<br><tt>1 :</tt> Cache Mode is handled.
 * 	<br><tt>0 :</tt> Cache Mode is not handled.
 */
    virtual HRESULT SetAnalysisCacheMode(const int & oAllowed)=0;
/** 
 * Retrieves environment informations for the default flag.
 * <br><b>Role</b>:Retrieves the state of the default flag in the current environment. 
 * @param AdminLevel
 *       <br>If the parameter is locked, AdminLevel gives the administration
 *       level that imposes the value of the parameter.
 *	 <br>If the parameter is not locked, AdminLevel gives the administration
 *       level that will give the value of the parameter after a reset.
 * @param oLocked   Indicates if the parameter has been locked.
 * @param oModified Indicates if the parameter has been explicitly modified or remain
 *      to the administrated value.
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
 */ 
    virtual HRESULT GetAnalysisCacheModeInfo( CATSettingInfo*  oInfo ) = 0;
/** 
 * Locks or unlocks the flag.
 * <br><b>Role</b>:Locks or unlocks the parameter if it is 
 * possible in the current administrated. In user mode this method 
 * will always return E_FAIL.
 * @param iLocked The locking operation to be performed
 *	<b>Legal values</b>:
 *	<br><tt>TRUE :</tt>   to lock the parameter.
 * 	<br><tt>FALSE:</tt>   to unlock the parameter.
 * @return
 * <b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
 */
    virtual HRESULT SetAnalysisCacheModeLock( unsigned char  iLocked ) = 0;
/**
 * Tells if Automatic naming is activated.
 *	<b>Legal values</b>:
 *	<br><tt>1 :</tt> Automatic Naming is activated.
 * 	<br><tt>0 :</tt> Automatic Naming is not activated.
 */
	virtual HRESULT GetAnalysisNamingAuto(int & oAllowed)=0;
/**
 * Sets the Automatic naming to be activated.
 *	<b>Legal values</b>:
 *	<br><tt>1 :</tt> Automatic Naming is activated.
 * 	<br><tt>0 :</tt> Automatic Naming is not activated.
 */
	virtual HRESULT SetAnalysisNamingAuto(const int & iAllowed)=0;
/** 
 * Retrieves environment informations for the default flag.
 * <br><b>Role</b>:Retrieves the state of the default flag in the current environment. 
 * @param AdminLevel
 *       <br>If the parameter is locked, AdminLevel gives the administration
 *       level that imposes the value of the parameter.
 *	 <br>If the parameter is not locked, AdminLevel gives the administration
 *       level that will give the value of the parameter after a reset.
 * @param oLocked   Indicates if the parameter has been locked.
 * @param oModified Indicates if the parameter has been explicitly modified or remain
 *      to the administrated value.
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
 */ 
	virtual HRESULT GetAnalysisNamingAutoInfo( CATSettingInfo*  oInfo ) = 0;
/** 
 * Locks or unlocks the flag.
 * <br><b>Role</b>:Locks or unlocks the parameter if it is 
 * possible in the current administrated. In user mode this method 
 * will always return E_FAIL.
 * @param iLocked The locking operation to be performed
 *	<b>Legal values</b>:
 *	<br><tt>TRUE :</tt>   to lock the parameter.
 * 	<br><tt>FALSE:</tt>   to unlock the parameter.
 * @return
 * <b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
 */
    virtual HRESULT SetAnalysisNamingAutoLock( unsigned char  iLocked ) = 0;

};

CATDeclareHandler(CATISamAnalysisGeneralSettingAtt, CATBaseUnknown);

#endif





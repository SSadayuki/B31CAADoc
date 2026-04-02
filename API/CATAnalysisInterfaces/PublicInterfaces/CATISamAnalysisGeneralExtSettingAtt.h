#ifndef CATISamAnalysisGeneralExtSettingAtt_H
#define CATISamAnalysisGeneralExtSettingAtt_H

// COPYRIGHT DASSAULT SYSTEMES 2008

/**
 * @CAA2Level L0
 * @CAA2Usage U3
 */

#include "CATISamAnalysisGeneralSettingAtt.h"
#include "CATAnalysisInterface.h"

class CATUnicodeString;
class CATSettingInfo;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATAnalysisInterface IID IID_CATISamAnalysisGeneralExtSettingAtt;
#else
extern "C" const IID IID_CATISamAnalysisGeneralExtSettingAtt;
#endif
/**
 * Interface to handle the Analysis & Simulation "GeneralSetting".
 */

class ExportedByCATAnalysisInterface CATISamAnalysisGeneralExtSettingAtt : public CATISamAnalysisGeneralSettingAtt
{
  CATDeclareInterface;
  public :

/**
 * Tells if Automatic naming is activated.
 *	<b>Legal values</b>:
 *	<br><tt>1 :</tt> Automatic Publication Pointing is activated.
 * 	<br><tt>0 :</tt> Automatic Publication Pointing is not activated.
 */
	virtual HRESULT GetAutoPointPublication(int & oAllowed)=0;
/**
 * Sets the Automatic naming to be activated.
 *	<b>Legal values</b>:
 *	<br><tt>1 :</tt> Automatic Publication Pointing is activated.
 * 	<br><tt>0 :</tt> Automatic Publication Pointing is not activated.
 */
	virtual HRESULT SetAutoPointPublication(const int & iAllowed)=0;
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
	virtual HRESULT GetAutoPointPublicationInfo( CATSettingInfo*  oInfo ) = 0;
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
    virtual HRESULT SetAutoPointPublicationLock( unsigned char  iLocked ) = 0;

};

CATDeclareHandler(CATISamAnalysisGeneralExtSettingAtt, CATBaseUnknown);

#endif


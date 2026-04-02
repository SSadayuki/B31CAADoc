/** 
	* @quickReview NHD 10:11:02 Tubing Migration Settings
*/
#ifndef CATIV4ITubingMigrSettingAtt_H
#define CATIV4ITubingMigrSettingAtt_H

// COPYRIGHT DASSAULT SYSTEMES 2003

// System framework
#include "IUnknown.h"   
#include "CATBaseUnknown.h"
#include "ExportedByCATV4iSettings.h"

class CATString;
class CATUnicodeString;
class CATSettingInfo ;

extern "C" ExportedByCATV4iSettings const IID IID_CATIV4ITubingMigrSettingAtt;

class ExportedByCATV4iSettings CATIV4ITubingMigrSettingAtt : public CATBaseUnknown
{

	CATDeclareInterface;

public :

	/**
	* Retrieves the state of the "Function Display Report " setting parameter.
	* <br><b>Role</b>: This functionality allows the fuction to be displayed in spec tree of 
	*									output catpart.  
	* @param oAfficheAttr
	*	The state of the option.
	*	<b>Legal values</b>:
	*	<br><tt>0:</tt>   turned off
	* 	<br><tt>1:</tt>   turned on
	* @return
	*	<b>Legal values</b>:
	*	<br><tt>S_OK :</tt>   on Success
	* 	<br><tt>E_FAIL:</tt>  on failure
	*/
	virtual HRESULT GetAffiche_Fundisplay(CATString & oAfficheFun) = 0 ; 
	/**
	* Sets the state of the "Function Display Report " setting parameter.
	* <br><b>Role</b>: This functionality allows the fuction to be displayed in spec tree of 
	*									output catpart.  
	* @param iAfficheAttr
	*	The state of the option.
	*	<b>Legal values</b>:
	*	<br><tt>0:</tt>   turned off
	* 	<br><tt>1:</tt>   turned on
	* @return
	*	<b>Legal values</b>:
	*	<br><tt>S_OK :</tt>   on Success
	* 	<br><tt>E_FAIL:</tt>  on failure
	*/
	virtual HRESULT SetAffiche_Fundisplay(CATString & iAfficheAttr)= 0 ; 
	/** 
	* Retrieves information about the "Display Report Attribute" setting parameter.
	* <br>Refer to @href CATSysSettingController for a detailed description.
	*/
	virtual HRESULT GetAffiche_FundisplayInfo(CATSettingInfo * oInfo)=0   ; 

	/** 
	* Locks or unlocks the "Display Report Attribute" setting parameter.
	* <br>Refer to @href CATSysSettingController for a detailed description.
	*/
	virtual HRESULT SetAffiche_FundisplayLock(unsigned char iLocked)= 0 ; 


};

CATDeclareHandler(CATIV4ITubingMigrSettingAtt, CATBaseUnknown);

#endif


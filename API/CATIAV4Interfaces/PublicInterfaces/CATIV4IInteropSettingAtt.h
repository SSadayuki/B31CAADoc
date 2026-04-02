#ifndef CATIV4IInteropSettingAtt_H
#define CATIV4IInteropSettingAtt_H

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System framework
#include "IUnknown.h"   
#include "CATBaseUnknown.h"
#include "ExportedByCATV4iSettings.h"
#include "CATBoolean.h"

class CATString;
class CATUnicodeString;
class CATSettingInfo ;

extern "C" ExportedByCATV4iSettings const IID IID_CATIV4IInteropSettingAtt;

/**
	* Interface to handle the setting parameters of the "V4 Data Reading"  
	* tab page.
	* <b>Role</b>: This interface is implemented by a component named
	* CATV4IInteropSettingCtrl which represents the controller of the Setting. 
	* The setting parameters of the tab are the following:
	* <ul> 
	* <li>"Display only elements with Sensitive Attribute"</li>
	* <li>"Display 3D elements labels"</li>
	* <li>"Open in Light Mode: 2D Data are not taken into account"</li> 
	* <li>"Reading Code page"</li>
	* <li>"PROJECT File Path"</li>
	* <li>"DLNAME"</li>
	* <li>"Prj Warn"</li>
	* <li>"Characters Equivalence Table Path"</li>
	* </ul>
	* To access this property page:
	* <ul>
	*  <li>Click the <b>Options</b> command in the <b>Tools</b> menu</li>
	*  <li>Click + left of </b>General</b> to unfold the workbench list</li>   
	*  <li>Click </b>Compatibility</b></li>
	* </ul> 
	* <br>This interface defines:
	* <ul>
	* <li>A method to get each parameter</li>
	* <li>A method to set the value of each parameter</li>
	* <li>A method to lock/unlock each parameter</li>
	* <li>A method to retrieve the informations concerning each parameter</li>
	* </ul>
*/

class ExportedByCATV4iSettings CATIV4IInteropSettingAtt: public CATBaseUnknown
{
	CATDeclareInterface;

  public :

/**
 * Retrieves the state of the "Display only elements with Sensitive Attribute" 
 * setting parameter.
 * <br><b>Role</b>: The "Display only elements with Sensitive Attribute" mode 
 *									enables you to decide whether to display or not the elements 
 *									which were sensitive to the shading mode in CATIA Version 4.
 * @param oStateOfDisp
 *	The state of the setting parameter.
 *	<b>Legal values</b>:
 *	<br><tt>0:</tt>   turned off
 * 	<br><tt>1:</tt>   turned on
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
*/
	virtual HRESULT GetDisplayMode(CATBoolean &oStateOfDisp) = 0 ;    

/**
 * Sets the state of the "Display only elements with Sensitive Attribute" 
 * setting parameter.
 * <br><b>Role</b>: The "Display only elements with Sensitive Attribute" mode 
 *									enables you to decide whether to display or not the elements 
 *									which were sensitive to the shading mode in CATIA Version 4.
 * @param iStateOfDisp
 *	The state of the DisplayMode option.
 *	<b>Legal values</b>:
 *	<br><tt>0:</tt>   to turn off
 * 	<br><tt>1:</tt>   to turn on
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
*/
	virtual HRESULT SetDisplayMode(CATBoolean iStateOfDisp) = 0 ;

/** 
 * Retrieves information about the "Display only elements with Sensitive Attribute"
 * setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */
	virtual HRESULT GetDisplayModeInfo(CATSettingInfo * oInfo) = 0 ;

/** 
 * Locks or unlocks the "Display only elements with Sensitive Attribute"
 * setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */
	virtual HRESULT SetDisplayModeLock(unsigned char iLocked) = 0 ; 
	
/**
 * Retrieves the state of the "Display 3D elements labels" setting parameter.
 * <br><b>Role</b>: The "Display 3D elements labels" mode is activated in order to 
 *									enable the reading of the 3D text associated to the V4 elements.
 * @param oStateOf3DText
 *	The state of the setting parameter.
 *	<b>Legal values</b>:
 *	<br><tt>0:</tt>   turned off
 * 	<br><tt>1:</tt>   turned on
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
*/
	virtual HRESULT GetDisplayV4Text3D( CATBoolean & oStateOf3DText) = 0 ;  
  
/**
 * Sets the state of the "Display 3D elements labels" setting parameter.
 * <br><b>Role</b>: The "Display 3D elements labels" mode is activated in order to 
 *									enable the reading of the 3D text associated to the V4 elements.
 * @param iStateOf3DText
 *	The state of the setting parameter.
 *	<b>Legal values</b>:
 *	<br><tt>0:</tt>   turned off
 * 	<br><tt>1:</tt>   turned on
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
*/
	virtual HRESULT SetDisplayV4Text3D(CATBoolean iStateOf3DText) = 0 ;  
  
/** 
 * Retrieves information about the "Display 3D elements labels" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */
	virtual HRESULT GetDisplayV4Text3DInfo(CATSettingInfo * oInfo) = 0 ;  
  
/** 
 * Locks or unlocks the "Display 3D elements labels" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */
	virtual HRESULT SetDisplayV4Text3DLock(unsigned char iLocked )= 0 ; 

/**
 * Retrieves the state of the "Open in Light Mode: 2D Data are not taken into
 * account" setting parameter.
 * <br><b>Role</b>: This mode is activated in order to disable the reading of DRAW data
 *									in a V4 Model.
 * @param oStateOfNoDraft
 *	The state of the Draw.
 *	<b>Legal values</b>:
 *	<br><tt>0:</tt>   turned off
 * 	<br><tt>1:</tt>   turned on
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
*/
	virtual HRESULT GetDraw(CATString & oStateOfNoDraft) = 0 ;

/**
 * Sets the state of the "Open in Light Mode: 2D Data are not taken into
 * account" setting parameter.
 * <br><b>Role</b>: This mode is activated in order to disable the reading of DRAW data
 *									in a V4 Model.
 * @param iStateOfNoDraft
 *	The state of the Draw option.
 *	<b>Legal values</b>:
 *	<br><tt>0:</tt>   to turn off
 * 	<br><tt>1:</tt>   to turn on
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
*/	
	virtual HRESULT SetDraw(CATString & iStateOfNoDraft)= 0 ;

/** 
 * Retrieves information about the "Open in Light Mode: 2D Data are not taken into
 * account" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */
	virtual HRESULT GetDrawInfo(CATSettingInfo *oInfo) = 0 ;

/** 
 * Locks or unlocks the "Open in Light Mode: 2D Data are not taken into
 * account" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */
	virtual HRESULT SetDrawLock(unsigned char iLocked) = 0 ;  

/**
 * Retrieves the value of the "Reading Code page" setting parameter. 
 * <br><b>Role</b>: The "Reading Code page" declares the language to identify the data read 
 *									if this data is not labeled. It is stored in the CATIA data to 
 *									be written when saving Version 5 CATPart documents as CATIA Version 4 
 *									models. 
 * @param oDefaultCPage
 *	The state of the Code_page.
 *	<b>Legal values</b>:
 *	<br><tt>0:</tt>   "French"
 * 	<br><tt>1:</tt>   "Chinese"
 *	<br><tt>2:</tt>   "German"
 * 	<br><tt>3:</tt>   "Italian"
 *	<br><tt>4:</tt>   "Japanese"
 * 	<br><tt>5:</tt>   "Korean"
 *	<br><tt>6:</tt>   "Swedish"
 * 	<br><tt>7:</tt>   "UK_English"
 * 	<br><tt>8:</tt>   "US_English"
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
*/
	virtual HRESULT GetCode_page(CATString & oDefaultCPage) = 0 ;    

/**
 * Sets the state of the "Reading Code page" setting parameter. 
 * <br><b>Role</b>: The "Reading Code page" declares the language to identify the data read 
 *									if this data is not labeled. It is stored in the CATIA data to 
 *									be written when saving Version 5 CATPart documents as CATIA Version 4 
 *									models. 
 * @param iDefaultCPage
 *	The Code_page 
 *	<b>Legal values</b>:
 *	<br><tt>0:</tt>   "French"
 * 	<br><tt>1:</tt>   "Chinese"
 *	<br><tt>2:</tt>   "German"
 * 	<br><tt>3:</tt>   "Italian"
 *	<br><tt>4:</tt>   "Japanese"
 * 	<br><tt>5:</tt>   "Korean"
 *	<br><tt>6:</tt>   "Swedish"
 * 	<br><tt>7:</tt>   "UK_English"
 * 	<br><tt>8:</tt>   "US_English"
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
*/
	virtual HRESULT SetCode_page(CATString & iDefaultCPage) = 0 ; 
	
/** 
 * Retrieves information about the "Reading Code page" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */
	virtual HRESULT GetCode_pageInfo(CATSettingInfo * oInfo) = 0 ;  
	
/** 
 * Locks or unlocks the "Reading Code page" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */
	virtual HRESULT SetCode_pageLock(unsigned char iLocked) = 0 ;   
	
/**
 * Retrieves the value of the "PROJECT File Path" setting parameter.
 * <br><b>Role</b>: The "PROJECT File Path" field contains the location of 
 *									the external project file referenced by the V4 model. 
 * @param oDefaultPrj
 *	The Path of the PROJECT File.
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
*/
	virtual HRESULT GetPROJECT_File_Path(CATUnicodeString & oDefaultPrj) = 0 ;  
	
/**
 * Sets the "PROJECT File Path" setting parameter.
 * <br><b>Role</b>: The "PROJECT File Path" field contains the location of 
 *									the external project file referenced by the V4 model. 
 * @param iDefaultPrj
 *	The Path of the PROJECT File.
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
*/
	virtual HRESULT SetPROJECT_File_Path(CATUnicodeString & iDefaultPrj) = 0 ;   

/** 
 * Retrieves information about the "PROJECT File Path" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */
	virtual HRESULT GetPROJECT_File_PathInfo(CATSettingInfo *oInfo) = 0 ;   

/** 
 * Locks or unlocks the "PROJECT File Path" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */
	virtual HRESULT SetPROJECT_File_PathLock(unsigned char iLocked) = 0 ;   
	
/**
 * Retrieves the "DlNAME" setting parameter.
 * <br><b>Role</b>: Retrieves the DLNAME referenced by the Model.
 * @param oDefaultDlname
 *	The Dlname.
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
*/
	virtual HRESULT GetDlname(CATUnicodeString & oDefaultDlname) = 0 ;  

/**
 * Sets the "DLNAME" setting parameter.
 * <br><b>Role</b>: Sets the DLNAME referenced by the Model.
 * @param iDefaultDlname
 *	The Dlname 
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
*/
	virtual HRESULT SetDlname(CATUnicodeString & iDefaultDlname) = 0 ;   

/** 
 * Retrieves information about the "DLNAME" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */
	virtual HRESULT GetDlnameInfo(CATSettingInfo * oInfo) = 0 ;   

/** 
 * Locks or unlocks the "DLNAME" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */
	virtual HRESULT SetDlnameLock(unsigned char iLocked ) = 0 ;  
	
/**
 * Retrieves the location of the "Characters Equivalence Table Path" setting parameter.
 * <br><b>Role</b>: The "Characters Equivalence Table" allows to convert characters contained
 *									in CATIA V4 documents. It is mainly used to generate V5 compliant names
 *									from V4 names by replacing special characters (", *, /, etc...) by standard 
 *									characters.
 * @param oDefaultTab
 *	The table path.
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
*/
	virtual HRESULT GetConversion_Table(CATUnicodeString & oDefaultTab) = 0 ;  
	
/**
 * Sets the location of the "Characters Equivalence Table Path" setting parameter.
 * <br><b>Role</b>: The "Characters Equivalence Table" allows to convert characters contained
 *									in CATIA V4 documents. It is mainly used to generate V5 compliant names
 *									from V4 names by replacing special characters (", *, /, etc...) by standard 
 *									characters.
 * @param iDefaultTab
 *	The table path.
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
*/
	virtual HRESULT SetConversion_Table(CATUnicodeString & iDefaultTab) = 0 ;   

/** 
 * Retrieves information about the "Characters Equivalence Table Path"  etting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */
	virtual HRESULT GetConversion_TableInfo(CATSettingInfo * oInfo) = 0 ;   

/** 
 * Locks or unlocks the "Characters Equivalence Table Path" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */
	virtual HRESULT SetConversion_TableLock(unsigned char iLocked) = 0 ;   
	  
};

CATDeclareHandler(CATIV4IInteropSettingAtt, CATBaseUnknown);

#endif


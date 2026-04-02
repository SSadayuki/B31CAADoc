#ifndef CATIV4IMigrBatchSettingAtt_H
#define CATIV4IMigrBatchSettingAtt_H

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System framework
#include "IUnknown.h"   
#include "CATBaseUnknown.h"
#include "ExportedByCATV4iSettings.h"

class CATString;
class CATUnicodeString;
class CATSettingInfo ;

extern "C" ExportedByCATV4iSettings const IID IID_CATIV4IMigrBatchSettingAtt;

/**
	* Interface to handle the setting parameters of the "Migration Batch"  
	* tab page.
	* <b>Role</b>: This interface is implemented by a component named
	* CATV4IMigrBatchSettingCtrl which represents the controller of the Setting. 
	* The setting parameters of the tab are the following:
	* <ul> 
	* <li>"Format"</li>
	* <li>"V4 Part Definition"</li>
	* <li>"Conversion Mode"</li> 
	* <li>"Display Report Attribute"</li> 
	* <li>"Initial Drawing Path "</li>	
	* <li>"Projection of Space for transparent views"</li>
	* <li>"Mapping Files Location for Saving "</li>
	* <li>"Specified Directory "</li>
	* <li>"Mapping Files Location for Retrieving "</li>
	* <li>"Interface Name"</li>
	* </ul>
	* To access this property page:
	* <ul>
	*  <li>Click the <b>Options</b> command in the <b>Tools</b> menu</li>
	*  <li>Click + left of </b>General</b> to unfold the workbench list</li>   
	*  <li>Click </b>Compatibility</b></li>
	*  <li>Click on the </b>Migration Batch</b></li> tabpage
	* </ul> 
	* <br>This interface defines:
	* <ul>
	* <li>A method to get each parameter</li>
	* <li>A method to set the value of each parameter</li>
	* <li>A method to lock/unlock each parameter</li>
	* <li>A method to retrieve the informations concerning each parameter</li>
	* </ul>
*/

class ExportedByCATV4iSettings CATIV4IMigrBatchSettingAtt : public CATBaseUnknown
{

	CATDeclareInterface;

  public :

/**
 * Retrieves the state of the "Conversion Mode" setting parameter.
 * <br><b>Role</b>: The "Conversion Mode" mode enables you to 
 *									separate the treatment of SPACE data and DRAW data
 *									when a model is migrated.
 * @param oMigrType
 *	The conversion mode.
 *	<b>Legal values</b>:
 *	<br><tt>0:</tt>   "SpaceDraw"
 * 	<br><tt>1:</tt>   "Space"
 *	<br><tt>2:</tt>   "Draw"
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
*/
	virtual HRESULT GetMigration_Type( CATString & oMigrType) = 0 ; 
	
/**
 * Sets the state of the "Conversion Mode" setting parameter.
 * <br><b>Role</b>: The "Conversion Mode" mode enables you to 
 *									separate the treatment of SPACE data and DRAW data
 *									when a model is migrated.
 * @param iMigrType
 *	The conversion mode.
 *	<b>Legal values</b>:
 *	<br><tt>0:</tt>   "SpaceDraw"
 * 	<br><tt>1:</tt>   "Space"
 *	<br><tt>2:</tt>   "Draw"
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
*/
	virtual HRESULT SetMigration_Type(CATString & iMigrType)= 0 ;    

/** 
 * Retrieves information about the "Conversion" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */
	virtual HRESULT GetMigration_TypeInfo(CATSettingInfo * oInfo) = 0 ; 

/** 
 * Locks or unlocks the "Conversion" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */
	virtual HRESULT SetMigration_TypeLock(unsigned char iLocked)= 0 ; 

/**
 * Retrieves the "Migration Interace" setting parameter.
 * <br><b>Role</b>: This option allows you to customize migrations
 *									from CATIA V4 to CATIA V5. You can choose how your applicative 
 *									data will be migrated by writing source code 
 * @param oMigrItf
 *	The name of the interface.
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
*/
	virtual HRESULT GetMigration_Interface( CATUnicodeString & oMigrItf) = 0 ;  
	
/**
 * Sets the state of the "Migration Interace" setting parameter.
 * <br><b>Role</b>: This option allows you to customize migrations
 *									from CATIA V4 to CATIA V5. You can choose how your applicative 
 *									data will be migrated by writing source code 
 * @param iMigrItf
 *	The name of the interface.
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
*/	
	virtual HRESULT SetMigration_Interface(CATUnicodeString & iMigrItf)= 0 ;    
	
/** 
 * Retrieves information about the "Migration Interface" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */
	virtual HRESULT GetMigration_InterfaceInfo(CATSettingInfo * oInfo)=0   ;    
	
/** 
 * Locks or unlocks the "Migration Interface" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */
	virtual HRESULT SetMigration_InterfaceLock(unsigned char iLocked)= 0 ; 
	
/**
 * Retrieves the state of the "Format" setting parameter.
 * <br><b>Role</b>: The "Format" mode enables you to select the format 
 *									of the Migration in Batch Mode: AS SPEC or AS RESULT.
 * @param oMigrFormat
 *	The migration format. 
 *	<b>Legal values</b>:
 *	<br><tt>0:</tt>   "Spec"
 * 	<br><tt>1:</tt>   "Result" 
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
*/
	virtual HRESULT GetMigration_Format( CATString & oMigrFormat) = 0 ;
  
/**
 * Sets the state of the "Format" setting parameter.
 * <br><b>Role</b>: The "Format" mode enables you to select the format 
 *									of the Migration in Batch Mode: AS SPEC or AS RESULT.
 * @param iMigrFormat
 *	The migration format. 
 *	<b>Legal values</b>:
 *	<br><tt>0:</tt>   "Spec"
 * 	<br><tt>1:</tt>   "Result" 
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
*/
	virtual HRESULT SetMigration_Format(CATString & iMigrFormat)= 0 ;  
  
/** 
 * Retrieves information about the "Format" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */
	virtual HRESULT GetMigration_FormatInfo(CATSettingInfo * oInfo)=0   ; 
	
/** 
 * Locks or unlocks the "Format" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */
	virtual HRESULT SetMigration_FormatLock(unsigned char iLocked)= 0 ; 

/**
 * Retrieves the state of the "V4 Part Definition" setting parameter.
 * <br><b>Role</b>: The "V4 Part Definition" mode enables you to define the 
 *									CATParts obtained after the migration: A CATPart by Geometric 
 *									Set or A CATPart by Solid.
 *											.
 * @param oV4PartDef
 *	The state of the setting parameter.
 *	<b>Legal values</b>:
 *	<br><tt>0:</tt>   "SetGeo"
 * 	<br><tt>1:</tt>   "Solid"
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
*/
	virtual HRESULT GetV4_Part_Definition( CATString & oV4PartDef) = 0 ; 
	
/**
 * Sets the state of the "V4 Part Definition" setting parameter.
 * <br><b>Role</b>: The "V4 Part Definition" mode enables you to define the 
 *									CATParts obtained after the migration: A CATPart by Geometric 
 *									Set or A CATPart by Solid.
 *											.
 * @param iV4PartDef
 *	The state of the setting parameter.
 *	<b>Legal values</b>:
 *	<br><tt>0:</tt>   "SetGeo"
 * 	<br><tt>1:</tt>   "Solid"
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
*/
	virtual HRESULT SetV4_Part_Definition(CATString & iV4PartDef)= 0 ;    
	
/** 
 * Retrieves information about the "V4 Part Definition" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */
	virtual HRESULT GetV4_Part_DefinitionInfo(CATSettingInfo * oInfo)=0   ;    
	
/** 
 * Locks or unlocks the "V4 Part Definition" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */
	virtual HRESULT SetV4_Part_DefinitionLock(unsigned char iLocked)= 0 ; 
	
/**
 * Retrieves the state of the "Projection of Space for transparent views"
 * setting parameter.
 * <br><b>Role</b>: The "Projection of Space for transparent views" mode 
 *									enables you to specify what kind of projection mode 
 *									you want to use for transparent views during the 
 *									migration: NHR, HLR or the same projection mode as the
 *									V4 model.
 * @param o2DVisuMode
 *	The type of projection mode. 
 *	<b>Legal values</b>:
 *	<br><tt>0:</tt>   "NHR_2DVisuMode"
 * 	<br><tt>1:</tt>   "HLR_2DVisuMode" 
 * 	<br><tt>2:</tt>   "SameAsV4Mode" 
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
*/
	virtual HRESULT GetVisu_Mode_2D( CATString & o2DVisuMode) = 0 ; 
	
/**
 * Sets the state of the "Projection of Space for transparent views" 
 * setting parameter.
 * <br><b>Role</b>: The "Projection of Space for transparent views" mode 
 *									enables you to specify what kind of projection mode 
 *									you want to use for transparent views during the 
 *									migration: NHR, HLR or the same projection mode as the
 *									V4 model.
 * @param i2DVisuMode
 *	The type of projection mode. 
 *	<b>Legal values</b>:
 *	<br><tt>0:</tt>   "NHR_2DVisuMode"
 * 	<br><tt>1:</tt>   "HLR_2DVisuMode" 
 * 	<br><tt>2:</tt>   "SameAsV4Mode" 
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
*/
	virtual HRESULT SetVisu_Mode_2D(CATString & i2DVisuMode)= 0 ;    
	
/** 
 * Retrieves information about the "Projection of Space for transparent views" 
 * setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */
	virtual HRESULT GetVisu_Mode_2DInfo(CATSettingInfo * oInfo)=0   ;    
	
/** 
 * Locks or unlocks the "Projection of Space for transparent views" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */
	virtual HRESULT SetVisu_Mode_2DLock(unsigned char iLocked)= 0 ; 
	
/**
 * Retrieves the state of the "Initial Drawing Path" setting parameter.
 * <br><b>Role</b>: The "Initial Drawing Path" mode enables you to 
 *									specify a .CATDrawing	document which will serve as
 *									a template. The standard used by this document will
 *									be used during the migration. 
 * @param oInitialModel
 *	The path of the document used as a template. 
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
*/
	virtual HRESULT GetStartUp_Model_For_Drawing(CATUnicodeString & oInitialModel)= 0 ;
	
/**
 * Sets the state of the "Initial Drawing Path" setting parameter.
 * <br><b>Role</b>: The "Initial Drawing Path" mode enables you to 
 *									specify a .CATDrawing	document which will serve as
 *									a template. The standard used by this document will
 *									be used during the migration. 
 * @param iInitialModel
 *	The path of the document used as a template. 
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
*/
	virtual HRESULT SetStartUp_Model_For_Drawing(CATUnicodeString & iInitialModel)= 0 ;
	
/** 
 * Retrieves information about the "Initial Drawing Path" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */
	virtual HRESULT GetStartUp_Model_For_DrawingInfo(CATSettingInfo * oInfo)= 0 ;
	
/** 
 * Locks or unlocks the "Initial Drawing Path" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */
	virtual HRESULT SetStartUp_Model_For_DrawingLock(unsigned char iLocked )= 0 ;

/**
 * Retrieves the state of the "Mapping Files Location for Saving" setting
 * parameter.
 * <br><b>Role</b>: The "Mapping Files Location for Saving " mode enables
 *									you to store a file which indicates the pointed entities
 *									in V4 MML Solids and which allows to retrieve associativity 
 *									in CATIA V5. 
 *									You can specify the directory path of your choice:
 *									Batch Target Directory, Model Directory or Specified Directory.
 * @param oMapFileMode
 *	The directory.
 *	<b>Legal values</b>:
 *	<br><tt>0:</tt>   "SaveInDir"
 * 	<br><tt>1:</tt>   "SaveWithMdl"
 *	<br><tt>2:</tt>   "SaveInFile"
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
*/
	virtual HRESULT GetMapping_File_Save_Mode(CATString & oMapFileMode)= 0 ;
	
/**
 * Sets the state of the "Mapping Files Location for Saving" setting parameter.
 * <br><b>Role</b>: The "Mapping Files Location for Saving " mode enables
 *									you to store a file which indicates the pointed entities
 *									in V4 MML Solids and which allows to retrieve associativity 
 *									in CATIA V5. 
 *									You can specify the directory path of your choice:
 *									Batch Target Directory, Model Directory or Specified Directory.
 * @param iMapFileMode
 *	The directory.
 *	<b>Legal values</b>:
 *	<br><tt>0:</tt>   "SaveInDir"
 * 	<br><tt>1:</tt>   "SaveWithMdl"
 *	<br><tt>2:</tt>   "SaveInFile"
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
*/
	virtual HRESULT SetMapping_File_Save_Mode(CATString & iMapFileMode)= 0 ;

/** 
 * Retrieves information about the "Mapping Files Location for Saving" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */
	virtual HRESULT GetMapping_File_Save_ModeInfo(CATSettingInfo * oInfo)= 0 ;
	
/** 
 * Locks or unlocks the "Mapping Files Location for Saving" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */
	virtual HRESULT SetMapping_File_Save_ModeLock(unsigned char iLocked )= 0 ;

/**
 * Retrieves the state of the "Specified Directory" setting parameter.
 * <br><b>Role</b>: The "Specified Directory" mode enables you to find 
 *									pointed entities in V4 MML Solids and to retrieve associativity
 *									in CATIA V5. You can specify the directory path of your choice.
 * @param oMapFileMode
 *	The path of the specified directory.
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
*/
	virtual HRESULT GetMapping_Saving_File(CATUnicodeString & oMapSavingFile)= 0 ;

/**
 * Sets the state of the "Specified Directory" setting parameter.
 * <br><b>Role</b>: The "Specified Directory" mode enables you to find 
 *									pointed entities in V4 MML Solids and to retrieve associativity
 *									in CATIA V5. You can specify the directory path of your choice.
 * @param iMapFileMode
 *	The path of the specified directory.
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
*/
	virtual HRESULT SetMapping_Saving_File(CATUnicodeString & iMapSavingFile)= 0 ;

/** 
 * Retrieves information about the "Specified Directory" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */
	virtual HRESULT GetMapping_Saving_FileInfo(CATSettingInfo * oInfo)= 0 ;

/** 
 * Locks or unlocks the "Specified Directory" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */
	virtual HRESULT SetMapping_Saving_FileLock(unsigned char iLocked )= 0 ;

/**
 * Retrieves the size of the "Mapping Files Location for Retrieving" list.
 * <br><b>Role</b>: This setting enables to retrieve the size of the "Mapping 
 *									Files Location for Retrieving" list.
 * @param oListSize
 *	The list size.
*/
	virtual HRESULT GetSearch_List_Size(int & oListSize)= 0 ;

/**
 * Sets the size of the "Mapping Files Location for Retrieving" list.
 * <br><b>Role</b>: This setting enables to set the size of the "Mapping 
 *									Files Location for Retrieving" list.
 * @param oListSize
 *	The list size.
*/
	virtual HRESULT SetSearch_List_Size(int iListSize)= 0 ;

/** 
 * Retrieves information about the setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */
	//virtual HRESULT GetSearch_List_SizeInfo(CATSettingInfo * oInfo)= 0 ;

/** 
 * Locks or unlocks the setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */
	//virtual HRESULT SetSearch_List_SizeLock(unsigned char iLocked )= 0 ;

/**
 * Retrieves the state of the "Display Report Attribute" setting parameter.
 * <br><b>Role</b>: This functionality allows the visualization of 3D elements
 *									attributes in the Migration Report. For each element, the 
 *									list of its attributes is displayed with their names and values.
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
	virtual HRESULT GetAffiche_Attribut(CATString & oAfficheAttr) = 0 ;  

/**
 * Sets the state of the "Display Report Attribute" setting parameter.
 * <br><b>Role</b>: This functionality allows the visualization of 3D elements
 *									attributes in the Migration Report. For each element, the 
 *									list of its attributes is displayed with their names and values.
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
	virtual HRESULT SetAffiche_Attribut(CATString & iAfficheAttr)= 0 ; 
	
/** 
 * Retrieves information about the "Display Report Attribute" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */
	virtual HRESULT GetAffiche_AttributInfo(CATSettingInfo * oInfo)=0   ; 
	
/** 
 * Locks or unlocks the "Display Report Attribute" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */
	virtual HRESULT SetAffiche_AttributLock(unsigned char iLocked)= 0 ; 

/**
 * Retrieves the state of the "Mapping Files Location for Retrieving" setting
 * parameter.
 * <br><b>Role</b>: The "Mapping Files Location for Retrieving " mode enables
 *									you to store a list of mapping tables.
 * @param oMapList
 *	The Mapping files path.
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
*/
	virtual HRESULT GetSearch_Mapping_List(CATUnicodeString  **&oMapList)= 0 ; 

/**
 * Sets the state of the "Mapping Files Location for Retrieving" setting
 * parameter.
 * <br><b>Role</b>: The "Mapping Files Location for Retrieving " mode enables
 *									you to store a list of mapping tables.
 * @param iMapList
 *	The Mapping files path.
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
*/
	virtual HRESULT SetSearch_Mapping_List(CATUnicodeString ** iMapList)= 0 ;

};

CATDeclareHandler(CATIV4IMigrBatchSettingAtt, CATBaseUnknown);

#endif


#ifndef CATIV4IV4V5SpaceSettingAtt_H
#define CATIV4IV4V5SpaceSettingAtt_H

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

extern "C" ExportedByCATV4iSettings const IID IID_CATIV4IV4V5SpaceSettingAtt;


/** 
 * Interface representing the V4/V5 SPACE setting controller object.
 * <b>Role</b>: The V4/V5 SPACE setting controller object deals with the setting
 * parameters displayed in the V4/V5 SPACE property page.
 * To access this property page:
 * <ul>
 *  <li>Click the <b>Options</b> command in the <b>Tools</b> menu</li>
 *  <li>Click + left of </b>General</b> to unfold the workbench list</li>   
 *  <li>Click </b>Compatibility</b></li>
 * </ul> 
 * <br><b>The different options for V4/V5 SPACE tab</b>:
 * <ul> 
 * <li>"Gap Healing"</li>
 * <li>"Curvature Improvement"</li>
 * <li>"Surface and Curve sub-elements"</li> 
 * <li>"Migration of DETAILS spaces used by dittos"</li> 
 * <li>"Isolated Solid Mock-up migration"</li>	
 * <li>"3D Text Migration"</li>
 * </ul>
 */

class ExportedByCATV4iSettings CATIV4IV4V5SpaceSettingAtt : public CATBaseUnknown
{

	CATDeclareInterface;

  public :

//------------------------------------------------------
// External Type Deformation setting parameter
//------------------------------------------------------
/**
 * Retrieves the ExternalTypeDeformation setting parameter value.
 * <br><b>Role</b>: The External Type Deformation setting parameter manages the deformation type    
 * @param oExtDefType
 *	The External Deformation Type
 *	<b>Legal values</b>:
 *	<br><tt>0:</tt>   "Model Relative"
 * 	<br><tt>1:</tt>   "User defined value"
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
 */
  	virtual HRESULT GetExternalTypeDeformation(int & oExtDefType) = 0 ; 

/**
 * Sets the state of the "ExternalTypeDeformation" setting parameter (Gap Healing).
 * <br><b>Role</b>: The External Type Deformation setting parameter manages the deformation type  
 * @param iExtDefType
 *	The conversion mode.
 *	<b>Legal values</b>:
 *	<br><tt>0:</tt>   "Model Relative"
 * 	<br><tt>1:</tt>   "User defined value"
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
*/

	virtual HRESULT SetExternalTypeDeformation(int iExtDefType)= 0 ; 

/** 
 * Retrieves information about the "ExternalTypeDeformation" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */

	virtual HRESULT GetExternalTypeDeformationInfo(CATSettingInfo * oInfo)= 0 ;

/** 
 * Locks or unlocks the "ExternalTypeDeformation" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */
	
	virtual HRESULT SetExternalTypeDeformationLock(unsigned char iLocked)= 0 ;

//------------------------------------------------------
// External Maximum Deformation setting parameter
//------------------------------------------------------
/**
 * Retrieves the ExternalMaxDeformation setting parameter value.
 * <br><b>Role</b>: The External Maximum Deformation setting parameter manages the maximum authorized 
 *  for external deformation
 * @param oExtMaxDef
 *	The External Maximum Deformation setting parameter value
 *	<b>Legal values</b>:
 * A float typed by the user
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
 */


	virtual HRESULT GetExternalMaxDeformation(float & oExtMaxDef) = 0 ; 
/**
 * Sets the state of the "ExternalMaxDeformation" setting parameter (Gap Healing).
 * <br><b>Role</b>: The External Maximum Deformation setting parameter manages the deformation type  
 * @param iExtMaxDef
 *	The External Maximum Deformation setting parameter value
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
*/

	virtual HRESULT SetExternalMaxDeformation(float iExtMaxDef)= 0 ; 

/** 
 * Retrieves information about the "ExternalMaxDeformation" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */

	virtual HRESULT GetExternalMaxDeformationInfo(CATSettingInfo * oInfo)= 0 ;

/** 
 * Locks or unlocks the "ExternalMaxDeformation" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */
	virtual HRESULT SetExternalMaxDeformationLock(unsigned char iLocked)= 0 ;


//------------------------------------------------------
// Internal Type Deformation setting parameter
//------------------------------------------------------
/**
 * Retrieves the InternalTypeDeformation setting parameter value (Curve Improvement).
 * <br><b>Role</b>: The Internal Type Deformation setting parameter manages the deformation type 
 * @param oIntDefType
 *	The Internal Deformation Type 
 *	<b>Legal values</b>:
 *	<br><tt>0:</tt>   "Model Relative"
 * 	<br><tt>1:</tt>   "User defined value"
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
 */

	virtual HRESULT GetInternalTypeDeformation(int & oIntDefType) = 0 ; 
/**
 * Sets the state of the "InternalTypeDeformation" setting parameter (Gap Healing).
 * <br><b>Role</b>: The Internal Type Deformation setting parameter manages the deformation type  
 * @param iIntDefType
 *	The conversion mode.
 *	<b>Legal values</b>:
 *	<br><tt>0:</tt>   "Model Relative"
 * 	<br><tt>1:</tt>   "User defined value"
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
*/

	
	virtual HRESULT SetInternalTypeDeformation(int iIntDefType)= 0 ; 

/** 
 * Retrieves information about the "InternalTypeDeformation" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */

	virtual HRESULT GetInternalTypeDeformationInfo(CATSettingInfo * oInfo)= 0 ;

/** 
 * Locks or unlocks the "InternalTypeDeformation" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */

	virtual HRESULT SetInternalTypeDeformationLock(unsigned char iLocked)= 0 ;


//------------------------------------------------------
// Internal Maximum Deformation setting parameter
//------------------------------------------------------
/**
 * Retrieves the InternalMaxDeformation setting parameter value.
 * <br><b>Role</b>: The Internal Maximum Deformation setting parameter manages the maximum authorized 
 *  for internal deformation
 * @param oIntMaxDef
 *	The Internal Maximum Deformation stting parameter value
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
 */

	virtual HRESULT GetInternalMaxDeformation(float & oIntMaxDef) = 0 ; 
	
/**
 * Sets the state of the "InternalMaxDeformation" setting parameter (Curve Improvement).
 * <br><b>Role</b>: The Internal Maximum Deformation setting parameter manages the deformation type  
 * @param iIntMaxDef
 *	The External Maximum Deformation setting parameter value
 * @return
 *	<b>Legal values</b>:
 *	<br><tt>S_OK :</tt>   on Success
 * 	<br><tt>E_FAIL:</tt>  on failure
*/

	virtual HRESULT SetInternalMaxDeformation(float iIntMaxDef)= 0 ; 

/** 
 * Retrieves information about the "InternalMaxDeformation" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */

	virtual HRESULT GetInternalMaxDeformationInfo(CATSettingInfo * oInfo)= 0 ;
/** 
 * Locks or unlocks the "InternalMaxDeformation" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */

	virtual HRESULT SetInternalMaxDeformationLock(unsigned char iLocked)= 0 ;

//-------------------------------------------------------------------------------
//------------------------------------------------------
// KeepSegmentation setting parameter
//------------------------------------------------------
/**
 * Retrieves the Keep Segmentation setting parameter value.
 * <br><b>Role</b>: The KeepSegmentation setting parameter manages the segmentation  
 * @param oSegmentationState
 *	The KeepSegmentation setting parameter value.
 *  Disabled by default, the KeepSegmentation option allows to keep V4 Segmentation
 * @return
 *   S_OK if the KeepSegmentation setting parameter value
 *   is successfully retrieved, and E_FAIL otherwise   
 */
 


	virtual HRESULT GetKeepSegmentation(int & oSegmentationState) = 0 ; 
   
/** Sets the Keep Segmentation setting parameter value.
 * @param iSegmentationState 
 *   The KeepSegmentation setting parameter value.
  *  Disabled by default, the KeepSegmentation option allows to keep V4 Segmentation
 * @return
 *   S_OK if the KeepSegmentation setting parameter value
 *   is successfully retrieved, and E_FAIL otherwise   
 *
 */

	virtual HRESULT SetKeepSegmentation(int iSegmentationState)= 0 ; 

/** 
 * Retrieves information about the "KeepSegmentation" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */

	virtual HRESULT GetKeepSegmentationInfo(CATSettingInfo * oInfo)= 0 ;

/** 
 * Locks or unlocks the "KeepSegmentation" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */
	virtual HRESULT SetKeepSegmentationLock(unsigned char iLocked)= 0 ;

//-------------------------------------------------------------------------------

//------------------------------------------------------
// DetailsModeUsual setting parameter
//------------------------------------------------------
/**
 * Retrieves the DetailsModeUsual setting parameter value.
 * <br><b>Role</b>: The DetailsModeUsual setting parameter manages the dittos migration  
 * @param oDetailsChoiceUsual
 *	The DetailsModeUsual setting parameter value.
 *  Activated by default, the DetailsModeUsual option allows to migrate dittos to V5 elements
 *  with optimized usual mode
 * @return
 *   S_OK if the DetailsModeUsual setting parameter value
 *   is successfully retrieved, and E_FAIL otherwise   
 */

  	virtual HRESULT GetDetailsModeUsual(int & oDetailsChoiceUsual) = 0 ; 

/** Sets the DetailsModeUsual setting parameter value.
 * <br><b>Role</b>: The DetailsModeUsual setting parameter manages the dittos migration  
 * @param iDetailsChoiceUsual
 *	The DetailsModeUsual setting parameter value.
 *  Activated by default, the DetailsModeUsual option allows to migrate dittos to V5 elements
 *  with optimized usual mode
 * @return
 *   S_OK if the DetailsModeUsual setting parameter value
 *   is successfully retrieved, and E_FAIL otherwise   
 */

	virtual HRESULT SetDetailsModeUsual(int iDetailsChoiceUsual)= 0 ; 

/** 
 * Retrieves information about the "DetailsModeUsual" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */

	virtual HRESULT GetDetailsModeUsualInfo(CATSettingInfo * oInfo)= 0 ;
/** 
 * Locks or unlocks the "DetailsModeUsual" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */


	virtual HRESULT SetDetailsModeUsualLock(unsigned char iLocked)= 0 ;

//-------------------------------------------------------------------------------
//------------------------------------------------------
// DetailsModeExplode setting parameter
//------------------------------------------------------
/**
 * Retrieves the DetailsModeExplode setting parameter value.
 * <br><b>Role</b>: The DetailsModeExplode setting parameter manages the dittos migration  
 * @param oDetailsChoiceExplode
 *	The DetailsModeExplode setting parameter value.
 *  Disabled by default, the DetailsModeExplode option allows to explode dittos 
 *  when migration to V5 elements
 * @return
 *   S_OK if the DetailsModeExplode setting parameter value
 *   is successfully retrieved, and E_FAIL otherwise   
 */

 	virtual HRESULT GetDetailsModeExplode(int & oDetailsChoiceExplode) = 0 ; 

/** Sets the DetailsModeExplode setting parameter value.
 * <br><b>Role</b>: The DetailsModeExplode setting parameter manages the dittos migration  
 * @param iDetailsChoiceExplode
 *	The DetailsModeExplode setting parameter value.
 *  Disabled by default, the DetailsModeExplode option allows to explode dittos 
 *  when migration to V5 elements
 * @return
 *   S_OK if the DetailsModeExplode setting parameter value
 *   is successfully retrieved, and E_FAIL otherwise   
 */


	virtual HRESULT SetDetailsModeExplode(int iDetailsChoiceExplode)= 0 ; 
/** 
 * Retrieves information about the "DetailsModeExplode" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */

	virtual HRESULT GetDetailsModeExplodeInfo(CATSettingInfo * oInfo)= 0 ;

/** 
 * Locks or unlocks the "DetailsModeExplode" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */

	virtual HRESULT SetDetailsModeExplodeLock(unsigned char iLocked)= 0 ;
//-------------------------------------------------------------------------------
//------------------------------------------------------
// DetailsModeWireframe setting parameter
//------------------------------------------------------
/**
 * Retrieves the DetailsModeWireframe setting parameter value.
 * <br><b>Role</b>: The DetailsModeWireframe setting parameter manages the dittos migration  
 * @param oDetailsChoiceWireframe
 *	The DetailsModeWireframe setting parameter value.
 *  Disabled by default, the DetailsModeWireframe option allows to migrate the isolated wireframe 
 *  elements for each ditto to V5 elements too
 * @return
 *   S_OK if the DetailsModeWireframe setting parameter value
 *   is successfully retrieved, and E_FAIL otherwise   
 */

 	virtual HRESULT GetDetailsModeWireframe(int & oDetailsChoiceWireframe) = 0 ; 

/** Sets the DetailsModeWireframe setting parameter value.
 * <br><b>Role</b>: The DetailsModeWireframe setting parameter manages the dittos migration  
 * @param iDetailsChoiceWireframe
 *	The DetailsModeWireframe setting parameter value.
 *  Disabled by default, the DetailsModeWireframe option allows to migrate the isolated wireframe 
 *  elements for each ditto to V5 elements too
 * @return
 *   S_OK if the DetailsModeWireframe setting parameter value
 *   is successfully retrieved, and E_FAIL otherwise   
 */

	virtual HRESULT SetDetailsModeWireframe(int iDetailsChoiceWireframe)= 0 ; 

/** 
 * Retrieves information about the "DetailsModeWireframe" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */

	virtual HRESULT GetDetailsModeWireframeInfo(CATSettingInfo * oInfo)= 0 ;

/** 
 * Locks or unlocks the "DetailsModeWireframe" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */
	
	virtual HRESULT SetDetailsModeWireframeLock(unsigned char iLocked)= 0 ;

//-------------------------------------------------------------------------------
//------------------------------------------------------
// SolidMU setting parameter
//------------------------------------------------------
/**
 * Retrieves the SolidMU setting parameter value.
 * <br><b>Role</b>: The SolidMU setting parameter manages the migration for Solids Mock-Up  
 * @param ochoiceMU
 *	The SolidMU setting parameter value.
 *  The SolidMU option allows to convert isolated Solid Mock-up as CGR or as PartBody.
 * By default, the "as CGR" option is enabled.
 * @return
 *   S_OK if the SolidMU setting parameter value
 *   is successfully retrieved, and E_FAIL otherwise   
 */

	virtual HRESULT GetSolidMU(CATString & ochoiceMU) = 0 ; 

/** Sets the SolidMU setting parameter value.
 * <br><b>Role</b>: The SolidMU setting parameter manages the migration for Solids Mock-Up 
 * @param ichoiceMU
 *	The SolidMU setting parameter value.
 *  The SolidMU option allows to convert isolated Solid Mock-up as CGR or as PartBody.
 *  By default, the "as CGR" option is enabled.
 * @return
 *   S_OK if the SolidMU setting parameter value
 *   is successfully retrieved, and E_FAIL otherwise   
 */


	virtual HRESULT SetSolidMU(CATString & ichoiceMU)= 0 ; 
	
/** 
 * Retrieves information about the "SolidMU" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */

	virtual HRESULT GetSolidMUInfo(CATSettingInfo * oInfo)= 0 ;

/** 
 * Locks or unlocks the "SolidMU" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */

	virtual HRESULT SetSolidMULock(unsigned char iLocked)= 0 ;
//-------------------------------------------------------------------------------
//------------------------------------------------------
// TextMigration setting parameter
//------------------------------------------------------
/**
 * Retrieves the TextMigration setting parameter value.
 * <br><b>Role</b>: The TextMigration setting parameter manages the 3D text migration  
 * @param oTextMigrationState
 *	The TextMigration setting parameter value.
 *  Disabled by default, the TextMigration option allows to migrate 3D texts during copy/paste 
 * @return
 *   S_OK if the TextMigration setting parameter value
 *   is successfully retrieved, and E_FAIL otherwise   
 */

	virtual HRESULT GetTextMigration(int & oTextMigrationState) = 0 ; 

/** Sets the TextMigration setting parameter value.
 * <br><b>Role</b>: The TextMigration setting parameter manages the dittos migration  
 * @param iTextMigrationState
 *	The TextMigration setting parameter value.
 *  Disabled by default, the TextMigration option allows to migrate 3D texts during copy/paste 
 * @return
 *   S_OK if the TextMigration setting parameter value
 *   is successfully retrieved, and E_FAIL otherwise   
 */
	
	virtual HRESULT SetTextMigration(int iTextMigrationState)= 0 ; 

/** 
 * Retrieves information about the "TextMigration" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */


	virtual HRESULT GetTextMigrationInfo(CATSettingInfo * oInfo)= 0 ;
/** 
 * Locks or unlocks the "TextMigration" setting parameter.
 * <br>Refer to @href CATSysSettingController for a detailed description.
 */

	virtual HRESULT SetTextMigrationLock(unsigned char iLocked)= 0 ;

};

CATDeclareHandler(CATIV4IV4V5SpaceSettingAtt, CATBaseUnknown);

#endif


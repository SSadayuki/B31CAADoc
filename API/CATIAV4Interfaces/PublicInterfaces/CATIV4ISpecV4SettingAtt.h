#ifndef CATIV4ISpecV4SettingAtt_H
#define CATIV4ISpecV4SettingAtt_H

// COPYRIGHT DASSAULT SYSTEMES 2003
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */
// System framework
#include "IUnknown.h"   // To derive From
#include "CATBaseUnknown.h"
#include "ExportedByCATV4iSettings.h"
#include "CATBoolean.h"

class CATSettingInfo ;

#include "CATV4IV4V5SpecDraftMigrationEnum.h"
extern "C" ExportedByCATV4iSettings const IID IID_CATIV4ISpecV4SettingAtt;
/** 
 * Interface representing the V4/V5SPEC setting controller object.
 * <b>Role</b>: The V4/V5 SPEC setting controller object deals with the setting
 * parameters displayed in the V4/V5 SPEC property page.
 * To access this property page:
 * <ul>
 *  <li>Click the <b>Options</b> command in the <b>Tools</b> menu</li>
 *  <li>Click + left of </b>General</b> to unfold the workbench list</li>   
 *  <li>Click </b>Compatibility</b></li>
 * </ul> 
 * <br><b>The different options for V4/V5SPEC tab</b>:
 * <table>
 *   <tr><td>The Step By Step Update And Reroute</td>  
 *   <tr><td>The Draft Feature Migration Mode </td>  
 * </table>
 */
class ExportedByCATV4iSettings CATIV4ISpecV4SettingAtt : public CATBaseUnknown
{

CATDeclareInterface;
  public :

	//------------------------------------------------------
    // StepByStepUpdateAndReroute setting parameter
    //------------------------------------------------------
    /**
     * Retrieves the Step By Step Update And Reroute setting parameter value.
     * <br><b>Role</b>: The Step By Step Update And Reroute setting parameter manages the mode
	 *   reroute when copying as spec
     * @param oStateOfCpdest 
     *   The Step By Step Update And Reroute setting parameter value.
	 *   Activated by default, the Step By Step Update And Reroute option allows to create V5 features, updating them progressively
	 *   and using both V4 and V5 BReps to go on.
     * @return
     *   S_OK if the Step By Step Update And Reroute setting parameter value
     *   is successfully retrieved, and E_FAIL otherwise   
     */
	virtual HRESULT GetStepByStepUpdateAndReroute( CATBoolean &oStateOfCpdest) = 0 ;
    /**
     * Sets the Step By Step Update And Reroute setting parameter value.
     * @param iStateOfCpdest 
     *   The Step By Step Update And Reroute setting parameter value.
	 *   Activated by default, the Step By Step Update And Reroute option allows to create V5 features, updating them progressively
	 *   and using both V4 and V5 BReps to go on.
     * @return
     *   S_OK if the Step By Step Update And Reroute setting parameter value
     *   is successfully set, and E_FAIL otherwise   
     */
	virtual HRESULT SetStepByStepUpdateAndReroute( CATBoolean iStateOfCpdest)= 0     ; 
	/** 
	* Retrieves information about the Step By Step Update And Reroute setting parameter.
	* <br>Refer to @href CATSysSettingController for a detailed description.
	*/
	virtual HRESULT GetStepByStepUpdateAndRerouteInfo( CATSettingInfo * oInfo) = 0 ;
	/** 
	* Locks or unlocks the Step By Step Update And Reroute setting parameter.
	* <br>Refer to @href CATSysSettingController for a detailed description.
	*/
	virtual HRESULT SetStepByStepUpdateAndRerouteLock( unsigned char iLock) = 0;

	//------------------------------------------------------
    // DraftFeatureMigrationMode setting parameter
    //------------------------------------------------------
    /**
     * Retrieves the Draft Feature Migration Mode setting parameter value.
     * <br><b>Role</b>: The Draft Feature Migration Mode setting parameter manages the mode
	 *   of draft migration when copying as spec.
     * @param oDraftMode 
     *   The Draft Feature Migration Mode setting parameter value.
	 *   This parameter represents the method chosen for ribbons propagation : square mode or cone mode.
     * @return
     *   S_OK if the Draft Feature Migration Mode setting parameter value.
     *   is successfully retrieved, and E_FAIL otherwise   
     */
	virtual HRESULT GetDraftFeatureMigrationMode(CATV4IV4V5SpecDraftMigrationEnum & oDraftMode) = 0   ; 
	/**
     * Sets the Draft Feature Migration Mode setting parameter value.
     * @param draftMode 
     *   The Draft Feature Migration Mode setting parameter value.
	 *   This parameter represents the method chosen for ribbons propagation : square mode or cone mode.
     * @return
     *   S_OK if the Draft Feature Migration Mode setting parameter value.
     *   is successfully set, and E_FAIL otherwise   
     */
	virtual HRESULT SetDraftFeatureMigrationMode(CATV4IV4V5SpecDraftMigrationEnum draftMode) = 0     ;
	/** 
	* Retrieves information about the Draft Feature Migration Mode setting parameter.
	* <br>Refer to @href CATSysSettingController for a detailed description.
	*/
    virtual HRESULT GetDraftFeatureMigrationModeInfo(CATSettingInfo * oInfo) = 0;
	/** 
	* Locks or unlocks the Draft Feature Migration Mode setting parameter.
	* <br>Refer to @href CATSysSettingController for a detailed description.
	*/
	virtual HRESULT SetDraftFeatureMigrationModeLock(unsigned char iLock) = 0;
	
};

CATDeclareHandler(CATIV4ISpecV4SettingAtt, CATBaseUnknown);

#endif


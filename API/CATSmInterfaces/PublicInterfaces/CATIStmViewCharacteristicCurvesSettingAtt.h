// COPYRIGHT Dassault Systemes 2003
//===================================================================
#ifndef CATIStmViewCharacteristicCurvesSettingAtt_H
#define CATIStmViewCharacteristicCurvesSettingAtt_H
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

/**
 * Interface to CATIA Sheet Metal Aerospace Display setting controller object.
 * <b>Role</b>: The CATIA Sheet Metal Aerospace Display setting controller is dedicated to manage the
 * setting parameters displayed in the Sheet Metal Aerospace Display property page.
 * The Sheet Metal Aerospace Display property page manage the visibility of <b>Characteristic Curves</b> in Folded
 * and Unfolded view.
 * THE METHODS DEDICATED FOR SURFACIC FLANGE ARE USEFUL FOR BOTH SURFACIC FLANGE AND SWEPT FLANGE.
 * <br><b>Characteristic Curves</b> summary :
 * <table>
 *   <tr><td>BTLSupp</td>     <td>Bend Tangent Line bounding the Support (Flange)</td></tr>
 *   <tr><td>BTLFeat</td>     <td>Bend Tangent Line bounding the Base Feature (Web or Flange)</td></tr>
 *   <tr><td>OML</td>         <td>Outer Mold Line</td></tr>
 *   <tr><td>OML2</td>        <td>Second Outer Mold Line (Unfolded view)</td></tr>
 *   <tr><td>IML</td>         <td>Inner Mold Line</td></tr>
 *   <tr><td>CLB</td>         <td>Center Line of Bend</td></tr>
 * </table>
 * To access this property page:
 * <ul>
 *  <li>Click the <b>Options</b> command in the <b>Tools</b> menu</li>
 *  <li>Click + left of </b>Mechanical Design</b> to unfold the workbench list</li>   
 *  <li>Click <b>Display</b></li>
 * </ul>
 * <p>Retrieve a pointer to CATIStmViewCharacteristicCurvesSettingAtt as follows:
 * <pre>
 * CATIStmViewCharacteristicCurvesSettingAtt * pIStmViewCharacteristicCurvesSettingCtrl;
 * HRESULT rc = E_FAIL;
 * rc = ::CATInstantiateComponent("CATIStmViewCharacteristicCurvesSettingCtrl",
 *                                IID_CATIStmViewCharacteristicCurvesSettingAtt,
 *                                (void**) & pIStmViewCharacteristicCurvesSettingCtrl);
 * </pre>
 */
#include "CATBaseUnknown.h"
#include "ExportedByCATSmInterfaces.h"

class CATSettingInfo;
class CATUnicodeString;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATSmInterfaces IID IID_CATIStmViewCharacteristicCurvesSettingAtt;
#else
extern "C" const IID IID_CATIStmViewCharacteristicCurvesSettingAtt ;
#endif

class ExportedByCATSmInterfaces CATIStmViewCharacteristicCurvesSettingAtt : public CATBaseUnknown
  {
  CATDeclareInterface;

  public:
 
    /**
     * Retrieves the SHMViewFDSurfFlgBTLSuppBF setting parameter value.
     * <br><b>Role</b>: The SHMViewFDSurfFlgBTLSuppBF setting parameter manage the visibility
	   * of the BTL Support on a Surfacic Flange Brake formed in Folded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFDSurfFlgBTLSuppBF (unsigned int & oSeen) = 0;
    
    /**
     * Sets the SHMViewFDSurfFlgBTLSuppBF setting parameter value.
     * <br><b>Role</b>: The SHMViewFDSurfFlgBTLSuppBF setting parameter manage the visibility
	   * of the BTL Support on a Surfacic Flange Brake formed in Folded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFDSurfFlgBTLSuppBF (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFDSurfFlgBTLSuppBF setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFDSurfFlgBTLSuppBFInfo (CATSettingInfo * oInfo) = 0;
    
    /** 
     * Locks or unlocks the SHMViewFDSurfFlgBTLSuppBF setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFDSurfFlgBTLSuppBFLock (unsigned char iLocked) = 0;

    /**
     * Retrieves the SHMViewFPSurfFlgBTLSuppBF setting parameter value.
     * <br><b>Role</b>: The SHMViewFPSurfFlgBTLSuppBF setting parameter manage the visibility
	   * of the BTL Support on a Surfacic Flange Brake formed in UnFolded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */         
     virtual HRESULT GetSHMViewFPSurfFlgBTLSuppBF (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFPSurfFlgBTLSuppBF setting parameter value.
     * <br><b>Role</b>: The SHMViewFPSurfFlgBTLSuppBF setting parameter manage the visibility
	   * of the BTL Support on a Surfacic Flange Brake formed in UnFolded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFPSurfFlgBTLSuppBF (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFPSurfFlgBTLSuppBF setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFPSurfFlgBTLSuppBFInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFPSurfFlgBTLSuppBF setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFPSurfFlgBTLSuppBFLock (unsigned char iLocked) = 0;

    /**
     * Retrieves the SHMViewFDSurfFlgBTLFeatBF setting parameter value.
     * <br><b>Role</b>: The SHMViewFDSurfFlgBTLFeatBF setting parameter manage the visibility
	   * of the BTL Feature on a Surfacic Flange Brake formed in Folded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFDSurfFlgBTLFeatBF (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFDSurfFlgBTLFeatBF setting parameter value.
     * <br><b>Role</b>: The SHMViewFDSurfFlgBTLFeatBF setting parameter manage the visibility
	   * of the BTL Feature on a Surfacic Flange Brake formed in Folded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFDSurfFlgBTLFeatBF (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFDSurfFlgBTLFeatBF setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFDSurfFlgBTLFeatBFInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFDSurfFlgBTLFeatBF setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFDSurfFlgBTLFeatBFLock (unsigned char iLocked) = 0;

    /**
     * Retrieves the SHMViewFPSurfFlgBTLFeatBF setting parameter value.
     * <br><b>Role</b>: The SHMViewFPSurfFlgBTLFeatBF setting parameter manage the visibility
	   * of the BTL Feature on a Surfacic Flange Brake formed in UnFolded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFPSurfFlgBTLFeatBF (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFPSurfFlgBTLFeatBF setting parameter value.
     * <br><b>Role</b>: The SHMViewFPSurfFlgBTLFeatBF setting parameter manage the visibility
	   * of the BTL Feature on a Surfacic Flange Brake formed in UnFolded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFPSurfFlgBTLFeatBF (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFPSurfFlgBTLFeatBF setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFPSurfFlgBTLFeatBFInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFPSurfFlgBTLFeatBF setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFPSurfFlgBTLFeatBFLock (unsigned char iLocked) = 0;

    /**
     * Retrieves the SHMViewFDSurfFlgIMLBF setting parameter value.
     * <br><b>Role</b>: The SHMViewFDSurfFlgIMLBF setting parameter manage the visibility
	   * of the IML on a Surfacic Flange Brake formed in Folded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFDSurfFlgIMLBF (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFDSurfFlgIMLBF setting parameter value.
     * <br><b>Role</b>: The SHMViewFDSurfFlgIMLBF setting parameter manage the visibility
	   * of the IML on a Surfacic Flange Brake formed in Folded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFDSurfFlgIMLBF (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFDSurfFlgIMLBF setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFDSurfFlgIMLBFInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFDSurfFlgIMLBF setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFDSurfFlgIMLBFLock (unsigned char iLocked) = 0;

    /**
     * Retrieves the SHMViewFPSurfFlgIMLBF setting parameter value.
     * <br><b>Role</b>: The SHMViewFPSurfFlgIMLBF setting parameter manage the visibility
	   * of the IML on a Surfacic Flange Brake formed in UnFolded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFPSurfFlgIMLBF (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFPSurfFlgIMLBF setting parameter value.
     * <br><b>Role</b>: The SHMViewFPSurfFlgIMLBF setting parameter manage the visibility
	   * of the IML on a Surfacic Flange Brake formed in UnFolded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFPSurfFlgIMLBF (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFPSurfFlgIMLBF setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFPSurfFlgIMLBFInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFPSurfFlgIMLBF setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFPSurfFlgIMLBFLock (unsigned char iLocked) = 0;

    /**
     * Retrieves the SHMViewFDSurfFlgOMLBF setting parameter value.
     * <br><b>Role</b>: The SHMViewFDSurfFlgOMLBF setting parameter manage the visibility
	   * of the OML on a Surfacic Flange Brake formed in Folded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFDSurfFlgOMLBF (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFDSurfFlgOMLBF setting parameter value.
     * <br><b>Role</b>: The SHMViewFDSurfFlgOMLBF setting parameter manage the visibility
	   * of the OML on a Surfacic Flange Brake formed in Folded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFDSurfFlgOMLBF (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFDSurfFlgOMLBF setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFDSurfFlgOMLBFInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFDSurfFlgOMLBF setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFDSurfFlgOMLBFLock (unsigned char iLocked) = 0;
    
    /**
     * Retrieves the SHMViewFPSurfFlgOMLBF setting parameter value.
     * <br><b>Role</b>: The SHMViewFPSurfFlgOMLBF setting parameter manage the visibility
	   * of the OML on a Surfacic Flange Brake formed in UnFolded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFPSurfFlgOMLBF (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFPSurfFlgOMLBF setting parameter value.
     * <br><b>Role</b>: The SHMViewFPSurfFlgOMLBF setting parameter manage the visibility
	   * of the OML on a Surfacic Flange Brake formed in UnFolded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFPSurfFlgOMLBF (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFPSurfFlgOMLBF setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFPSurfFlgOMLBFInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFPSurfFlgOMLBF setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFPSurfFlgOMLBFLock (unsigned char iLocked) = 0;

    /**
     * Retrieves the SHMViewFPSurfFlgOML2BF setting parameter value.
     * <br><b>Role</b>: The SHMViewFPSurfFlgOML2BF setting parameter manage the visibility
	   * of the Second OML on a Surfacic Flange Brake formed in UnFolded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFPSurfFlgOML2BF (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFPSurfFlgOML2BF setting parameter value.
     * <br><b>Role</b>: The SHMViewFPSurfFlgOML2BF setting parameter manage the visibility
	   * of the Second OML on a Surfacic Flange Brake formed in UnFolded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFPSurfFlgOML2BF (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFPSurfFlgOML2BF setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFPSurfFlgOML2BFInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFPSurfFlgOML2BF setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFPSurfFlgOML2BFLock (unsigned char iLocked) = 0;
		 
		 /**
		 * Retrieves the SHMViewFPSurfFlgCLBBF setting parameter value.
		 * <br><b>Role</b>: The SHMViewFPSurfFlgCLBBF setting parameter manage the visibility
		 * of the Center Line of Bend on a Surfacic Flange Brake formed in UnFolded View.
		 * @param oSeen [out]
		 * <br><b>Legal values</b>:
		 * <table>
		 *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
		 *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
		 * </table>  
		 */
		 virtual HRESULT GetSHMViewFPSurfFlgCLBBF (unsigned int & oSeen)=0;

		 /**
		 * Sets the SHMViewFPSurfFlgCLBBF setting parameter value.
		 * <br><b>Role</b>: The SHMViewFPSurfFlgCLBBF setting parameter manage the visibility
		 * of the Center Line of Bend on a Surfacic Flange Brake formed in UnFolded View.
		 * @param iSeen [in]
		 * <br><b>Legal values</b>:
		 * <table>
		 *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
		 *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
		 * </table>  
		 */
		 virtual HRESULT SetSHMViewFPSurfFlgCLBBF (unsigned int & iSeen)=0;

		 /** 
		 * Retrieves information about the SHMViewFPSurfFlgCLBBF setting parameter.
		 * <br>Refer to @href CATSysSettingController for a detailed description.
		 */
		 virtual HRESULT GetSHMViewFPSurfFlgCLBBFInfo (CATSettingInfo * oInfo)=0;

		 /** 
		 * Locks or unlocks the SHMViewFPSurfFlgCLBBF setting parameter.
		 * <br>Refer to @href CATSysSettingController for a detailed description.
		 */
		 virtual HRESULT SetSHMViewFPSurfFlgCLBBFLock (unsigned char iLocked)=0;


    /**
     * Retrieves the SHMViewFDSurfFlgBTLSuppHF setting parameter value.
     * <br><b>Role</b>: The SHMViewFDSurfFlgBTLSuppHF setting parameter manage the visibility
	   * of the BTL Support on a Surfacic Flange Hydro-press formed in Folded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFDSurfFlgBTLSuppHF (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFDSurfFlgBTLSuppHF setting parameter value.
     * <br><b>Role</b>: The SHMViewFDSurfFlgBTLSuppHF setting parameter manage the visibility
	   * of the BTL Support on a Surfacic Flange Hydro-press formed in Folded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFDSurfFlgBTLSuppHF (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFDSurfFlgBTLSuppHF setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFDSurfFlgBTLSuppHFInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFDSurfFlgBTLSuppHF setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFDSurfFlgBTLSuppHFLock (unsigned char iLocked) = 0;

    /**
     * Retrieves the SHMViewFPSurfFlgBTLSuppHF setting parameter value.
     * <br><b>Role</b>: The SHMViewFPSurfFlgBTLSuppHF setting parameter manage the visibility
	   * of the BTL Support on a Surfacic Flange Hydro-press formed in UnFolded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFPSurfFlgBTLSuppHF (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFPSurfFlgBTLSuppHF setting parameter value.
     * <br><b>Role</b>: The SHMViewFPSurfFlgBTLSuppHF setting parameter manage the visibility
	   * of the BTL Support on a Surfacic Flange Hydro-press formed in UnFolded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFPSurfFlgBTLSuppHF (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFPSurfFlgBTLSuppHF setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFPSurfFlgBTLSuppHFInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFPSurfFlgBTLSuppHF setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFPSurfFlgBTLSuppHFLock (unsigned char iLocked) = 0;

    /**
     * Retrieves the SHMViewFDSurfFlgBTLFeatHF setting parameter value.
     * <br><b>Role</b>: The SHMViewFDSurfFlgBTLFeatHF setting parameter manage the visibility
	   * of the BTL Feature on a Surfacic Flange Hydro-press formed in Folded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFDSurfFlgBTLFeatHF (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFDSurfFlgBTLFeatHF setting parameter value.
     * <br><b>Role</b>: The SHMViewFDSurfFlgBTLFeatHF setting parameter manage the visibility
	   * of the BTL Feature on a Surfacic Flange Hydro-press formed in Folded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFDSurfFlgBTLFeatHF (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFDSurfFlgBTLFeatHF setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFDSurfFlgBTLFeatHFInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFDSurfFlgBTLFeatHF setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFDSurfFlgBTLFeatHFLock (unsigned char iLocked) = 0;
    
    /**
     * Retrieves the SHMViewFPSurfFlgBTLFeatHF setting parameter value.
     * <br><b>Role</b>: The SHMViewFPSurfFlgBTLFeatHF setting parameter manage the visibility
	   * of the BTL Feature on a Surfacic Flange Hydro-press formed in UnFolded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFPSurfFlgBTLFeatHF (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFPSurfFlgBTLFeatHF setting parameter value.
     * <br><b>Role</b>: The SHMViewFPSurfFlgBTLFeatHF setting parameter manage the visibility
	   * of the BTL Feature on a Surfacic Flange Hydro-press formed in UnFolded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFPSurfFlgBTLFeatHF (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFPSurfFlgBTLFeatHF setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFPSurfFlgBTLFeatHFInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFPSurfFlgBTLFeatHF setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFPSurfFlgBTLFeatHFLock (unsigned char iLocked) = 0;

    /**
     * Retrieves the SHMViewFDSurfFlgIMLHF setting parameter value.
     * <br><b>Role</b>: The SHMViewFDSurfFlgIMLHF setting parameter manage the visibility
	   * of the IML on a Surfacic Flange Hydro-press formed in Folded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFDSurfFlgIMLHF (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFDSurfFlgIMLHF setting parameter value.
     * <br><b>Role</b>: The SHMViewFDSurfFlgIMLHF setting parameter manage the visibility
	   * of the IML on a Surfacic Flange Hydro-press formed in Folded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFDSurfFlgIMLHF (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFDSurfFlgIMLHF setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFDSurfFlgIMLHFInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFDSurfFlgIMLHF setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFDSurfFlgIMLHFLock (unsigned char iLocked) = 0;

    /**
     * Retrieves the SHMViewFPSurfFlgIMLHF setting parameter value.
     * <br><b>Role</b>: The SHMViewFPSurfFlgIMLHF setting parameter manage the visibility
	   * of the IML on a Surfacic Flange Hydro-press formed in UnFolded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFPSurfFlgIMLHF (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFPSurfFlgIMLHF setting parameter value.
     * <br><b>Role</b>: The SHMViewFPSurfFlgIMLHF setting parameter manage the visibility
	   * of the IML on a Surfacic Flange Hydro-press formed in UnFolded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFPSurfFlgIMLHF (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFPSurfFlgIMLHF setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFPSurfFlgIMLHFInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFPSurfFlgIMLHF setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFPSurfFlgIMLHFLock (unsigned char iLocked) = 0;

    /**
     * Retrieves the SHMViewFDSurfFlgOMLHF setting parameter value.
     * <br><b>Role</b>: The SHMViewFDSurfFlgOMLHF setting parameter manage the visibility
	   * of the OML on a Surfacic Flange Hydro-press formed in Folded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFDSurfFlgOMLHF (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFDSurfFlgOMLHF setting parameter value.
     * <br><b>Role</b>: The SHMViewFDSurfFlgOMLHF setting parameter manage the visibility
	   * of the OML on a Surfacic Flange Hydro-press formed in Folded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFDSurfFlgOMLHF (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFDSurfFlgOMLHF setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFDSurfFlgOMLHFInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFDSurfFlgOMLHF setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFDSurfFlgOMLHFLock (unsigned char iLocked) = 0;

    /**
     * Retrieves the SHMViewFPSurfFlgOMLHF setting parameter value.
     * <br><b>Role</b>: The SHMViewFPSurfFlgOMLHF setting parameter manage the visibility
	   * of the OML on a Surfacic Flange Hydro-press formed in UnFolded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFPSurfFlgOMLHF (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFPSurfFlgOMLHF setting parameter value.
     * <br><b>Role</b>: The SHMViewFPSurfFlgOMLHF setting parameter manage the visibility
	   * of the OML on a Surfacic Flange Hydro-press formed in UnFolded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFPSurfFlgOMLHF (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFPSurfFlgOMLHF setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFPSurfFlgOMLHFInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFPSurfFlgOMLHF setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFPSurfFlgOMLHFLock (unsigned char iLocked) = 0;

    /**
     * Retrieves the SHMViewFPSurfFlgOML2HF setting parameter value.
     * <br><b>Role</b>: The SHMViewFPSurfFlgOML2HF setting parameter manage the visibility
	   * of the Second OML on a Surfacic Flange Hydro-press formed in UnFolded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFPSurfFlgOML2HF (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFPSurfFlgOML2HF setting parameter value.
     * <br><b>Role</b>: The SHMViewFPSurfFlgOML2HF setting parameter manage the visibility
	   * of the Second OML on a Surfacic Flange Hydro-press formed in UnFolded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFPSurfFlgOML2HF (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFPSurfFlgOML2HF setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFPSurfFlgOML2HFInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFPSurfFlgOML2HF setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFPSurfFlgOML2HFLock (unsigned char iLocked) = 0;

		 
		 /**
		 * Retrieves the SHMViewFPSurfFlgCLBHF setting parameter value.
		 * <br><b>Role</b>: The SHMViewFPSurfFlgCLBHF setting parameter manage the visibility
		 * of the Center Line of Bend on a Surfacic Flange Hydro-press formed in UnFolded View.
		 * @param oSeen [out]
		 * <br><b>Legal values</b>:
		 * <table>
		 *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
		 *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
		 * </table>  
		 */
		 virtual HRESULT GetSHMViewFPSurfFlgCLBHF (unsigned int & oSeen)=0;

		 /**
		 * Sets the SHMViewFPSurfFlgCLBHF setting parameter value.
		 * <br><b>Role</b>: The SHMViewFPSurfFlgCLBHF setting parameter manage the visibility
		 * of the Center Line of Bend on a Surfacic Flange Hydro-press formed in UnFolded View.
		 * @param iSeen [in]
		 * <br><b>Legal values</b>:
		 * <table>
		 *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
		 *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
		 * </table>  
		 */
		 virtual HRESULT SetSHMViewFPSurfFlgCLBHF (unsigned int & iSeen)=0;

		 /** 
		 * Retrieves information about the SHMViewFPSurfFlgCLBHF setting parameter.
		 * <br>Refer to @href CATSysSettingController for a detailed description.
		 */
		 virtual HRESULT GetSHMViewFPSurfFlgCLBHFInfo (CATSettingInfo * oInfo)=0;

		 /** 
		 * Locks or unlocks the SHMViewFPSurfFlgCLBHF setting parameter.
		 * <br>Refer to @href CATSysSettingController for a detailed description.
		 */
		 virtual HRESULT SetSHMViewFPSurfFlgCLBHFLock (unsigned char iLocked)=0;

		 
    /**
     * Retrieves the SHMViewFDFlgHoleBTLFeat setting parameter value.
     * <br><b>Role</b>: The SHMViewFDFlgHoleBTLFeat setting parameter manage the visibility
	   * of the BTL Feature on a Flanged Hole in Folded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFDFlgHoleBTLFeat (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFDFlgHoleBTLFeat setting parameter value.
     * <br><b>Role</b>: The SHMViewFDFlgHoleBTLFeat setting parameter manage the visibility
	   * of the BTL Feature on a Flanged Hole in Folded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFDFlgHoleBTLFeat (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFDFlgHoleBTLFeat setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFDFlgHoleBTLFeatInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFDFlgHoleBTLFeat setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFDFlgHoleBTLFeatLock (unsigned char iLocked) = 0;

    /**
     * Retrieves the SHMViewFPFlgHoleBTLFeat setting parameter value.
     * <br><b>Role</b>: The SHMViewFPFlgHoleBTLFeat setting parameter manage the visibility
	   * of the BTL Feature on a Flanged Hole in UnFolded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFPFlgHoleBTLFeat (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFPFlgHoleBTLFeat setting parameter value.
     * <br><b>Role</b>: The SHMViewFPFlgHoleBTLFeat setting parameter manage the visibility
	   * of the BTL Feature on a Flanged Hole in UnFolded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFPFlgHoleBTLFeat (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFPFlgHoleBTLFeat setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFPFlgHoleBTLFeatInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFPFlgHoleBTLFeat setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFPFlgHoleBTLFeatLock (unsigned char iLocked) = 0;

    /**
     * Retrieves the SHMViewFDFlgHoleIML setting parameter value.
     * <br><b>Role</b>: The SHMViewFDFlgHoleIML setting parameter manage the visibility
	   * of the IML on a Flanged Hole in Folded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFDFlgHoleIML (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFDFlgHoleIML setting parameter value.
     * <br><b>Role</b>: The SHMViewFDFlgHoleIML setting parameter manage the visibility
	   * of the IML on a Flanged Hole in Folded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFDFlgHoleIML (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFDFlgHoleIML setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFDFlgHoleIMLInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFDFlgHoleIML setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFDFlgHoleIMLLock (unsigned char iLocked) = 0;

    /**
     * Retrieves the SHMViewFPFlgHoleIML setting parameter value.
     * <br><b>Role</b>: The SHMViewFPFlgHoleIML setting parameter manage the visibility
	   * of the IML on a Flanged Hole in UnFolded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFPFlgHoleIML (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFPFlgHoleIML setting parameter value.
     * <br><b>Role</b>: The SHMViewFPFlgHoleIML setting parameter manage the visibility
	   * of the IML on a Flanged Hole in UnFolded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFPFlgHoleIML (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFPFlgHoleIML setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFPFlgHoleIMLInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFPFlgHoleIML setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFPFlgHoleIMLLock (unsigned char iLocked) = 0;

    /**
     * Retrieves the SHMViewFDFlgHoleOML setting parameter value.
     * <br><b>Role</b>: The SHMViewFDFlgHoleOML setting parameter manage the visibility
	   * of the OML on a Flanged Hole in Folded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFDFlgHoleOML (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFDFlgHoleOML setting parameter value.
     * <br><b>Role</b>: The SHMViewFDFlgHoleOML setting parameter manage the visibility
	   * of the OML on a Flanged Hole in Folded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFDFlgHoleOML (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFDFlgHoleOML setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFDFlgHoleOMLInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFDFlgHoleOML setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFDFlgHoleOMLLock (unsigned char iLocked) = 0;

    /**
     * Retrieves the SHMViewFPFlgHoleOML setting parameter value.
     * <br><b>Role</b>: The SHMViewFPFlgHoleOML setting parameter manage the visibility
	   * of the OML on a Flanged Hole in UnFolded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFPFlgHoleOML (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFPFlgHoleOML setting parameter value.
     * <br><b>Role</b>: The SHMViewFPFlgHoleOML setting parameter manage the visibility
	   * of the OML on a Flanged Hole in UnFolded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFPFlgHoleOML (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFPFlgHoleOML setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFPFlgHoleOMLInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFPFlgHoleOML setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFPFlgHoleOMLLock (unsigned char iLocked) = 0;

    /**
     * Retrieves the SHMViewFDBeadBTLFeat setting parameter value.
     * <br><b>Role</b>: The SHMViewFDBeadBTLFeat setting parameter manage the visibility
	   * of the BTL Feature on a Bead in Folded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFDBeadBTLFeat (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFDBeadBTLFeat setting parameter value.
     * <br><b>Role</b>: The SHMViewFDBeadBTLFeat setting parameter manage the visibility
	   * of the BTL Feature on a Bead in Folded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFDBeadBTLFeat (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFDBeadBTLFeat setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFDBeadBTLFeatInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFDBeadBTLFeat setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFDBeadBTLFeatLock (unsigned char iLocked) = 0;

    /**
     * Retrieves the SHMViewFPBeadBTLFeat setting parameter value.
     * <br><b>Role</b>: The SHMViewFPBeadBTLFeat setting parameter manage the visibility
	   * of the BTL Feature on a Bead in UnFolded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFPBeadBTLFeat (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFPBeadBTLFeat setting parameter value.
     * <br><b>Role</b>: The SHMViewFPBeadBTLFeat setting parameter manage the visibility
	   * of the BTL Feature on a Bead in UnFolded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFPBeadBTLFeat (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFPBeadBTLFeat setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFPBeadBTLFeatInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFPBeadBTLFeat setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFPBeadBTLFeatLock (unsigned char iLocked) = 0;

    /**
     * Retrieves the SHMViewFDCircStampBTLFeat setting parameter value.
     * <br><b>Role</b>: The SHMViewFDCircStampBTLFeat setting parameter manage the visibility
	   * of the BTL Feature on a Circular Stamp in Folded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFDCircStampBTLFeat (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFDCircStampBTLFeat setting parameter value.
     * <br><b>Role</b>: The SHMViewFDCircStampBTLFeat setting parameter manage the visibility
	   * of the BTL Feature on a Circular Stamp in Folded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFDCircStampBTLFeat (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFDCircStampBTLFeat setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFDCircStampBTLFeatInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFDCircStampBTLFeat setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFDCircStampBTLFeatLock (unsigned char iLocked) = 0;

    /**
     * Retrieves the SHMViewFPCircStampBTLFeat setting parameter value.
     * <br><b>Role</b>: The SHMViewFPCircStampBTLFeat setting parameter manage the visibility
	   * of the BTL Feature on a Circular Stamp in UnFolded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFPCircStampBTLFeat (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFPCircStampBTLFeat setting parameter value.
     * <br><b>Role</b>: The SHMViewFPCircStampBTLFeat setting parameter manage the visibility
	   * of the BTL Feature on a Circular Stamp in UnFolded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFPCircStampBTLFeat (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFPCircStampBTLFeat setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFPCircStampBTLFeatInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFPCircStampBTLFeat setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFPCircStampBTLFeatLock (unsigned char iLocked) = 0;
     
    /**
     * Retrieves the SHMViewFDSurfStampBTLFeat setting parameter value.
     * <br><b>Role</b>: The SHMViewFDSurfStampBTLFeat setting parameter manage the visibility
	   * of the BTL Feature on a Surface Stamp in Folded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFDSurfStampBTLFeat (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFDSurfStampBTLFeat setting parameter value.
     * <br><b>Role</b>: The SHMViewFDSurfStampBTLFeat setting parameter manage the visibility
	   * of the BTL Feature on a Surface Stamp in Folded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFDSurfStampBTLFeat (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFDSurfStampBTLFeat setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFDSurfStampBTLFeatInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFDSurfStampBTLFeat setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFDSurfStampBTLFeatLock (unsigned char iLocked) = 0;

    /**
     * Retrieves the SHMViewFPSurfStampBTLFeat setting parameter value.
     * <br><b>Role</b>: The SHMViewFPSurfStampBTLFeat setting parameter manage the visibility
	   * of the BTL Feature on a Surface Stamp in UnFolded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFPSurfStampBTLFeat (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFPSurfStampBTLFeat setting parameter value.
     * <br><b>Role</b>: The SHMViewFPSurfStampBTLFeat setting parameter manage the visibility
	   * of the BTL Feature on a Surface Stamp in UnFolded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFPSurfStampBTLFeat (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFPSurfStampBTLFeat setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFPSurfStampBTLFeatInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFPSurfStampBTLFeat setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFPSurfStampBTLFeatLock (unsigned char iLocked) = 0;

    /**
     * Retrieves the SHMViewFDFlgCutBTLFeat setting parameter value.
     * <br><b>Role</b>: The SHMViewFDFlgCutBTLFeat setting parameter manage the visibility
	   * of the BTL Feature on a Flanged Cutout in Folded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFDFlgCutBTLFeat (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFDFlgCutBTLFeat setting parameter value.
     * <br><b>Role</b>: The SHMViewFDFlgCutBTLFeat setting parameter manage the visibility
	   * of the BTL Feature on a Flanged Cutout in Folded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFDFlgCutBTLFeat (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFDFlgCutBTLFeat setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFDFlgCutBTLFeatInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFDFlgCutBTLFeat setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFDFlgCutBTLFeatLock (unsigned char iLocked) = 0;

    /**
     * Retrieves the SHMViewFPFlgCutBTLFeat setting parameter value.
     * <br><b>Role</b>: The SHMViewFPFlgCutBTLFeat setting parameter manage the visibility
	   * of the BTL Feature on a Flanged Cutout in UnFolded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFPFlgCutBTLFeat (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFPFlgCutBTLFeat setting parameter value.
     * <br><b>Role</b>: The SHMViewFPFlgCutBTLFeat setting parameter manage the visibility
	   * of the BTL Feature on a Flanged Cutout in UnFolded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFPFlgCutBTLFeat (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFPFlgCutBTLFeat setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFPFlgCutBTLFeatInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFPFlgCutBTLFeat setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFPFlgCutBTLFeatLock (unsigned char iLocked) = 0;

    /**
     * Retrieves the SHMViewFDFlgCutIML setting parameter value.
     * <br><b>Role</b>: The SHMViewFDFlgCutIML setting parameter manage the visibility
	   * of the IML on a Flanged Cutout in Folded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFDFlgCutIML (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFDFlgCutIML setting parameter value.
     * <br><b>Role</b>: The SHMViewFDFlgCutIML setting parameter manage the visibility
	   * of the IML on a Flanged Cutout in Folded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFDFlgCutIML (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFDFlgCutIML setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFDFlgCutIMLInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFDFlgCutIML setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFDFlgCutIMLLock (unsigned char iLocked) = 0;

    /**
     * Retrieves the SHMViewFPFlgCutIML setting parameter value.
     * <br><b>Role</b>: The SHMViewFPFlgCutIML setting parameter manage the visibility
	   * of the IML on a Flanged Cutout in UnFolded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFPFlgCutIML (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFPFlgCutIML setting parameter value.
     * <br><b>Role</b>: The SHMViewFPFlgCutIML setting parameter manage the visibility
	   * of the IML on a Flanged Cutout in UnFolded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFPFlgCutIML (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFPFlgCutIML setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFPFlgCutIMLInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFPFlgCutIML setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFPFlgCutIMLLock (unsigned char iLocked) = 0;

    /**
     * Retrieves the SHMViewFDFlgCutOML setting parameter value.
     * <br><b>Role</b>: The SHMViewFDFlgCutOML setting parameter manage the visibility
	   * of the OML on a Flanged Cutout in Folded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFDFlgCutOML (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFDFlgCutOML setting parameter value.
     * <br><b>Role</b>: The SHMViewFDFlgCutOML setting parameter manage the visibility
	   * of the OML on a Flanged Cutout in Folded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFDFlgCutOML (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFDFlgCutOML setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFDFlgCutOMLInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFDFlgCutOML setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFDFlgCutOMLLock (unsigned char iLocked) = 0;

    /**
     * Retrieves the SHMViewFPFlgCutOML setting parameter value.
     * <br><b>Role</b>: The SHMViewFPFlgCutOML setting parameter manage the visibility
	   * of the OML on a Flanged Cutout in UnFolded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFPFlgCutOML (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFPFlgCutOML setting parameter value.
     * <br><b>Role</b>: The SHMViewFPFlgCutOML setting parameter manage the visibility
	   * of the OML on a Flanged Cutout in UnFolded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFPFlgCutOML (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFPFlgCutOML setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFPFlgCutOMLInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFPFlgCutOML setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFPFlgCutOMLLock (unsigned char iLocked) = 0;

    /**
     * Retrieves the SHMViewFDStiffStampBTLFeat setting parameter value.
     * <br><b>Role</b>: The SHMViewFDStiffStampBTLFeat setting parameter manage the visibility
	   * of the BTL Feature on a Stiffening Rib in Folded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFDStiffStampBTLFeat (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFDStiffStampBTLFeat setting parameter value.
     * <br><b>Role</b>: The SHMViewFDStiffStampBTLFeat setting parameter manage the visibility
	   * of the BTL Feature on a Stiffening Rib in Folded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFDStiffStampBTLFeat (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFDStiffStampBTLFeat setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFDStiffStampBTLFeatInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFDStiffStampBTLFeat setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFDStiffStampBTLFeatLock (unsigned char iLocked) = 0;

    /**
     * Retrieves the SHMViewFPStiffStampBTLFeat setting parameter value.
     * <br><b>Role</b>: The SHMViewFPStiffStampBTLFeat setting parameter manage the visibility
	   * of the BTL Feature on a Stiffening Rib in UnFolded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFPStiffStampBTLFeat (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFPStiffStampBTLFeat setting parameter value.
     * <br><b>Role</b>: The SHMViewFPStiffStampBTLFeat setting parameter manage the visibility
	   * of the BTL Feature on a Stiffening Rib in UnFolded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFPStiffStampBTLFeat (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFPStiffStampBTLFeat setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFPStiffStampBTLFeatInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFPStiffStampBTLFeat setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFPStiffStampBTLFeatLock (unsigned char iLocked) = 0;

    /**
     * Retrieves the SHMViewFDCurveStampBTLFeat setting parameter value.
     * <br><b>Role</b>: The SHMViewFDCurveStampBTLFeat setting parameter manage the visibility
	   * of the BTL Feature on a Curve Stamp in Folded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFDCurveStampBTLFeat (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFDCurveStampBTLFeat setting parameter value.
     * <br><b>Role</b>: The SHMViewFDCurveStampBTLFeat setting parameter manage the visibility
	   * of the BTL Feature on a Curve Stamp in Folded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFDCurveStampBTLFeat (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFDCurveStampBTLFeat setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFDCurveStampBTLFeatInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFDCurveStampBTLFeat setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFDCurveStampBTLFeatLock (unsigned char iLocked) = 0;

    /**
     * Retrieves the SHMViewFPCurveStampBTLFeat setting parameter value.
     * <br><b>Role</b>: The SHMViewFPCurveStampBTLFeat setting parameter manage the visibility
	   * of the BTL Feature on a Curve Stamp in UnFolded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFPCurveStampBTLFeat (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFPCurveStampBTLFeat setting parameter value.
     * <br><b>Role</b>: The SHMViewFPCurveStampBTLFeat setting parameter manage the visibility
	   * of the BTL Feature on a Curve Stamp in UnFolded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFPCurveStampBTLFeat (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFPCurveStampBTLFeat setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFPCurveStampBTLFeatInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFPCurveStampBTLFeat setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFPCurveStampBTLFeatLock (unsigned char iLocked) = 0;

    /**
     * Retrieves the SHMViewFDUserStampBTLFeat setting parameter value.
     * <br><b>Role</b>: The SHMViewFDUserStampBTLFeat setting parameter manage the visibility
	   * of the BTL Feature on a User Stamp in Folded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFDUserStampBTLFeat (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFDUserStampBTLFeat setting parameter value.
     * <br><b>Role</b>: The SHMViewFDUserStampBTLFeat setting parameter manage the visibility
	   * of the BTL Feature on a User Stamp in Folded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFDUserStampBTLFeat (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFDUserStampBTLFeat setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFDUserStampBTLFeatInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFDUserStampBTLFeat setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFDUserStampBTLFeatLock (unsigned char iLocked) = 0;

    /**
     * Retrieves the SHMViewFPUserStampBTLFeat setting parameter value.
     * <br><b>Role</b>: The SHMViewFPUserStampBTLFeat setting parameter manage the visibility
	   * of the BTL Feature on a User Stamp in UnFolded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFPUserStampBTLFeat (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFPUserStampBTLFeat setting parameter value.
     * <br><b>Role</b>: The SHMViewFPUserStampBTLFeat setting parameter manage the visibility
	   * of the BTL Feature on a User Stamp in UnFolded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFPUserStampBTLFeat (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFPUserStampBTLFeat setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFPUserStampBTLFeatInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFPUserStampBTLFeat setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFPUserStampBTLFeatLock (unsigned char iLocked) = 0;

    /**
     * Retrieves the SHMViewFDOtherStampBTLFeat setting parameter value.
     * <br><b>Role</b>: The SHMViewFDOtherStampBTLFeat setting parameter manage the visibility
	   * of the BTL Feature on another Stamp ( F&A -> Bridge, Louver ...) in Folded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFDOtherStampBTLFeat (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFDOtherStampBTLFeat setting parameter value.
     * <br><b>Role</b>: The SHMViewFDOtherStampBTLFeat setting parameter manage the visibility
	   * of the BTL Feature on another Stamp ( F&A -> Bridge, Louver ...) in Folded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFDOtherStampBTLFeat (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFDOtherStampBTLFeat setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFDOtherStampBTLFeatInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFDOtherStampBTLFeat setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFDOtherStampBTLFeatLock (unsigned char iLocked) = 0;

    /**
     * Retrieves the SHMViewFPOtherStampBTLFeat setting parameter value.
     * <br><b>Role</b>: The SHMViewFPOtherStampBTLFeat setting parameter manage the visibility
	   * of the BTL Feature on another Stamp ( F&A -> Bridge, Louver ...) in UnFolded View.
     * @param oSeen [out]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT GetSHMViewFPOtherStampBTLFeat (unsigned int & oSeen) = 0;

    /**
     * Sets the SHMViewFPOtherStampBTLFeat setting parameter value.
     * <br><b>Role</b>: The SHMViewFPOtherStampBTLFeat setting parameter manage the visibility
	   * of the BTL Feature on another Stamp ( F&A -> Bridge, Louver ...) in UnFolded View.
     * @param iSeen [in]
     * <br><b>Legal values</b>:
     * <table>
     *   <tr><td>1</td>           <td>The characteristic curve is shown</td></tr>
     *   <tr><td>0</td>           <td>The characteristic curve is hidden</td></tr>
     * </table>  
     */
     virtual HRESULT SetSHMViewFPOtherStampBTLFeat (unsigned int & oSeen) = 0;

    /** 
     * Retrieves information about the SHMViewFPOtherStampBTLFeat setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSHMViewFPOtherStampBTLFeatInfo (CATSettingInfo * oInfo) = 0;

    /** 
     * Locks or unlocks the SHMViewFPOtherStampBTLFeat setting parameter.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSHMViewFPOtherStampBTLFeatLock (unsigned char iLocked) = 0;

  };

//------------------------------------------------------------------

#endif

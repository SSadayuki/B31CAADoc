
#ifndef CATITPSBrowserUIDMUTolSettingAtt_H
#define CATITPSBrowserUIDMUTolSettingAtt_H

#include "CATTPSItfCPP.h"
#include "CATBaseUnknown.h"

// COPYRIGHT Dassault Systemes 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATTPSItfCPP IID IID_CATITPSBrowserUIDMUTolSettingAtt;
#else
extern "C" const IID IID_CATITPSBrowserUIDMUTolSettingAtt ;
#endif

class CATSettingInfo;

//-----------------------------------------------------------------------------
/**
 * Interface to the DMU Tolerancing setting controller.
 * <b>Role</b>: The DMU Tolerancing setting controller object deals with the setting
 * parameters displayed in:
 * <ul>
 *   <li>The DMU Tolerancing property page for the Related Surface Color and 
 *   the Design Mode setting parameters.
 *   <br>To access this property page:
 *     <ul>
 *       <li>Click the <b>Options</b> command in the <b>Tools</b> menu</li>
 *       <li>Click + left of <b>Digital Mockup</b> to unfold the workbench list</li>   
 *       <li>Click <b>DMU Tolerancing Review</b></li>
 *     </ul>
 *   </li>
 *   <li>The Cgr Management property page for the Save in CGR setting parameter.
 *   <br>To access this property page:
 *     <ul>
 *       <li>Click the <b>Options</b> command in the <b>Tools</b> menu</li>
 *       <li>Click + left of </b>Infrastructure</b> to unfold the workbench list</li>   
 *       <li>Click <b>Product Structure</b></li>
 *       <li>Click the <b>Cgr Management</b> property page</li>
 *     </ul>
 *   <p>The Save in CGR setting parameter represents the state of the check button named:
 *   Save FTA 3D Annotation representation in CGR.
 *   </li>
 * </ul>
 */
class ExportedByCATTPSItfCPP CATITPSBrowserUIDMUTolSettingAtt: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

  //------------------------------------------------------
  //  Related Surface Color setting parameter
  //------------------------------------------------------
    /**
     * Retrieves the Related Surface Color setting parameter value.
     * <br><b>Role</b>: The Related Surface Color setting parameter defines the color of the annotation related surfaces,
     * that is, of all the surfaces referenced or toleranced using the CATIA V4 FD&amp;T function.
     * <br><b>Legal values</b>:The three color indexes range from 0 to 255.
     * @param oRelatedR [inout]
     *   The Related Surface Color red index
     * @param oRelatedG [inout]
     *   The Related Surface Color green index
     * @param oRelatedB [inout]
     *   The Related Surface Color blue index
     * @return
     *   S_OK if the Related Surface Color setting parameter value
     *   is successfully retrieved, and E_FAIL otherwise 
     */
     virtual HRESULT GetRelatedColors( long* ioRelatedR, 
                                       long* ioRelatedG, 
                                       long* ioRelatedB ) = 0;

    /**
     * Sets the Related Surface Color setting parameter value.
     * <br><b>Role</b>:The Related Surface Color setting parameter defines the color of the annotation related surfaces,
     * that is, of all the surfaces referenced or toleranced using the CATIA V4 FD&amp;T function.
     * <br><b>Legal values</b>:The three color indexes range from 0 to 255.
     * @param iRelatedR [in]
     *   The Related Surface Color red index
     * @param iRelatedG [in]
     *   The Related Surface Color green index
     * @param iRelatedB [in]
     *   The Related Surface Color blue index
     * @return
     *   S_OK if the Related Surface Color setting parameter value
     *   is successfully set, and E_FAIL otherwise  
     */
     virtual HRESULT SetRelatedColors( long iRelatedR, 
                                       long iRelatedG, 
                                       long iRelatedB ) = 0;

    /** 
     * Retrieves information about the Related Surface Color setting parameter value.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetRelatedColorsInfo( CATSettingInfo* oInfo ) = 0;

    /** 
     * Locks or unlocks the Related Surface Color setting parameter value.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetRelatedColorsLock( unsigned char iLocked ) = 0;

  //------------------------------------------------------
  //  Design Mode setting parameter
  //------------------------------------------------------

    /**
     * Retrieves the Design Mode setting parameter value.
     * <br><b>Role</b>: If the Design Mode setting parameter is checked and thus set to Automatic,
     * models are loaded in Design Mode to access technological data.
     * Otherwise, when set to 0, models are loaded in Visualization Mode, 
     * and only visualization data is loaded.
     * @param ioDesignMode [inout]
     *   A flag to indicate whether the models should be loaded in Design Mode or in Visualization Mode.
     *   <br><b>Legal values</b>:
     *   <table>
     *     <tr><td>1</td> <td>Models are loaded in Design Mode. The Automatic check button is checked</td></tr>
     *     <tr><td>0</td> <td>Models are loaded in Visualization Mode. The Automatic check button is unchecked</td></tr>
     *   </table>
     * @return
     *   S_OK if the Design Mode setting parameter value
     *   is successfully retrieved, and E_FAIL otherwise 
     */
     virtual HRESULT GetDesignMode( unsigned char* ioDesignMode ) = 0;

    /**
     * Sets the Design Mode setting parameter value.
     * <br><b>Role</b>: If the Design Mode setting parameter is checked and thus set to Automatic,
     * models are loaded in Design Mode to access technological data.
     * Otherwise, when set to 0, models are loaded in Visualization Mode, 
     * and only visualization data is loaded.
     * @param iDesignMode [in]
     *   A flag to indicate whether the models should be loaded in Design Mode or in Visualization Mode.
     *   <br><b>Legal values</b>:
     *   <table>
     *     <tr><td>1</td> <td>Models are loaded in Design Mode. The Automatic check button is checked</td></tr>
     *     <tr><td>0</td> <td>Models are loaded in Visualization Mode. The Automatic check button is unchecked</td></tr>
     *   </table>
     * @return
     *   S_OK if the Design Mode setting parameter value
     *   is successfully set, and E_FAIL otherwise 
     */
     virtual HRESULT SetDesignMode( unsigned char iDesignMode ) = 0;

    /** 
     * Retrieves information about the Design Mode setting parameter value.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetDesignModeInfo( CATSettingInfo* oInfo ) = 0;

    /** 
     * Locks or unlocks the Design Mode setting parameter value.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetDesignModeLock( unsigned char iLocked ) = 0;

  //------------------------------------------------------
  //  Save in CGR setting parameter
  //------------------------------------------------------
    /**
     * Retrieves the Save in CGR setting parameter value.
     * @param ioSaveCGR [inout]
     *   A flag to indicate whether the models should saved in CGR format.
     *   <br><b>Legal values</b>:
     *   <table>
     *     <tr><td>1</td> <td>The models should saved in CGR format. The Save in CGR check button is checked</td></tr>
     *     <tr><td>0</td> <td>The models should not be saved in CGR format. The Save in CGR check button is unchecked</td></tr>
     *   </table>
     * @return
     *   S_OK if the Save in CGR setting parameter value
     *   is successfully retrieved, and E_FAIL otherwise 
     */
     virtual HRESULT GetSaveCGR( unsigned char* ioSaveCGR ) = 0;

    /**
     * Sets the Save in CGR setting parameter value.
     * @param iSaveCGR [in]
     *   A flag to indicate whether the models should saved in CGR format.
     *   <br><b>Legal values</b>:
     *   <table>
     *     <tr><td>1</td> <td>The models should saved in CGR format. The Save in CGR check button is checked</td></tr>
     *     <tr><td>0</td> <td>The models should not be saved in CGR format. The Save in CGR check button is unchecked</td></tr>
     *   </table>
     * @return
     *   S_OK if the Save in CGR setting parameter value
     *   is successfully set, and E_FAIL otherwise 
     */
     virtual HRESULT SetSaveCGR( unsigned char iSaveCGR ) = 0;

    /** 
     * Retrieves information about the Save in CGR setting parameter value.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSaveCGRInfo( CATSettingInfo* oInfo ) = 0;

    /** 
     * Locks or unlocks the Save in CGR setting parameter value.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSaveCGRLock( unsigned char iLocked ) = 0;

  //------------------------------------------------------
  //  Preview Area setting parameter
  //------------------------------------------------------

    /**
     * Retrieves the Preview area when preselected annotation state attribute.
     */
     virtual HRESULT GetPrevArea( unsigned char* oState ) = 0;

    /**
     * Sets the Preview area when preselected annotation state attribute.
     */
     virtual HRESULT SetPrevArea( unsigned char iState ) = 0;

    /** 
     * Retrieves information about the Preview Area setting parameter value.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetPrevAreaInfo( CATSettingInfo* oInfo ) = 0;

    /** 
     * Locks or unlocks the Preview Area setting parameter value.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetPrevAreaLock( unsigned char iLocked ) = 0;

  //------------------------------------------------------
  //  Pattern Sectionning
  //------------------------------------------------------

    /**
     * Retrieves the Pattern of section when the sectionning is activate.
     */
     virtual HRESULT GetSectPattern( unsigned char* oState ) = 0;

    /**
     * Sets the Pattern of section when the sectionning is activate attribute.
     */
     virtual HRESULT SetSectPattern( unsigned char iState ) = 0;

    /** 
     * Retrieves information about the Pattern of section when the sectionning is activate 
       setting parameter value.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT GetSectPatternInfo( CATSettingInfo* oInfo ) = 0;

    /** 
     * Locks or unlocks the Pattern of section when the sectionning is activate
       setting parameter value.
     * <br>Refer to @href CATSysSettingController for a detailed description.
     */
     virtual HRESULT SetSectPatternLock( unsigned char iLocked ) = 0;

  //------------------------------------------------------
  //  Clipping Plane setting parameter
  //------------------------------------------------------

    /**
     * Retrieves the clipping plane state attribute.
     */
     virtual HRESULT GetClipPlaneState( unsigned char* oState ) = 0;

    /**
     * Sets the clipping plane state attribute.
     */
     virtual HRESULT SetClipPlaneState( unsigned char iState ) = 0;

};
#endif

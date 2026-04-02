/* -*-c++-*- */
#ifndef CATIGSMFilletBiTangent_H
#define CATIGSMFilletBiTangent_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATISpecObject.h"
#include "CATICkeParm.h"
#include "CATGSMFilletDef.h"
#include "CATGSMOrientation.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMFilletBiTangent;
#else
extern "C" const IID IID_CATIGSMFilletBiTangent;
#endif

class CATIGSMIntegratedLaw_var;

/** 
 * Fillet Bi-Tangent feature. 
 * <b>Role</b>: Allows to access data of the Fillet Bi-Tangent feature created by using two 
 * support surfaces, their orientation, a radius, and options 
 * (supports trimming and fillet extremities type)
 * 
 * <br>Note: 
 * <br> CATGSMFilletSupportsTrimMode 
 *  <ul>
 *  <li>CATGSMNoTrim=0</li>
 *  <li>CATGSMTrim=1</li>
 *  <li>CATGSMTrimSupport1=2</li>
 *  <li>CATGSMTrimSupport2=3</li>
 *  </ul>
 * <br> CATGSMFilletExtremitiesMode  
 *  <ul>
 *  <li>CATGSMSmooth=0</li>
 *  <li>CATGSMStraight=1</li>
 *  <li>CATGSMMaximum=2</li>
 *  <li>CATGSMMinimum=3</li>
 *  </ul>
 * <br>  CATGSMFilletSectionType
 *  <ul>
 *  <li>CATGSMCircularSection=0</li>
 *  <li>CATGSMConicalSection=1</li>
 *  </ul>
 * <br>  CATGSMFilletRadiusType
 *  <ul>
 *  <li>CATGSMRadiusDefault=0</li>
 *  <li>CATGSMRadiusChordLength=1</li>
 *  </ul>
 * @see CATIGSMFactory#CreateFillet,CATGSMFilletExtremitiesMode,CATGSMFilletSupportsTrimMode,CATGSMFilletSectionType,CATGSMFilletRadiusType
 */
class ExportedByCATGitInterfaces CATIGSMFilletBiTangent : public CATBaseUnknown
{
   CATDeclareInterface;
public:  
    
  /**
    * Gets the first support surface feature.
    *   @param oElem
    *      first support surface feature
    */ 
 virtual    HRESULT GetFirstElem(CATISpecObject_var & oElem) = 0;
  
  /**
    * Sets the first support surface feature.
    *   @param iElem
    *      first support surface feature
    */ 
 virtual    HRESULT SetFirstElem(const CATISpecObject_var iElem) = 0;
  
  /**
    * Gets the second support surface feature.
    *   @param oElem
    *      second support surface feature
    */ 
 virtual    HRESULT GetSecondElem(CATISpecObject_var & oElem) = 0;
  
  /**
    * Sets the second support surface feature.
    *   @param iElem
    *      second support surface feature
    */ 
 virtual    HRESULT SetSecondElem(const CATISpecObject_var iElem) = 0;
  
  /**
    * Gets fillet radius.
    *   @param oRadius
    *      Radius value
    */ 
 virtual    HRESULT GetRadius(double & oRadius) = 0;
  
  /**
    * Gets fillet radius.
    *   @param oRadius
    *      Radius value
    */ 
 virtual    HRESULT GetRadius(CATICkeParm_var & oRadius) = 0;
  
  /**
    * Sets fillet radius.
    *   @param iRadius
    *      Radius value
    */ 
 virtual    HRESULT SetRadius(double iRadius) = 0;
  
  /**
    * Sets fillet radius.
    *   @param iRadius
    *      Radius value
    */ 
 virtual    HRESULT SetRadius(const CATICkeParm_var iRadius) = 0;
  
  /**
    * Gets the first orientation used to specify fillet center position.<BR>
    * Orientation is same or inverse than the normal to the first surface support<BR>
    *   @param oOrientation
    *      first orientation 
    */
 virtual    HRESULT GetFirstOrientation(CATGSMOrientation & oOrientation) = 0;
  
  /**
    * Sets the first orientation used to specify fillet center position.<BR>
    * Orientation is same or inverse than the normal to the first surface support<BR>
    *   @param iOrientation
    *      first orientation 
    */
 virtual    HRESULT SetFirstOrientation(CATGSMOrientation iOrientation) = 0;
  
  /**
    * Gets the second orientation used to specify fillet center position.<BR>
    * Orientation is same or inverse than the normal to the second surface support<BR>
    *   @param Orientation
    *      second oOrientation 
    */
 virtual    HRESULT GetSecondOrientation(CATGSMOrientation & oOrientation) = 0;
  
  /**
    * Sets the second orientation used to specify fillet center position.<BR>
    * Orientation is same or inverse than the normal to the second surface support<BR>
    *   @param iOrientation
    *      second orientation 
    */
 virtual    HRESULT SetSecondOrientation(CATGSMOrientation iOrientation) = 0; 
  
  /**
    * Inverts first orientation used to specify fillet center position.
    */
 virtual    HRESULT InvertFirstOrientation() = 0;
  
  /**
    * Inverts second orientation used to specify fillet center position.
    */
 virtual    HRESULT InvertSecondOrientation() = 0;
  
  /**
    * Gets  whether support surfaces are trimmed or not.
    *   @param oMode
    *     The trim mode  
    *   @see CATGSMFilletSupportsTrimMode
    */
 virtual    HRESULT GetSupportsTrimMode(CATGSMFilletSupportsTrimMode & oMode) = 0;
  
  /**
    * Sets trim mode for bitangent fillet.
    * <br> It allows to activate the trim of the 2 support surfaces
	* <br> if CATGSMTrim the 2 supports are trimmed and assembled with the fillet ribbon.
    *   @param iMode
    *     The trim mode 
    *   @see CATGSMFilletSupportsTrimMode
    */ 
 virtual    HRESULT SetSupportsTrimMode(CATGSMFilletSupportsTrimMode iMode) = 0; 
  
  /**
    * Gets fillet ribbon relimitation mode (or fillet extremities mode).
    *   @param oMode
    *  Fillet extremities mode : 
    *  CATGSMSmooth or CATGSMStraight or CATGSMMaximum or CATGSMMinimum
    */
 virtual    HRESULT GetRibbonRelimitationMode(CATGSMFilletExtremitiesMode & oMode) = 0;
 
  /**
    * Sets fillet ribbon relimitation mode (or fillet extremities mode).
    *   @param iMode
    *  Fillet extremities mode :
    *  CATGSMSmooth or CATGSMStraight or CATGSMMaximum or CATGSMMinimum
    */
 virtual    HRESULT SetRibbonRelimitationMode(CATGSMFilletExtremitiesMode iMode) = 0; 

  /**
    * Gets Spine.
    *   @param oElem
    *  Spine used for variable fillet 
    */
 virtual    HRESULT GetSpine(CATISpecObject_var & oElem) = 0;

   /**
    * Sets Spine.
    *   @param iElem
    *  Spine used for variable fillet 
    */
 virtual    HRESULT SetSpine(const CATISpecObject_var iElem) = 0;

  /**
    * Gets Hold Curve.
    *   @param oElem
    *  Hold Curve used for variable fillet 
    */
 virtual    HRESULT GetHoldCurve(CATISpecObject_var & oElem) = 0;

  /**
    * Sets Hold Curve.
    *   @param iElem
    *  Hold Curve used for variable fillet 
    */ 
 virtual    HRESULT SetHoldCurve(const CATISpecObject_var iElem) = 0;

  /**
    * Get the list of the faces to keep for fillet operation.
    *   @param oSpecFaces
    */ 
 virtual    HRESULT GetListOfFacesToKeep(CATLISTV(CATISpecObject_var) & oSpecFaces) = 0;

  /**
    * Append a new face to keep.
    *   @param iSpecFace
    */ 
 virtual	HRESULT AppendNewFaceToKeep(const CATISpecObject_var iSpecFace) = 0;

  /**
    * Remove a face to keep.
    *   @param iSpecFace
    */ 
 virtual    HRESULT RemoveFaceToKeep(const CATISpecObject_var iSpecFace) = 0;

 /**
   * Remove all the faces to keep.
   */ 
 virtual    HRESULT RemoveAllFacesToKeep() = 0;

  /**
   * Gets Integrated Law to manage Variable Shape Fillet with law.
   *   @param oILaw
   *        Integrated law
   *   @see CATIGSMIntegratedLaw
   */ 
 virtual    HRESULT GetIntegratedLaw(CATIGSMIntegratedLaw_var & oILaw) = 0;
  /**
   * Sets Integrated Law to manage Variable Shape Fillet with law.
   *   @param iILaw
   *        Integrated law
   *   @see CATIGSMIntegratedLaw
   */ 
 virtual    HRESULT SetIntegratedLaw(const CATIGSMIntegratedLaw_var & iILaw) = 0;

  /**
   * Sets Law first relimiter for variable shape fillet with law management.
   * <br>Relimiters must be point on spine.
   * <br>The input law  will be mapped between first and second relimiters.
   *   @param iPointOnSpine
   *        Point on curve
   */ 
 virtual    HRESULT SetFirstLawRelimiter(const CATISpecObject_var & iPointOnSpine) = 0;

 /**
   * Gets Law first relimiter for variable shape fillet with law management.
   * <br>Relimiters must be point on spine.
   * <br>The input law  will be mapped between first and second relimiters.
   *   @param oPointOnSpine
   *        Point on curve
   */
 virtual    HRESULT GetFirstLawRelimiter(CATISpecObject_var & oPointOnSpine) = 0;

  /**
   * Sets Law second relimiter for variable shape fillet with law management.
   * <br>Relimiters must be point on spine.
   * <br>The input law  will be mapped between first and second relimiters.
   *   @param iPointOnSpine
   *        Point on curve
   *   @see CATIGSMIntegratedLaw
   */ 
 virtual    HRESULT SetSecondLawRelimiter(const CATISpecObject_var & iPointOnSpine) = 0;

  /**
   * Gets Law second relimiter for variable shape fillet with law management.
   * <br>Relimiters must be point on spine.
   * <br>The input law  will be mapped between first and second relimiters.
   *   @param oPointOnSpine
   *        Point on curve
   * @see CATIGSMIntegratedLaw
   */ 
 virtual    HRESULT GetSecondLawRelimiter(CATISpecObject_var & oPointOnSpine) = 0;

 
 /**
  * Sets the shape type of the fillet cross-section.
  *  @param iSectionType
  *    The section type.
  *  @see CATGSMFilletSectionType, CATIGSMFilletBiTangent#SetConicalSectionParameter
  */
 virtual    HRESULT SetSectionType(CATGSMFilletSectionType iSectionType) = 0;

 /**
  * Gets the shape type of the fillet cross-section.
  *  @param oSectionType
  *    The section type.
  *  @see CATGSMFilletSectionType, CATIGSMFilletBiTangent#GetConicalSectionParameter
  */
 virtual    HRESULT GetSectionType(CATGSMFilletSectionType & oSectionType) = 0;

 /**
  * Sets the tightness value for the conical cross-section.
  * <br> if the section type is  <tt>CATGSMCircularSection<tt> this parameter is not taken into account.
  *  @param iParam
  *    The tightness value for the conic arc if the section type is <tt>CATGSMConicalSection<tt>.
  *    <br><b>Legal values</b>:
  *    <tt>0 < iParam < 1</tt>
  *  @see CATIGSMFilletBiTangent#SetSectionType
  */
 virtual    HRESULT SetConicalSectionParameter(const CATICkeParm_var & iParam) = 0;

 /**
  * Gets the tightness value for the conical cross-section.
  * <br> if the section type is  <tt>CATGSMCircularSection<tt> this parameter is not taken into account.
  *  @param oParam
  *    The tightness value for the conic arc if the section type is <tt>CATGSMConicalSection<tt>.
  *    <br><b>Legal values</b>:
  *    <tt>0 < oParam < 1</tt>
  *  @see CATIGSMFilletBiTangent#GetSectionType
  */
 virtual    HRESULT GetConicalSectionParameter(CATICkeParm_var & oParam) = 0;
 
 /**
  * Sets the radius type.
  * <br> if the radius type is  <tt>CATGSMRadiusChordLength<tt>, the radius parameter 
  * <br> set via <tt>SetRadius<tt> will be used as Chord Length parameter.
  *  @param iFilletRadiusType
  *    The radius type.
  *  @see CATGSMFilletRadiusType, CATIGSMFilletBiTangent#SetRadius
  */
 virtual    HRESULT SetRadiusType(CATGSMFilletRadiusType iFilletRadiusType) = 0;

 /**
  * Gets the radius type.
  * <br> if the radius type is  <tt>CATGSMRadiusChordLength<tt>, the radius parameter 
  * <br> set via <tt>SetRadius<tt> will be used as Chord Length parameter.
  *  @param oFilletRadiusType
  *    The radius type.
  *  @see CATGSMFilletRadiusType, CATIGSMFilletBiTangent#SetRadius
  */
 virtual    HRESULT GetRadiusType(CATGSMFilletRadiusType & oFilletRadiusType) = 0;


};
CATDeclareHandler (CATIGSMFilletBiTangent, CATBaseUnknown);
#endif // CATIGSMFilletBiTangent_H

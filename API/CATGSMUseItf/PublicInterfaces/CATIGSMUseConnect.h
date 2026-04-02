/* -*-c++-*- */
#ifndef CATIGSMUseConnect_H
#define CATIGSMUseConnect_H
 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGSMUseItfExportedBy.h"

#include "CATIMmiMechanicalFeature.h"
#include "CATICkeParm.h"
#include "CATGSMOrientation.h"
#include "CATGSMContinuityDef.h"
#include "CATGSMConnectDef.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUseConnect;
#else
extern "C" const IID IID_CATIGSMUseConnect;
#endif
/**
 * Interface to connect curve feature.
 * <b>Role</b>: Allows you to access data of the Connect Curve feature created by using 
 * two curves, two points, orientations, continuity, tension options,
 * a support and trim option 
 * Get, set the Connect definition elements
 * @see CATIGSMUseFactory#CreateConnect
 */
class ExportedByCATGSMUseItf CATIGSMUseConnect : public CATBaseUnknown
{
   CATDeclareInterface;
public: 

  /**
   * Gets the first reference curve.
   *   @param oCurve1
   *      new first reference curve
   */ 
 virtual    HRESULT GetFirstCurve   (CATIMmiMechanicalFeature_var & oCurve1) = 0;
  /**
   * Gets the second reference curve.
   *   @param oCurve2
   *      new second reference curve
   */
 virtual    HRESULT GetSecondCurve   (CATIMmiMechanicalFeature_var & oCurve2) = 0;
  /**
   * Gets the first reference point.

   *   @param oPoint1
   *      new first reference point
   */ 
 virtual    HRESULT GetFirstPoint   (CATIMmiMechanicalFeature_var & oPoint1) = 0;
  /**
   * Gets the second reference point.
   *   @param oPoint2
   *      new second reference point
   */ 
 virtual    HRESULT GetSecondPoint   (CATIMmiMechanicalFeature_var & oPoint2) = 0;
  /**
   * Gets the first orientation.
   *   @param oOrient1
   *      orientation on first curve
   */ 
 virtual    HRESULT GetFirstOrientation     (enum CATGSMOrientation & oOrient1) = 0;
  /**
   * Gets the second orientation.
   *   @param oOrient1
   *      orientation on second curve
   */  
 virtual    HRESULT GetSecondOrientation (enum CATGSMOrientation & oOrient2) = 0;
  /**
   * Gets the first continuity.
   *   @param oContinuity1
   *      continuity on first curve
   */  
 virtual    HRESULT  GetFirstContinuity  (enum CATGSMContinuity & oContinuity1) = 0;
  /**
   * Gets the second continuity.
   *   @param oContinuity2
   *      continuity on second curve
   */   
 virtual    HRESULT  GetSecondContinuity  (enum CATGSMContinuity & oContinuity2) = 0;
  /**
   * Gets the first tension.
   *   @param oTension1
   *      tension on first curve
   */   
 virtual    HRESULT  GetFirstTension      (CATICkeParm_var & oTension1) = 0;
  /**
   * Gets the second tension.
   *   @param oTension2
   *      tension on second curve
   */   
 virtual    HRESULT  GetSecondTension  (CATICkeParm_var & oTension2) = 0; 
  /**
   * Gets the trim mode.
   *   @param oTrim
   *      trim mode : FALSE = no trim, TRUE = trim
   */   
 virtual    HRESULT GetTrim     (CATBoolean & oTrim) = 0;
  /**
   * Gets the base reference curve.
   *   @param oBaseCurve
   *      new reference base curve
   */ 
 virtual    HRESULT GetBaseCurve   (CATIMmiMechanicalFeature_var & oBaseCurve) = 0;
  /**
    * Gets Connect type.
    * <br>
    * Normal or Base Curve type.
    *   @param oType
    *      Solution type
    *       : CATGSMConnectNorm (=0) -> Normal type
    *       : CATGSMConnectSim  (=1) -> Base Curve type
    * @see CATGSMConnectType
    */
 virtual    HRESULT GetConnectType(CATGSMConnectType & oType) = 0;

  /**
   * Sets the first reference curve.
   *   @param iCurve1
   *      new first reference curve
   */ 
 virtual    HRESULT SetFirstCurve  (const CATIMmiMechanicalFeature_var iCurve1)  = 0;
  /**
   * Sets the second reference curve.
   *   @param iCurve2
   *      new second reference curve
   */
 virtual    HRESULT SetSecondCurve     (const CATIMmiMechanicalFeature_var iCurve2)  = 0;
  /**
   * Sets the first reference point.
   *   @param iPoint1
   *      new first reference point
   */ 
 virtual    HRESULT SetFirstPoint     (const CATIMmiMechanicalFeature_var iPoint1)  = 0;
  /**
   * Sets the second reference point.
   *   @param iPoint2
   *      new second reference point
   */ 
 virtual    HRESULT SetSecondPoint  (const CATIMmiMechanicalFeature_var iPoint2)  = 0;
  /**
   * Sets the first orientation.
   *   @param iOrient1
   *      orientation on first curve
   */ 
 virtual    HRESULT SetFirstOrientation (const enum CATGSMOrientation iOrient1) = 0;
  /**
   * Sets the second orientation.
   *   @param iOrient1
   *      orientation on second curve
   */ 
 virtual    HRESULT SetSecondOrientation (const enum CATGSMOrientation iOrient2) = 0;
  /**
   * Sets the first continuity.
   *   @param iContinuity1
   *      continuity on first curve
   */ 
 virtual    HRESULT SetFirstContinuity   (const enum CATGSMContinuity iContinuity1) = 0;
  /**
   * Sets the second continuity.
   *   @param iContinuity2
   *      continuity on second curve
   */  
 virtual    HRESULT SetSecondContinuity  (const enum CATGSMContinuity iContinuity2) = 0; 
  /**
   * Sets the first tension.
   *   @param iTension1
   *      tension on first curve
   */  
 virtual    HRESULT SetFirstTension      (const CATICkeParm_var iTension1) = 0;
  /**
   * Sets the second tension.
   *   @param iTension2
   *      tension on second curve
   */ 
 virtual    HRESULT SetSecondTension     (const CATICkeParm_var iTension2) = 0;
  /**
   * Sets the trim mode.
   *   @param iTrim
   *      trim mode : FALSE = no trim, TRUE = trim
   */ 
 virtual    HRESULT SetTrim              (CATBoolean iTrim) = 0;

  /**
   * Sets the reference base curve.
   *   @param iBaseCurve
   *      new reference base curve
   */ 
 virtual    HRESULT SetBaseCurve  (const CATIMmiMechanicalFeature_var iBaseCurve)  = 0;
  /**
    * Sets the Connect Type. 
    * <br> It modifies the connect type either "Normal" or "Base Curve"
    * <br> Note: 
    * <br>  - If connect curve type selected is Normal, the connect is the usual connect.
    * <br>  - If Base Curve is selected, the conenct is a similar curve.
    *   @param iType
    *      Solution type
    *       : CATGSMConnectNorm (=0) -> Normal
    *       : CATGSMConnectSim  (=1) -> Base Curve
    * @see CATGSMConnectType
    */
 virtual    HRESULT SetConnectType(CATGSMConnectType iType) = 0;

};
CATDeclareHandler (CATIGSMUseConnect, CATBaseUnknown);
#endif // CATIGSMUseConnect_H

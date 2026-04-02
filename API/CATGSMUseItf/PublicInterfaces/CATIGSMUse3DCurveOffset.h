/* -*-c++-*- */
#ifndef CATIGSMUse3DCurveOffset_H
#define CATIGSMUse3DCurveOffset_H
 
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGSMUseItfExportedBy.h"
#include "CATBaseUnknown.h"
#include "CATBoolean.h"

//#include "CATIMmiMechanicalFeature.h"
//#include "CATICkeParm.h"
//#include "CATIGSMUseDirection.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID  IID_CATIGSMUse3DCurveOffset;
#else
extern "C" const IID IID_CATIGSMUse3DCurveOffset;
#endif

class CATIMmiMechanicalFeature_var;
class CATICkeParm_var;
class CATIGSMUseDirection_var;

/**
 * Interface for 3D Curve Offset feature.
 * <b>Role</b>: Allows you to access data of the 3D Curve Offset feature
 * created by using  a curve, a direction and three litteral parameters
 * @see CATIGSMUseFactory#Create3DCurveOffset
 */
class ExportedByCATGSMUseItf CATIGSMUse3DCurveOffset : public CATBaseUnknown
{
   CATDeclareInterface;
   
public: 
  /**
    * Gets the feature that has been offseted.
    *   @return
    *      CATIMmiMechanicalFeature 
    */
   virtual  HRESULT GetCurveToOffset(CATIMmiMechanicalFeature_var & oCurve) = 0;

  /**
    * Gets the direction.
    *   @return
    *      CATIGSMUseDirection 
    */
   virtual    HRESULT GetDirection(CATIGSMUseDirection_var & oDir) = 0;

  /**
    * Gets the offset length value.
    *   @param Offset
    *      offset length value
    */
   virtual    HRESULT  GetOffsetValue(CATICkeParm_var& oOffset) = 0;

  /**
    * Gets the corner radius length value.
    *   @param oRadius
    *      corner radius length value
    */
   virtual    HRESULT  GetCornerRadiusValue(CATICkeParm_var& oRadius) = 0;
   
   /**
   * Gets the corner tension length value.
   *   @param oRadius
   *      corner tension length value
   */
   virtual    HRESULT  GetCornerTensionValue(CATICkeParm_var& oTension) = 0;
   
   /**
   * Gets the orientation.
   *   @param oInvert
   *     : False means that there is no invertion of the curve orientation 
   *   (orientation is the vector product of the tangent of the curve  by the normal on the support)
   *     : True to invert this orientation
   */
   virtual    HRESULT      GetInvertDirection  (CATBoolean & oInvert)     = 0;
   
   /**
   * Sets the feature that has been offseted.
   *   @return
    *      CATIMmiMechanicalFeature 
    */
   virtual  HRESULT SetCurveToOffset(const CATIMmiMechanicalFeature_var & iCurve) = 0;

  /**
    * Sets the direction.
    *   @return
    *      CATIGSMUseDirection 
    */
   virtual    HRESULT SetDirection(const CATIGSMUseDirection_var & iDir) = 0;

  /**
    * Sets the offset length value.
    *   @param Offset
    *      offset length value
    */
   virtual    HRESULT  SetOffsetValue(const CATICkeParm_var& iOffset) = 0;

  /**
    * Sets the corner radius length value.
    *   @param oRadius
    *      corner radius length value
    */
   virtual    HRESULT  SetCornerRadiusValue(const CATICkeParm_var& iRadius) = 0;
   
   /**
   * Sets the corner tension length value.
   *   @param oRadius
   *      corner tension length value
   */
   virtual    HRESULT  SetCornerTensionValue(const CATICkeParm_var& iTension) = 0;
   
   /**
   * Sets the orientation. 
   *   @param Invert
   *      False means that there is no invertion of the curve orientation 
   *   (orientation is the vector product of the tangent of the curve  by the normal on the support)
   *      True to invert this orientation
   */
   virtual    HRESULT SetInvertDirection  (CATBoolean Invert) = 0;

};
CATDeclareHandler (CATIGSMUse3DCurveOffset, CATBaseUnknown);
#endif // CATIGSMUse3DCurveOffset_H









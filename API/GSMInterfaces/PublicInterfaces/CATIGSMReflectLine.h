/* -*-c++-*- */
#ifndef CATIGSMReflectLine_H
#define CATIGSMReflectLine_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATGitInterfacesExportedBy.h"
#include "CATBaseUnknown.h"

#include "CATGSMOrientation.h"
#include "CATGSMReflectLineDef.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGitInterfaces IID  IID_CATIGSMReflectLine;
#else
extern "C" const IID IID_CATIGSMReflectLine;
#endif

class CATISpecObject_var;
class CATIGSMDirection_var;
class CATICkeParm_var;



/**
 * Interface to reflect line feature.
 * <b>Role</b>: Allows you to access data of the ReflectLine feature created by using 
 * an element, a direction and an angle.
 * This feature create curves as the loci of the points on the support
 * where the tangent plane makes a given angle with a given direction.
 * @see CATIGSMFactory#CreateReflectLine
 */
class ExportedByCATGitInterfaces CATIGSMReflectLine : public CATBaseUnknown
{
   CATDeclareInterface;
public:
 
  /**
    * Gets the support of the reflectline (surface).
    *   @param oSupport
    * @see CATISpecObject
    */
 virtual    HRESULT GetSupport(CATISpecObject_var & oSupport) = 0;

  /**
    * Sets the support of the reflectline (surface).
    *   @param iSupport
    *      new support
    * @see CATISpecObject
    */
 virtual    HRESULT SetSupport(const CATISpecObject_var iSupport) = 0;
 
  /**
    * Gets the origin of the reflectline (point).
    *   @param oOrigin
    * @see CATISpecObject
    */
 virtual    HRESULT GetOrigin(CATISpecObject_var & oOrigin) = 0;

  /**
    * Sets the origin of the reflectline (point).
    *   @param iOrigin
    *      new origin
    * @see CATISpecObject
    */
 virtual    HRESULT SetOrigin(const CATISpecObject_var iOrigin) = 0;
 
  /**
    * Gets the direction of the reflectline.
    *   @param oDirection
    *      direction
    * @see CATIGSMDirection
    */
 virtual    HRESULT GetDirection(CATIGSMDirection_var & oDirection) = 0;

  /**
    * Sets the direction of the reflectline.
    *   @param iDirection
    *      direction
    * @see CATIGSMDirection
    */
 virtual    HRESULT SetDirection(const CATIGSMDirection_var iDirection) = 0;
 
 
  /**
    * Gets the angle of the reflectline.
    *   @param oAngle
    *      angle between the direction and the tangent plane
    * @see CATICkeParm
    */
 virtual    HRESULT GetAngle(CATICkeParm_var & oAngle) = 0;

  /**
    * Gets the angle of the reflectline.
    *   @param oAngle
    *      angle between the direction and the tangent plane
    */
 virtual    HRESULT GetAngle(double & oAngle) = 0;

  /**
    * Sets the angle of the reflectline.
    *   @param iAngle
    * @see CATICkeParm
    */
 virtual    HRESULT SetAngle(const CATICkeParm_var iAngle) = 0;
 
  /**
    * Sets the angle of the reflectline.
    *   @param iAngle
    * @see CATICkeParm
    */
 virtual    HRESULT SetAngle(double iAngle) = 0;
 
  /**
    * Gets the support element orientation used to compute the reflectline.
    * Orientation specifies normal orientation of the support
    *
    *   @param oOrientation
    *      orientation support 
    * @see CATGSMOrientation
    */
 virtual    HRESULT GetOrientationSupport(CATGSMOrientation & oOrientation)= 0;

  /**
    * Sets the support element orientation used to compute the reflectline.
    * Orientation specifies normal orientation of the support
    *
    *   @param iOrientation
    *      orientation direction 
    * @see CATGSMOrientation
    */
 virtual    HRESULT  SetOrientationSupport (CATGSMOrientation iOrientation) = 0;
 
  /**
    * Gets the direction orientation used to compute the reflectline.
    * Orientation specifies direction orientation 
    *
    *   @param oOrientation
    *      orientation direction 
    * @see CATGSMOrientation
    */
 virtual    HRESULT GetOrientationDirection(CATGSMOrientation & oOrientation)= 0;

  /**
    * Sets the direction orientation used to compute the reflectline.
    * Orientation specifies direction orientation
    *
    *   @param iOrientation
    *      orientation direction 
    * @see CATGSMOrientation
    */
 virtual    HRESULT  SetOrientationDirection (CATGSMOrientation iOrientation) = 0;

 /**
    * Inverts the support element orientation used to compute the reflectline.
    */
 virtual    HRESULT InvertOrientationSupport() = 0;

 /**
    * Inverts the direction orientation used to compute the reflectline.
    */
 virtual    HRESULT InvertOrientationDirection() = 0;
 
  /**
    * Gets Solution type.
    * <br>
    * Angle is between normal to the support and the direction 
    * or between tangent plane to the support and the direction.
    *   @param oType
    *      Solution type
    *       : CATGSMNormalSolution (=0) -> normal to the support
    *       : CATGSMPlaneSolutions (=1) -> tangent plane to the support
    * @see CATGSMReflectLineSolutionType
    */
 virtual    HRESULT GetSolutionType(CATGSMReflectLineSolutionType & oType) = 0;

  /**
    * Sets the ReflectLine Type. 
    * <br> It modifies the solution type either "Normal solution" or "Tangent plane solution"
    * <br> Note: 
    * <br>  - If reflectline curve type selected is Normal, the angle is between normal to the 
    * support and the direction.
    * <br>  - If Tangent plane is selected, the angle is between tangent plane to the 
    * support and the direction.
    *   @param iType
    *      Solution type
    *       : CATGSMNormalSolution (=0) -> normal to the support
    *       : CATGSMPlaneSolution (=1) -> tangent plane to the support
    * @see CATGSMReflectLineSolutionType
    */
 virtual    HRESULT SetSolutionType(CATGSMReflectLineSolutionType iType) = 0;
 
  /**
    * Gets Source type.
    * <br>
    * The ReflectLine can be Cylindrical or Conical. 
    *   @param oType
    *      Solution type
    *       : CATGSMCylindricalType (=0) -> The ReflectLine is a cylindrical reflect line
    *       : CATGSMConicalType (=1) -> The ReflectLine is a Conical reflect line
    * @see CATGSMReflectLineSourceType
    */
 virtual    HRESULT GetSourceType(CATGSMReflectLineSourceType & oType) = 0;

  /**
    * Sets the ReflectLine source type. 
    * <br> It modifies the source type either "Cylindrical" or "Conical"
    * <br> Note: 
    * <br>  - If reflectline curve source type selected is Cylindrical, the reflect line 
    * is cylindrical (source seems to be located at an infinite point).
    * <br>  - If Conical is selected, the reflect line is conical (source is located at a finite 
    * point).
    *   @param iType
    *      Source type
    *       : CATGSMCylindricalType (=0) -> The ReflectLine is a cylindrical reflect line
    *       : CATGSMConicalType (=1) -> The ReflectLine is a Conical reflect line
    * @see CATGSMReflectLineSourceType
    */
 virtual    HRESULT SetSourceType(CATGSMReflectLineSourceType iType) = 0;
 
};
CATDeclareHandler (CATIGSMReflectLine, CATBaseUnknown);
#endif // CATIGSMReflectLine_H






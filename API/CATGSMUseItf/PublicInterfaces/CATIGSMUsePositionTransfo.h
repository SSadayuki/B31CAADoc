/* -*-c++-*- */
#ifndef CATIGSMUsePositionTransfo_H
#define CATIGSMUsePositionTransfo_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "CATBaseUnknown.h"
#include "CATGSMUseItfExportedBy.h"
#include "CATGSMPositionTransfoDef.h"

class CATICkeParm_var;
class CATIMmiMechanicalFeature_var;
class CATIGSMUseDirection_var;
class CATMathAxis;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATGSMUseItf IID IID_CATIGSMUsePositionTransfo;
#else
extern "C" const IID IID_CATIGSMUsePositionTransfo;
#endif
/**
 * Interface to position transformation feature.
 * <b>Role</b>: Allows you to access data of the Position Transfo feature used to position a
 * profile before creating a swept surface.
 * This interface should not be used directly. Explicit sweep feature users
 * should rather use the corresponding interface.
 * @see CATGSMPositionMode, CATGSMAxisInversionMode
 * @see CATIGSMUseSweepUnspec
 * @see CATIGSMUseSweepUnspec#GetPositionTransfo 
 * @see CATIGSMUseFactory#CreateExplicitSweep
 */
class ExportedByCATGSMUseItf CATIGSMUsePositionTransfo : public CATBaseUnknown
{

 CATDeclareInterface;

  public:

   /**
    * Gets the positioning mode.
    *   @param oElem
    *      Mode : <BR>
    *      - CATGSMPositionMode_NoneOrPositioned : no positioning <BR>
    *      - CATGSMPositionMode_ExplicitSweep : the explicit profile is to
    *         be moved from its initial plane to the first sweep plane <BR>
    *      - CATGSMPositionMode_Develop : === DO NOT USE IN THIS VERSION ===
    *         planar wire is to be positioned in
    *         its initial plane; target origin corresponds to the
    *         zero-deformation point on the support surface (target axes are
    *         defined by the parameterization of the support surface)
    *   @see CATIGSMUseSweepUnspec, CATGSMPositionMode
    */
 virtual HRESULT GetMode(enum CATGSMPositionMode & oElem) = 0;
   /**
    * Sets the positioning mode.
    *   @param iElem
    *      Mode
 * @see CATGSMPositionMode
    */
 virtual HRESULT SetMode(const enum CATGSMPositionMode iElem) = 0;

   /**
    * Gets the original profile (or element), before transformation.
    *   @param oElem
    *      Profile feature
    */
 virtual HRESULT GetProfile(CATIMmiMechanicalFeature_var & oElem) = 0;
   /**
    * Sets the original profile (or element), before transformation.
    *   @param iElem
    *      Profile feature
    */
 virtual HRESULT SetProfile(const CATIMmiMechanicalFeature_var iElem) = 0;

   /**
    * Gets numerical positioning parameters : origin planar coordinates
    * in each plane used for the positioning operation (initial and target).
    *   @param oElem
    *      Numerical parameter (literal feature)
    *   @param iI
    *      Index of the parameter : 1 and 2 for initial plane,
    *      3 and 4 for target plane
 * @see CATICkeParm
    */
 virtual HRESULT GetPosCoord(CATICkeParm_var & oElem, const int iI) = 0;
   /**
    * Adds a numerical positioning parameter : origin planar coordinate.
    *   @param iElem
    *      Numerical parameter (literal feature)
 *   @see CATICkeParm
    */
 virtual HRESULT AddPosCoord(const CATICkeParm_var iElem) = 0;
   /**
    * Sets numerical positioning parameter : origin planar coordinate.
    *   @param Elem
    *      Numerical parameter (literal feature)
    *   @param iI
    *      Index of the parameter : 1 and 2 for initial plane,
    *      3 and 4 for target plane
 *   @see CATICkeParm
    */
 virtual HRESULT SetPosCoord(const CATICkeParm_var iElem, const int iI) = 0;
   /**
    * Sets numerical positioning parameter : origin planar coordinate.
    *   @param iElem
    *      Numerical value
    *   @param iI
    *      Index of the parameter : 1 and 2 for initial plane,
    *      3 and 4 for target plane
    */
 virtual HRESULT SetPosCoord(const double iElem, const int iI) = 0;
   /**
    * Gets the number of numerical positioning parameters : origin
    * planar coordinates.
    *   @param oI
    *      Number of parameters
    */
 virtual HRESULT GetNbPosCoord(int & oI) = 0;
   /**
    * Removes all numerical positioning parameters : origin planar coordinates.
    */
 virtual HRESULT RemoveAllPosCoord() = 0;

   /**
    * Gets numerical positioning parameters : first axis direction angles
    * from default position in each plane used for the positioning
    * operation (initial and target).
    *   @param oElem
    *      Numerical parameter (literal feature)
    *   @param iI
    *      Index of the parameter : 1 for initial plane, 2 for target plane
    *   @see CATICkeParm
 */
 virtual HRESULT GetPosAngle(CATICkeParm_var & oElem, const int iI) = 0;
   /**
    * Adds a numerical positioning parameter : first axis direction angle.
    *   @param iElem
    *      Numerical parameter (literal feature)
    */
 virtual HRESULT AddPosAngle(const CATICkeParm_var iElem) = 0;
   /**
    * Sets numerical positioning parameter : first axis direction angle.
    *   @param iElem
    *      Numerical parameter (literal feature)
    *   @param iI
    *      Index of the parameter : 1 initial plane, 2 for target plane
    *   @see CATICkeParm 
 */
 virtual HRESULT SetPosAngle(const CATICkeParm_var iElem, const int iI) = 0;
   /**
    * Sets numerical positioning parameter : first axis direction angle.
    *   @param iElem
    *      Numerical value
    *   @param iI
    *      Index of the parameter : 1 initial plane, 2 for target plane
    */
 virtual HRESULT SetPosAngle(const double iElem, const int iI) = 0;
   /**
    * Gets the number of numerical positioning parameters : first axis
    * direction angles.
    *   @param oI
    *      Number of parameters
    */
 virtual HRESULT GetNbPosAngle(int & oI) = 0;
   /**
    * Removes all numerical positioning parameters : first axis direction angles.
    */
 virtual HRESULT RemoveAllPosAngle() = 0;

   /**
    * Gets the positioning parameter : axes inversion from previous definition
    * for each plane involved in the positioning.
    *   @param oI
    *      State of axes : <BR>
    *       - CATGSMAxisInversionMode_None : no axis inverted <BR>
    *       - CATGSMAxisInversionMode_X : only X axis inverted <BR>
    *       - CATGSMAxisInversionMode_Y : only Y axis inverted <BR>
    *       - CATGSMAxisInversionMode_Both : both axes inverted
    *   @param iIdx
    *      Plane index : 1 for initial one, 2 for target one
 *   @see CATGSMAxisInversionMode
    */
 virtual HRESULT GetPosSwapAxes(enum CATGSMAxisInversionMode & oI, const int iIdx) = 0;
   /**
    * Gets the positioning parameter : axes inversion from previous definition
    * for the initial plane.
    *   @param oI
    *      State of axes
 *   @see CATGSMAxisInversionMode
    */
 virtual HRESULT GetPosSwapAxes(enum CATGSMAxisInversionMode & oI) = 0;
   /**
    * Sets the positioning parameter : axes inversion from previous definition
    * for each plane involved in the positioning (initial and target).
    *   @param iI
    *      State of axes : <BR>
    *       - CATGSMAxisInversionMode_None : no axis inverted <BR>
    *       - CATGSMAxisInversionMode_X : only X axis inverted <BR>
    *       - CATGSMAxisInversionMode_Y : only Y axis inverted <BR>
    *       - CATGSMAxisInversionMode_Both : both axes inverted
    *   @param iIdx
    *      Plane index : 1 for initial one, 2 for target one
 *   @see CATGSMAxisInversionMode
    */
 virtual HRESULT SetPosSwapAxes(const enum CATGSMAxisInversionMode iI, const int iIdx) = 0;
   /**
    * Sets the positioning parameter : axes inversion from previous definition
    * for the initial plane.
    *   @param iI
    *      State of axes
    *   @see CATGSMAxisInversionMode
 */
 virtual HRESULT SetPosSwapAxes(const enum CATGSMAxisInversionMode iI) = 0;

   /**
    * Gets the points designated as the origins of the initial and target
    * transformation planes.
    *   @param oElem
    *      Point feature
    *   @param iI
    *      Plane index : 1 for initial one, 2 for target one
    */
 virtual HRESULT GetPosPoint(CATIMmiMechanicalFeature_var & oElem, const int iI) = 0;
   /**
    * Gets the point designated as the origin of the initial transformation plane.
    *   @param oElem
    *      Point feature
    */
 virtual HRESULT GetPosPoint(CATIMmiMechanicalFeature_var & oElem) = 0;
   /**
    * Sets the points designated as the origins of the initial and target
    * transformation planes.
    *   @param iElem
    *      Point feature
    *   @param iI
    *      Plane index : 1 for initial one, 2 for target one
    */
 virtual HRESULT SetPosPoint(const CATIMmiMechanicalFeature_var iElem, const int iI) = 0;
   /**
    * Sets the point designated as the origin of the initial transformation plane.
    *   @param iElem
    *      Point feature
    */
 virtual HRESULT SetPosPoint(const CATIMmiMechanicalFeature_var iElem) = 0;

   /**
    * Gets the positioning directions : initial or target plane X-axis direction.
    *   @param oElem
    *      Direction feature
    *   @param iI
    *      Plane index : 1 for initial one, 2 for target one
    *   @see CATIGSMUseDirection
    */
 virtual HRESULT GetPosDirection(CATIGSMUseDirection_var & oElem, const int iI) = 0;
   /**
    * Gets the positioning direction : initial plane X-axis direction.
    *   @param oElem
    *      Direction feature
    *   @see CATIGSMUseDirection
    */
 virtual HRESULT GetPosDirection(CATIGSMUseDirection_var & oElem) = 0;
   /**
    * Sets the positioning directions : initial or target plane X-axis direction.
    *   @param iElem
    *      Direction feature
    *   @param iI
    *      Plane index : 1 for initial one, 2 for target one
    *   @see CATIGSMUseDirection
    */
 virtual HRESULT SetPosDirection(const CATIGSMUseDirection_var iElem, const int iI) = 0;
   /**
    * Sets the positioning direction : initial plane X-axis direction.
    *   @param iElem
    *      Direction feature
    *   @see CATIGSMUseDirection
    */
 virtual HRESULT SetPosDirection(const CATIGSMUseDirection_var iElem) = 0;


   /**
    * Gets the computed initial axis after user manipulation.
    *   @param oMathAxisResult 
    *      Axis
    */
 virtual HRESULT GetUserInitialAxis(CATMathAxis & oMathAxisResult) = 0;

   /**
    * Gets the computed target axis after user manipulation.
    *   @param oMathAxisResult
    *      Axis
    */
 virtual HRESULT GetUserTargetAxis(CATMathAxis & oMathAxisResult) = 0;


  /**
   * Gets the computation mode of the X axis (or direction) of the initial axis system.
   * Default value (if not specified by SetInitialDirectionComputationMode) is
   * CATGSMPositionDirCompMode_None if GetPosDirection(OutputDirection) gives a NULL_var
   * OutputDirection, and CATGSMPositionDirCompMode_User if OutputDirection is different
   * from NULL_var.
   *   @param oDirCompMode
   *      Mode : <BR>
   *      - CATGSMPositionDirCompMode_None: no X axis specified <BR>
   *      - CATGSMPositionDirCompMode_Tangent: the X axis is implicitly the tangent
   *         of the profile at the origin (the origin then HAS to be on the profile) <BR>
   *      - CATGSMPositionDirCompMode_User: the X axis is specified by a direction via
   *         SetPosDirection(UserInputDirection, 1)
   *   @see CATIGSMUseSweepUnspec
   */
   virtual HRESULT GetInitialDirectionComputationMode(enum CATGSMPositionDirCompMode & oDirCompMode) = 0;
  /**
   * Sets the computation mode of the X axis (or direction) of the initial axis system.
   * If CATGSMPositionDirCompMode_None or CATGSMPositionDirCompMode_Tangent is specified,
   * a SetPosDirection(NULL_var, 1) is performed.
   * Specifying CATGSMPositionDirCompMode_User is useless: if a direction has previously
   * been specified, the mode has already been set.
   *   @param iDirCompMode
   *      Mode
   * @see CATIGSMUseSweepUnspec
   */
   virtual HRESULT SetInitialDirectionComputationMode(const enum CATGSMPositionDirCompMode iDirCompMode) = 0;

};
CATDeclareHandler (CATIGSMUsePositionTransfo, CATBaseUnknown);
#endif // CATIGSMUsePositionTransfo_H

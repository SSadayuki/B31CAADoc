/* -*-c++-*- */
#ifndef CATGSOWrapCurveDef_H
#define CATGSOWrapCurveDef_H 

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */


/**
 * Types for constraint on deformed surface. 
 * <b>Role</b>:  Used for WrapCurve creation and modifications
 * Notes: <br>
 *   Enumerations used as parameters in interfaces of manipulation of a wrap curve surface. <br>
 *   This surface is a WrapCurve feature created by the CATIGSOFactory. <br>
 * @param CATGSOWrapCurveSurfaceCstNone
 *     no constraint.
 * @param CATGSOWrapCurveSameCurvature
 *     Deformed surface will have the same tangency and the same curvature 
 *     as the original surface at first curve or last curve.
 * @param CATGSOWrapCurveSameTangency
 *     Deformed surface will have the same tangency 
 *     as the original surface at first curve or last curve.
 * @see CATIGSOWrapCurve, CATIGSOFactory 
 */
enum CATGSOWrapCurveSurfaceCst {  CATGSOWrapCurveSurfaceCstNone= 1
                         , CATGSOWrapCurveSameCurvature = 2
                         , CATGSOWrapCurveSameTangency = 3
    };

/**
 * Types for reference spine definition. 
 * <b>Role</b>:  Used for WrapCurve creation and modifications
 * Notes: <br>
 *   Enumerations used as parameters in interfaces of manipulation of a wrap curve surface. <br>
 *   This surface is a WrapCurve feature created by the CATIGSOFactory. <br>
 * @param CATGSOWrapCurveRefSpineFirstRefCurve
 *     Reference Spine is equal to the first reference curve 
 * @param CATGSOWrapCurveUserRefSpine
 *     user spine  
 *
 * @see CATIGSOWrapCurve, CATIGSOFactory 
 */
enum CATGSOWrapCurveRefSpineType {  CATGSOWrapCurveRefSpineFirstRefCurve= 1
                         , CATGSOWrapCurveUserRefSpine };

/**
 * Types for target spine definition. 
 * <b>Role</b>:  Used for WrapCurve creation and modifications
 * Notes: <br>
 *   Enumerations used as parameters in interfaces of manipulation of a wrap curve surface. <br>
 *   This surface is a WrapCurve feature created by the CATIGSOFactory. <br>
 * @param CATGSOWrapCurveTargSpineRefSpine
 *     Target Spine is equal to the reference spine 
 * @param CATGSOWrapCurveTargSpineFirstTargCurve
 *     Target Spine is equal to the first target curve 
 * @param CATGSOWrapCurveUserTargSpine
 *     user spine  
 *
 * @see CATIGSOWrapCurve, CATIGSOFactory 
 */
enum CATGSOWrapCurveTargSpineType { CATGSOWrapCurveTargSpineRefSpine = 1
                         , CATGSOWrapCurveTargSpineFirstTargCurve
                         , CATGSOWrapCurveUserTargSpine
   };

/**
 * Types for reference projection direction definition. 
 * <b>Role</b>:  Used for WrapCurve creation and modifications
 * Notes: <br>
 *   Enumerations used as parameters in interfaces of manipulation of a wrap curve surface. <br>
 *   This surface is a WrapCurve feature created by the CATIGSOFactory. <br>
 * @param CATGSOWrapCurveRefDirComputed
 *     Reference direction is computed
 * @param CATGSOWrapCurveRefDirUser
 *     Reference direction is a user direction
 * @param CATGSOWrapCurveRefDirNormal
 *     DO NOT USE
 * @param CATGSOWrapCurveRefDirNormalInverted
 *     DO NOT USE
 *
 * @see CATIGSOWrapCurve, CATIGSOFactory 
 */
enum CATGSOWrapCurveRefDirType { CATGSOWrapCurveRefDirComputed = 1
                         , CATGSOWrapCurveUserRefDir = 2, CATGSOWrapCurveRefDirNormal = 3, CATGSOWrapCurveRefDirNormalInverted = 4
   };


#endif

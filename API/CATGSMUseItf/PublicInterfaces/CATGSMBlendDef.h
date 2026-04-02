/* -*-c++-*- */
#ifndef CATGSMBlendDef_H
#define CATGSMBlendDef_H 

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Types for blend limitation definition. 
 * <b>Role</b>:  Used for blend creation and modifications
 * Notes: <br>
 *   Enumerations used as parameters in interfaces of manipulation of a blended surface. <br>
 *   This blended surface is a Blend feature created by the CATIGSMFactory. <br>
 * @param CATGSMBlendStartLimit
 *     Start limit of the blend  
 * @param CATGSMBlendEndLimit
 *     End limit of the blend 
 *
 * @see CATIGSMBlend, CATIGSMFactory 
 */
enum CATGSMBlendLimitNumber { CATGSMBlendStartLimit = 1
                         , CATGSMBlendEndLimit};

/**
 * Types for blend tension definition. 
 * <b>Role</b>:  Used for blend creation and modifications
 * Notes: <br>
 *   Enumerations used as parameters in interfaces of manipulation of a blended surface. <br>
 *   This blended surface is a Blend feature created by the CATIGSMFactory. <br>
 * @param CATGSMBlendDefaultTension
 *     Default tension of the blend : it is a constant tension set to 1.  
 * @param CATGSMBlendConstantTension
 *     Constant tension of the blend 
 * @param CATGSMBlendLinearTension
 *     Linear tension of the blend 
 * @param CATGSMBlendSTypeTension
 *     S-Type tension of the blend 
 * @see CATIGSMBlend, CATIGSMFactory  
 */
enum CATGSMBlendTensionType { CATGSMBlendDefaultTension = 1
                         , CATGSMBlendConstantTension
                         , CATGSMBlendLinearTension
                         , CATGSMBlendSTypeTension
   };

/**
 * Types for blend border definition mode. 
 * <b>Role</b>:  Used for blend creation and modifications
 * Notes: <br>
 *   Enumerations used as parameters in interfaces of manipulation of a blended surface. <br>
 *   This blended surface is a Blend feature created by the CATIGSMFactory. <br>
 * @param CATGSMBlendTangentBorder
 *     The border of the blend will be tangent to the border of the support surface, 
 *     or if the curve ends on the border of a face of the support surface, then
 *     the border of the blend will be tangent to the border face.
 * @param CATGSMBlendFreeBorder
 *     The border of the blend is not constrained.
 * @param CATGSMBlendTangentBorderStartExtremityOnly
 *     The border of the blend will be tangent to the border of the support surface
 *     at the start extremity of the curve,
 *     or if the curve ends on the border of a face of the support surface, then
 *     the border of the blend will be tangent to the border face at the start extremity of the curve.
 * @param CATGSMBlendTangentBorderEndExtremityOnly
 *     The border of the blend will be tangent to the border of the support surface
 *     at the end extremity of the curve,
 *     or if the curve ends on the border of a face of the support surface, then
 *     the border of the blend will be tangent to the border face at the end extremity of the curve.
 * @see CATIGSMBlend, CATIGSMFactory 
 */
enum CATGSMBlendBorder { CATGSMBlendTangentBorder = 1
                         , CATGSMBlendFreeBorder
                         , CATGSMBlendTangentBorderStartExtremityOnly
                         , CATGSMBlendTangentBorderEndExtremityOnly
   };

/**
 * Types for blend curve extremities connections definition mode. 
 * <b>Role</b>:  Used for blend creation and modifications
 * Notes: <br>
 *   Enumerations used as parameters in interfaces of manipulation of a blended surface. <br>
 *   This blended surface is a Blend feature created by the CATIGSMFactory. <br>
 * @param CATGSMBlendBothExtremities
 *     The border of the blend will be connected to the extremity of both curves  
 * @param CATGSMBlendFirstCurve
 *     The border of the blend will be connected to the extremity of the first curve
 * @param CATGSMBlendSecondCurve
 *     The border of the blend will be connected to the extremity of the second curve
 * @see CATIGSMBlend, CATIGSMFactory 
 */
enum CATGSMBlendConnection { CATGSMBlendBothExtremities = 1
                         , CATGSMBlendFirstCurve
                         , CATGSMBlendSecondCurve
   };

#endif

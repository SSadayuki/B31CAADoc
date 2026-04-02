/* -*-c++-*- */
#ifndef CATGSMCouplingDef_H
#define CATGSMCouplingDef_H 

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Types for Coupling definition. 
 * <b>Role</b>:  Used for coupling creation and modifications, specifies how the curves are coupled :
 * @param CATGSMRatioCoupling 
 *    the curves will be coupled accordind to the curvilinear abscissa ratio.
 * @param CATGSMTangencyDiscontCoupling
 *     if each curve has the same number of tangency discontinuities points, then these points will be coupled,
 *     otherwise an error message is displayed.
 * @param CATGSMTangencyThenCurvatureDiscontCoupling
 *     if each curve has the same number  of tangency and curvature discontinuities points,
 *     then tangency discontinuities points will be coupled,
 *     and after curvature discontinuities points will be coupled,
 *     otherwise an error message is displayed.
 * @param CATGSMVerticesCoupling
 *     if each curve has the same number of vertices, then these points will be coupled,
 *     otherwise an error message is displayed.",
 * @param CATGSMSpineCoupling
 *     coupling is completely driven by a curve (called spine); this coupling definition is used for blend only.
 * @param CATGSMAvoidTwistsCoupling
 *     Coupling lines are created in order to optimize their angles; this coupling definition is used for blend only.
 * Notes: <br>
 *   Enumerations used as parameters in interfaces of manipulation of a Blended surface. <br>
 *   or Loft surface <br>
 *   This surfaces are features created by the CATIGSMFactory. <br>
 * @see CATIGSMLoft, CATIGSMFactory
 */
enum CATGSMCouplingType { CATGSMRatioCoupling = 1
                         , CATGSMTangencyDiscontCoupling
                         , CATGSMTangencyThenCurvatureDiscontCoupling
                         , CATGSMVerticesCoupling
                         , CATGSMSpineCoupling
                         , CATGSMAvoidTwistsCoupling
   };

#endif

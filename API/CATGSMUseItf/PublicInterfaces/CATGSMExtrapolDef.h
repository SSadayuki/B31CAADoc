/* -*-c++-*- */

#ifndef CATGSMExtrapolDef_H_ 
#define CATGSMExtrapolDef_H_ 

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Types for extrapolation limitation .
 *    @param  CATGSMLengthLimit
 *          define by a length 
 *    @param  CATGSMUpToElementLimit
 *          define by an element upto 
 * 
 * @see CATIGSMExtrapol, CATIGSMFactory
 */ 

   
enum CATGSMExtrapolLimitType { CATGSMLengthLimit=0, CATGSMUpToElementLimit=1 };

/**
 * Types for extrapolation continuity.
 *    @param  CATGSMTangentContinuity
 *          tangent continuity (C1) 
 *    @param  CATGSMCurvatureContinuity
 *          curvature continuity (C2)
 * 
 * @see CATIGSMExtrapol, CATIGSMFactory
 */ 
enum CATGSMExtrapolContinuityType { CATGSMTangentContinuity=0 , CATGSMCurvatureContinuity=1 };

/**
 * Types for extrapolation border.
 *    @param  CATGSMNormalBorder
 *       normal border
 *    @param  CATGSMTangentBorder
 *       normal border
 * 
 * @see CATIGSMExtrapol, CATIGSMFactory
 */ 
enum CATGSMExtrapolBorderType { CATGSMNormalBorder=0 , CATGSMTangentBorder=1 };

/**
 * Types for extrapolation propagation mode.
 *    @param  CATGSMNoPropagation
 *       normal border
 *    @param  CATGSMTangencyPropagation
 *       normal border
 * 
 * @see CATIGSMExtrapol, CATIGSMFactory
 */ 
enum CATGSMExtrapolPropagationMode { CATGSMNoPropagation=0 , CATGSMTangencyPropagation=1, CATGSMPointContinuityPropagation=2};

/**
 * Types for exact extrapolation .
 *    @param  CATGSMApproximateMode
 *       more tolerant approach of the skin border reconstruction
 *    @param  CATGSMExactMode
 *       exact approach of the skin border reconstruction
 * 
 * @see CATIGSMExtrapol, CATIGSMFactory
 */ 
enum CATGSMExtrapolExactBoundariesMode { CATGSMApproximateMode=0 , CATGSMExactMode=1};

#endif

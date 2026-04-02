/* -*-c++-*- */
#ifndef CATGSMOrientation_H
#define CATGSMOrientation_H


// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Orientation definition. 
 * @param   CATGSMSameOrientation 
 *      same orientation
 * @param   CATGSMInvertOrientation
 *      inverted orientation
 * @param     CATGSMKoOrientation
 *      ko orientation
 * 
 *  @see CATIGSMBoundary, CATIGSMCircle2PointsRad, CATIGSMCircleBitangentPoint, CATIGSMCircleBitangentRadius, CATIGSMCircleTritangent, CATIGSMConnect, CATIGSMCorner, CATIGSMCurvePar, CATIGSMExtractSolide, CATIGSMFilletBiTangent, CATIGSMInverse, CATIGSMLine, CATIGSMLoft, CATIGSMOffset, CATIGSMPlane, CATIGSMPointOnCurve, CATIGSMSplit, CATIGSMTrim, CATIGSMFactory 
 */

enum CATGSMOrientation { CATGSMSameOrientation   =  1, 
                         CATGSMInvertOrientation = -1,
                         CATGSMKoOrientation     =  2};

#endif

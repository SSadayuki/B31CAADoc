/* -*-c++-*- */
#ifndef CATGSMContinuityDef_H_ 
#define CATGSMContinuityDef_H_ 


// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Types for continuity.
 * @param CATGSMContinuity_Point
 *        continuity in point (C0).
 * @param CATGSMContinuity_Tangency
 *        continuity in tangency (C1).
 * @param CATGSMContinuity_Curvature
 *        continuity in curvature (C2).
 *
 * @see CATIGSMConnect, CATIGSMFill, CATIGSMFactory
 */ 

enum CATGSMContinuity {CATGSMContinuity_Point     = 0,
                       CATGSMContinuity_Tangency  = 1,
                       CATGSMContinuity_Curvature = 2};

/**
 * Types for correction in curve smooth.
 * @param CATGSMCSCorrectionMode_Threshold
 *        no continuity.
 * @param CATGSMCSCorrectionMode_Point
 *        continuity in point (C0).
 * @param CATGSMCSCorrectionMode_Tangency
 *        continuity in tangency (C1).
 * @param CATGSMCSCorrectionMode_Curvature
 *        continuity in curvature (C2).
 *
 * @see CATIGSMCurveSmooth
 */ 

enum CATGSMCSCorrectionMode {CATGSMCSCorrectionMode_Threshold	= 0,
							 CATGSMCSCorrectionMode_Point		= 1,
							 CATGSMCSCorrectionMode_Tangency	= 2,
							 CATGSMCSCorrectionMode_Curvature	= 3};

#endif

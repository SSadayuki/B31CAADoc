/* -*-c++-*- */

#ifndef CATGSMTolerantModelingDef_H_ 
#define CATGSMTolerantModelingDef_H_ 


// COPYRIGHT DASSAULT SYSTEMES 2002

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Smoothing types for tolerant modeling.
 * @param TMSmoothing_None
 *     No smoothing
 * @param TMSmoothing_G1
 *     G1 Smoothing: Tangent continuity
 * @param TMSmoothing_G2
 *     G2 Smoothing: Curvature continuity
 *
 * @see CATIGSMProject
 * @see CATIGSMCurvePar
 */

enum CATGSMTolerantModelingSmoothingType{TMSmoothing_None=0,	//No Smoothing  
										TMSmoothing_G1=2,		//Tangent Continuity
										TMSmoothing_G2=3		//Curvature Continuity
};

#endif

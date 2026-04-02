/* -*-c++-*- */

#ifndef CATGSMProjectDef_H_ 
#define CATGSMProjectDef_H_ 


// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Types for projection solutions.
 * @param CATGSMAllSolutions
 *  All solutions are kept
 * @param CATGSMNearestSolution
 *       Nearest solution, only nearest projection is kept when more than one solution is possible
 * @see CATIGSMFactory
 */
   
enum CATGSMProjectSolutionType {   CATGSMNearestSolution = 0 , 
                                   CATGSMAllSolutions    = 1 };

/**
 * Modes for result extrapolation.
 * @param CATGSMProjectExtrapolation_None
 *  The result is not extrapolated
 * @param CATGSMProjectExtrapolation_Tangent
 *  The result is extrapolated in tangency
 * @param CATGSMProjectExtrapolation_Curvature
 *  The result is extrapolated in curvature
 */
   
enum CATGSMProjectExtrapolationMode {
                                      CATGSMProjectExtrapolation_None       = 0,
                                      CATGSMProjectExtrapolation_Tangency   = 1,
                                      CATGSMProjectExtrapolation_Curvature  = 2
                                    };

#endif

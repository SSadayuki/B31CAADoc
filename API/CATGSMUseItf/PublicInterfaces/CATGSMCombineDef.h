/* -*-c++-*- */

#ifndef CATGSMCombineDef_H_ 
#define CATGSMCombineDef_H_ 


// COPYRIGHT DASSAULT SYSTEMES 2000

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Types for combined curve solutions.
 * @param CATGSMAllSolutions
 *  All solutions are kept
 * @param CATGSMNearestSolution
 *       Nearest solution, only nearest projection is kept when more than one solution is possible
 * 
 * @see CATIGSMCombine
 */
   
typedef enum  {   CATGSMNearestSolutionCombine = 0 , 
    CATGSMAllSolutionsCombine    = 1 } CATGSMCombineSolutionType;

/** 
 * Types for combined curve direction.
 * @param  CATGSMSolutionCombine0
 *     Combination mode to consider extrusion directions 
 * @param  CATGSMSolutionCombine1
 *     Retrieve extrusion directions when dealing with Planar Curves.
 * @see CATIGSMCombine
 */
typedef enum  {   CATGSMSolutionCombine0 = 0 , 
CATGSMSolutionCombine1    = 1 } CATGSMCombineSolutionTypeCombine;

#endif

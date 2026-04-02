/* -*-c++-*- */

#ifndef CATGSMReflectLineDef_H_ 
#define CATGSMReflectLineDef_H_ 


// COPYRIGHT DASSAULT SYSTEMES 2001

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Type for ReflectLine curve solutions.
 * @param CATGSMNormalSolution
 *  Angle is between normal to the support and the direction
 * @param CATGSMPlaneSolution
 *  Angle is between tangent plane to the support and the direction
 * 
 * @see CATIGSMReflectLine
 */
   
typedef enum  {   CATGSMNormalSolution = 0 , 
    CATGSMPlaneSolution    = 1 } CATGSMReflectLineSolutionType;

/**
 * Source Type for ReflectLine curve solutions.
 * @param CATGSMCylindricalType
 *  The ReflectLine is a cylindrical reflect line
 * @param CATGSMConicalType
 *  The ReflectLine is a Conical reflect line 
 * 
 * @see CATIGSMReflectLine
 */
   
typedef enum  {   CATGSMCylindricalType = 0 , 
    CATGSMConicalType    = 1 } CATGSMReflectLineSourceType;


#endif

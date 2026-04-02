/* -*-c++-*- */
#ifndef CATGSMCurveParDef_H_ 
#define CATGSMCurveParDef_H_ 


// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Types for CurveParallel corner.
 * @param CATGSMCurvePar_Sharp
 *        corner with angle.
 * @param CATGSMCurvePar_Round
 *        round corner.
 *
 * @see CATIGSMCurvePar, CATIGSMFactory#CreateCurvePar
 */ 

enum CATGSMCurveParCornerType {CATGSMCurvePar_Sharp = 0,
                       CATGSMCurvePar_Round = 1};

#endif

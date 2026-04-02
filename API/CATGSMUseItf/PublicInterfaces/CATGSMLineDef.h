/* -*-c++-*- */

#ifndef CATGSMLineDef_H_ 
#define CATGSMLineDef_H_ 


// COPYRIGHT DASSAULT SYSTEMES 2002

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Types for line length (Length, Infinite, Infinite Start Point and Infinite End Point).
 * @param CATGSMLineLength
 *  The line is limited by its extremities
 * @param CATGSMLineInfinite
 *  The line is infinite
 * @param CATGSMLineInfStart
 *  The line is infinite on the side of the start point
 * @param CATGSMLineInfEnd
 *  The line is infinite on the side of the end point
 * 
 * @see CATIGSMLine
 */
   
typedef enum  {   CATGSMLineLength = 0 , 
    CATGSMLineInfinite = 1 , CATGSMLineInfStart = 2 ,CATGSMLineInfEnd = 3   } CATGSMLineLengthType;

#endif

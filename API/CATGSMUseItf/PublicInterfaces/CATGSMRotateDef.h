/* -*-c++-*- */

#ifndef CATGSMRotateDef_H_
#define CATGSMRotateDef_H_


// COPYRIGHT DASSAULT SYSTEMES 2004

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Types for rotation definition.
 * @param CATGSMAxisAngle
 *  The rotation is defined by an axis and an angle
 * @param CATGSMAxisTwoElem
 *  The rotation is defined by an axis and two geometric elements
 * @param CATGSMThreePoints
 *  The rotation is defined by three points
 */

enum CATGSMRotationType			 {   CATGSMAxisAngle			= 0 ,
                                     CATGSMAxisTwoElem			= 1 ,
                                     CATGSMThreePoints			= 2 ,
                                     CATGSMUnknownRotationType	= 3
                                 };
#endif

/* -*-c++-*- */

#ifndef CATGSMTranslateDef_H_
#define CATGSMTranslateDef_H_


// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Types for translation vector definition type.
 * @param CATGSMDirDist
 *  The vector is defined by a direction and a distance
 * @param CATGSMPointPoint
 *  The vector is defined by two points
 * @param CATGSMCoordinates
 *  The vector is defined by coordinates
 */

enum CATGSMTranslateVectorType   {   CATGSMDirDist     = 0 ,
                                     CATGSMPointPoint  = 1 ,
                                     CATGSMCoordinates = 2 ,
                                     CATGSMUnknownType = 3
                                 };

#endif

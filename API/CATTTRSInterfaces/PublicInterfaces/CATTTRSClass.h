// COPYRIGHT DASSAULT SYSTEMES  2000

#ifndef CATTTRSClass_H
#define CATTTRSClass_H

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Typedef to describe the kind of admissible type for TTRS.
 */

enum CATTTRSClass 
{
  Spherical    = 0,
  Cylindrical  = 1,
  Planar       = 2,
  Prismatic    = 3,
  Revolute     = 4,
  TTRSComplex  = 5,
  TTRSClassUnknown      = 6
};

#endif

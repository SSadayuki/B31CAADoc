// COPYRIGHT DASSAULT SYSTEMES  2000

#ifndef CATMmrTTRSClass_H
#define CATMmrTTRSClass_H

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Types of TTRS.
 * @param CATMmrSphericalTTRSClass
 * The spherical class.
 * @param CATMmrCylindricalTTRSClass
 * The cylindrical class.
 * @param CATMmrPlanarTTRSClass
 * The planar class.
 * @param CATMmrPrismaticTTRSClass
 * the prismatic class.
 * @param CATMmrRevoluteTTRSClass
 * The revolute class.
 * @param CATMmrComplexTTRSClass
 * The complex class.
 * @param CATMmrUnknownTTRSClass
 * The unknown class.
 */
enum CATMmrTTRSClass 
{
  CATMmrSphericalTTRSClass=0, 
  CATMmrCylindricalTTRSClass=1, 
  CATMmrPlanarTTRSClass=2, 
  CATMmrPrismaticTTRSClass=3, 
  CATMmrRevoluteTTRSClass=4, 
  CATMmrComplexTTRSClass=5, 
  CATMmrUnknownTTRSClass=6 
};

#endif

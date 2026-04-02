#ifndef CATTPSTypeWithoutDRF_H
#define CATTPSTypeWithoutDRF_H

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

/**
 * Enum to describe the kind of tolerance without Reference Frame.
 */

enum CATTPSTypeWithoutDRF
{
  CATTPSWithOutDRFTypeUnknown           = 0,
  CATTPSWithOutDRFTypeStraightness      = 1,
  CATTPSWithOutDRFTypeAxisStraightness  = 2,
  CATTPSWithOutDRFTypeFlatness          = 3,
  CATTPSWithOutDRFTypeCircularity       = 4,
  CATTPSWithOutDRFTypeCylindricity      = 5,
  CATTPSWithOutDRFTypeProfileOfALine    = 6,
  CATTPSWithOutDRFTypeProfileOfASurface = 7,
  CATTPSWithOutDRFTypePosition          = 8
};

#endif

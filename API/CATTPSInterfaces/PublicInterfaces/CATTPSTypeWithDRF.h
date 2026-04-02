#ifndef CATTPSTypeWithDRF_H
#define CATTPSTypeWithDRF_H

// COPYRIGHT DASSAULT SYSTEMES 2003

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

/**
 * Enum to describe the kind of tolerance without Reference Frame.
 */

enum CATTPSTypeWithDRF
{
  CATTPSWithDRFTypeUnknown           = 0,
  CATTPSWithDRFTypeAngularity        = 1,
  CATTPSWithDRFTypePerpendicularity  = 2,
  CATTPSWithDRFTypeParallelism       = 3,
  CATTPSWithDRFTypePosition          = 4,
  CATTPSWithDRFTypeConcentricity     = 5,
  CATTPSWithDRFTypeSymetry           = 6,
  CATTPSWithDRFTypeProfileOfALine    = 7,
  CATTPSWithDRFTypeProfileOfASurface = 8,
  CATTPSWithDRFTypeRunout            = 9
};

#endif

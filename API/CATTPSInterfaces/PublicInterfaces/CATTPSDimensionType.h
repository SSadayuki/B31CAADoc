#ifndef CATTPSDimensionType_H
#define CATTPSDimensionType_H

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

/**
 * Enum to describe the kind of dimension.
 */

enum CATTPSDimensionType
{  
  CATTPSUndefDimension            = 0,
  CATTPSLinearDimension           = 1,
  CATTPSAngularDimension          = 2,
  CATTPSSecondLinearDim           = 3, // Small diameter/radius for torus
  CATTPSChamferDimension          = 4,
  CATTPSOrientedLinearDimension   = 5,
  CATTPSOrientedAngularDimension  = 6
};

#endif

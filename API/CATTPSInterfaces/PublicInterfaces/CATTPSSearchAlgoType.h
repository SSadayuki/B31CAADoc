#ifndef CATTPSSearchAlgoType_H
#define CATTPSSearchAlgoType_H

// COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Enum which is used to defined the way to find faces on which a default
 * annotation (in automatic mode) applied to.
 */

enum CATTPSSearchAlgoType
{
  CATTPSSATUndefined               = -1,
  CATTPSSATAllFaces                =  0,
  CATTPSSATPlanarFaces             =  1,
  CATTPSSATCylindricalFaces        =  2,
  CATTPSSATSphericalFaces          =  3,
  CATTPSSATNonCanonicalFaces       =  4,
  CATTPSSATFilletsFaces            =  5,
  CATTPSSATSimpleHoleFaces         =  6,
  CATTPSSATSimpleThreadedHoleFaces =  7,
  CATTPSSATFilletsFacesOfRadius    =  8
};
#endif

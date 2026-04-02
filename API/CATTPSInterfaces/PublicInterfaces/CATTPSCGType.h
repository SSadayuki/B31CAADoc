#ifndef CATTPSCGType_H
#define CATTPSCGType_H

// COPYRIGHT DASSAULT SYSTEMES 2005

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

/**
 * Defines the differents construction types for constructed geometries.
 */
enum CATTPSCGType
{
  CATTPSConePoint           = 1,
  CATTPSIntersectingPoint   = 2,
  CATTPSCirclePoint         = 3,
  CATTPSSpherePoint         = 4,
  CATTPSTorusPoint          = 5,

  CATTPSCylindricalAxis     = 7,
  CATTPSConeAxis            = 8,
  CATTPSTorusAxis           = 9,
  CATTPSRevolutionAxis      = 10,
  CATTPSIntersectingAxis    = 11,

  CATTPSConePlane           = 13,
  CATTPSPassingPlane        = 14,
  CATTPSMedianPlane         = 15,
  CATTPSAnglePlane          = 16,
  CATTPSTorusPlane          = 17,

  CATTPSConeCircle          = 21,
  CATTPSIntersectingCircle  = 30,

  CATTPSCirclingCylinder    = 23,
  CATTPSRefCirclingCylinder = 24,

  CATTPSUndefined           = 100
};

#endif

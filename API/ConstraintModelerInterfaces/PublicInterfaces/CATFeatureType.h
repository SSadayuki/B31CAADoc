#ifndef CATFeatureType_h
#define CATFeatureType_h

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/** 
 * Geometrical elements for constraints.
 * <b>Role</b>: Geometrical elements used with mechanical constraints.
 * @see CATICst, CATICstData
 * @param CATMfPointType
 * Point.
 * @param CATMfLineType
 * Line.
 * @param CATMfCircleType
 * Circle.
 * @param CATMfPlaneType
 * Plane.
 * @param CATMfSphereType
 * Sphere.
 * @param CATMfCylinderType
 * Cylinder.
 * @param CATMfConeType
 * Cone.
 * @param CATMfExtrudedType
 * Extruded surface.
 * @param CATMfSurfaceType
 * Surface. 
 * @param CATMfAxisType
 * Three-axis system.
 * @param CATMf2DLineType
 * Line (in a sketch).
 * @param CATMf2DEllipseType
 * Ellipse (in a sketch).
 * @see CATICst, CATICstData
 */
enum CATFeatureType 
{  
  CATMfUnknownType = 0,

  CATMfPointType = 1,

  CATMfLineType = 21,
  CATMfCircleType = 22,

  CATMfPlaneType = 31,
  CATMfSphereType = 32,
  CATMfCylinderType = 33,
  CATMfConeType = 34,
  CATMfCurveType = 35,
  CATMfExtrudedType = 36,
  CATMfSurfaceType = 37,

  CATMfAxisType = 41,

  CATMf2DLineType = 212,
  CATMf2DEllipseType = 232
};

#endif

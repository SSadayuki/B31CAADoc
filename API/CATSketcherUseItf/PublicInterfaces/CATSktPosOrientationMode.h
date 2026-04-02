#ifndef CATSktPosOrientationMode_H
#define CATSktPosOrientationMode_H

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Orientation definition mode.
 * <b>Role</b>: Defines the absolute axis orientation definition mode (for positioned sketches only).
 * You can set the orientation definition mode thanks to 
 * the @href CATISketchPositioning#SetOrientationMode method.
 * <p>
 * @param CATSktOriImplicit
 *   This is the default.
 * @param CATSktOrtXAxis
 *   The oriented axis will be positioned at the projection of the X Axis.
 * @param CATSktOrtYAxis
 *   The oriented axis will be positioned at the projection of the Y Axis.
 * @param CATSktOrtZAxis
 *   The oriented axis will be positioned at the projection of the Z Axis.
 * @param CATSktOrtDirectionCoordinate
 *   The oriented axis will be defined by direction (vector) coordinates.
 * @param CATSktOrtThroughAPoint
 *   The oriented axis will be defined by the projection of a point.
 * @param CATSktOrtParallelToALine
 *   The oriented axis will be parallel to the projection of a line.
 * @param CATSktOrtParallelToIntersectionWithPlane
 *   The oriented axis will be parallel to the intersection of a plane.
 * @param CATSktOrtNormalToSurface
 *   The oriented axis will be normal to the surface.
 * @param CATSktOrtUndefined
 *   Do not used.
 * @param CATSktOrtPlaneRevolSkt
 *   Do not used.
 */

enum CATSktPosOrientationMode
{
  CATSktOrtUndefined = -1,
  CATSktOrtImplicit = 0,
  CATSktOrtXAxis = 1,
  CATSktOrtYAxis = 2,
  CATSktOrtZAxis = 3,
  CATSktOrtDirectionCoordinate = 4,
  CATSktOrtThroughAPoint= 5,
  CATSktOrtParallelToALine = 6,
  CATSktOrtParallelToIntersectionWithPlane = 7,
  CATSktOrtNormalToSurface = 8,
  CATSktOrtPlaneRevolSkt =9
};

#endif

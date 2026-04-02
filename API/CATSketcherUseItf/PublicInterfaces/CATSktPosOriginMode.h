#ifndef CATSktPosOriginMode_H
#define CATSktPosOriginMode_H

// COPYRIGHT DASSAULT SYSTEMES 2002
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Origin definition mode.
 * <b>Role</b>: Defines the sketch origin definition mode (for positioned sketches only).
 * You can set the orientation definition mode thanks to 
 * the @href CATISketchPositioning#SetOriginMode method.
 * <p>
 * @param CATSktOriImplicit
 *   The sketch origin will be positioned at the projection of the part origin if the support definition mode is CATSktSupOnePlane or
 *   at the intersection of the lines if the support definition mode is CATSktSupTwoLines. 
 *   This is the default.
 * @param CATSktOriPartOrigin
 *   The sketch origin will be positioned at the projection of the (0,0,0) of the coordinate system (part origin).
 * @param CATSktOriProjectionOfAPoint
 *   The sketch origin will be positioned at the projection of a point on the sketch support plane.
 * @param CATSktOriIntersectionOfTwoLines
 *   The sketch origin will be positioned at the intersection of two lines.
 * @param CATSktOriIntersectionCurveSupport
 *   The sketch origin will be positioned at the intersection of a curve and the sketch support plane.
 * @param CATSktOriMiddlePointOfTheCurve
 *   The sketch origin will be positioned at the middle point of a curve.
 * @param CATSktOriBarycenterOfTheFace
 *   The sketch origin will be positioned at the barycenter of a face.
 * @param CATSktOriUndefined
 *   Do not used.
 * @param CATSktOriPlaneOrPointRevolSkt
 *   Do not used.
 */

enum CATSktPosOriginMode
{
  CATSktOriUndefined = -1,
  CATSktOriImplicit = 0,
  CATSktOriPartOrigin = 1,
  CATSktOriProjectionOfAPoint = 2,
  CATSktOriIntersectionOfTwoLines = 3,
  CATSktOriIntersectionCurveSupport = 4,
  CATSktOriMiddlePointOfTheCurve = 5,
  CATSktOriBarycenterOfTheFace = 6,
  CATSktOriPlaneOrPointRevolSkt=7
};

#endif

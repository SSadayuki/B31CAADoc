#ifndef CATSktPosSupportMode_H
#define CATSktPosSupportMode_H

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Support definition mode.
 * <b>Role</b>: Defines the sketch support definition mode.
 * You can set the support definition mode thanks to the
 * @href CATISketchPositioning#SetSupportMode method.
 * <p>
 * @param CATSktSupOnePlane
 *   CATSktSupOnePlane lets you define a positioned sketch.
 *   The sketch support reference can be a wireframe plane, a face, a sketch, an axis system plane.
 * @param CATSktSupTwoIntersectedLines
 *   CATSktSupTwoLines lets you define a positioned sketch.
 *   The sketch support reference can be two lines or edges.
 * @param CATSktSupTwoLines
 *   Do not use.
 * @param CATSktSupSliding
 *   CATSktSupSliding lets you define a sliding sketch.
 *   The sketch support reference can only a plane.
 * @param CATSktSupIsolated
 *   CATSktSupIsolated lets you define an isolated sketch (without a support reference).
 * @param CATSktSupUndefined
 *   Do not used.
 * @param CATSktSupPositionedAsRef
 *   Do not used.
 * @param CATSktSupRevol
 *   Do not used.
 */

enum CATSktPosSupportMode
{
  CATSktSupUndefined           = -1,
  CATSktSupOnePlane            = 1,
  CATSktSupTwoIntersectedLines = 2,
  CATSktSupTwoLines            = 3,
  CATSktSupSliding             = 4,
  CATSktSupIsolated            = 5,
  CATSktSupPositionedAsRef     = 6,
  CATSktSupRevol               = 7
};

#endif

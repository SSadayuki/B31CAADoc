#ifndef CATSktPosDirection_H
#define CATSktPosDirection_H

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Direction definition of the sketch axis which is oriented.
 * <b>Role</b>: The orientation direction lets you specify whether 
 * the orientation references will be applied on axis H or V.
 * You can set the direction definition thanks to 
 * the @href CATISketchPositioning#SetOrientationDirection method.
 * <p>
 * @param CATSktDirHorizontal
 *   The oriented axis is  H axis.
 * @param CATSktDirVertical
 *   The oriented axis is V axis.
 * @param CATSktDirUndefined
 *   Do not used.
 */

enum CATSktPosDirection
{
  CATSktDirUndefined = -1,
  CATSktDirHorizontal = 1,
  CATSktDirVertical = 2
};

#endif

//===================================================================
// COPYRIGHT DASSAULT SYSTEMES 2007
//===================================================================
#ifndef CATDrwSystOffsetMode_H
#define CATDrwSystOffsetMode_H

/**
* @CAA2Level L1
* @CAA2Usage U1
*/

/**
 * Kind of offset to apply in order to line-up dimension lines.
 *   @param FreeOffsetSystem
 *    No line-up managment
 *   @param ConstantOffsetSystem
 *    Each dimension lines are equally distant
 *   @param SemiConstantOffsetSystem
 *    Each package of dimensions are lined-up with a constant offset (NOT IMPLEMENTED)
 */
enum CATDrwSystOffsetMode { FreeOffsetSystem = 0, ConstantOffsetSystem = 1, SemiConstantOffsetSystem = 2 };

# endif

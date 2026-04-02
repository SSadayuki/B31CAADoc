//===================================================================
// COPYRIGHT DASSAULT SYSTEMES 2007
//===================================================================
#ifndef CATDrwSystValueAlignment_H
#define CATDrwSystValueAlignment_H

/**
* @CAA2Level L1
* @CAA2Usage U1
*/

/**
 * Kind of alignment to apply in order to line-up dimension values.
 * <br><b>Precondition</b> Not available for cumulated systems with the value oriented along extension line.
 *   @param NotAligned
 *    No line-up management for dimension values
 *   @param AlignedOnCenter
 *    The value is on the middle of the dimension line
 *   @param OnRefLineSide
 *    The value is on the side of the reference extension line of the system.
 *    Only available for stacked and cumulated systems
 *   @param OppToRefLineSide
 *    The value is on the side of the opposite extension line.
 *    Only available for stacked and cumulated systems
 *   @param OnBaseValue
 *    The reference point of the value position corresponds to
 *    the value position of the base dimension (Not implemented for systems).
 *   @param Standard
 *    the value position is managed by standard parameters. (Only available for cumulated systems).
 */
enum CATDrwSystValueAlignment { NotAligned = 0, AlignedOnCenter = 1, OnRefLineSide = 2, OppToRefLineSide = 3, OnBaseValue = 4, Standard = 5 };

# endif

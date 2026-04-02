//===================================================================
// COPYRIGHT DASSAULT SYSTEMES 2003
//===================================================================
#ifndef CATDrwDimSystemType_H
#define CATDrwDimSystemType_H

/**
* @CAA2Level L1
* @CAA2Usage U1
*/

/**
 * Dimension System Type.
 *   @param BasicDimSystem
 *    "basic" system of dimensions : (NOT IMPLEMENTED)
 *   @param ChainedDimSystem
 *    The dimensions are displayed and handled in a chained mode
 *   @param StackedDimSystem
 *    The dimensions are displayed and handled in a stacked mode
 *   @param CumulatedDimSystem
 *    The dimensions are displayed and handled in a cumulated mode
 *   @param SymmetricDimSystem
 *    The dimensions are displayed and handled in a symmetric mode: (NOT IMPLEMENTED)
 */
enum CATDrwDimSystemType { BasicDimSystem, ChainedDimSystem, StackedDimSystem, CumulatedDimSystem, SymmetricDimSystem };

# endif

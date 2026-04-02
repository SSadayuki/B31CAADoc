// COPYRIGHT DASSAULT SYSTEMES 2003
#ifndef CATDrwAssDefs_H
#define CATDrwAssDefs_H
/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Associative Position behavior.
 *   @param Ass_Relative
 *    Relative mode.
 *   @param Ass_Absolute
 *    Absolute mode.
 */

enum CATAssPositioningBehavior { Ass_Relative = 0, 
                                 Ass_Absolute = 1 };

/**
 * Associative projection mode.
 *   @param Ass_Contour
 *    Text boundary box is taken into account for the associativity.
 *   @param Ass_Region
 *    Do not used: Internal value.
 *   @param Ass_HotPoints
 *    Do not used: Internal value.
 *   @param Ass_ExtensionLine
 *    Extension line is the sub part taken into account for associativity.
 *   @param Ass_DimensionLine
 *    Dimension line is the sub part taken into account for associativity.
 *   @param Ass_DimensionValue
 *    Dimension value is the sub part taken into account for associativity.
 *   @param Ass_OnDimensionLine
 *    Dimension line is the sub part taken into account for associativity.
 *   @param Ass_OnDimensionLineTwoPart
 *    Do not used: Internal value.
 *   @param Ass_AlignedOnDimensionLine
 *   Dimension line is the sub part taken into account for associativity.
 *   Alignment will be preserve when dimension line will be moved.
 *   @param Ass_AlongDirection
 *    Do not used: Internal value.
 */

enum CATAssProjectingMode { Ass_Contour = 0, 
                            Ass_Region = 1, 
                            Ass_HotPoints = 2, 
                            Ass_ExtensionLine = 3, 
                            Ass_DimensionLine = 4, 
                            Ass_DimensionValue = 5,
                            Ass_OnDimensionLine = 6,
                            Ass_OnDimensionLineTwoPart = 7, 
                            Ass_AlignedOnDimensionLine = 8,
                            Ass_AlongDirection = 9 };

#endif 



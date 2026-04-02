#ifndef CATDrwGDTDef_H_
#define CATDrwGDTDef_H_
// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */
#include "DraftingItfCPP.h"

/**
 * Tolerancing symbol type.
 * Symbols to use in a GDT.
 * @see CATIDrwGDT
 */
enum CATDrwGDTSymbol { DRW_GDT_NOSYMBOL , 
                       DRW_GDT_STRAIGHTNESS , 
                       DRW_GDT_FLATNESS ,					
                       DRW_GDT_CIRCULARITY ,					
                       DRW_GDT_CYLINDRICITY ,					
                       DRW_GDT_LINEPROFILE ,					
                       DRW_GDT_SURFACEPROFILE ,					
                       DRW_GDT_ANGULARITY ,					
                       DRW_GDT_PERPENDICULARITY ,					
                       DRW_GDT_PARALLELISM ,					
                       DRW_GDT_POSITION ,					
                       DRW_GDT_CONCENTRICITY ,					
                       DRW_GDT_SYMMETRY ,					
                       DRW_GDT_CIRCULARRUNOUT ,					
                       DRW_GDT_TOTALRUNOUT };					

/**
* Modification symbol type.
* Symbols to use in a modifier of a GDT.
* @see CATIDrwGDT
*/
enum CATDrwGDTModifier { DRW_GDT_NOMODIFIER , 
                         DRW_GDT_MAX , 
                         DRW_GDT_MIN ,					
                         DRW_GDT_PROJ ,					
                         DRW_GDT_FREE ,					
                         DRW_GDT_TFU ,					
                         DRW_GDT_TANGENT };					

/**
* Value type.
* Symbols to use in the tolerance box of a GDT.
* @see CATIDrwGDT
*/
enum CATDrwGDTValueType { DRW_GDT_NOVALUETYPE , 
                          DRW_GDT_DIAMETER ,					
                          DRW_GDT_RADIUS,					
                          DRW_GDT_SPHERICAL };					



/**
* Tolerance Value Restriction Specification.
* user can specify Restriction on ToleranceValue
* @see CATIDrwGDT
*/
enum CATDrwGDTTolValueRestrict { DRW_GDT_NORESTRICTION , 
                                 DRW_GDT_UNITOFLENGTH ,					
                                 DRW_GDT_UNITOFSURFACE};					

#endif









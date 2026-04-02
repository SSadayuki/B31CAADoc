/* -*-c++-*- */
#ifndef CATGSMShapeFeatureDef_H_ 
#define CATGSMShapeFeatureDef_H_ 

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Types for feature boolean operation related to PartDesign Product. 
 * <b>Role</b>:  Used for loft and blend creation and modifications
 * Notes: <br>
 *   Enumerations used as parameters in interfaces of manipulation of a lofted surface and blend surface. <br>
 *   This lofted surface is a Loft feature created by the CATIGSMFactory. <br>
 *   This blend surface is a Blend feature created by the CATIGSMFactory. <br>
 * @param CATGSMShapeFeatureBooleanNone
 *    no boolean operation 
 * @param CATGSMShapeFeatureBooleanUnion
 *    union  boolean operation 
 * @param CATGSMShapeFeatureBooleanRemoval
 *    removal boolean operation 
 * 
 * @see CATIGSMLoft, CATIGSMBlend, CATIGSMFactory 
 */
enum CATGSMShapeFeatureBooleanOp { CATGSMShapeFeatureBooleanNone = 1
                         , CATGSMShapeFeatureBooleanUnion
                         , CATGSMShapeFeatureBooleanRemoval};

#endif

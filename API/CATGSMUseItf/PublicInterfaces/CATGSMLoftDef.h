/* -*-c++-*- */
#ifndef CATGSMLoftDef_H_ 
#define CATGSMLoftDef_H_ 

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Types for adding setions and guides to a loft surface. 
 * <b>Role</b>:  Used for loft creation and modifications
 * Notes: <br>
 *   Enumerations used as parameters in interfaces of manipulation of a lofted surface. <br>
 *   This lofted surface is a Loft feature created by the CATIGSMFactory. <br>
 * @param CATGSMLoftAdd 
 *       add  
 * @param CATGSMLoftAddAfter
 *       add after 
 * @param CATGSMLoftAddBefore
 *       add before 
 *   
 * @see CATIGSMLoft, CATIGSMFactory 
 */

enum CATGSMLoftAddType { CATGSMLoftAdd = 1
                      ,  CATGSMLoftAddAfter  
                      ,  CATGSMLoftAddBefore};
   
/**
 * Types for loft spine definition. 
 * <b>Role</b>:  Used for loft creation and modifications
 * Notes: <br>
 *   Enumerations used as parameters in interfaces of manipulation of a lofted surface. <br>
 *   This lofted surface is a Loft feature created by the CATIGSMFactory. <br>
 * @param CATGSMLoftUserSpine
 *     user spine  
 * @param CATGSMLoftCalculatedSpine
 *     automatic spine computation 
 *
 * @see CATIGSMLoft, CATIGSMFactory 
 */
enum CATGSMLoftSpineType { CATGSMLoftUserSpine = 1
                         , CATGSMLoftCalculatedSpine};

/**
 * Types for loft boolean operation related to PartDesign Product. 
 * <b>Role</b>:  Used for loft creation and modifications
 * Notes: <br>
 *   Enumerations used as parameters in interfaces of manipulation of a lofted surface. <br>
 *   This lofted surface is a Loft feature created by the CATIGSMFactory. <br>
 * @param CATGSMLoftBooleanNone
 *    no boolean operation 
 * @param CATGSMLoftBooleanUnion
 *    union  boolean operation 
 * @param CATGSMLoftBooleanRemoval
 *    removal boolean operation 
 * 
 * @see CATIGSMLoft, CATIGSMFactory 
 */
enum CATGSMLoftBooleanOp { CATGSMLoftBooleanNone = 1
                         , CATGSMLoftBooleanUnion
                         , CATGSMLoftBooleanRemoval};

/**
 * Types for loft relimitation definition. 
 * <b>Role</b>:  Used for loft creation and modifications
 * Notes: <br>
 *   Enumerations used as parameters in interfaces of manipulation of a lofted surface. <br>
 *   This lofted surface is a Loft feature created by the CATIGSMFactory. <br>
 * @param CATGSMLoftRelimitOnLimitSections
 *     the loft will be swept along the spine, then relimited by the start section and the end section.  
 * @param CATGSMLoftNoRelimit
 *     the loft will be swept along the spine.
 *     - if the spine is a user spine, then the loft is limited by the spine extremities.
 *     - if the spine is a computed spine, then the loft is limited :
 *          - by the start section and the end section, if there is no guide.
 *          - by the guides extremities, if there are guides.
 * @param CATGSMLoftRelimitOnStartSectionOnly
 *     the loft will be swept along the spine, then relimited by the start section,  
 *     - if the spine is a user spine, then the loft is limited by the spine extremity opposite to the start section.
 *     - if the spine is a computed spine, then the loft is limited :
 *          - by the end section, if there is no guide.
 *          - by the guides extremities opposite to the start section, if there are guides.
 * @param CATGSMLoftRelimitOnEndSectionOnly
 *     the loft will be swept along the spine, then relimited by the end section,  
 *     - if the spine is a user spine, then the loft is limited by the spine extremity opposite to the end section.
 *     - if the spine is a computed spine, then the loft is limited :
 *          - by the start section, if there is no guide.
 *          - by the guides extremities opposite to the end section, if there are guides.
 * @see CATIGSMLoft, CATIGSMFactory 
 */
enum CATGSMLoftRelimitationType {CATGSMLoftRelimitOnLimitSections= 1
                                 , CATGSMLoftNoRelimit
                                 , CATGSMLoftRelimitOnStartSectionOnly
                                 , CATGSMLoftRelimitOnEndSectionOnly
                                 };

#endif

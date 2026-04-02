/* -*-c++-*- */
#ifndef CATGSMCornerDef_H_ 
#define CATGSMCornerDef_H_ 


// COPYRIGHT DASSAULT SYSTEMES 2002

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Types for Corner.
 * @param CATGSMCornerOnSupport
 *        corner on support.
 * @param CATGSM3DCorner
 *        3D corner.
 *
 * @see CATIGSMCorner
 */ 

enum CATGSMCornerType {CATGSMCornerOnSupport = 0,
                       CATGSM3DCorner = 1};
/**
 * Corner Trimming Mode.
 * @param CATGSMCornerNoTrim
 *        corner without trim.
 * @param CATGSMCornerFullTrim
 *        corner with trim of Element 1 and Element 2.
 * @param CATGSMCornerTrimElement1
 *        corner with trim of Element 1.
 * @param CATGSMCornerTrimElement2
 *        corner with trim of Element 2.
 *
 * @see CATIGSMCorner
 */ 
enum CATGSMCornerTrimMode {CATGSMCornerNoTrim = 0,
				CATGSMCornerFullTrim = 1,
				CATGSMCornerTrimElement1 = 2,
				CATGSMCornerTrimElement2 = 3};

#endif

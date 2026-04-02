#ifndef CATGSMTransfoModeDef_H_
#define CATGSMTransfoModeDef_H_

// COPYRIGHT DASSAULT SYSTEMES 2002
/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Types of action for fransformation.
 * <b>Role</b>: Defines the different modes suppported by transformations.
 * @param CATGSMTransfoModeUnset
 *          Default behavior: creation mode by default for all features, modification mode for axis system 
 * @param CATGSMTransfoModeCreation
 *          Creation mode 
 * @param CATGSMTransfoModeModification
 *          Modification mode
 */

enum CATGSMTransfoMode			{	 CATGSMTransfoModeUnset     = 0 ,
                                     CATGSMTransfoModeCreation  = 1 ,
                                     CATGSMTransfoModeModification = 2
                                 };

#endif

/* -*-c++-*- */
#ifndef CATGSMHealingModeDef_H_ 
#define CATGSMHealingModeDef_H_ 


// COPYRIGHT DASSAULT SYSTEMES 2000

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Types for healing modes.
 * @param CATGSMHealFrozen
 *        frozen mode for planar and canonic elements.
 * @param CATGSMHealFree
 *        free mode for planar and canonic elements.
 * @param CATGSMHealPlanFrozen
 *        frozen mode for planar elements only.
 * @param CATGSMHealPlanFree
 *        free mode for planar elements only.
 * @param CATGSMHealCanonicFrozen
 *        frozen mode for canonic elements only.
 * @param CATGSMHealCanonicFree
 *        free mode for canonic elements only.
 * @param CATGSMHealStandard
 *        basic computation mode.
 * @param CATGSMHealRigorous
 *        advanced computation mode to keep existing continuity.
 *
 * @see CATIGSMFactory#CreateHealing
 */ 

enum CATGSMHealingMode {CATGSMHealFrozen = 0,
                        CATGSMHealFree = 1,
                        CATGSMHealPlanFrozen = 10,
                        CATGSMHealPlanFree = 11,
                        CATGSMHealCanonicFrozen = 20,
                        CATGSMHealCanonicFree = 21,
                        CATGSMHealStandard = 100,
                        CATGSMHealRigorous = 101};

#endif

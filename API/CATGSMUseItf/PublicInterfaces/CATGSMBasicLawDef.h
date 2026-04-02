/* -*-c++-*- */
#ifndef CATGSMBasicLawDef_H_
#define CATGSMBasicLawDef_H_


// COPYRIGHT DASSAULT SYSTEMES 2000


/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Types for basic law definition.
 * @param CATGSMBasicLawType_None
 *     Undefined law type
 * @param CATGSMBasicLawType_Constant
 *     Constant law type
 * @param CATGSMBasicLawType_Linear
 *     Linear law type
 * @param CATGSMBasicLawType_SType
 *     S law type
 * @param CATGSMBasicLawType_Advanced
 *     Law specified by a GSD law feature
 * @param CATGSMBasicLawType_Implicit
 *     Law specified by a set of points and parameters
 * @see CATIGSMSweepUnspec, CATIGSMCurvePar, CATIGSMIntegratedLaw
 */
enum CATGSMBasicLawType { CATGSMBasicLawType_None     = 0,
                          CATGSMBasicLawType_Constant = 1,
                          CATGSMBasicLawType_Linear   = 2,
                          CATGSMBasicLawType_SType    = 3,
                          CATGSMBasicLawType_Advanced = 4,
                          CATGSMBasicLawType_Implicit = 5 };
/**
 * Mode of interpolation for implicit law.
 * @param CATGSMImplicitLawInterpo_None
 *     Undefined interpolation mode
 * @param CATGSMImplicitLawInterpo_Linear
 *     Linear interpolation mode
 * @param CATGSMImplicitLawInterpo_Cubic
 *     cubic interpolation mode
 * @see CATIGSMIntegratedLaw
 */
enum CATGSMImplicitLawInterpolationMode { CATGSMImplicitLawInterpo_None   = 0,
                                          CATGSMImplicitLawInterpo_Linear = 1,
                                          CATGSMImplicitLawInterpo_Cubic  = 2 };

#endif

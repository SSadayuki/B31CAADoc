#ifndef CATTPSISO1101CapitalizedSymb_H
#define CATTPSISO1101CapitalizedSymb_H

// COPYRIGHT Dassault Systemes 2018

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * List of values to read/set specification elements for form association as per ISO 1101 Standard.
 * @param CATTPS1101NotApplicable
 *   Value reporting erroneous usage or ISO 1101 Standard not supported.
 * @param CATTPS1101None
 *   Value reporting unmatching usage of ISO 1101 Standard; most of the time appears when
 *   switching from ASME to ISO.
 * @param CATTPS1101_P
 *   P symbol when translated into string.
 *<br />   Characteristic parameter: Reference to peak.
 * @param CATTPS1101_V
 *   V symbol when translated into string.
 *<br />   Characteristic parameter: Reference to valley.
 * @param CATTPS1101_T
 *   T symbol when translated into string.
 *<br />   Characteristic parameter: Peak to valley.
 * @param CATTPS1101_Q
 *   Q symbol when translated into string.
 *<br />   Characteristic parameter: Root mean square (RMS).
 * @param CATTPS1101ATFS_C
 *   (C) symbol when translated into string.
 *<br />   Toleranced feature association symbol: Minimax feature.
 * @param CATTPS1101ATFS_G
 *   (G) symbol when translated into string.
 *<br />   Toleranced feature association symbol: Least squares feature.
 * @param CATTPS1101ATFS_N
 *   (N) symbol when translated into string.
 *<br />   Toleranced feature association symbol: Minimum circumscribed feature.
 * @param CATTPS1101ATFS_T
 *   (T) symbol when translated into string.
 *<br />   Toleranced feature association symbol: Tangent feature.
 * @param CATTPS1101ATFS_X
 *   (X) symbol when translated into string.
 *<br />   Toleranced feature association symbol: Maximum inscribed feature.
 * @param CATTPS1101_C
 *   C symbol when translated into string.
 *<br />   The reference feature association criterion for form specifications is the minimax (Chebyshev) 
 *   without constraints; it can be set as default on the Annotation Set.
 *<br />   The default parameter that applies is the total range of deviations (i.e. the distance from
 *   the lowest valley  of the toleranced feature to the reference feature, plus the distance from the
 *   highest peak of the toleranced feature to the reference feature). 
 * @param CATTPS1101_C_T
 *   CT symbol when translated into string.
 *<br />   The reference feature default association criterion for form specifications is the minimax
 *   (Chebyshev) without constraints; Only available for local definition onto geometrical element.
 *<br />   Formal parameter that applies is Peak to valley. 
 * @param CATTPS1101_C_V
 *   CV symbol when translated into string.
 *<br />   The reference feature default association criterion for form specifications is the minimax
 *   (Chebyshev) without constraints; it can be set as default on the Annotation Set. 
 *<br />   The default parameter that applies is the valley depth (i.e. the distance from the lowest
 *   valley of the toleranced feature to the reference feature).
 * @param CATTPS1101_C_P
 *   CP symbol when translated into string.
 *<br />   The reference feature default association criterion for form specifications is the minimax
 *   (Chebyshev) without constraints; it can be set as default on the Annotation Set.
 *<br />   The default parameter that applies is the peak height (i.e. the distance from the highest
 *   peak of the toleranced feature to the reference feature).
 * @param CATTPS1101_C_Q
 *   CQ symbol when translated into string.
 *<br />   The reference feature default association criterion for form specifications is the minimax
 *   (Chebyshev) without constraints; it can be set as default on the Annotation Set. 
 *<br />   The default parameter that applies is the square root of the sum of the squares of the
 *   residuals or standard deviation of the toleranced feature relative to the reference feature. 
 * @param CATTPS1101_CE
 *   CE symbol when translated into string.
 *<br />   The reference feature default association criterion for form specifications is the minimax
 *   (Chebyshev) with the constraint external to the material; it can be set as default on the Annotation Set. 
 *<br />   The default parameter that applies is the total range of deviations (i.e. the distance from
 *   the lowest valley  of the toleranced feature to the reference feature, plus the distance from
 *   the highest peak of the toleranced feature to the reference feature). 
 * @param CATTPS1101_CE_T
 *   CE T symbol when translated into string.
 *<br />   The reference feature default association criterion for form specifications is the minimax
 *   (Chebyshev) with the constraint external to the material. Only available for local definition onto
 *   geometrical element. 
 *<br />   Formal parameter that applies is Peak to valley. 
 * @param CATTPS1101_CE_Q
 *   CE Q symbol when translated into string.
 *<br />   The reference feature default association criterion for form specifications is the minimax
 *   (Chebyshev) with the constraint external to the material; it can be set as default on the Annotation Set. 
 *<br />   The default parameter that applies is the square root of the sum of the squares of the
 *   residuals or standard deviation of the toleranced feature relative to the reference feature. 
 * @param CATTPS1101_CI
 *   CI symbol when translated into string.
 *<br />   The reference feature default association criterion for form specifications is the minimax
 *   (Chebyshev) with the constraint internal to the material; it can be set as default on the Annotation Set.  
 *<br />   The default parameter that applies is the total range of deviations (i.e. the distance from
 *   the lowest valley of the toleranced feature to the reference feature plus, the distance from
 *   the highest peak of the toleranced feature to the reference feature). 
 * @param CATTPS1101_CI_T
 *   CI T symbol when translated into string.
 *<br />   The reference feature default association criterion for form specifications is the minimax
 *   (Chebyshev) with the constraint internal to the material. Only available for local definition onto
 *   geometrical element. 
 *<br />   Formal parameter that applies is Peak to valley. 
 * @param CATTPS1101_CI_Q
 *   CI Q symbol when translated into string.
 *<br />   The reference feature default association criterion for form specifications is the minimax
 *   (Chebyshev) with the constraint internal to the material; it can be set as default on the Annotation Set.  
 *<br />   The default parameter that applies is the square root of the sum of the squares of the
 *   residuals or standard deviation of the toleranced feature relative to the reference feature.
 * @param CATTPS1101_G
 *   G symbol when translated into string.
 *<br />   The reference feature default association criterion for form specifications is the least
 *   squares (Gaussian) without constraint; it can be set as default on the Annotation Set. 
 *<br />   The default parameter that applies is the total range of deviations (i.e. the distance from
 *   the lowest valley  of the toleranced feature to the reference feature, plus the distance from
 *   the highest peak of the toleranced feature to the reference feature). 
 * @param CATTPS1101_G_T
 *   G T symbol when translated into string.
 *<br />   The reference feature default association criterion for form specifications is the least
 *   squares (Gaussian) without constraint. Only available for local definition onto geometrical element.
 *<br />   Formal parameter that applies is Peak to valley. 
 * @param CATTPS1101_G_V
 *   G V symbol when translated into string.
 *<br />   The reference feature default association criterion for form specifications is the least
 *   squares (Gaussian) without constraint; it can be set as default on the Annotation Set. 
 *<br />   The default parameter that applies is the valley depth (i.e. the distance from the lowest
 *   valley of the toleranced feature to the reference feature).
 * @param CATTPS1101_G_P
 *   G P symbol when translated into string.
 *<br />   The reference feature default association criterion for form specifications is the least
 *   squares (Gaussian) without constraint; it can be set as default on the Annotation Set. 
 *<br />   The default parameter that applies is the peak height (i.e. the distance from the highest
 *   peak of the toleranced feature to the reference feature). 
 * @param CATTPS1101_G_Q
 *   G Q symbol when translated into string.
 *<br />   The reference feature default association criterion for form specifications is the least
 *   squares (Gaussian) without constraint; it can be set as default on the Annotation Set. 
 *<br />   The default parameter that applies is the square root of the sum of the squares of the
 *   residuals or standard deviation of the toleranced feature relative to the reference feature.
 * @param CATTPS1101_GE
 *   GE symbol when translated into string.
 *<br />   The reference feature default association criterion for form specifications is the least
 *  squares (Gaussian) with the constraint external to the material; it can be set as default on the
 *  Annotation Set. 
 *<br />   The default parameter that applies is the total range of deviations (i.e. the distance from
 *  the lowest valley  of the toleranced feature to the reference feature, plus the distance from the
 *  highest peak of the toleranced feature to the reference feature).
 * @param CATTPS1101_GE_T
 *   GE T symbol when translated into string.
 *<br />   The reference feature default association criterion for form specifications is the least
 *  squares (Gaussian) with the constraint external to the material. Only available for local definition
 *  onto geometrical element.
 *<br />   Formal parameter that applies is Peak to valley. 
 * @param CATTPS1101_GE_Q
 *   GE Q symbol when translated into string.
 *<br />   The reference feature default association criterion for form specifications is the least
 *  squares (Gaussian) with the constraint external to the material; it can be set as default on the
 *  Annotation Set. 
 *<br />   The default parameter that applies is the square root of the sum of the squares of the
 *  residuals or standard deviation of the toleranced feature relative to the reference feature.
 * @param CATTPS1101_GI
 *   GI symbol when translated into string.
 *<br />   The reference feature default association criterion for form specifications is the least
 *  squares (Gaussian) with the constraint internal to the material; it can be set as default on the 
 *  Annotation Set. 
 *<br />   The default parameter that applies is the total range of deviations (i.e. the distance
 *  from the lowest valley  of the toleranced feature to the reference feature, plus the distance from
 *  the highest peak of the toleranced feature to the reference feature). 
 * @param CATTPS1101_GI_T
 *   GI T symbol when translated into string.
 *<br />   The reference feature default association criterion for form specifications is the least
 *  squares (Gaussian) with the constraint internal to the material. Only available for local definition
 *  onto geometrical element.
 *<br />   Formal parameter that applies is Peak to valley. 
 * @param CATTPS1101_GI_Q
 *   GI Q symbol when translated into string.
 *<br />   The reference feature default association criterion for form specifications is the least
 *  squares (Gaussian) with the constraint internal to the material; it can be set as default on the 
 *  Annotation Set. 
 *<br />   The default parameter that applies is the square root of the sum of the squares of the
 *   residuals or standard deviation of the toleranced feature relative to the reference feature. 
 * @param CATTPS1101_X
 *   X symbol when translated into string.
 *<br />   The reference feature default association criterion for form specifications is Maximum
 *   inscribed feature. Only available for local definition onto geometrical element.
 *<br />   The default parameter that applies is the total range of deviations (i.e. the distance from
 *  the lowest valley of the toleranced feature to the reference feature, plus the distance from the
 *  highest peak of the toleranced feature to the reference feature).
 * @param CATTPS1101_X_T
 *   X T symbol when translated into string.
 *<br />   The reference feature default association criterion for form specifications is Maximum
 *   inscribed feature. Only available for local definition onto geometrical element.
 *<br />   Formal parameter that applies is Peak to valley. 
 * @param CATTPS1101_X_Q
 *   X Q symbol when translated into string.
 *<br />   The reference feature default association criterion for form specifications is Maximum
 *  inscribed feature. Only available for local definition onto geometrical element.
 *<br />   The default parameter that applies is the square root of the sum of the squares of the
 *  residuals or standard deviation of the toleranced feature relative to the reference feature. 
 * @param CATTPS1101_N
 *   N symbol when translated into string.
 *<br />   The reference feature default association criterion for form specifications is Minimum
 *  circumscribed feature. Only available for local definition onto geometrical element.
 *<br />   The default parameter that applies is the total range of deviations (i.e. the distance from
 *  the lowest valley of the toleranced feature to the reference feature, plus the distance from the
 *  highest peak of the toleranced feature to the reference feature).
 * @param CATTPS1101_N_T
 *   N T symbol when translated into string.
 *<br />   The reference feature default association criterion for form specifications is Minimum
 *  circumscribed feature. Only available for local definition onto geometrical element.
 *<br />   Formal parameter that applies is Peak to valley. 
 * @param CATTPS1101_N_Q
 *   N Q symbol when translated into string.
 *<br />   The reference feature default association criterion for form specifications is Minimum
 *  circumscribed feature. Only available for local definition onto geometrical element.
 *<br />   The default parameter that applies is the square root of the sum of the squares of the
 *  residuals or standard deviation of the toleranced feature relative to the reference feature. 
 */
enum CATTPSISO1101CapitalizedSymb 
{
  CATTPS1101NotApplicable = -1,
  CATTPS1101None          = 0,
  CATTPS1101_P            = 1,        // Characteristic parameter
  CATTPS1101_V            = 2,        // Characteristic parameter
  CATTPS1101_T            = 3,        // Characteristic parameter
  CATTPS1101_Q            = 4,        // Characteristic parameter
  CATTPS1101ATFS_C        = 10,       // Toleranced feature: Association symbol
  CATTPS1101ATFS_G        = 11,       // Toleranced feature: Association symbol
  CATTPS1101ATFS_N        = 12,       // Toleranced feature: Association symbol
  CATTPS1101ATFS_T        = 13,       // Toleranced feature: Association symbol
  CATTPS1101ATFS_X        = 14,       // Toleranced feature: Association symbol
  CATTPS1101_C            = 20,       // Characteristic: Assoc Symbol + Parameter (valid for default setting)
  CATTPS1101_C_T          = 21,       // Characteristic: Assoc Symbol + Parameter (for local overloading only)
  CATTPS1101_C_V          = 22,       // Characteristic: Assoc Symbol + Parameter (valid for default setting)
  CATTPS1101_C_P          = 23,       // Characteristic: Assoc Symbol + Parameter (valid for default setting)
  CATTPS1101_C_Q          = 24,       // Characteristic: Assoc Symbol + Parameter (valid for default setting)
  CATTPS1101_CE           = 30,       // Characteristic: Assoc Symbol + Parameter (valid for default setting)
  CATTPS1101_CE_T         = 31,       // Characteristic: Assoc Symbol + Parameter (for local overloading only)
  CATTPS1101_CE_Q         = 34,       // Characteristic: Assoc Symbol + Parameter (valid for default setting)
  CATTPS1101_CI           = 40,       // Characteristic: Assoc Symbol + Parameter (valid for default setting)
  CATTPS1101_CI_T         = 41,       // Characteristic: Assoc Symbol + Parameter (for local overloading only)
  CATTPS1101_CI_Q         = 44,       // Characteristic: Assoc Symbol + Parameter (valid for default setting)
  CATTPS1101_G            = 50,       // Characteristic: Assoc Symbol + Parameter (valid for default setting)
  CATTPS1101_G_T          = 51,       // Characteristic: Assoc Symbol + Parameter (for local overloading only)
  CATTPS1101_G_V          = 52,       // Characteristic: Assoc Symbol + Parameter (valid for default setting)
  CATTPS1101_G_P          = 53,       // Characteristic: Assoc Symbol + Parameter (valid for default setting)
  CATTPS1101_G_Q          = 54,       // Characteristic: Assoc Symbol + Parameter (valid for default setting)
  CATTPS1101_GE           = 60,       // Characteristic: Assoc Symbol + Parameter (valid for default setting)
  CATTPS1101_GE_T         = 61,       // Characteristic: Assoc Symbol + Parameter (for local overloading only)
  CATTPS1101_GE_Q         = 64,       // Characteristic: Assoc Symbol + Parameter (valid for default setting)
  CATTPS1101_GI           = 70,       // Characteristic: Assoc Symbol + Parameter (valid for default setting)
  CATTPS1101_GI_T         = 71,       // Characteristic: Assoc Symbol + Parameter (for local overloading only)
  CATTPS1101_GI_Q         = 74,       // Characteristic: Assoc Symbol + Parameter (valid for default setting)
  CATTPS1101_X            = 80,       // Characteristic: Assoc Symbol + Parameter (Sphere and Cylinder only)
  CATTPS1101_X_T          = 81,       // Characteristic: Assoc Symbol + Parameter (Sphere and Cylinder only)
  CATTPS1101_X_Q          = 84,       // Characteristic: Assoc Symbol + Parameter (Sphere and Cylinder only)
  CATTPS1101_N            = 90,       // Characteristic: Assoc Symbol + Parameter (Sphere and Cylinder only)
  CATTPS1101_N_T          = 91,       // Characteristic: Assoc Symbol + Parameter (Sphere and Cylinder only)
  CATTPS1101_N_Q          = 94        // Characteristic: Assoc Symbol + Parameter (Sphere and Cylinder only)
};

#endif

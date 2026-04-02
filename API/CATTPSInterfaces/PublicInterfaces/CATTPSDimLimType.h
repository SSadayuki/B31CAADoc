#ifndef CATTPSDimLimType_H
#define CATTPSDimLimType_H

// COPYRIGHT DASSAULT SYSTEMES 2003 - 2018

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Describes dimension limit type.
 * @param CATTPSDLNotDefined  
 *   to be used for initialisation purpose; when returned, such a value
 *   can possibly indicate an erroneous situation.
 * @param CATTPSDLNumerical  
 *   to state Upper (Max) and lower (Min) deviation limits.
 * @param CATTPSDLTabulated  
 *   to state ISO 286-1 or ASME B4.2 tolerance class according to the
 *   applied Standard.
 * @param CATTPSDLSingleLimit  
 *   to state Unilateral limit.
 * @param CATTPSDLThreadValue  
 *   to state Thread specific tolerance class.
 * @param CATTPSDLTolGenValue  
 *   to state General tolerances.
 * @param CATTPSDLInformation  
 *   to state Auxiliary dimension or Reference dimension (no tolerances).
 * @param CATTPSDLSRorSQUpperLimit  
 *   to state Range of sizes (SR) or Standard deviation of sizes (SQ).
 */
enum CATTPSDimLimType
{
  CATTPSDLNotDefined       = 0,
  CATTPSDLNumerical        = 1,
  CATTPSDLTabulated        = 2,
  CATTPSDLSingleLimit      = 3,
  CATTPSDLThreadValue      = 4,
  CATTPSDLTolGenValue      = 5,
  CATTPSDLInformation      = 6,
  CATTPSDLSRorSQUpperLimit = 7
};
#endif

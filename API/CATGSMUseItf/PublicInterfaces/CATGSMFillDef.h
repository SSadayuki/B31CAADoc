#ifndef CATGSMFillDef_H
#define CATGSMFillDef_H

// COPYRIGHT DASSAULT SYSTEMES 2015

/**
  * @CAA2Level L1
  * @CAA2Usage U1
  */

/**
 * Tolerant modes defined in Fill feature.
 * @param CATGSMFillTolerantMode_Unknown
 *        Unknown tolerant mode.
 * @param CATGSMFillTolerantMode_None
 *        None tolerant mode. Error thrown if maximum deviation exceeds CATIA resolution.
 * @param CATGSMFillTolerantMode_Automatic
 *        Automatic tolerant mode. Error thrown if maximum deviation exceeds 100 times CATIA resolution.
 * @param CATGSMFillTolerantMode_Manual
 *        Manual tolerant mode. Error thrown if maximum deviation exceeds input user deviation.
 *
 * @see CATIGSMFill
 */
enum CATGSMFillTolerantMode {CATGSMFillTolerantMode_Unknown = 0,
								   CATGSMFillTolerantMode_None = 1,
								   CATGSMFillTolerantMode_Automatic = 2,
								   CATGSMFillTolerantMode_Manual = 3};
#endif

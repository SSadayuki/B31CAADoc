#ifndef CATTPSControledRadius_H
#define CATTPSControledRadius_H

// COPYRIGHT DASSAULT SYSTEMES 2018

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Controled Radius modifier values (ASME norm only).
 * @param CATTPSCRUnsupported  
 *   Controlled Radius not applicable.
 * @param CATTPSCRNoModifier
 *   Controlled Radius modifier not applied.
 * @param CATTPSCRControledRadius
 *   Controlled Radius modifier applied.
 */
enum CATTPSControledRadius
{
  CATTPSCRUnsupported = -1,
  CATTPSCRNoModifier = 0,
  CATTPSCRControledRadius = 1
};

#endif

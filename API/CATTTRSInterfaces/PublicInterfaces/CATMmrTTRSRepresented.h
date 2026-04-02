// COPYRIGHT DASSAULT SYSTEMES 2001

#ifndef CATMmrTTRSRepresented_H
#define CATMmrTTRSRepresented_H

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Nature of the link beetwen a TTRS and it's represented TTRS.
 * @param CATMmrTTRSRepresentedUndefined
 *   Value to be used for initialisation.
 * @param CATMmrTTRSRepresentedDrived
 *   The represented TTRS is drived by the geometry of the current TTRS.
 *   Geometry of the represented TTRS have no influence on the TTRS Status.
 * @param CATMmrTTRSRepresentedDriving
 *   The represented TTRS drives the geometry of the current TTRS.
 *   The status of the TTRS can be invalidated when geometry of the represented TTRS change.
 */
enum CATMmrTTRSRepresented
{
  CATMmrTTRSRepresentedUndefined = -1,
  CATMmrTTRSRepresentedDrived = 0,
  CATMmrTTRSRepresentedDriving = 1
};

#endif

#ifndef CATTPSStatus_H
#define CATTPSStatus_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Describes list of the possible status for a TPS.
 */

enum CATTPSStatus
{
  CATTPSStatusUnknown = 0,
  CATTPSStatusOK = 1,
  CATTPSStatusTTRSKO = 2,
  CATTPSStatusTTRSUnknown = 3,
  CATTPSStatusSemanticKO = 4,
  CATTPSStatusSemanticUnknown = 5,
  CATTPSStatusLeaderKO = 6,
  CATTPSStatusAnnotationPlaneKO = 7,
  CATTPSStatusSketchKO = 8,
  CATTPSStatusDraftingKO = 9,
  CATTPSStatusRestrictedAreaKO = 10,
  CATTPSStatusGeomTolDisplay = 11,
  CATTPSStatusKO = 100,

  CATTPSStatusStandardSwAsmeToIsoKO = ( 1 << 12 ),
  CATTPSStatusStandardSwIsoToAsmeKO = ( 1 << 13 )
};

#endif

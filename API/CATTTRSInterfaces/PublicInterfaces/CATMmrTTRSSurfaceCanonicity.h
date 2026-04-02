#ifndef CATMmrTTRSSurfaceCanonicity_H
#define CATMmrTTRSSurfaceCanonicity_H

// COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

/**
 * Typedef to describe the kind of surface canonicity for TTRS.
 */

enum CATMmrTTRSSurfaceCanonicity
{
  CATMmrTTRSCanonicityUnknown          =  0,
  CATMmrTTRSCanonicityUndefined        =  1,
  CATMmrTTRSCanonicitySphere           =  2,
  CATMmrTTRSCanonicityCircle           =  3,
  CATMmrTTRSCanonicityTorus            =  4,
  CATMmrTTRSCanonicityCone             =  5,
  CATMmrTTRSCanonicityRevolute         =  6,
  CATMmrTTRSCanonicityPlane            =  7,
  CATMmrTTRSCanonicityCylPinHole       =  8,
  CATMmrTTRSCanonicityNotCylPinHole    =  9,
  CATMmrTTRSCanonicityTabSlot          = 10,
  CATMmrTTRSCanonicityAngularTabSlot   = 11,
  CATMmrTTRSCanonicityThread           = 12,
  CATMmrTTRSCanonicityOther            = 13,

  CATMmrTTRSCanonicityCylTabSlot       = 14,
  CATMmrTTRSCanonicityElongPinHole     = 15,
  CATMmrTTRSCanonicityRectPinHole      = 16,
  CATMmrTTRSCanonicityRectRoundPinHole = 17,

  CATMmrTTRSCanonicityFillet           = 18,

  
  CATMmrTTRSCanonicityPoint           =  19,  
  CATMmrTTRSCanonicityLine            =  20,
  CATMmrTTRSCanonicityCircularSweep   =  21
};

#define CATMmrTTRSCanonicityFillet_Defined
#endif

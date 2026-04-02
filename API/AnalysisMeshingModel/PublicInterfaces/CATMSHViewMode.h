#ifndef CATMSHViewMode_h
#define CATMSHViewMode_h

/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/


//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 1999
//=============================================================================
//
// CATMSHViewMode : Modes de visu maillage.
//
//=============================================================================
// Fevrier 1999  Creation                          Cyril Masia
//=============================================================================

enum CATMSHViewMode {
  CATMSHViewNormal,
  CATMSHViewQuality3Color,
  CATMSHViewInterference,
  CATMSHViewOrientation, 
  CATMSHViewDuplicate,
  CATMSHViewCoincident

};

#endif

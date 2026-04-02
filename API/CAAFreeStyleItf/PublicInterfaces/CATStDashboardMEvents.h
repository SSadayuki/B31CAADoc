#ifndef CATStDashboardMEvents_H
#define CATStDashboardMEvents_H

/**
  * @CAA2Level L0
  * @CAA2Usage U0
  */

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2002
//==============================================================================
//
//==============================================================================
// Usage Notes :
//  --------------------------------------------------
//   IMPORTANT : DASSAULT SYSTEMES INTERNAL USE ONLY.
//  --------------------------------------------------
//
//------------------------------------------------------------------------------
//
//==============================================================================
// Dec. 02   Creation                                     Tatiana Dmitrieva
//==============================================================================

enum CATStDashboardMultiEvt
{	FSNoEvt                    = 1<<0,
	FSAutoDetectSnapEvt        = 1<<8,
	FSKeepOriginalEvt          = 1<<13,
	FSAttenuateSpeedEvt        = 1<<14,
	FSControlPointShowEvt      = 1<<15,
	FSTensionShowEvt           = 1<<16,
	FSContinuityShowEvt        = 1<<17,
	FSCouplingPointShowEvt     = 1<<19,
	FSOrderShowEvt             = 1<<20,
	FSDashboardStyleEvt        = 1<<24,
	FSNewOpenBodyEvt           = 1<<26,
	FSTemporyAnalysisEvt       = 1<<27
};

#endif

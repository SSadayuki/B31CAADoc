#ifndef CATStDashboardStyle_H
#define CATStDashboardStyle_H

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

enum FSToolbarStyle
{
	FSUndefined			   = 1<<0,
	FSDatum                = 1<<2,
	FSKeep                 = 1<<3,
	FSCtrlDisplay          = 1<<4,
	FSContinuityDisplay    = 1<<5,
	FSCouplingPointDisplay = 1<<6,
	FSTensionDisplay       = 1<<7,
	FSOrderDisplay         = 1<<9,
	FSAutoDetection        = 1<<10,
	FSAttenuate            = 1<<11,
	FSNewOpenBody          = 1<<15,
	FSTemporyAnalysis      = 1<<16
};

#endif

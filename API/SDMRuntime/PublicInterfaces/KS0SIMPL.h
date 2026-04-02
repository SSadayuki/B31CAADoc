/**
 * @quickReview LDI 02:09:19
 * @quickReview LDI 02:06:21
 */
// COPYRIGHT DASSAULT SYSTEMES  2001
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************
#ifndef _KS0IMPL_INCLUDED
#define _KS0IMPL_INCLUDED
// guard to avoid multiple definitions of SDAI_MULTI_TRANS_BCC below

#ifdef	_WINDOWS_SOURCE
#ifdef	__KS0SIMPL
#define	ExportedByKS0SIMPL	__declspec(dllexport)
#else
#define	ExportedByKS0SIMPL	__declspec(dllimport)
#endif
#else
#define	ExportedByKS0SIMPL
#endif

#include "CATIAV5Level.h"

//#ifdef CATIAV5R11
#define SDAI_MULTI_TRANS_BCC
//#endif

#define SdaiSessionClosing_in_KS0SIMPL

// indicates that SdaiTRSRecord.h is available.
#define SDAI_TRS_RECORD_AVAILABLE

#endif

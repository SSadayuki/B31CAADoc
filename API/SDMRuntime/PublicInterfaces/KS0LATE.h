// COPYRIGHT DASSAULT SYSTEMES  2001
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************
/**
 * @quickReview LDI 02:01:22
 */
#include "KS0SIMPL.h"       //to make sure everybody gets the value of SDAI_MULTI_TRANS_BCC
#ifdef	_WINDOWS_SOURCE
#ifdef	__KS0LATE
#define	ExportedByKS0LATE	__declspec(dllexport)
#else
#define	ExportedByKS0LATE	__declspec(dllimport)
#endif
#else
#define	ExportedByKS0LATE
#endif

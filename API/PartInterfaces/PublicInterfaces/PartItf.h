#ifndef __PartItf_h__
#define __PartItf_h__
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/

// COPYRIGHT DASSAULT SYSTEMES 1999

#ifdef _WINDOWS_SOURCE
#ifdef  __PartItf
#define ExportedByPartItf    __declspec(dllexport)
#else
#define ExportedByPartItf    __declspec(dllimport)
#endif
#else
#define ExportedByPartItf
#endif

#endif


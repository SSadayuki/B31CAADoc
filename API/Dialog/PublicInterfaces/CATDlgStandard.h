
// COPYRIGHT DASSAULT SYSTEMES 2000
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/

#ifndef ExportedByCATDlgStandard

#ifdef _WINDOWS_SOURCE

#if defined(__CATDlgStandard)
#define ExportedByCATDlgStandard __declspec(dllexport)
#else
#define ExportedByCATDlgStandard __declspec(dllimport)
#endif

#else

#define ExportedByCATDlgStandard

#endif

#endif

/* COPYRIGHT DASSAULT SYSTEMES 2003 */
#ifndef CATNavigatorItf_h
#define CATNavigatorItf_h
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/

#ifdef _WINDOWS_SOURCE
#if defined(__CATNavigatorItf)
#define ExportedByCATNavigatorItf __declspec(dllexport)
#else
#define ExportedByCATNavigatorItf __declspec(dllimport)
#endif
#else
#define ExportedByCATNavigatorItf
#endif

#endif

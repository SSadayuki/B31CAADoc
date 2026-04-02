#ifndef ExportedByGW0EXIT

/* COPYRIGHT DASSAULT SYSTEMES 2000 */
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/

#ifdef _WINDOWS_SOURCE

#if defined(__GW0EXIT)
#define ExportedByGW0EXIT __declspec(dllexport)
#else
#define ExportedByGW0EXIT __declspec(dllimport)
#endif

#else
#define ExportedByGW0EXIT
#endif

#endif

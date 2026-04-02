
// COPYRIGHT DASSAULT SYSTEMES 2000
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/

#ifdef _WINDOWS_SOURCE
#if defined(__VE0GEDIT)
#define ExportedByVE0GEDIT __declspec(dllexport)
#else
#define ExportedByVE0GEDIT __declspec(dllimport)
#endif
#else
#define ExportedByVE0GEDIT
#endif

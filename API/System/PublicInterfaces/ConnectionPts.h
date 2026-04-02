#ifndef ExportedByConnectionPts


// COPYRIGHT DASSAULT SYSTEMES 2000
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/

#ifdef _WINDOWS_SOURCE

#if defined(__ConnectionPtsImpl)
#define ExportedByConnectionPts __declspec(dllexport)
#else
#define ExportedByConnectionPts __declspec(dllimport)
#endif

#else
#define ExportedByConnectionPts
#endif

#endif

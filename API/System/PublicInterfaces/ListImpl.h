

// COPYRIGHT DASSAULT SYSTEMES 2000
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/

#ifndef ExportedByListImpl

#ifdef _WINDOWS_SOURCE

#if defined(__ListImpl)
#define ExportedByListImpl __declspec(dllexport)
#else
#define ExportedByListImpl __declspec(dllimport)
#endif

#else
#define ExportedByListImpl
#endif

#endif

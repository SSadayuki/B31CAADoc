// COPYRIGHT DASSAULT SYSTEMES 2000
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/

#ifdef	_WINDOWS_SOURCE
#ifdef	__MF0DimInt
#define	ExportedByMF0DimInt	__declspec(dllexport)
#else
#define	ExportedByMF0DimInt	__declspec(dllimport)
#endif
#else
#define	ExportedByMF0DimInt
#endif

#ifndef NULL
#define NULL 0
#endif


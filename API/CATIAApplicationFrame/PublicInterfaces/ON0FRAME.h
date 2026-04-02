
// COPYRIGHT DASSAULT SYSTEMES 2000
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/

#ifdef	_WINDOWS_SOURCE
#ifdef	__ON0FRAME
#define	ExportedByON0FRAME	__declspec(dllexport)
#else
#define	ExportedByON0FRAME	__declspec(dllimport)
#endif
#else
#define	ExportedByON0FRAME
#endif

// COPYRIGHT DASSAULT SYSTEMES 2004
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/


#ifdef	_WINDOWS_SOURCE
#ifdef	__G60I0FIT
#define	ExportedByG60I0FIT	__declspec(dllexport)
#else
#define	ExportedByG60I0FIT	__declspec(dllimport)
#endif
#else
#define	ExportedByG60I0FIT
#endif

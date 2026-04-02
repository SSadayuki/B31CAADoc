// COPYRIGHT DASSAULT SYSTEMES 2001
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
#ifdef	_WINDOWS_SOURCE
#ifdef	__CATSIMPlayerCommand
#define	ExportedByCATSIMPlayerCommand	__declspec(dllexport)
#else
#define	ExportedByCATSIMPlayerCommand	__declspec(dllimport)
#endif
#else
#define	ExportedByCATSIMPlayerCommand
#endif

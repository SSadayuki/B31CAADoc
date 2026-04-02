// COPYRIGHT DASSAULT SYSTEMES 2002
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
#ifdef	_WINDOWS_SOURCE
#ifdef	__CATEwrInterfaces
#define	ExportedByCATEwrInterfaces	__declspec(dllexport)
#else
#define	ExportedByCATEwrInterfaces	__declspec(dllimport)
#endif
#else
#define	ExportedByCATEwrInterfaces
#endif

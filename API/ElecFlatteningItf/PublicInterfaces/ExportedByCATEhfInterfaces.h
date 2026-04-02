// COPYRIGHT Dassault Systemes 2003
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/

#ifdef	_WINDOWS_SOURCE
#ifdef	__CATEhfInterfaces
#define	ExportedByCATEhfInterfaces	__declspec(dllexport)
#else
#define	ExportedByCATEhfInterfaces	__declspec(dllimport)
#endif
#else
#define	ExportedByCATEhfInterfaces
#endif

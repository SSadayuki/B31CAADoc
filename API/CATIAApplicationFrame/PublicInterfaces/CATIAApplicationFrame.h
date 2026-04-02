
// COPYRIGHT DASSAULT SYSTEMES 2000
/** @CAA2Required */
/*********************************************************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS        */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/*********************************************************************************************************/

#ifdef	_WINDOWS_SOURCE
#ifdef	__CATIAApplicationFrame
#define	ExportedByCATIAApplicationFrame __declspec(dllexport)
#else
#define	ExportedByCATIAApplicationFrame __declspec(dllimport)
#endif
#else
#define	ExportedByCATIAApplicationFrame
#endif

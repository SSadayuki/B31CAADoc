// COPYRIGHT   : DASSAULT SYSTEMES 1996
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************
#ifdef	_WINDOWS_SOURCE
#ifdef	__AD0SDBAS
#define	ExportedByAD0SDBAS	__declspec(dllexport)
#else
#define	ExportedByAD0SDBAS	__declspec(dllimport)
#endif
#else
#define	ExportedByAD0SDBAS
#endif

// COPYRIGHT DASSAULT SYSTEMES  2004
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************
#ifdef	_WINDOWS_SOURCE
#ifdef	__CATDECProductToPartCAA
#define	ExportedByCATDECProductToPartCAA	__declspec(dllexport)
#else
#define	ExportedByCATDECProductToPartCAA	__declspec(dllimport)
#endif
#else
#define	ExportedByCATDECProductToPartCAA
#endif


/* -*-C++-*-*/
// COPYRIGHT DASSAULT SYSTEMES 2002
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************
#ifdef	_WINDOWS_SOURCE
#ifdef	__Report
#define	ExportedByReport	__declspec(dllexport)
#else
#define	ExportedByReport	__declspec(dllimport)
#endif
#else
#define	ExportedByReport
#endif

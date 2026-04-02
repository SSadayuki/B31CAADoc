// COPYRIGHT DASSAULT SYSTEMES 2010
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************
//=============================================================================

#ifdef	_WINDOWS_SOURCE
#ifdef	__CATToolPathEditorInterfaces
#define	ExportedByTPEItfEnv	__declspec(dllexport)
#else
#define	ExportedByTPEItfEnv	__declspec(dllimport)
#endif
#else
#define	ExportedByTPEItfEnv
#endif

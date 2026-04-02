#ifndef  ExportedByCATFileMenu_h
#define  ExportedByCATFileMenu_h
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************
// COPYRIGHT DASSAULT SYSTEMES 2000

#ifdef _WINDOWS_SOURCE
#ifdef __CATFileMenu
#define ExportedByCATFileMenu  __declspec(dllexport)
#else
#define ExportedByCATFileMenu  __declspec(dllimport)
#endif
#else
#define ExportedByCATFileMenu
#endif

#endif  

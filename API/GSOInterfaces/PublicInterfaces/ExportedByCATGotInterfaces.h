#ifdef _WINDOWS_SOURCE 

// COPYRIGHT DASSAULT SYSTEMES 2001
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************

#ifdef __CATGotInterfaces
#define ExportedByCATGotInterfaces    __declspec(dllexport) 
#else 
#define ExportedByCATGotInterfaces    __declspec(dllimport) 
#endif 
#else 
#define ExportedByCATGotInterfaces
#endif

#ifdef _WINDOWS_SOURCE 

// COPYRIGHT DASSAULT SYSTEMES 1999
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************

#ifdef __CATGitInterfaces
#define ExportedByCATGitInterfaces    __declspec(dllexport) 
#else 
#define ExportedByCATGitInterfaces    __declspec(dllimport) 
#endif 
#else 
#define ExportedByCATGitInterfaces
#endif

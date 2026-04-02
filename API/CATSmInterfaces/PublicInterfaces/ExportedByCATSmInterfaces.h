#ifdef _WINDOWS_SOURCE 

// COPYRIGHT DASSAULT SYSTEMES 2003
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************


#ifdef __CATSmInterfaces
#define ExportedByCATSmInterfaces    __declspec(dllexport) 
#else 
#define ExportedByCATSmInterfaces    __declspec(dllimport) 
#endif 
#else 
#define ExportedByCATSmInterfaces
#endif

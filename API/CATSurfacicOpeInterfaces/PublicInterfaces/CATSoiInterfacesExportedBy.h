#ifdef _WINDOWS_SOURCE 

// COPYRIGHT DASSAULT SYSTEMES 1999
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************

#ifdef __CATSoiInterfaces
#define ExportedByCATSoiInterfaces    __declspec(dllexport) 
#else 
#define ExportedByCATSoiInterfaces    __declspec(dllimport) 
#endif 
#else 
#define ExportedByCATSoiInterfaces
#endif

#ifdef _WINDOWS_SOURCE 

// COPYRIGHT DASSAULT SYSTEMES 2009
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************

#ifdef __CATGSOUseItf
#define ExportedByCATGSOUseItf    __declspec(dllexport) 
#else 
#define ExportedByCATGSOUseItf    __declspec(dllimport) 
#endif 
#else 
#define ExportedByCATGSOUseItf
#endif

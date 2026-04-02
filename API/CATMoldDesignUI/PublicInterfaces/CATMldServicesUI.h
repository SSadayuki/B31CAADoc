// COPYRIGHT DASSAULT SYSTEMES 2003
#ifdef  _WINDOWS_SOURCE
#ifdef  __CATMldServicesUI
#define ExportedByCATMldServicesUI     __declspec(dllexport)
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************
#else
#define ExportedByCATMldServicesUI     __declspec(dllimport)
#endif
#else
#define ExportedByCATMldServicesUI
#endif

// COPYRIGHT DASSAULT SYSTEMES 2003
#ifdef  _WINDOWS_SOURCE
#ifdef  __CATMldTechnoResultItfCPP
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************
#define ExportedByCATMldTechnoResultItfCPP     __declspec(dllexport)
#else
#define ExportedByCATMldTechnoResultItfCPP     __declspec(dllimport)
#endif
#else
#define ExportedByCATMldTechnoResultItfCPP
#endif

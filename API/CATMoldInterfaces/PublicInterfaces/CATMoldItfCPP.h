// COPYRIGHT DASSAULT SYSTEMES 2003
#ifdef  _WINDOWS_SOURCE
#ifdef  __CATMoldItfCPP
#define ExportedByCATMoldItfCPP     __declspec(dllexport)
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************
#else
#define ExportedByCATMoldItfCPP     __declspec(dllimport)
#endif
#else
#define ExportedByCATMoldItfCPP
#endif

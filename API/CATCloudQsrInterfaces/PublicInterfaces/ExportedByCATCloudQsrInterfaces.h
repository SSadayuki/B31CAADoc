// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2004
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************
#ifdef  _WINDOWS_SOURCE
#ifdef  __CATCloudQsrInterfaces
#define ExportedByCATCloudQsrInterfaces     __declspec(dllexport)
#else
#define ExportedByCATCloudQsrInterfaces     __declspec(dllimport)
#endif
#else
#define ExportedByCATCloudQsrInterfaces
#endif

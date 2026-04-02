// COPYRIGHT 1994-2000 DASSAULT SYSTEMES
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
#ifdef  _WINDOWS_SOURCE
#ifdef  __CATAssemblyInterfaces
#define ExportedByCATAssemblyInterfaces     __declspec(dllexport)
#else
#define ExportedByCATAssemblyInterfaces     __declspec(dllimport)
#endif
#else
#define ExportedByCATAssemblyInterfaces
#endif

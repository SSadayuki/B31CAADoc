// COPYRIGHT DASSAULT SYSTEMES 1999
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
#ifdef _WINDOWS_SOURCE
#ifdef __CATTPSItfCPP
#define ExportedByCATTPSItfCPP  __declspec(dllexport)
#else
#define ExportedByCATTPSItfCPP  __declspec(dllimport)
#endif
#else
#define ExportedByCATTPSItfCPP
#endif

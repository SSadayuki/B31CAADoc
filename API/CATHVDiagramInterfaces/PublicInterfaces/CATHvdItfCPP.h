//	COPYRIGHT DASSAULT SYSTEMES 2003
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
#ifdef _WINDOWS_SOURCE
#ifdef __CATHvdItfCPP
#define ExportedByCATHvdItfCPP  __declspec(dllexport)
#else
#define ExportedByCATHvdItfCPP __declspec(dllimport)
#endif
#else
#define ExportedByCATHvdItfCPP
#endif

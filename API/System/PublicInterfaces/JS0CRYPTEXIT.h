// COPYRIGHT DASSAULT SYSTEMES 2004
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/

#ifdef _WINDOWS_SOURCE
#ifdef __JS0CRYPTEXIT
#define ExportedByJS0CRYPTEXIT __declspec(dllexport)
#else
#define ExportedByJS0CRYPTEXIT __declspec(dllimport)
#endif
#else
#define ExportedByJS0CRYPTEXIT
#endif

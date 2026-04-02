

// COPYRIGHT DASSAULT SYSTEMES 2000
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/

#ifdef _WINDOWS_SOURCE
#ifdef __JS0SETT
#define ExportedByJS0SETT __declspec(dllexport)
#else
#define ExportedByJS0SETT __declspec(dllimport)
#endif
#else
#define ExportedByJS0SETT
#endif


 /*  Definition des flags d'exportations   */


// COPYRIGHT DASSAULT SYSTEMES 2000
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/

#if _WINDOWS_SOURCE
#ifdef __JS0SCBAK
#define ExportedByJS0SCBAK __declspec(dllexport)
#else
#define ExportedByJS0SCBAK __declspec(dllimport)
#endif
#else
#define ExportedByJS0SCBAK  
#endif


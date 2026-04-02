

/* COPYRIGHT DASSAULT SYSTEMES 2000 */
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/

/*  Definition des flags d'exportations   */

#ifdef _WINDOWS_SOURCE
#ifdef __JS03TRA
#define ExportedByJS03TRA __declspec(dllexport)
#else
#define ExportedByJS03TRA __declspec(dllimport)
#endif
#else
#define ExportedByJS03TRA 
#endif

 

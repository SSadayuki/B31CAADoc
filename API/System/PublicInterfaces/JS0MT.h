#ifndef JS0MT_H
#define JS0MT_H
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/

// COPYRIGHT DASSAULT SYSTEMES 2000

 /*  Definition des flags d'exportations   */
#if _WINDOWS_SOURCE
#ifdef __JS0MT
#define ExportedByJS0MT __declspec(dllexport)
#else
#define ExportedByJS0MT __declspec(dllimport)
#endif
#else
#define ExportedByJS0MT  
#endif
#endif

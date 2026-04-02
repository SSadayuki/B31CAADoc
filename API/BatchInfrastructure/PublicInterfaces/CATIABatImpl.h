// COPYRIGHT DASSAULT SYSTEMES 2003
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/


#ifndef ExportedByCATIABatImpl

#ifdef _WINDOWS_SOURCE

#if defined(__CATIABatImpl)
#define ExportedByCATIABatImpl __declspec(dllexport)
#else
#define ExportedByCATIABatImpl __declspec(dllimport)
#endif

#else
#define ExportedByCATIABatImpl
#endif

#endif

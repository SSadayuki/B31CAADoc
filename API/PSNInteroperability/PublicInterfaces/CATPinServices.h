
// COPYRIGHT DASSAULT SYSTEMES  1999
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/

#ifndef CATPinServices_h
#define CATPinServices_h

#ifdef _WINDOWS_SOURCE 
#ifdef __CATPinServices
#define ExportedByCATPinServices  __declspec(dllexport) 
#else
#define ExportedByCATPinServices  __declspec(dllimport) 
#endif
#else
#define ExportedByCATPinServices
#endif

#endif



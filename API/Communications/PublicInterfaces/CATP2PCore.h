// COPYRIGHT DASSAULT SYSTEMES 2003
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/



#ifdef _WINDOWS_SOURCE
#ifdef __CATP2PCore
#define ExportedByCATP2PCore __declspec(dllexport)
#else
#define ExportedByCATP2PCore __declspec(dllimport)
#endif
#else
#define ExportedByCATP2PCore
#endif


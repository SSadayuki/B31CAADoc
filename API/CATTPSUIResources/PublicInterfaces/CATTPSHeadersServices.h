// COPYRIGHT DASSAULT SYSTEMES 2001
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
#ifdef  _WINDOWS_SOURCE
#ifdef  __CATTPSHeadersServices
#define ExportedByCATTPSHeadersServices     __declspec(dllexport)
#else
#define ExportedByCATTPSHeadersServices     __declspec(dllimport)
#endif
#else
#define ExportedByCATTPSHeadersServices
#endif

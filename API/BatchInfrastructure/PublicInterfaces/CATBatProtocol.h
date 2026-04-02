// COPYRIGHT DASSAULT SYSTEMES 2003
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/

#ifndef ExportedByCATBatProtocol

#ifdef _WINDOWS_SOURCE

#if defined(__CATBatProtocol)
#define ExportedByCATBatProtocol __declspec(dllexport)
#else
#define ExportedByCATBatProtocol __declspec(dllimport)
#endif

#else
#define ExportedByCATBatProtocol
#endif

#endif

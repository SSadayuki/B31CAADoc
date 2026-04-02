// COPYRIGHT DASSAULT SYSTEMES 2006
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/


#ifndef ExportedByCATBatCliMonitor

#ifdef _WINDOWS_SOURCE

#if defined(__CATBatCliMonitor)
#define ExportedByCATBatCliMonitor __declspec(dllexport)
#else
#define ExportedByCATBatCliMonitor __declspec(dllimport)
#endif

#else
#define ExportedByCATBatCliMonitor
#endif

#endif

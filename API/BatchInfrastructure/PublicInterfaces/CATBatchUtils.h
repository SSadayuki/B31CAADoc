// COPYRIGHT DASSAULT SYSTEMES 2003
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/



#ifndef ExportedByCATBatchUtils

#ifdef _WINDOWS_SOURCE

#if defined(__CATBatchUtils)
#define ExportedByCATBatchUtils __declspec(dllexport)
#else
#define ExportedByCATBatchUtils __declspec(dllimport)
#endif

#else
#define ExportedByCATBatchUtils
#endif

#endif

// COPYRIGHT DASSAULT SYSTEMES 2005
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/

#ifndef ExportedByCATBatCAAGrid

#ifdef _WINDOWS_SOURCE

#if defined(__CATBatCAAGrid)
#define ExportedByCATBatCAAGrid __declspec(dllexport)
#else
#define ExportedByCATBatCAAGrid __declspec(dllimport)
#endif

#else
#define ExportedByCATBatCAAGrid
#endif

#endif

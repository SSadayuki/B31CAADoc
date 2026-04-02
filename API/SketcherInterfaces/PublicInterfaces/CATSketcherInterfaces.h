/* -*-c++-*- */

// COPYRIGHT DASSAULT SYSTEMES 1999
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/

#ifdef _WINDOWS_SOURCE
#ifdef __CATSketcherInterfaces
#define ExportedByCATSketcherInterfaces __declspec(dllexport)
#else
#define ExportedByCATSketcherInterfaces __declspec(dllimport)
#endif
#else
#define ExportedByCATSketcherInterfaces
#endif

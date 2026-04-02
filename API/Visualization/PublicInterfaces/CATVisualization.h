/* COPYRIGHT DASSAULT SYSTEMES 1999 */
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/

#ifdef _WINDOWS_SOURCE
#if defined(__CATVisualization)
#define ExportedByCATVisualization __declspec(dllexport)
#else
#define ExportedByCATVisualization __declspec(dllimport)
#endif
#else
#define ExportedByCATVisualization
#endif

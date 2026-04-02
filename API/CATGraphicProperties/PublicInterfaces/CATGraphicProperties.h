#ifdef _WINDOWS_SOURCE
/* COPYRIGHT DASSAULT SYSTEMES 2003 */
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
#if defined(__CATGraphicProperties)
#define ExportedByCATGraphicProperties __declspec(dllexport)
#else
#define ExportedByCATGraphicProperties __declspec(dllimport)
#endif
#else
#define ExportedByCATGraphicProperties
#endif

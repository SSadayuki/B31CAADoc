// COPYRIGHT DASSAULT SYSTEMES 2005
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
#ifdef  _WINDOWS_SOURCE
#ifdef  __CATSktToolbox
#define ExportedByCATSktToolbox     __declspec(dllexport)
#else
#define ExportedByCATSktToolbox     __declspec(dllimport)
#endif
#else
#define ExportedByCATSktToolbox
#endif

// COPYRIGHT DASSAULT SYSTEMES 2000
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
#ifdef  _WINDOWS_SOURCE
#ifdef  __G90CAA2
#define ExportedByG90CAA2     __declspec(dllexport)
#else
#define ExportedByG90CAA2     __declspec(dllimport)
#endif
#else
#define ExportedByG90CAA2
#endif

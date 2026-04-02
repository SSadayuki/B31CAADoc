// COPYRIGHT 1994-2000 DASSAULT SYSTEMES
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
#ifdef  _WINDOWS_SOURCE
#ifdef  __CATWkAssyInterface
#define ExportedByCATWkAssyInterface     __declspec(dllexport)
#else
#define ExportedByCATWkAssyInterface     __declspec(dllimport)
#endif
#else
#define ExportedByCATWkAssyInterface
#endif

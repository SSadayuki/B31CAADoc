// COPYRIGHT DASSAULT SYSTEMES 1999 
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
#ifdef  _WINDOWS_SOURCE
#ifdef  __CATSktSettings
#define ExportedByCATSktSettings     __declspec(dllexport)
#else
#define ExportedByCATSktSettings     __declspec(dllimport)
#endif
#else
#define ExportedByCATSktSettings
#endif

/* COPYRIGHT DASSAULT SYSTEMES 2009 */
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/

#ifdef  _WINDOWS_SOURCE
#ifdef  __CATSpaCCP
#define ExportedByCATSpaCCP     __declspec(dllexport)
#else
#define ExportedByCATSpaCCP     __declspec(dllimport)
#endif
#else
#define ExportedByCATSpaCCP
#endif

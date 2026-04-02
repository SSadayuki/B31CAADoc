/* COPYRIGHT DASSAULT SYSTEMES 2005 */
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/



#ifdef  _WINDOWS_SOURCE
#ifdef  __CATPDMBaseEnoviaV5CAA
#define ExportedByCATPDMBaseEnoviaV5CAA     __declspec(dllexport)
#else
#define ExportedByCATPDMBaseEnoviaV5CAA     __declspec(dllimport)
#endif
#else
#define ExportedByCATPDMBaseEnoviaV5CAA
#endif

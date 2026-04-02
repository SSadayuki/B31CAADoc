/* COPYRIGHT DASSAULT SYSTEMES 2005 */
#ifdef  _WINDOWS_SOURCE
#ifdef  __CATConstraintModeler
#define ExportedByCATConstraintModeler     __declspec(dllexport)
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
#else
#define ExportedByCATConstraintModeler     __declspec(dllimport)
#endif
#else
#define ExportedByCATConstraintModeler
#endif

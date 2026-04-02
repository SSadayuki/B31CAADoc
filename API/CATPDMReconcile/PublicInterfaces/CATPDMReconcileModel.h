// Reconciliator
// Version 1 Release 0
// COPYRIGHT DASSAULT SYSTEMES 2004

/** @CAA2Required */
/*---------------------------------------------------------------------*/
/* DON'T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/*---------------------------------------------------------------------*/

#ifdef  _WINDOWS_SOURCE
#ifdef  __CATPDMReconcileModel
#define ExportedByCATPDMReconcileModel     __declspec(dllexport)
#else
#define ExportedByCATPDMReconcileModel     __declspec(dllimport)
#endif
#else
#define ExportedByCATPDMReconcileModel
#endif

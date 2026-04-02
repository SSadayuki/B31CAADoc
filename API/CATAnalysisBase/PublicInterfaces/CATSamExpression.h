//===================================================================
// COPYRIGHT DASSAULT SYSTEMES 2000
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
// COPYRIGHT LMS INTERNATIONAL 2000
//===================================================================
#ifdef  _WINDOWS_SOURCE
#ifdef  __CATSamExpression
#define ExportedByCATSamExpression     __declspec(dllexport)
#else
#define ExportedByCATSamExpression     __declspec(dllimport)
#endif
#else
#define ExportedByCATSamExpression
#endif

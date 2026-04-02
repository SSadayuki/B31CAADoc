// COPYRIGHT DASSAULT SYSTEMES 2007
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
#ifdef  _WINDOWS_SOURCE
#ifdef  __CATDlgView
#define ExportedByCATDlgView     __declspec(dllexport)
#else
#define ExportedByCATDlgView     __declspec(dllimport)
#endif
#else
#define ExportedByCATDlgView
#endif

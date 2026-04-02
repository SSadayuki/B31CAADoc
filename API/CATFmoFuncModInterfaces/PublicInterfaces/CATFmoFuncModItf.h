// COPYRIGHT Dassault Systemes 2007
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
#ifdef  _WINDOWS_SOURCE
#ifdef  __CATFmoFuncModItf
#define ExportedByCATFmoFuncModItf     __declspec(dllexport)
#else
#define ExportedByCATFmoFuncModItf     __declspec(dllimport)
#endif
#else
#define ExportedByCATFmoFuncModItf
#endif

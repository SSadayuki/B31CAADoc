// COPYRIGHT Dassault Systemes 2003
//===================================================================
/** @CAA2Required */
/*---------------------------------------------------------------------*/
/* DON'T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/*---------------------------------------------------------------------*/
#ifdef  _WINDOWS_SOURCE
#ifdef  __CATMultiCADItfCPP
#define ExportedByCATMultiCADItfCPP     __declspec(dllexport)
#else
#define ExportedByCATMultiCADItfCPP     __declspec(dllimport)
#endif
#else
#define ExportedByCATMultiCADItfCPP
#endif

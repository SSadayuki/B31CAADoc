//===================================================================
// COPYRIGHT DASSAULT SYSTEMES 2013/08/05
//===================================================================
/** @CAA2Required */
#ifdef  _WINDOWS_SOURCE
#ifdef  __PCBItfCPP
#define ExportedByPCBItfCPP     __declspec(dllexport)
#else
#define ExportedByPCBItfCPP     __declspec(dllimport)
#endif
#else
#define ExportedByPCBItfCPP
#endif

/** @CAA2Required */
//***********************************************************************
//* DON'T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME *
//***********************************************************************

// COPYRIGHT DASSAULT SYSTEMES PROVENCE 2003

#ifdef  _WINDOWS_SOURCE
#ifdef  __DataExchangeKernelItfCPP
#define ExportedByDataExchangeKernelItfCPP     __declspec(dllexport)
#else
#define ExportedByDataExchangeKernelItfCPP     __declspec(dllimport)
#endif
#else
#define ExportedByDataExchangeKernelItfCPP
#endif

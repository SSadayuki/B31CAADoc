// COPYRIGHT DASSAULT SYSTEMES 2000

/**
  * @CAA2Level L0
  * @CAA2Usage U0
  */

#ifdef  _WINDOWS_SOURCE
#ifdef  __CATPPRHubLocator
#define ExportedByCATPPRHubLocator     __declspec(dllexport)
#else
#define ExportedByCATPPRHubLocator     __declspec(dllimport)
#endif
#else
#define ExportedByCATPPRHubLocator
#endif

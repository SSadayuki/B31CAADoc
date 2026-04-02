// COPYRIGHT Dassault Systemes 2013
//===================================================================

/**
* @CAA2Required
*/

#ifdef  _WINDOWS_SOURCE
#ifdef  __ENODC5Interfaces
#define ExportedByENODC5Interfaces     __declspec(dllexport)
#else
#define ExportedByENODC5Interfaces    __declspec(dllimport)
#endif
#else
#define ExportedByENODC5Interfaces
#endif

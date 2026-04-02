// COPYRIGHT Dassault Systemes 2013
//===================================================================

/**
* @CAA2Required
*/

#ifdef  _WINDOWS_SOURCE
#ifdef  __ENOUPSInterfaces
#define ExportedByENOUPSInterfaces     __declspec(dllexport)
#else
#define ExportedByENOUPSInterfaces    __declspec(dllimport)
#endif
#else
#define ExportedByENOUPSInterfaces
#endif

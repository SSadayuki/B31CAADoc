// COPYRIGHT Dassault Systemes 2013
//===================================================================

/**
* @CAA2Required
*/

#ifdef  _WINDOWS_SOURCE
#ifdef  __ENOCD5UserExitsItf
#define ExportedByENOCD5UserExitsItf     __declspec(dllexport)
#else
#define ExportedByENOCD5UserExitsItf    __declspec(dllimport)
#endif
#else
#define ExportedByENOCD5UserExitsItf
#endif

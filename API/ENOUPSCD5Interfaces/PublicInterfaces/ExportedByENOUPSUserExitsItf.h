// COPYRIGHT Dassault Systemes 2013
//===================================================================

/**
* @CAA2Required
*/

#ifdef  _WINDOWS_SOURCE
#ifdef  __ENOUPSUserExitsItf
#define ExportedByENOUPSUserExitsItf     __declspec(dllexport)
#else
#define ExportedByENOUPSUserExitsItf    __declspec(dllimport)
#endif
#else
#define ExportedByENOUPSUserExitsItf
#endif

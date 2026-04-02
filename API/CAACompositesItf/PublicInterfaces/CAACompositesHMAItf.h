// COPYRIGHT DASSAULT SYSTEMES 2008
#ifdef _WINDOWS_SOURCE
#if defined(__CAACompositesHMAItf)
#define ExportedByCAACompositesHMAItf __declspec(dllexport)
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************
#else
#define ExportedByCAACompositesHMAItf __declspec(dllimport)
#endif
#else
#define ExportedByCAACompositesHMAItf
#endif

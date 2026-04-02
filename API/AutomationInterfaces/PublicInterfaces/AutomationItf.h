// COPYRIGHT DASSAULT SYSTEMES 2003
#ifdef _WINDOWS_SOURCE
#if defined(__CATScriptItfBase) || (__CATScriptReferences)
#define ExportedByCATAutoItf __declspec(dllexport)
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
#else
#define ExportedByCATAutoItf __declspec(dllimport)
#endif
#else
#define ExportedByCATAutoItf
#endif

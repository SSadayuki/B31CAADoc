// COPYRIGHT DASSAULT SYSTEMES 2003
#ifdef _WINDOWS_SOURCE
#ifdef __CATPspUtilities
#define ExportedByCATPspUtilities  __declspec(dllexport)
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************
#else
#define ExportedByCATPspUtilities __declspec(dllimport)
#endif
#else
#define ExportedByCATPspUtilities
#endif

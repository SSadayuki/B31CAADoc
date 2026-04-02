// COPYRIGHT DASSAULT SYSTEMES 2005
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
#ifdef _WINDOWS_SOURCE
#ifdef __Drafting2DLItfCPP
#define ExportedByCATDrafting2DLItfCPP  __declspec(dllexport)
#else
#define ExportedByCATDrafting2DLItfCPP  __declspec(dllimport)
#endif
#else
#define ExportedByCATDrafting2DLItfCPP
#endif

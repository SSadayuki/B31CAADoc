//=============================================================================
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
// COPYRIGHT Dassault Systemes 2000
//=============================================================================
#ifdef _WINDOWS_SOURCE
#ifdef __CATSAMModel
#define ExportedByCATSAMModel __declspec(dllexport)
#else
#define ExportedByCATSAMModel __declspec(dllimport)
#endif
#else
#define ExportedByCATSAMModel
#endif

// COPYRIGHT DASSAULT SYSTEMES 2002
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
#ifdef  _WINDOWS_SOURCE
#ifdef  __CATElecSchematicItf
#define ExportedByCATElecSchematicItf     __declspec(dllexport)
#else
#define ExportedByCATElecSchematicItf     __declspec(dllimport)
#endif
#else
#define ExportedByCATElecSchematicItf
#endif

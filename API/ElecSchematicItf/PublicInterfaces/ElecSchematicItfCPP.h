// COPYRIGHT DASSAULT SYSTEMES 2003

/** @CAA2Required */
/*---------------------------------------------------------------------*/
/* DON'T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/*---------------------------------------------------------------------*/
#ifdef  _WINDOWS_SOURCE
#ifdef  __ElecSchematicItfCPP
#define ExportedByElecSchematicItfCPP     __declspec(dllexport)
#else
#define ExportedByElecSchematicItfCPP     __declspec(dllimport)
#endif
#else
#define ExportedByElecSchematicItfCPP
#endif

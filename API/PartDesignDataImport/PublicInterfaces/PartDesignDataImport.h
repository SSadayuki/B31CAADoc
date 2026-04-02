// COPYRIGHT DASSAULT SYSTEMES PROVENC 2004
/** @CAA2Required */
/*---------------------------------------------------------------------*/
/* DON'T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/*---------------------------------------------------------------------*/
#ifdef  _WINDOWS_SOURCE
#ifdef  __PartDesignDataImport
#define ExportedByPartDesignDataImport     __declspec(dllexport)
#else
#define ExportedByPartDesignDataImport     __declspec(dllimport)
#endif
#else
#define ExportedByPartDesignDataImport
#endif

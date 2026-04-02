// COPYRIGHT DASSAULT SYSTEMES 2004

/**
 * @CAA2Required
 */
/*---------------------------------------------------------------------*/
/* DON'T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/*---------------------------------------------------------------------*/

#ifdef  _WINDOWS_SOURCE
#ifdef  __CATXCADToV5DocFactory 
#define ExportedByCATXCADToV5DocFactory     __declspec(dllexport)
#else
#define ExportedByCATXCADToV5DocFactory     __declspec(dllimport)
#endif
#else
#define ExportedByCATXCADToV5DocFactory
#endif

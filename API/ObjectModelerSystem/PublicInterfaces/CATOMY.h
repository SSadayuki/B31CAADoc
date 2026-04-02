// COPYRIGHT DASSAULT SYSTEMES 2008
/**
* @CAA2Required
*/

#ifdef  _WINDOWS_SOURCE
#ifdef  __CATOMY
#define ExportedByCATOMY     __declspec(dllexport)
#else
#define ExportedByCATOMY     __declspec(dllimport)
#endif
#else
#define ExportedByCATOMY
#endif

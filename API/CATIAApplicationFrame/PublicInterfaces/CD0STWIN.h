
// COPYRIGHT DASSAULT SYSTEMES 2000
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/

#ifdef _WINDOWS_SOURCE 
#ifdef __CD0STWIN
#define ExportedByCD0STWIN  __declspec(dllexport) 
#else
#define ExportedByCD0STWIN  __declspec(dllimport) 
#endif
#else
#define ExportedByCD0STWIN
#endif

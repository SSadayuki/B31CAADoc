

// COPYRIGHT DASSAULT SYSTEMES 2000
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/

// Ce header permet de mettre a jour le mot clef ExportedByJS0FM assurant l'export ou l'import des class
//
#ifdef _WINDOWS_SOURCE
#ifdef __JS0FM
#define ExportedByJS0FM	_declspec(dllexport)
#else
#define ExportedByJS0FM	_declspec(dllimport)
#endif
#else
#define ExportedByJS0FM	
#endif


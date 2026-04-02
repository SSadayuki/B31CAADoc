// COPYRIGHT DASSAULT SYSTEMES 2000
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************

// load dedicated to Dictionnary customisation
#ifdef _WINDOWS_SOURCE 
#ifdef __KnowledgeItf
#define ExportedByKnowledgeItf  __declspec(dllexport) 
#else
#define ExportedByKnowledgeItf  __declspec(dllimport) 
#endif
#else
#define ExportedByKnowledgeItf
#endif

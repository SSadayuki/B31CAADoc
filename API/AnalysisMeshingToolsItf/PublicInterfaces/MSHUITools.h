//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2004
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
//=============================================================================
//
// Définition du module exportant les symboles
//
//=============================================================================
// Avril 2004  Création                          Christophe Le Chatelier
//=============================================================================
#ifdef	_WINDOWS_SOURCE
#ifdef	__MSHUITools
#define	ExportedByMSHUITools 	__declspec(dllexport)
#else
#define	ExportedByMSHUITools 	__declspec(dllimport)
#endif
#else
#define	ExportedByMSHUITools
#endif

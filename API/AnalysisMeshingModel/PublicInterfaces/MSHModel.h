//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 1998
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
// Avril 1998  Création                          Christophe Le Chatelier
//=============================================================================
#ifdef	_WINDOWS_SOURCE
#ifdef	__MSHModel
#define	ExportedByMSHModel 	__declspec(dllexport)
#else
#define	ExportedByMSHModel 	__declspec(dllimport)
#endif
#else
#define	ExportedByMSHModel
#endif

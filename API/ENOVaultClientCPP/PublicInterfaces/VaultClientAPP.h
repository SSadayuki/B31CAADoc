// =================================================================
// COPYRIGHT DASSAULT SYSTEMES 2000
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
// =================================================================
// VPM (c) Copyright Dassault Systemes 2000
// -----------------------------------------------------------------
//
// Contents:
//
// =================================================================
// Historic
// Creation : 15/09/2000  OJH
// =================================================================

#ifdef	_WINDOWS_SOURCE
#ifdef	__VaultClientAPP
#define	ExportedByVaultClientAPP	__declspec(dllexport)
#else
#define	ExportedByVaultClientAPP	__declspec(dllimport)
#endif
#else
#define	ExportedByVaultClientAPP
#endif

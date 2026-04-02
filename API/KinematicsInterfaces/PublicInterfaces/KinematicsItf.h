// COPYRIGHT DASSAULT SYSTEMES 1998
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
//===================================================================
//
// KinematicsItf.h
//
//===================================================================
//
// Usage notes:
//   
//
//===================================================================
//
//  1998 creation
//===================================================================
#ifdef	_WINDOWS_SOURCE
#ifdef	__KinematicsItf
#define	ExportedByKinematicsItf	__declspec(dllexport)
#else
#define	ExportedByKinematicsItf	__declspec(dllimport)
#endif
#else
#define	ExportedByKinematicsItf
#endif

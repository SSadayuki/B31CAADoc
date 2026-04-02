/**
 *  @quickReview JFS-JAC 01:11:30
 */
// COPYRIGHT DASSAULT SYSTEMES 2001
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/

#ifdef	_WINDOWS_SOURCE
#ifdef	__CATTreeOptions
#define	ExportedByCATTreeOptions	__declspec(dllexport)
#else
#define	ExportedByCATTreeOptions	__declspec(dllimport)
#endif
#else
#define	ExportedByCATTreeOptions
#endif

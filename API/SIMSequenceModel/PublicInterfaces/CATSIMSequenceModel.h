// COPYRIGHT DASSAULT SYSTEMES 2003
#ifdef	_WINDOWS_SOURCE
#ifdef	__CATSIMSequenceModel
#define	ExportedByCATSIMSequenceModel	__declspec(dllexport)
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
#else
#define	ExportedByCATSIMSequenceModel	__declspec(dllimport)
#endif
#else
#define	ExportedByCATSIMSequenceModel
#endif

/*===========================================================================*/
/* COPYRIGHT DASSAULT SYSTEMES 2003                                          */
/*===========================================================================*/
/*                                                                           */
/*  CATV4iSettings                                                      	           */
/*                                                                           */
/*===========================================================================*/
/*  Creation Dec 2003									     */
/*===========================================================================*/
/** @CAA2Required */
/**********************************************************************/
/*---------------------------------------------------------------------*/
/* DON'T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/*---------------------------------------------------------------------*/

#ifdef	_WINDOWS_SOURCE
#ifdef	__CATV4iSettings
#define	ExportedByCATV4iSettings    __declspec(dllexport)
#else
#define	ExportedByCATV4iSettings    __declspec(dllimport)
#endif
#else
#define	ExportedByCATV4iSettings
#endif

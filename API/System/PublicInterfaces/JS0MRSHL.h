/*===========================================================================*/
/* COPYRIGHT DASSAULT SYSTEMES 1996                                          */
/*===========================================================================*/
/*                                                                           */
/*  JS0MRSHL                                                                 */
/*                                                                           */
/*  Usage Notes:                                                             */
/*  For Windows NT                                                           */
/*===========================================================================*/
/*  Creation September 1996                                                  */
/*===========================================================================*/
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
#ifdef _WINDOWS_SOURCE
#ifdef __JS0MRSHL
#define ExportedByJS0MRSHL __declspec(dllexport)
#else
#define ExportedByJS0MRSHL __declspec(dllimport)
#endif
#else
#define ExportedByJS0MRSHL
#endif

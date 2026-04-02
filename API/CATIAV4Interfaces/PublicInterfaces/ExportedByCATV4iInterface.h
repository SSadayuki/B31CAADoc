/* -*-c++-*- */
/* ExportedByCATV4iServices.h : COPYRIGHT DASSAULT SYSTEMES 2003 */

/** @CAA2Required */
/*---------------------------------------------------------------------*/
/* DON'T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/*---------------------------------------------------------------------*/

#ifndef  ExportedByCATV4iInterface_h
#define  ExportedByCATV4iInterface_h

#ifdef _WINDOWS_SOURCE
#ifdef __CATV4iInterface
#define ExportedByCATV4iInterface  __declspec(dllexport)
#else
#define ExportedByCATV4iInterface  __declspec(dllimport)
#endif
#else
#define ExportedByCATV4iInterface
#endif

#endif   /* ExportedByCATV4iInterface_h */

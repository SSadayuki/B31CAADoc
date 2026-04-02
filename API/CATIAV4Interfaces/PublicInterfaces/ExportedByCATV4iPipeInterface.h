/* -*-c++-*- */
/* ExportedByCATV4iPipeServices.h : COPYRIGHT DASSAULT SYSTEMES 2003 */

/** @CAA2Required */
/*---------------------------------------------------------------------*/
/* DON'T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/*---------------------------------------------------------------------*/

#ifndef  ExportedByCATV4iPipeInterface_h
#define  ExportedByCATV4iPipeInterface_h

#ifdef _WINDOWS_SOURCE
#ifdef __CATV4iPipeInterface
#define ExportedByCATV4iPipeInterface  __declspec(dllexport)
#else
#define ExportedByCATV4iPipeInterface  __declspec(dllimport)
#endif
#else
#define ExportedByCATV4iPipeInterface
#endif

#endif   /* ExportedByCATV4iInterface_h */

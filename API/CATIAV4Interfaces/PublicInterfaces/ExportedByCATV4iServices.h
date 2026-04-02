/* -*-c++-*- */
/* ExportedByCATV4iServices.h : COPYRIGHT DASSAULT SYSTEMES 2003 */

/** @CAA2Required */
/*---------------------------------------------------------------------*/
/* DON'T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/*---------------------------------------------------------------------*/

#ifndef  ExportedByCATV4iServices_h
#define  ExportedByCATV4iServices_h

#ifdef _WINDOWS_SOURCE
#ifdef __CATV4iServices
#define ExportedByCATV4iServices  __declspec(dllexport)
#else
#define ExportedByCATV4iServices  __declspec(dllimport)
#endif
#else
#define ExportedByCATV4iServices
#endif

#endif   /* ExportedByCATV4iServices_h */

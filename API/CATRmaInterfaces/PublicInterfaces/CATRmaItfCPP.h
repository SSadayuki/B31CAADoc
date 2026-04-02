/* -*-c++-*-*/
// COPYRIGHT DASSAULT SYSTEMES 1999
/** @CAA2Required */
/*---------------------------------------------------------------------*/
/* DON'T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/*---------------------------------------------------------------------*/
//======================================================================
// Class CATRmaItfCPP:
// Definition of macros.
//======================================================================
// Usage Note:
//  na.
//======================================================================
// CREATED  08 Jan 1997 BY EGO
// MODIFIED xx xxx xxxx BY xxx
//          modification reason
//======================================================================
#ifndef CATRmaItfCPP_h
#define CATRmaItfCPP_h

#ifdef _WINDOWS_SOURCE
  #if defined(__CATRmaItfCPP)
    #define ExportedByCATRmaItfCPP __declspec(dllexport)
  #else
    #define ExportedByCATRmaItfCPP __declspec(dllimport)
  #endif
#else
  #define ExportedByCATRmaItfCPP
#endif

#endif

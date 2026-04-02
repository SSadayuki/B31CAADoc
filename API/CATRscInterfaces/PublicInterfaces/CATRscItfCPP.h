/* -*-c++-*-*/
// COPYRIGHT DASSAULT SYSTEMES 1999
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
//======================================================================
// Class CATRscItfCPP:
// Definition of macros.
//======================================================================
// Usage Note:
//  na.
//======================================================================
// CREATED  08 Jan 1997 BY EGO
// MODIFIED xx xxx xxxx BY xxx
//          modification reason
//======================================================================
#ifndef CATRscItfCPP_h
#define CATRscItfCPP_h

#ifdef _WINDOWS_SOURCE
  #if defined(__CATRscItfCPP)
    #define ExportedByCATRscItfCPP __declspec(dllexport)
  #else
    #define ExportedByCATRscItfCPP __declspec(dllimport)
  #endif
#else
  #define ExportedByCATRscItfCPP
#endif

#endif

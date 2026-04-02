/* -*-c++-*-*/
// COPYRIGHT DASSAULT SYSTEMES 1999
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
//======================================================================
// Class CATMatItfCPP:
// Definition of macros.
//======================================================================
// Usage Note:
//  na.
//======================================================================
// CREATED  08 Jan 1997 BY EGO
// MODIFIED xx xxx xxxx BY xxx
//          modification reason
//======================================================================
#ifndef CATMatItfCPP_h
#define CATMatItfCPP_h

#ifdef _WINDOWS_SOURCE
  #if defined(__CATMatItfCPP)
    #define ExportedByCATMatItfCPP __declspec(dllexport)
  #else
    #define ExportedByCATMatItfCPP __declspec(dllimport)
  #endif
#else
  #define ExportedByCATMatItfCPP
#endif

#endif

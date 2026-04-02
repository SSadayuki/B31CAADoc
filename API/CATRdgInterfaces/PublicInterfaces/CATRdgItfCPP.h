/* -*-c++-*-*/
// COPYRIGHT DASSAULT SYSTEMES 2003
/** @CAA2Required */
//***********************************************************************
//* DON'T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME *
//***********************************************************************
#ifndef CATRdgItfCPP_h
#define CATRdgItfCPP_h

#ifdef _WINDOWS_SOURCE
  #if defined(__CATRdgItfCPP)
    #define ExportedByCATRdgItfCPP __declspec(dllexport)
  #else
    #define ExportedByCATRdgItfCPP __declspec(dllimport)
  #endif
#else
  #define ExportedByCATRdgItfCPP
#endif

#endif

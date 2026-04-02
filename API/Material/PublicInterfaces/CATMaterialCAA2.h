/* -*-c++-*-*/
// COPYRIGHT DASSAULT SYSTEMES 2000
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
//======================================================================
// Class CATMaterialCAA2:
// Definition of macros.
//======================================================================
// Usage Note:
//  na.
//======================================================================
// CREATED  04 Jul 2000 BY AST
// MODIFIED xx xxx xxxx BY xxx
//          modification reason
//======================================================================
#ifndef CATMaterialCAA2_h
#define CATMaterialCAA2_h


#ifdef  _WINDOWS_SOURCE
  #ifdef  __CATMaterialCAA2
    #define ExportedByCATMaterialCAA2     __declspec(dllexport)
  #else
    #define ExportedByCATMaterialCAA2     __declspec(dllimport)
  #endif
#else
  #define ExportedByCATMaterialCAA2
#endif

#endif

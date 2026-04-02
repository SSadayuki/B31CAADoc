// COPYRIGHT DASSAULT SYSTEMES 2000
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
//======================================================================
// ENOCheckProject.h
//======================================================================
// Usage notes:
// 
// Ce service permet de declencher une zone de code en mode run-time
// en fonction :
//    * Du niveau de CATIA ( CATIAV5R3, .... )
//    * D une variable d environnement
//
// L interet est de pouvoir demarrer un projet avant le split de sources
// 
// Exemple d utilisation:
// if(CheckV5R5("mon projet"))
// {
//     ici le code V5R5
// }
// else
// {
//     ici le code V5R4
// }
// ou
// Exemple d utilisation:
// if(CheckV5R6("mon projet"))
// {
//     ici le code V5R6
// }
// else
// {
//     ici le code V5R5
// }
//======================================================================
#ifndef ENOCheckProject_H
#define ENOCheckProject_H

// System
#include "CATBooleanDef.h"
#include "CATIAV5Level.h"
#include "CATLib.h"

inline boolean InternalCheck(char * Project)
{
  if (!Project) return FALSE;
  const char* newDlg=CATGetEnv(Project) ;
  if (newDlg!=NULL) return TRUE;
  return FALSE;   
}

#ifdef CATIAV5R5
#define CheckV5R5(Project)   TRUE
#else
#define CheckV5R5(Project)   InternalCheck(Project)
#endif

#ifdef CATIAV5R6
#define CheckV5R6(Project)   TRUE
#else
#define CheckV5R6(Project)   InternalCheck(Project)
#endif

#ifdef CATIAV5R7
#define CheckV5R7(Project)   TRUE
#else
#define CheckV5R7(Project)   InternalCheck(Project)
#endif

#ifdef CATIAV5R8
#define CheckV5R8(Project)   TRUE
#else
#define CheckV5R8(Project)   InternalCheck(Project)
#endif

#ifdef CATIAV5R9
#define CheckV5R9(Project)   TRUE
#else
#define CheckV5R9(Project)   InternalCheck(Project)
#endif

// added JNI 2/10/2001 : this is used to control the behaviour of VPMServicesSDM/ENOVContExt.m/src/ENOVSpecServices.cpp
// in a R7/R8 splitted fashion, even though that FW is not split.
//#define ENOVContExt_VersionR8 0
// substitute the above line by the following one when getting ready to deliver data structure changes in the ENOProcessActivities schema.
#define ENOVContExt_VersionR8 1


// JNI 6/6/2
// This will be turned on in R10-R11 to enable the multi-user code.
//#ifdef CATIAV5R13
//#define ENOVIA_MULTI_USER
//#endif

// We want this build option turned on as soon as R12 begins. In V5R12 multi-user behaviour will be the default behaviour.
//#ifdef CATIAV5R12
//#define ENOVIA_MULTI_USER
//#endif

// Note that it does not make sense to activate this if SDAI_MULTI_TRANS_BCC is not turned on in SDMRuntime/ProtectedInterfaces/KS0SIMPL.h

#endif

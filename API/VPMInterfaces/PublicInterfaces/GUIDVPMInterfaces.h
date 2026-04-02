//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
//=============================================================================
#ifdef   _WINDOWS_SOURCE
#ifdef   __GUIDVPMInterfaces
#define  ExportedByGUIDVPMInterfaces   __declspec(dllexport)
#else
#define  ExportedByGUIDVPMInterfaces   __declspec(dllimport)
#endif
#else
#define  ExportedByGUIDVPMInterfaces
#endif


#ifndef _include_GUIDVPMInterfaces_H
#define _include_GUIDVPMInterfaces_H

#include "CATIAV5Level.h"

#ifdef CATIAV5R12
#define _newVPMIListOfAttributes_available_ 1
#endif

#endif

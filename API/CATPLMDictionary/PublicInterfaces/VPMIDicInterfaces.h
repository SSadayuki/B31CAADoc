//=============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2001
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
//=============================================================================
#ifdef   _WINDOWS_SOURCE
#ifdef   __VPMIDicInterfaces
#define  ExportedByVPMIDicInterfaces   __declspec(dllexport)
#else
#define  ExportedByVPMIDicInterfaces   __declspec(dllimport)
#endif
#else
#define  ExportedByVPMIDicInterfaces
#endif


#ifndef _include_VPMIDicInterfaces_H
#define _include_VPMIDicInterfaces_H

#include "CATIAV5Level.h"

#ifdef CATIAV5R12
#define _newVPMIListOfAttributes_available_ 1
#endif

#endif

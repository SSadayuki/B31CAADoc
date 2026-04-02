
#ifndef __FeatureModelerExt_h__
#define __FeatureModelerExt_h__


// COPYRIGHT DASSAULT SYSTEMES 2010

/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************


#ifdef  __FeatureModelerExt

#define ExportedByFeatureModelerExt DSYExport
#else
#define ExportedByFeatureModelerExt DSYImport
#endif
#include "DSYExport.h"


#endif // __FeatureModelerExt_h__

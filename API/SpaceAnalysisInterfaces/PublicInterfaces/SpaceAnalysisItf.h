// COPYRIGHT DASSAULT SYSTEMES 2000
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/

#include "CATIAV5Level.h"
//#define CATIAV5R9

#ifdef _WINDOWS_SOURCE
#ifdef __SpaceAnalysisItf
#define ExportedBySpaceAnalysisItf __declspec(dllexport)
#else
#define ExportedBySpaceAnalysisItf __declspec(dllimport)
#endif
#else
#define ExportedBySpaceAnalysisItf
#endif

// COPYRIGHT DASSAULT SYSTEMES 2003
/** @CAA2Required */
/*---------------------------------------------------------------------*/
/* DON'T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/*---------------------------------------------------------------------*/
#ifndef V5ToV4Tools_h
#define V5ToV4Tools_h

#ifdef __V5ToV4Tools

//#ifdef __YP0TOPO
#define ExportedByV5ToV4Tools DSYExport
#else
#define ExportedByV5ToV4Tools DSYImport
#endif
#include "DSYExport.h"

#ifndef NULL
#define NULL 0
#endif
#ifndef FALSE
#define FALSE 0
#endif
#ifndef TRUE
#define TRUE 1
#endif
#endif

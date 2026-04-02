#ifndef JS0STDLIB_INCLUDE
#define JS0STDLIB_INCLUDE
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/


/* COPYRIGHT DASSAULT SYSTEMES 2002 */

#ifdef _WINDOWS_SOURCE

    #if defined(__JS0STDLIB)
	#define ExportedByJS0STDLIB __declspec (dllexport)
    #else
        #define ExportedByJS0STDLIB __declspec (dllimport)
    #endif

#else

    #define ExportedByJS0STDLIB

#endif

#endif

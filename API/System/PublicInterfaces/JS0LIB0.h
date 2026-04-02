#ifndef JS0LIB0_INCLUDE
#define JS0LIB0_INCLUDE


/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/
// COPYRIGHT DASSAULT SYSTEMES 2000

#ifdef _WINDOWS_SOURCE

    #ifdef __JS0LIB0
	#define ExportedByJS0LIB0 __declspec (dllexport)
    #else
        #define ExportedByJS0LIB0 __declspec (dllimport)
    #endif

#else

    #define ExportedByJS0LIB0

#endif

#endif

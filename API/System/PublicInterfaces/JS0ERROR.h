#ifndef JS0ERROR_INCLUDE
#define JS0ERROR_INCLUDE
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/


// COPYRIGHT DASSAULT SYSTEMES 2000

#ifdef _WINDOWS_SOURCE

    #ifdef __JS0ERROR
	#define ExportedByJS0ERROR __declspec (dllexport)
    #else
        #define ExportedByJS0ERROR __declspec (dllimport)
    #endif

#else

    #define ExportedByJS0ERROR

#endif

#endif

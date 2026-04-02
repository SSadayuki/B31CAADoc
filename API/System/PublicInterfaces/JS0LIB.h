#ifndef JS0LIB_INCLUDE
#define JS0LIB_INCLUDE
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/


/* COPYRIGHT DASSAULT SYSTEMES 2000 */

#ifndef CATSYSV5_SYSTEMCUT
#ifdef _WINDOWS_SOURCE

    #if (defined( __JS0LIB0) || defined(__JS0LIBSTDLIB))
	#define ExportedByJS0LIB __declspec (dllexport)
    #else
        #define ExportedByJS0LIB __declspec (dllimport)
    #endif

#else

    #define ExportedByJS0LIB

#endif

#else   

#ifdef _WINDOWS_SOURCE

    #if defined( __JS0LIB0) 
	#define ExportedByJS0LIB __declspec (dllexport)
    #else
        #define ExportedByJS0LIB __declspec (dllimport)
    #endif

#else

    #define ExportedByJS0LIB

#endif

#endif

#endif

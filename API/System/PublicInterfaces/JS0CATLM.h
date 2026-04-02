#ifndef JS0CATLM_INCLUDE
#define JS0CATLM_INCLUDE
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/


// COPYRIGHT DASSAULT SYSTEMES 2000

#ifdef _WINDOWS_SOURCE

    #ifdef __JS0CATLM
	#define ExportedByJS0CATLM __declspec (dllexport)
    #else
        #define ExportedByJS0CATLM __declspec (dllimport)
    #endif

#else

    #define ExportedByJS0CATLM

#endif

#endif

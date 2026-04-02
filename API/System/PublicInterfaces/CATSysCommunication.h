#ifndef CATSysCommunication_H
#define CATSysCommunication_H
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/


// COPYRIGHT DASSAULT SYSTEMES 2000

#ifdef _WINDOWS_SOURCE

    #ifdef __CATSysCommunication
	#define ExportedByCATSysCommunication __declspec (dllexport)
    #else
        #define ExportedByCATSysCommunication __declspec (dllimport)
    #endif

#else

    #define ExportedByCATSysCommunication

#endif

#endif

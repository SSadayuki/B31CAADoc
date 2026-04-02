
// COPYRIGHT DASSAULT SYSTEMES 2000
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/

#ifndef __CATAfrInterfaces_h
#define __CATAfrInterfaces_h
#  ifdef _WINDOWS_SOURCE
#    ifdef __CATAfrInterfaces
#      define ExportedByCATAfrInterfaces __declspec(dllexport)
#    else
#      define ExportedByCATAfrInterfaces __declspec(dllimport)
#    endif
#  else
#    define ExportedByCATAfrInterfaces
#  endif
#endif//__CATAfrInterfaces_h

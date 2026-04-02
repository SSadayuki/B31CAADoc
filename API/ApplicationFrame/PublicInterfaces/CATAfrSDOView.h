
// COPYRIGHT DASSAULT SYSTEMES 2000
/** @CAA2Required */
/**********************************************************************/
/* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME */
/**********************************************************************/

#ifndef __CATAfrSDOView_h
#  define __CATAfrSDOView_h
#  ifdef _WINDOWS_SOURCE
#    ifdef __CATAfrSDOView
#      define ExportedByCATAfrSDOView __declspec(dllexport)
#    else
#      define ExportedByCATAfrSDOView __declspec(dllimport)
#    endif
#  else
#    define ExportedByCATAfrSDOView
#  endif
#endif

/** @CAA2Required */
/*---------------------------------------------------------------------*/
/* DON'T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS  */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPPEAR AT ANY TIME */
/*---------------------------------------------------------------------*/

//----------------------------------------------------------------------------
//
// CATIA Version 5 Release R201 Framework InterferenceInterfaces
// Copyright Dassault Systemes 2005
//----------------------------------------------------------------------------
//
// Creation: 
// ---------
//           2005 - DBS
//
//----------------------------------------------------------------------------

#ifdef  _WINDOWS_SOURCE
#ifdef  __CATInterferenceInterfaces
#define ExportedByCATInterferenceInterfaces __declspec(dllexport)
#else
#define ExportedByCATInterferenceInterfaces __declspec(dllimport)
#endif
#else
#define ExportedByCATInterferenceInterfaces
#endif

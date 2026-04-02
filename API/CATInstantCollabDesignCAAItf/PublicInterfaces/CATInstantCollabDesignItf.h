// COPYRIGHT DASSAULT SYSTEMES 2003
/** @CAA2Required */
/***********************************************************************/
/* DO NOT DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS */
/* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME. */
/***********************************************************************/
#ifdef  _WINDOWS_SOURCE
#ifdef  __CATInstantCollabDesignItf
#define ExportedByCATInstantCollabDesignItf     __declspec(dllexport)
#else
#define ExportedByCATInstantCollabDesignItf     __declspec(dllimport)
#endif
#else
#define ExportedByCATInstantCollabDesignItf
#endif

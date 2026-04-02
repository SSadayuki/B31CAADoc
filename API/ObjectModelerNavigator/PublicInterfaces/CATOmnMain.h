// COPYRIGHT DASSAULT SYSTEMES 2008
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************

#ifdef	_WINDOWS_SOURCE
#ifdef	__CATOmnMain
#define	ExportedByCATOmnMain	__declspec(dllexport)
#else
#define	ExportedByCATOmnMain	__declspec(dllimport)
#endif
#else
#define	ExportedByCATOmnMain
#endif

/** @nodoc */
typedef unsigned int CATOMNID_t;

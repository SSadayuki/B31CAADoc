// COPYRIGHT DASSAULT SYSTEMES 2002
/** @CAA2Required */
#ifdef	_WINDOWS_SOURCE
#ifdef	__CATOmbWarmStart
#define	ExportedByCATOmbWarmStart	__declspec(dllexport)
#else
#define	ExportedByCATOmbWarmStart	__declspec(dllimport)
#endif
#else
#define	ExportedByCATOmbWarmStart
#endif

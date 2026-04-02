// COPYRIGHT Dassault Systemes 2010
//===================================================================
/** @CAA2Required */
#ifdef	_WINDOWS_SOURCE
#ifdef	__SP0BBOSM
#define	ExportedBySP0BBOSM	__declspec(dllexport)
#else
#define	ExportedBySP0BBOSM	__declspec(dllimport)
#endif
#else
#define	ExportedBySP0BBOSM
#endif

/** 
 * @CAA2Level L0
 * @CAA2Usage U2 
 */

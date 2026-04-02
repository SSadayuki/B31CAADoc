// COPYRIGHT DASSAULT SYSTEMES 2000
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************

#ifndef CP0CLIP_H
#define CP0CLIP_H

//
#ifndef ExportedByCP0CLIP

#ifdef _WINDOWS_SOURCE

#ifdef __CP0CLIP
#define ExportedByCP0CLIP __declspec(dllexport)
#else
#define ExportedByCP0CLIP __declspec(dllimport)
#endif

#else
#define ExportedByCP0CLIP
#endif

#endif
//

#endif


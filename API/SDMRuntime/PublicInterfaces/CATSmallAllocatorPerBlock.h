#ifndef  CATSmallAllocatorPerBlock_h
#define  CATSmallAllocatorPerBlock_h
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************
// CPI
// Version 1 Release 0
// Copyright DASSAULT SYSTEMES 2001
// *****************************************************************
//
//   Identification :
//   ---------------
//
//      RESPONSIBLE :  Jean-Luc MEDIONI
//      FUNCTION    :  Performance 
//      USE         :  ENOVIA V5 Life Cycle Application
//
// *****************************************************************
//
//   Description :
//   ------------
//
//    Allocator enabling allocation per blocks
//
// *****************************************************************
//
//   Remarks :
//   ---------
//
//   
//
// ***************************************************************
//
//   Story :
//   -------
//
//   Revision 1.0  15/10/2001   VPM : Introduce for V5R7 SDM optimization
//
// ****************************************************************
//
// INSIDE class:
// -------------
//
//
//
// ****************************************************************
// Abstract class    : No
// Template code     : No
// Ilined   Function : No
// ****************************************************************
//bcc not needed anymore it is in the implementation
//#include <stdlib.h>
//#include <string.h>
//#include <stdio.h>

// JNI 03/2003 global option to get rid of specialized allocator at build-time
// i'm looking for a bug in it, that purify does not see.
//#define NO_CATSmallAllocatorPerBlock 1

#ifndef CATSmallAllocatorPerBlockDeclare
#ifdef NO_CATSmallAllocatorPerBlock
#define CATSmallAllocatorPerBlockDeclare public:
#else

struct BlockHeader;

#define CATSmallAllocatorPerBlockDeclare                                \
/* --- Declaration to support allocation per block                      \
   --- * Overload new and delete operator for this class */             \
                                                                        \
public:                                                                 \
   static void *operator new(size_t)    ;                               \
   static void  operator delete(void * /*, size_t nSize*/) ;            \
   /* --- * Static class member to manage access to blocks */           \
                                                                        \
public:                                                                 \
   static void ReleaseFreeBlocksNow();                                  \
                                                                        \
   static float estimateFreeCells(unsigned int& total, unsigned int& freed); \
                                                                        \
   /* --- * Internal methods to manage blocks */                        \
                                                                        \
public:                                                                 \
   static void PrintBlockContent();                                     \

#endif
#endif
#endif

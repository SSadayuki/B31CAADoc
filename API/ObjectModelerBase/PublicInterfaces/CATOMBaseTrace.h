/* -*-c++-*- */
// COPYRIGHT DASSAULT SYSTEMES 2000
/** @CAA2Required */
//**********************************************************************
//* DON T DIRECTLY INCLUDE THIS HEADER IN YOUR APPLICATION CODE. IT IS *
//* REQUIRED TO BUILD CAA APPLICATIONS BUT IT MAY DISAPEAR AT ANY TIME *
//**********************************************************************

#ifndef OMBASE_TRACE_H_
#define OMBASE_TRACE_H_

#include "CATTraMacro.h"
#include "AD0XXBAS.h"
#include "CATTrace.h"

// ----------------------------------------------------------------------------
//                     Pour les traces du framework ObjectModelerBase
//
//      level =  10 --> CastTo des handlers
//               11 --> Construction/Effacement TIE, Extension, Implementation
//               12 --> AddRef/Release et Compteurs de references
//               13 --> Construction/Effacement Handlers
// ----------------------------------------------------------------------------

extern ExportedByAD0XXBAS int* OMBaseTrace_Ptr ;
extern ExportedByAD0XXBAS int  OMBaseTrace_Desc ;
//extern ExportedByAD0XXBAS int  OMBaseTrace_Activated ;



#define OMBASE_TRACE1(level, message)                             \
if ( *OMBaseTrace_Ptr )                                           \
  {traprint(  OMBaseTrace_Desc, level , message ) ;               \
  traflush(  OMBaseTrace_Desc, "STDOUT", 50 ) ;}                  \

#define OMBASE_TRACE2(level, message, parm1 )                     \
if ( *OMBaseTrace_Ptr )                                           \
  {traprint(  OMBaseTrace_Desc, level , message, parm1 ) ;        \
  traflush(  OMBaseTrace_Desc, "STDOUT", 50 ) ;}      

#define OMBASE_TRACE3(level, message, parm1, parm2 )              \
if ( *OMBaseTrace_Ptr )                                           \
  {traprint(  OMBaseTrace_Desc, level , message, parm1, parm2 ) ; \
  traflush(  OMBaseTrace_Desc, "STDOUT", 50 ) ;}      

// Traces for undo/redo
extern ExportedByAD0XXBAS CATTrace UndoTracer ;

/* Traces for Load/Unload
   Level 2 : OMB macro traces (document removal etc)
         3 : Command level traces (e.g. Edit/Unload command)
         4 : OMB detailed traces
	 5 : SpecsModeler traces
*/
extern ExportedByAD0XXBAS CATTrace UnloadTracer ;

#endif

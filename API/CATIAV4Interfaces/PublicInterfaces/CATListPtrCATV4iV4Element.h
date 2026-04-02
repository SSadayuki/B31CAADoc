/*-*-c++-*-*/
// COPYRIGHT DASSAULT SYSTEMES 2009

/**
 * @CAA2Level L1 
 * @CAA2Usage U1 
 */
#ifndef CATListPtrCATV4iV4Element_h_
#define CATListPtrCATV4iV4Element_h_
class CATV4iV4Element;
//
// clean previous functions requests
#include <CATLISTP_Clean.h>
//
// require needed functions
#define CATLISTP_Append
#define CATLISTP_Size
#define CATLISTP_RemoveValue
#define CATLISTP_RemoveAll
// get macros
#include <CATLISTP_Declare.h>

#include "ExportedByCATV4iTubingServices.h"
#undef  CATCOLLEC_ExportedBy
#define CATCOLLEC_ExportedBy    ExportedByCATV4iTubingServices
//
//
// generate interface of collection class
// (functions declarations)
CATLISTP_DECLARE( CATV4iV4Element )
#endif

#ifndef CATICciButtSpliceZone_H
#define CATICciButtSpliceZone_H
//===================================================================
// COPYRIGHT Dassault Systemes 2013
//===================================================================
// CATICciButtSpliceZone.cpp
// Header definition of class CATICciButtSpliceZone
//===================================================================
//
// Usage notes:
//
//===================================================================

/**
  * @CAA2Level L0
  * @CAA2Usage U0
  */
#include "CAACompositesItf.h"
#include "CATICciSpliceZone.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCAACompositesItf  IID IID_CATICciButtSpliceZone ;
#else
extern "C" const IID  IID IID_CATICciButtSpliceZone ;
#endif

/**
* Interface to ButtSpliceZone Object.
* <br><b>Role</b>: ButtSpliceZone object
* @href CATICciSpliceZone, CATICciCompositesAdditionalDataFactory
*/

class ExportedByCAACompositesItf CATICciButtSpliceZone: public CATICciSpliceZone
{
CATDeclareInterface;

public:

};

//-----------------------------------------------------------------------
CATDeclareHandler( CATICciButtSpliceZone, CATICciSpliceZone );

#endif

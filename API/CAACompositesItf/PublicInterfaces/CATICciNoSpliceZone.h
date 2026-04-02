#ifndef CATICciNoSpliceZone_H
#define CATICciNoSpliceZone_H
//===================================================================
// COPYRIGHT Dassault Systemes 2013
//===================================================================
// CATICciNoSpliceZone.cpp
// Header definition of class CATICciNoSpliceZone
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
#include "CATBaseUnknown.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCAACompositesItf  IID IID_CATICciNoSpliceZone ;
#else
extern "C" const IID IID_CATICciNoSpliceZone ;
#endif

/**
* Interface to NoSpliceZone Object.
* <br><b>Role</b>: NoSpliceZone object
* @href CATICciSpliceZone, CATICciCompositesAdditionalDataFactory
*/
class ExportedByCAACompositesItf CATICciNoSpliceZone : public CATICciSpliceZone
{
CATDeclareInterface;

public:
	
};

//-----------------------------------------------------------------------
CATDeclareHandler( CATICciNoSpliceZone, CATICciSpliceZone );

#endif

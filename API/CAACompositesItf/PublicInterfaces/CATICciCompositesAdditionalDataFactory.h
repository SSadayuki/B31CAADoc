#ifndef CATICciCompositesAdditionalDataFactory_H
#define CATICciCompositesAdditionalDataFactory_H
//===================================================================
// COPYRIGHT Dassault Systemes 2013
//===================================================================
// CATICciCompositesAdditionalDataFactory.cpp
// Header definition of class CATICciCompositesAdditionalDataFactory
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
#include "CATBaseUnknown.h"
#include "CATICciNoSpliceZone.h"
#include "CATICciButtSpliceZone.h"
#include "CATUnicodeString.h"


#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCAACompositesItf  IID IID_CATICciCompositesAdditionalDataFactory ;
#else
extern "C" const IID IID_CATICciCompositesAdditionalDataFactory ;
#endif

/**
 * Factory of additional features of Composites workshop.
 * <b>Role</b>: Creation of additional Composites features inside current part container.
 * <p> Note: If the creation fails, the methods return NULL_var.
 */

class ExportedByCAACompositesItf CATICciCompositesAdditionalDataFactory : public CATBaseUnknown
{
CATDeclareInterface;

public:
    
   /**
   * Creates the Butt Splice Zone under Butt Splice Zone Group.
   * @param oButtSpliceZone.
   *    Butt Splice Zone ( Group is created , if not pre-exist) 
   * @href CATICciSpliceZoneGroup,CATICciSpliceZone,CATICciButtSpliceZone
   */
   virtual HRESULT CreateButtSpliceZone(CATICciButtSpliceZone_var & oButtSpliceZone) =0;

   /**
   * Creates the No Splice Zone under No Splice Zone Group.
   * @param oNoSpliceZone.
   *    No Splice Zone ( Group is created , if not pre-exist) 
   * @href CATICciSpliceZoneGroup,CATICciSpliceZone,CATICciNoSpliceZone
   */
   virtual HRESULT CreateNoSpliceZone(CATICciNoSpliceZone_var & oNoSpliceZone) =0;
};

//-----------------------------------------------------------------------
CATDeclareHandler( CATICciCompositesAdditionalDataFactory, CATBaseUnknown );

#endif

#ifndef CATICciManufacturingStacking_H
#define CATICciManufacturingStacking_H

/**
  * @CAA2Level L0
  * @CAA2Usage U0
  */

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2005
//==============================================================================
//
// CATICciManufacturingStacking :
//   Interface to retreive information from manufacturing stacking.
//   Interface tied to stacking object and valid only for manufacturing stacking
//
//==============================================================================
// Usage Notes :
//
//------------------------------------------------------------------------------
//  Inheritance : CATICciManufacturingStacking (CAACompositesItf FW)
//                  CATBaseUnknown        (System FW)
//==============================================================================

#include "CAACompositesItf.h"

#include "CATBaseUnknown.h"
#include "CATTime.h"

class CATIDocId;

#ifndef LOCAL_DEFINITION_FOR_IID
extern  ExportedByCAACompositesItf IID IID_CATICciManufacturingStacking;
#else
extern "C" const IID IID_CATICciManufacturingStacking;
#endif

/**
 * Interface to manufacturing stacking.
 * <b>Role</b>: allow to retreive information from manufacturing stacking.
 */
class ExportedByCAACompositesItf CATICciManufacturingStacking : public CATBaseUnknown
{
   CATDeclareInterface;

public :

   /**
   * Get engineering document from manufacturing stacking.
   * @param oEngDocId
   *   Document Identifier of the engineering document.
   */
   virtual HRESULT GetEngineeringDocument(CATIDocId ** oEngDocId) = 0;

   /**
   * Gets the last synchronization time of this manufacturing stacking.
   * @param oLastSyncTime
   *   Last synchronization time.
   */
   virtual HRESULT GetSynchronizationTime(CATTime & oLastSyncTime) = 0;
};

CATDeclareHandler(CATICciManufacturingStacking, CATBaseUnknown);

#endif

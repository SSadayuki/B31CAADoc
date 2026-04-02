#ifndef CATICciStacking_H
#define CATICciStacking_H

/**
  * @CAA2Level L0
  * @CAA2Usage U3
  */

//==============================================================================
// COPYRIGHT DASSAULT SYSTEMES 2004
//==============================================================================
//
// CATICciStacking :
//   Interface to manage composites stacking node.
//
//==============================================================================
// Usage Notes :
//
//------------------------------------------------------------------------------
//  Inheritance : CATICciStacking (CAACompositesItf FW)
//                  CATBaseUnknown        (System FW)
//==============================================================================

#include "CAACompositesItf.h"

#include "CATBaseUnknown.h"
#include "CATLISTV_CATBaseUnknown.h"

#ifndef LOCAL_DEFINITION_FOR_IID
extern  ExportedByCAACompositesItf IID IID_CATICciStacking;
#else
extern "C" const IID IID_CATICciStacking;
#endif
 
/**
 * Interface to Stacking.
 * <b>Role</b>: Allows to manage a Composites Stacking feature, father of plies groups and
 * sequences.
 * @see CATICciPliesGroup, CATICciSequence
 */
class ExportedByCAACompositesItf CATICciStacking : public CATBaseUnknown
{
    CATDeclareInterface;

public :
   
   /**
   * Gets the list of group of plies and/or sequences that are immediately under stacking node.
   * @param oListOfElements
   *   The list of plies groups (CATICciPliesGroup) and/or sequences (CATICciSequence).
   */
   virtual HRESULT GetElementsUnderStacking(CATLISTV(CATBaseUnknown_var)& oListOfElements) = 0;


   /**
   * Sets the order of the elements immediately under the stacking node i.e plies groups and/or sequences
   * <br> Note: All elements that are under the stacking (see GetElementsUnderStacking) must be in the list
   * @param iListOfElements
   *   The list of plies groups (CATICciPliesGroup) and/or sequences (CATICciSequence) in the desired order
   */
   virtual HRESULT ReorderElementsUnderStacking( const CATLISTV(CATBaseUnknown_var)& iListOfElements ) = 0;
};

CATDeclareHandler(CATICciStacking, CATBaseUnknown);

#endif

// COPYRIGHT Dassault Systemes 2000
#ifndef CATISchSelectMoveSelector_H
#define CATISchSelectMoveSelector_H

// COPYRIGHT DASSAULT SYSTEMES 2000
/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#include "CATSchItfCPP.h"
#include "CATBaseUnknown.h"

class CATPathElement;

/**
 * Interface to manage direct manipulation of schematic objects.
 * <b>Role</b>: To decide which object to used for direct manipulation.
 */
class ExportedByCATSchItfCPP CATISchSelectMoveSelector: public CATBaseUnknown
{
  CATDeclareInterface;

  public:
  /**
   * Return the object to be used for direct manipulation.
   * @param iSelectedElement
   *   CATPathElement containing the object to be direct manipulated.
   * @param oManipulatedElement
   *   The object to be used for direct manipulation.
   */
  virtual HRESULT GetManipulatedElement (CATPathElement * iSelectedElement,
    CATBaseUnknown ** oManipulatedElement) = 0;
};

#ifndef LOCAL_DEFINITION_FOR_IID
extern IID ExportedByCATSchItfCPP IID_CATISchSelectMoveSelector;
#else
extern "C" const IID IID_CATISchSelectMoveSelector;
#endif

CATDeclareHandler(CATISchSelectMoveSelector, CATBaseUnknown);
//------------------------------------------------------------------

#endif

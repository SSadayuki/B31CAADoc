#ifndef CATISchCatalogComponent_H
#define CATISchCatalogComponent_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

class CATISchGRRComp;
class CATISchCompGroupExt;

extern "C" const IID IID_CATISchCatalogComponent ;

/**
 * Interface to manage schematic catalog component. 
 * <b>Role</b>: To find schematic object references, 
 * make local references and create
 * instances into the current document, given a catalog component.
 */
class CATISchCatalogComponent : public IUnknown
{
  public:   
  
  /**
  * Check to see if it is OK to be dropped to the current document.
  * @param oBYes
  *   If TRUE, then it is OK to be dropped.
  * @param oPointedToComp
  *   Graphical representation of a component pointed-to by the
  *   catalog description 
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT QueryDropAbility (CATBoolean *oBYes,
    CATISchGRRComp **oPointedToGRRComp) = 0;

  /**
  * Check to see if it is OK to be dropped a component group 
  * to the current document.
  * @param oBYes
  *   If TRUE, then it is OK to be dropped.
  * @param oPointedToGroup
  *   Component group extension pointed-to by the catalog description
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT QueryDropCompGroupAbility (CATBoolean *oBYes,
    CATISchCompGroupExt **oPointedToGroup) = 0;
};
#endif

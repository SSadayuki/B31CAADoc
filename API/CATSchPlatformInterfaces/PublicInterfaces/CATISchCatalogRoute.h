#ifndef CATISchCatalogRoute_H
#define CATISchCatalogRoute_H

//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

class CATISchGRR;
class CATISchRoute;

extern "C" const IID IID_CATISchCatalogRoute ;

/**
 * Interface to manage schematic route catalog. 
 * <b>Role</b>: To find schematic object references, 
 * make local references and create
 * instances into the current document, given a route catalog.
 */
class CATISchCatalogRoute : public IUnknown
{
  public:   
  
  /**
  * Check to see if it is OK to be dropped to the current document.
  * @param oBYes
  *   If TRUE, then it is OK to be dropped.
  * @param oRouteRef
  *   Route reference.
  * @param oPointedToGRR
  *   Graphical representation of a route pointed-to by the catalog component
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
    CATISchRoute **oRouteRef, CATISchGRR **oPointedToGRR) = 0;

};
#endif

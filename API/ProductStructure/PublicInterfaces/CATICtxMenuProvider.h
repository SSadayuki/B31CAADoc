#ifndef CATICtxMenuProvider_H
#define CATICtxMenuProvider_H
// COPYRIGHT DASSAULT SYSTEMES 2000
//===================================================================
//
/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#include "CATPrdIntegration.h"
#include "CATBaseUnknown.h"
#include "CATCmdContainer.h"

extern ExportedByCATPrdIntegration IID IID_CATICtxMenuProvider ;

/**
 * Interface used to retrieve the contextual menu defined for an extended object.
 * @see CATIUIActivate
 */

class ExportedByCATPrdIntegration CATICtxMenuProvider: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

      /**
	    * Returns the contextual menu defined for the extended object.
	    * @param iObj
	    *    The extended object.
	    * @param oCtxMenu
	    *    The contextual menu for the extended object.
	    */
	  virtual HRESULT GetContextualMenu(CATBaseUnknown * iObj, CATCmdContainer* oCtxMenu) = 0;

};

//------------------------------------------------------------------

CATDeclareHandler( CATICtxMenuProvider, CATBaseUnknown );

#endif

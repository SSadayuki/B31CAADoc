#ifndef CATISchAppRouteAlternateGraphic_H
#define CATISchAppRouteAlternateGraphic_H

//	COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATEASchAppRouteAlternateGraphic
 */

// System
#include "IUnknown.h"

// CATSchPlatformInterfaces
#include "CATSchGeneralEnum.h"


extern "C" const IID IID_CATISchAppRouteAlternateGraphic ;

/**
 * Interface to manage the graphic style of an application 
 * route under the alternate display mode.
 * Applications must derive implementation of this interface 
 * from the adapter class CATEASchAppRouteAlternateGraphic.
 * <b>Role</b>: Defines the alternate graphic style for a route.
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */

class CATISchAppRouteAlternateGraphic : public IUnknown
{
  public:  

  /**
  * Defines the alternate graphic style used for a route.
  * @param oEGraphicStyle
  *   Enum describing the graphic style to use.
  *   (see CATSchGeneralEnum.h for descriptions)
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
  virtual HRESULT AppGetAssemblyGraphicStyle (CATSchRouteAlternateGraphicStyle *oEGraphicStyle) = 0;
};
#endif

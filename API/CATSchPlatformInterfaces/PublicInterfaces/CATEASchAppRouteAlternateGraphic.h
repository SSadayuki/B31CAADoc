#ifndef CATEASchAppRouteAlternateGraphic_H
#define CATEASchAppRouteAlternateGraphic_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

// System
#include "CATBaseUnknown.h"
#include "CATSchItfCPP.h"

#include "CATSchGeneralEnum.h"

/**
 * Super class to derive implementation for interface CATISchAppRouteAlternateGraphic.
 * <b>Role</b>: Adaptor
 */

class ExportedByCATSchItfCPP CATEASchAppRouteAlternateGraphic : public CATBaseUnknown
{
  public:  

  CATDeclareClass;

  /**
   * Constructs an empty CATEASchAppRouteAlternateGraphic.
   */
  CATEASchAppRouteAlternateGraphic();
  virtual ~CATEASchAppRouteAlternateGraphic();

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
  virtual HRESULT AppGetAssemblyGraphicStyle (CATSchRouteAlternateGraphicStyle *oEGraphicStyle); 

  private:
  // do not implement
  CATEASchAppRouteAlternateGraphic (CATEASchAppRouteAlternateGraphic &);
  CATEASchAppRouteAlternateGraphic& operator=(CATEASchAppRouteAlternateGraphic&);

};

#endif

#ifndef CATISchGRRRouteAlternate_H
#define CATISchGRRRouteAlternate_H

//	COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"

// CATSchPlatformInterfaces
#include "CATSchGeneralEnum.h"


extern "C" const IID IID_CATISchGRRRouteAlternate ;

/**
 * Interface to manage a Schematic route alternate graphic object. 
 * <b>Role</b>: Defines Schematic route alternate graphic object.
 */
class CATISchGRRRouteAlternate : public IUnknown
{
  public:  
  
  /**
  * Returns the graphicl style of the alternate graphic object.
  * @param oEGraphicStyle
  *   Enum describing the graphic style of the object.
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
  virtual HRESULT GetAlternateStyle (CATSchRouteAlternateGraphicStyle *oEGraphicStyle) = 0;

};
#endif

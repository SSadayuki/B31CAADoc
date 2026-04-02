// COPYRIGHT DASSAULT SYSTEMES 2009

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#ifndef CATIMmiUseCharacteristicPlanarSubElement_H
#define CATIMmiUseCharacteristicPlanarSubElement_H

#include "CATMecModUseItf.h"
#include "CATBaseUnknown.h"

class CATIMmiUseRSur_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMecModUseItf IID IID_CATIMmiUseCharacteristicPlanarSubElement;
#else
extern "C" const IID IID_CATIMmiUseCharacteristicPlanarSubElement ;
#endif

/**
 * Interface to get the selecting object associated with a planar subelement.
 */
class ExportedByCATMecModUseItf CATIMmiUseCharacteristicPlanarSubElement: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

 /**
 * Gets the surface type selecting object associated with the planar type selecting object.
 * @param oRsur [out]
 * The surface type selecting object.
 * @return
 *   <dl>
 *   <dt><tt>S_OK</tt>          <dd>Successful.
 *   <dt><tt>E_FAIL</tt>        <dd>an error occured.
 *   </dl>
 */
  virtual HRESULT GetRSur(CATIMmiUseRSur_var& oRsur) const = 0;

};
CATDeclareHandler(CATIMmiUseCharacteristicPlanarSubElement,CATBaseUnknown);

//------------------------------------------------------------------

#endif

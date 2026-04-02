// COPYRIGHT DASSAULT SYSTEMES 2009

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

#ifndef CATIMmiUseCharacteristicExtremity_H
#define CATIMmiUseCharacteristicExtremity_H

#include "CATMecModUseItf.h"
#include "CATBaseUnknown.h"

class CATIMmiUseRSur_var;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByCATMecModUseItf IID IID_CATIMmiUseCharacteristicExtremity;
#else
extern "C" const IID IID_CATIMmiUseCharacteristicExtremity ;
#endif

/**
 * Interface to get the selecting object associated with an extremity.
 */

class ExportedByCATMecModUseItf CATIMmiUseCharacteristicExtremity: public CATBaseUnknown
{
  CATDeclareInterface;

  public:

 /**
 * Gets the surface type selecting object associated with the extremity type selecting object.
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
CATDeclareHandler(CATIMmiUseCharacteristicExtremity,CATBaseUnknown);

//------------------------------------------------------------------

#endif

#ifndef CATIPspLightBend_H
#define CATIPspLightBend_H

//	COPYRIGHT DASSAULT SYSTEMES 2003
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

// System
#include "IUnknown.h"
#include "CATListOfDouble.h"

extern "C" const IID IID_CATIPspLightBend ;

/**
 * Interface to manage light bendables.
 * <b>Role</b>: To access light bendable data.
 */

class CATIPspLightBend : public IUnknown
{
  public:  
  
  /**
  * Retrieve the bend radii.
  * @param oListOfBendRadius
  *   List of bend radius.
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
  virtual HRESULT GetBendData (CATListOfDouble *&oListOfBendRadius) = 0;

  /**
  * Set the bend radii.
  * @param iListOfBendRadius
  *   List of bend radius.
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
  virtual HRESULT SetBendData (const CATListOfDouble *iListOfBendRadius) = 0;

};
#endif

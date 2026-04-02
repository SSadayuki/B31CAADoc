#ifndef CATEASchAppCntrShow_H
#define CATEASchAppCntrShow_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

// System
#include "CATBaseUnknown.h"
#include "CATSchItfCPP.h"

#include "CATBooleanDef.h"

/**
 * Super class to derive implementation for interface CATISchAppCntrShow.
 * <b>Role</b>: Adaptor
 */

class ExportedByCATSchItfCPP CATEASchAppCntrShow : public CATBaseUnknown
{
  public:  

  CATDeclareClass;

  /**
   * Constructs an empty CATEASchAppCntrShow.
   */
  CATEASchAppCntrShow();
  virtual ~CATEASchAppCntrShow();

  /**
  * Defines show status of the applicaton connector.
  * @param oBShow
  *   True if the connector show status is Show.
  *   False if the connector show status is NoShow.
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
  virtual HRESULT AppShowCntr (CATBoolean *oBShow);

  /**
  * Defines show status of the applicaton branch connector.
  * @param oBShow
  *   True if the connector show status is Show.
  *   False if the connector show status is NoShow.
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
  virtual HRESULT AppShowBranchCntr (CATBoolean *oBShow);

  private:
  // do not implement
  CATEASchAppCntrShow (CATEASchAppCntrShow &);
  CATEASchAppCntrShow& operator=(CATEASchAppCntrShow&);

};

#endif

#ifndef CATISchAppCntrShow_H
#define CATISchAppCntrShow_H

//	COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATEASchAppCntrShow
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

class CATIUnknownList;


extern "C" const IID IID_CATISchAppCntrShow ;

/**
 * Interface to manage application connector show status.
 * Applications must derive implementation of this interface 
 * from the adapter class CATEASchAppCntrShow.
 * <b>Role</b>: Defines application connector show status for
 * an application class of connector.
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */

class CATISchAppCntrShow : public IUnknown
{
  public:  

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
  virtual HRESULT AppShowCntr (CATBoolean *oBShow) = 0;

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
  virtual HRESULT AppShowBranchCntr (CATBoolean *oBShow) = 0;

};
#endif

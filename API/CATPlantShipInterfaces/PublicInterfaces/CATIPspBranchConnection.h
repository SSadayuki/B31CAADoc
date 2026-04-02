#ifndef CATIPspBranchConnection_H
#define CATIPspBranchConnection_H

//	COPYRIGHT DASSAULT SYSTEMES 2002
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

// System
#include "IUnknown.h"

extern "C" const IID IID_CATIPspBranchConnection ;

/**
 * Interface to manage branch connections. 
 * <b>Role</b>: To access branch connection data.
 */

class CATIPspBranchConnection : public IUnknown
{
  public:  
  
  /**
  * Get the main route and connector.
  * @param oMainRoute  [out, IUnknown#Release]
  *   Main route in branch connection.
  * @param oCntrInMain  [out, IUnknown#Release]
  *   Branch connector in branch connection.
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
  virtual HRESULT GetMain (IUnknown *&oMainRoute, IUnknown *&oCntrInMain) = 0;

  /**
  * Get the branch route and connector.
  * @param oBranchRoute  [out, IUnknown#Release]
  *   Branch route in branch connection.
  * @param oCntrInBranch  [out, IUnknown#Release]
  *   Extremity connector of the branch in branch connection.
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
  virtual HRESULT GetBranch (IUnknown *&oBranchRoute, IUnknown *&oCntrInBranch) = 0;

};
#endif

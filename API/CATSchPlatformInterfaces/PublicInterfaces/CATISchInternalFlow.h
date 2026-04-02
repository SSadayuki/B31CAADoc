#ifndef CATISchInternalFlow_H
#define CATISchInternalFlow_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

// CATSchPlatformInterfaces
#include "CATSchGeneralEnum.h"

class CATIUnknownList;

extern "C" const IID IID_CATISchInternalFlow ;

/**
 * Interface to query Schematic internal flow information 
 * on a component.
 * <b>Role</b>: To query internal flow properties.
 */
class CATISchInternalFlow : public IUnknown
{
  public:   
  
  /**
  * Get insertion flow type.
  * @param oEInternalFlowType
  *   Internal flow type.
  *   @see CATSchInternalFlowType
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
  virtual HRESULT GetInsertionType (CATSchInternalFlowType *oEInternalFlowType) = 0;

  /**
  * Get insertion flow status.
  * @param oEInternalFlowStatus
  *   Internal flow status.
  *   @see CATSchInternalFlowStatus
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
  virtual HRESULT GetStatus (CATSchInternalFlowStatus *oEInternalFlowStatus) = 0;

  /**
  * Set insertion flow status.
  * @param iEInternalFlowStatus
  *   Internal flow status.
  *   @see CATSchInternalFlowStatus
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
  virtual HRESULT SetStatus (const CATSchInternalFlowStatus iEInternalFlowStatus) = 0;

  /**
  * List all schematic connectors associated with an internal flow.
  * @param oLSchCntrs
  *   A list of schematic connector objects
  *   (members are CATISchCntrLocation interface pointers).
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
  virtual HRESULT ListSchConnectors (CATIUnknownList **oLSchCntrs) = 0;
};
#endif

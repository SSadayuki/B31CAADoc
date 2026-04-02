#ifndef CATISchAppCntrFlow_H
#define CATISchAppCntrFlow_H

//	COPYRIGHT DASSAULT SYSTEMES 2000 

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

// CATSchPlatformInterfaces
#include "CATSchGeneralEnum.h"

extern "C" const IID IID_CATISchAppCntrFlow ;

/**
 * Interface to mangage Application Connector Flow property. 
 * <b>Role</b>: To query and modify Application Connector Flow property.
 */

class CATISchAppCntrFlow : public IUnknown
{
  public:  
  
  /**
  * Query the application Flow Capability property of this connector.
  * @param oEFlowCapability
  *   Flow Capability.
  *   @see CATSchCntrFlowCapability
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
  virtual HRESULT AppGetFlowCapability (
    CATSchCntrFlowCapability *oEFlowCapability) = 0;

  /**
  * Set the application Flow Capability property of this connector.
  * @param iEFlowCapability
  *   Flow Capability property to be set.
  *   @see CATSchCntrFlowCapability
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
  virtual HRESULT AppSetFlowCapability (
    CATSchCntrFlowCapability iEFlowCapability) = 0;

  /**
  * Query the application Flow Reality property of this connector.
  * @param oEFlowReality
  *   Flow Reality.
  *   @see CATSchCntrFlowReality
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
  virtual HRESULT AppGetFlowReality (
    CATSchCntrFlowReality *oEFlowReality) = 0;

  /**
  * Set the application Flow Reality property of this connector.
  * @param iEFlowReality
  *   Flow Reality property to be set.
  *   @see CATSchCntrFlowReality
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
  virtual HRESULT AppSetFlowReality (
    CATSchCntrFlowReality iEFlowReality) = 0;
};

#endif

#ifndef CATIPspCntrFlow_H
#define CATIPspCntrFlow_H

//	COPYRIGHT DASSAULT SYSTEMES 2000
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

// CATPspPlatformInterfaces
#include "CATPspCntrFlowNames.h"

extern "C" const IID IID_CATIPspCntrFlow ;

/**
 * Interface to mangage Plant-Ship Connector Flow property. 
 * <b>Role</b>: To query and modify Plant-Ship Connector Flow property.
 */

class CATIPspCntrFlow : public IUnknown
{
  public:  
  
  /**
  * Query the application Flow Capability property of this connector.
  * @param oEFlowCapability
  *   Flow Capability.
  *   @see CATPspCntrFlowCapability
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
  virtual HRESULT GetFlowCapability (
    CATPspCntrFlowCapability &oEFlowCapability) = 0;

  /**
  * Set the application Flow Capability property of this connector.
  * @param iEFlowCapability
  *   Flow Capability property to be set.
  *   @see CATPspCntrFlowCapability
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
  virtual HRESULT SetFlowCapability (
    const CATPspCntrFlowCapability iEFlowCapability) = 0;

  /**
  * Query the application Flow Reality property of this connector.
  * @param oEFlowReality
  *   Flow Reality.
  *   @see CATPspCntrFlowReality
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
  virtual HRESULT GetFlowReality (
    CATPspCntrFlowReality &oEFlowReality) = 0;

  /**
  * Set the application Flow Reality property of this connector.
  * @param iEFlowReality
  *   Flow Reality property to be set.
  *   @see CATPspCntrFlowReality
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
  virtual HRESULT SetFlowReality (
    const CATPspCntrFlowReality iEFlowReality) = 0;
};

#endif

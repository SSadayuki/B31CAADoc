#ifndef CATISchCompFlow_H
#define CATISchCompFlow_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

class CATISchInternalFlow;
class CATIUnknownList;

extern "C" const IID IID_CATISchCompFlow ;

/**
 * Interface to manage Schematic component's association with its
 * internal flow objects. 
 * <b>Role</b>: To modify component's links to its
 * internal flow objects. 
 */
class CATISchCompFlow : public IUnknown
{
  public: 
  
  /**
  * Add an internal flow to a component.
  * @param iLFlowCntrs
  *   List of connectors (2) to be connected by the flow.
  *   (members should be CATISchAppConnector interface pointer)
  * @param oInternalFlowAdded
  *   Internal flow object added/created
  *   (CATISchInternalFlow interface pointer).
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
  virtual HRESULT AddInternalFlow (CATIUnknownList *iLFlowCntrs,
    CATISchInternalFlow **oInternalFlowAdded) = 0;

  /**
  * Add an internal flow to a component. Specifying which
  * graphical images the connector graphics are on.
  * @param iLFlowCntrs
  *   List of connectors (2) to be connected by the flow.
  *   (members should be CATISchAppConnector interface pointer)
  * @param iLOwnerImages
  *   List of CATISchGRRComp interface pointers
  * @param oInternalFlowAdded
  *   Internal flow object added/created
  *   (CATISchInternalFlow interface pointer).
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
  virtual HRESULT AddInternalFlowSpecifyGRR (CATIUnknownList *iLFlowCntrs,
    CATIUnknownList *iLOwnerGRR,
    CATISchInternalFlow **oInternalFlowAdded) = 0;

  /**
  * Remove an internal flow from a component.
  * @param iInternalFlowToRemove
  *   Internal flow object to be removed.
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
  virtual HRESULT RemoveInternalFlow (CATISchInternalFlow *iInternalFlowToRemove) = 0;

  /**
  * List all internal flow objects of a component.
  * @param oLInternalFlow
  *   A list of internal flow objects 
  *   (members are CATISchInternalFlow interface pointers).
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
  virtual HRESULT ListInternalFlows (CATIUnknownList **oLInternalFlow) = 0;

};
#endif

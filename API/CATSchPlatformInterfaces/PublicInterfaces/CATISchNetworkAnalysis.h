#ifndef CATISchNetworkAnalysis_H
#define CATISchNetworkAnalysis_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

class CATISchAppConnectable;
class CATIUnknownList;

extern "C" const IID IID_CATISchNetworkAnalysis ;

/**
 * Interface to analysis a schematic network (a set of connectioned
 * objects).
 * <b>Role</b>: To analysis the connectivity of objects.
 */

class CATISchNetworkAnalysis : public IUnknown
{
  public:  
  
  /**
  * List the connected objects in the network.
  * @param oLNetworkObjs
  *   Pointer to a list of all connected objects in the network.
  *   (Members are CATISchAppConnectable interface pointers)
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
  virtual HRESULT ListNetworkObjects (CATIUnknownList **oLNetworkObjs) = 0;

  /**
  * Given a start and end object in the network, this method returns
  * a list of network objects each representing a path connecting the
  * the 2 input objects.
  * @param iFromObject
  *   The connectable to start from.
  * @param iToObject
  *   The connectable to finish at.
  * @param oLNetworks
  *   Pointer to a list of networks.
  *   (Members are CATISchNetworkAnalysis interface pointers).
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
  virtual HRESULT FindPaths (CATISchAppConnectable *iFromObject,
    CATISchAppConnectable *iToObject, CATIUnknownList **oLNetworks) = 0;

  /**
  * List the extremity objects of the network.
  * @param oLExtremityObjs
  *   Pointer to a list of extremity objects of the network 
  *    (Members are CATISchAppConnectable interface pointers).
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
  virtual HRESULT ListExtremityObjects (CATIUnknownList **oLExtremityObjs) = 0;

};
#endif

#ifndef CATIPspSpatial_H
#define CATIPspSpatial_H

//	COPYRIGHT DASSAULT SYSTEMES 2000
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

// System
#include "IUnknown.h"

class CATIUnknownList;
class CATIArrNode_var;

extern "C" const IID IID_CATIPspSpatial ;

/**
 * Interface to access Plant Ship spatial object information. 
 * <b>Role</b>: To access Plant Ship object information. 
 */

class CATIPspSpatial : public IUnknown
{
  public:  
  
  /**
  * Return all physical objects associated to this spatial object.
  * @param oListOfPhysicals [out, IUnknown#Release]
  *   List of physical objects.
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
  virtual HRESULT ListPhysicals ( CATIUnknownList *& oListOfPhysicals )=0;
  
  /**
  * Return all physical objects associated to this spatial object.
  * @param ispNode
  *   The extremity node of a run.
  * @param oListOfPhysicals [out, IUnknown#Release]
  *   List of physical objects that is connected to the given node.
  * @param oListOfConnectors [out, IUnknown#Release]
  *   List of connectors connected to the extremity node.
  *   One-to-one correspondence with oListOfPhysicals.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>E_INVALIDARG</dt>
  *     <dd>Invalid argument</dd>
  *     <dt>S_OK</dt>
  *     <dd>Found a connected physical object</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT ListConnectedPhysicals ( const CATIArrNode_var& ispNode, 
                                           CATIUnknownList *& oListOfPhysicals,
                                           CATIUnknownList *& oListOfConnectors )=0;

};
#endif

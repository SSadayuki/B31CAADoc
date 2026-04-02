#ifndef CATIPspPhysical_H
#define CATIPspPhysical_H

//	COPYRIGHT DASSAULT SYSTEMES 2000
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

extern "C" const IID IID_CATIPspPhysical ;

/**
 * Interface to access Plant Ship physical object information. 
 * <b>Role</b>: To access Plant Ship object information. 
 */

class CATIPspPhysical : public IUnknown
{
  public:  
  
  /**
  * Return the functional object.
  * @param oFunctional [out, IUnknown#Release]
  *   Functional object.
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FALSE</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT GetFunctional ( IUnknown *& oFunctional )=0;
  
  /**
  * Get the spatial object.
  * @param oSpatial [out, IUnknown#Release]
  *   Spatial object.
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
  virtual HRESULT GetSpatial ( IUnknown *& oSpatial )=0;
  
  /**
  * Replace existing function.
  * @param ipFunction
  *   New function to replace
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
  virtual HRESULT ReplaceFunction(const IUnknown* ipNewFunction) = 0;
  
  /**
  * Disassociate the existing function.
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
  virtual HRESULT DisassociateFunction() = 0;

  /**
  * Query if the physical object is created with a function.
  * @param oStatus
  *   True or False.
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
  virtual HRESULT HasFunction ( CATBoolean& oStatus ) = 0;
};
#endif

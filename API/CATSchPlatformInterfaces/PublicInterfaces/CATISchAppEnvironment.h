#ifndef CATISchAppEnvironment_H
#define CATISchAppEnvironment_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

class CATIContainer;

extern "C" const IID IID_CATISchAppEnvironment ;

/**
 * Interface to mangage application environment in the Schematic application
 * context.
 * <b>Role</b>: To set up application environment (such as initializing 
 * workbenches, loading feature start up objects).
 */

class CATISchAppEnvironment : public IUnknown
{
  public:  
  
  /**
  * Initialize environment when schematic application starts.
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
  virtual HRESULT AppInitWhenApplicationStarts () = 0;

  /**
  * Initialize environment when schematic application ends.
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
  virtual HRESULT AppCleanUpWhenApplicationEnds () = 0;

  /**
  * Return the container of the application objects.
  * @param oAppObjCont
  *   The container of the application objects.
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
  virtual HRESULT AppGetAppObjectContainer (CATIContainer **oAppObjCont) = 0;
  
  /**
  * Load all the necessary feat files.
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
  virtual HRESULT AppLoadFeatFiles () = 0;

};
#endif

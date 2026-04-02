#ifndef CATISchAppAssembly_H
#define CATISchAppAssembly_H

//	COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATEASchAppAssembly
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

class CATIUnknownList;


extern "C" const IID IID_CATISchAppAssembly ;

/**
 * Interface to manage an application assembly.
 * Applications must derive implementation of this interface 
 * from the adapter class CATEASchAppAssembly.
 * <b>Role</b>: Defines application component or route as an assembly.
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */

class CATISchAppAssembly : public IUnknown
{
  public:  

  /**
  * Declares if the application object is an assembly.
  * @param oBYes
  *   True if the application object as an assembly.
  *   False if the application object is not an assembly.
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
  virtual HRESULT AppIsAssembly (CATBoolean *oBYes) = 0;

  /**
  * Lists the members of the assembly application object.
  * @param oLMembers
  *   A list of the application object's member objects.
  *   The implementation of this method shall create the list.
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
  virtual HRESULT AppListMembers (CATIUnknownList **oLMembers) = 0;

};
#endif

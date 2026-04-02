#ifndef CATISchAppAssemblyMember_H
#define CATISchAppAssemblyMember_H

//	COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATEASchAppAssemblyMember
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

class CATISchAppConnectable;


extern "C" const IID IID_CATISchAppAssemblyMember ;

/**
 * Interface to manage an application assembly member.
 * Applications must derive implementation of this interface 
 * from the adapter class CATEASchAppAssemblyMember.
 * <b>Role</b>: Defines an application component or route as belonging 
 * to an assembly.
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */

class CATISchAppAssemblyMember : public IUnknown
{
  public:  

  /**
  * Declares if the application object is a member of an assembly.
  * @param oBYes
  *   True if the application object belongs to an assembly.
  *   False if the application object does not.
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
  virtual HRESULT AppIsAssemblyMember (CATBoolean *oBYes) = 0;

  /**
  * Returns the application assembly object of which this object
  * is a member.
  * @param oAssembly
  *   An interface pointer to the assembly object. 
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
  virtual HRESULT AppGetAssembly (CATISchAppConnectable **oAssembly) = 0;

};
#endif

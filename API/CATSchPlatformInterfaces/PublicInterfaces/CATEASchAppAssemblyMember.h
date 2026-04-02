#ifndef CATEASchAppAssemblyMember_H
#define CATEASchAppAssemblyMember_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

// System
#include "CATBaseUnknown.h"
#include "CATSchItfCPP.h"

#include "CATBooleanDef.h"

class CATISchAppConnectable;

/**
 * Super class to derive implementation for interface CATISchAppAssemblyMember.
 * <b>Role</b>: Adaptor
 */

class ExportedByCATSchItfCPP CATEASchAppAssemblyMember : public CATBaseUnknown
{
  public:  

  CATDeclareClass;

  /**
   * Constructs an empty CATEASchAppAssemblyMember.
   */
  CATEASchAppAssemblyMember();
  virtual ~CATEASchAppAssemblyMember();

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
  virtual HRESULT AppIsAssemblyMember (CATBoolean *oBYes);

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
  virtual HRESULT AppGetAssembly (CATISchAppConnectable **oAssembly);

  private:
  // do not implement
  CATEASchAppAssemblyMember (CATEASchAppAssemblyMember &);
  CATEASchAppAssemblyMember& operator=(CATEASchAppAssemblyMember&);

};

#endif

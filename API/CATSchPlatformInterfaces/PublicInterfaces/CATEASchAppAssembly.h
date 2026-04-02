#ifndef CATEASchAppAssembly_H
#define CATEASchAppAssembly_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

// System
#include "CATBaseUnknown.h"
#include "CATSchItfCPP.h"

#include "CATBooleanDef.h"

class CATIUnknownList;

/**
 * Super class to derive implementation for interface CATISchAppAssembly.
 * <b>Role</b>: Adaptor
 */

class ExportedByCATSchItfCPP CATEASchAppAssembly : public CATBaseUnknown
{
  public:  

  CATDeclareClass;

  /**
   * Constructs an empty CATEASchAppAssembly.
   */
  CATEASchAppAssembly();
  virtual ~CATEASchAppAssembly();

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
  virtual HRESULT AppIsAssembly (CATBoolean *oBYes);

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
  virtual HRESULT AppListMembers (CATIUnknownList **oLMembers);

  private:
  // do not implement
  CATEASchAppAssembly (CATEASchAppAssembly &);
  CATEASchAppAssembly& operator=(CATEASchAppAssembly&);

};

#endif

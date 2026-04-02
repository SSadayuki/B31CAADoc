#ifndef CATIEdiCableReference_H
#define CATIEdiCableReference_H
//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "IUnknown.h"

extern "C" const IID IID_CATIEdiCableReference;

class CATIEdiWire;

/**
 * Interface to manage an electrical schematic cable reference.
 * <b>Role</b>:This interfaces describes the electrical object cable.   
 */
class CATIEdiCableReference : public IUnknown
{
  
 public:
  
  /**
   * Creates a wire.
   * 
   * @param iEdiClassType
   *   The class type of the wire.
   * @param iEdiInstanceName
   *   The Instance Name of the application component instance.
   * @param oEdiWire
   *   The new application component object created 
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
  virtual HRESULT AddWire (const char    *iEdiClassType, 
			   const wchar_t *iEdiInstanceName, 
			   CATIEdiWire** oEdiWire) = 0;

};
#endif





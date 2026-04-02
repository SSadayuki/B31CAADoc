#ifndef CATIEdiTerminalBoard_H
#define CATIEdiTerminalBoard_H
//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "IUnknown.h"

class CATICStringList;
class CATIUnknownList;
class CATIEdiPin;

extern "C" const IID IID_CATIEdiTerminalBoard;

/**
 * Interface to manage an electrical schematic Terminal Board.
 * <b>Role</b>:This interfaces describes the electrical object Terminal Board.   
 */
class CATIEdiTerminalBoard : public IUnknown
{
  
 public:
  
  /**
   * List of Pin connectors.
   * 
   * @param oLPins
   *   The Pin connectors
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
  virtual HRESULT ListPins (CATIUnknownList **oLPins) = 0;
  
  /**
   * Sets a pin to a given potential.
   * 
   * @param iPotential
   *   The Potential description (e.g. 0V or 10V)
   * @param iPin
   *   The pin connector to work on
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
  virtual HRESULT SetPotential (wchar_t* iPotential, CATIEdiPin* iPin) = 0;
  
  /**
   * Unsets pins to a given potential.
   * 
   * @param iPotential
   *   The Potential description (e.g. 0V or 10V)
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
  virtual HRESULT RemovePotential (wchar_t* iPotential) = 0;

  /**
   * List of Potentials.
   * 
   * @param oLPotentials
   *   The List of Potentials
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
  virtual HRESULT ListPotentials (CATICStringList **oLPotentials) = 0; 
};
#endif





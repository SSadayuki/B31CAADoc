#ifndef CATIEdiJunctionBox_H
#define CATIEdiJunctionBox_H
//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

#include "IUnknown.h"

class CATIUnknownList;

extern "C" const IID IID_CATIEdiJunctionBox;

/**
 * Interface to manage an electrical schematic Junction Box.
 * <b>Role</b>:This interfaces describes the electrical object Junction Box.   
 */
class CATIEdiJunctionBox : public IUnknown
{
  
 public:
  
  /**
   * Gets the list of TerminalBoards for the Junction Box
   * (aggregated TerminalBoards). 
   *
   * @param oLTerminalBoards
   *   List of TerminalBoards
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
  virtual HRESULT ListTerminalBoards (CATIUnknownList **oLTerminalBoards) = 0;
  
  /**
   * List of Wide Pin connectors.
   * 
   * @param oLWidePins
   *   The Wide Pin connectors
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
  virtual HRESULT ListWidePins (CATIUnknownList **oLWidePins) = 0;

  /**
   * Gets Associated Cables.
   * 
   * @param oLEdiCables
   *   The connected cables
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
  virtual HRESULT ListAssociatedCables (CATIUnknownList **oLEdiCables) = 0;

};
#endif





#ifndef CATEASchAppDisplayMode_H
#define CATEASchAppDisplayMode_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

// System
#include "CATBaseUnknown.h"
#include "CATSchItfCPP.h"

#include "CATSchGeneralEnum.h"

/**
 * Super class to derive implementation for interface CATISchAppDisplayMode.
 * <b>Role</b>: Adaptor
 */

class ExportedByCATSchItfCPP CATEASchAppDisplayMode : public CATBaseUnknown
{
  public:  

  CATDeclareClass;

  /**
   * Constructs an empty CATEASchAppDisplayMode.
   */
  CATEASchAppDisplayMode();
  virtual ~CATEASchAppDisplayMode();

  /**
  * Defines application display mode.
  * @param oEDisplayMode
  *   Enum describing the display mode the application
  *   wishes to use.  
  *   (see CATSchGeneralEnum.h for descriptions)
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
  virtual HRESULT AppDisplayMode (CATSchDisplayMode *oEDisplayMode); 

  private:
  // do not implement
  CATEASchAppDisplayMode (CATEASchAppDisplayMode &);
  CATEASchAppDisplayMode& operator=(CATEASchAppDisplayMode&);

};

#endif

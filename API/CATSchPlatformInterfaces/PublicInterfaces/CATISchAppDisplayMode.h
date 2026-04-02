#ifndef CATISchAppDisplayMode_H
#define CATISchAppDisplayMode_H

//	COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1 
 * @CAA2Usage U4 CATEASchAppDisplayMode
 */

// System
#include "IUnknown.h"

// CATSchPlatformInterfaces
#include "CATSchGeneralEnum.h"


extern "C" const IID IID_CATISchAppDisplayMode ;

/**
 * Interface to manage application display mode.
 * Applications must derive implementation of this interface 
 * from the adapter class CATEASchAppDisplayMode.
 * <b>Role</b>: Defines application display mode.
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */

class CATISchAppDisplayMode : public IUnknown
{
  public:  

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
  virtual HRESULT AppDisplayMode (CATSchDisplayMode *oEDisplayMode) = 0; 

};
#endif

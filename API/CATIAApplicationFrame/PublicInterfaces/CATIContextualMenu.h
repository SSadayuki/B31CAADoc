#ifndef CATIContextualMenu_h
#define CATIContextualMenu_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATExtIContextualMenu
 */

#include "SELECT.h"
#include "CATBaseUnknown.h"

class CATCmdContainer;

#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedBySELECT IID IID_CATIContextualMenu;
#else
extern "C" const IID IID_CATIContextualMenu;
#endif

/**
* Interface to define or retrieve the contextual menu of an object.
* <b>Role:</b>When you click with the mouse left button over an object, 
* to have a specific contextual menu you must implement on your object this interface. 
* <p><b>BOA information</b>: this interface CANNOT be implemented
* using the BOA (Basic Object Adapter).
* To know more about the BOA, refer to the CAA Encyclopedia home page.
* Click Middleware at the bottom left, then click the Object Modeler tab page.
* Several articles deal with the BOA.</p>
*/
class ExportedBySELECT CATIContextualMenu : public CATBaseUnknown
{
  CATDeclareInterface;
  
public:

	/**
	 * Returns the contextual menu.
	 * @param oMenu
	 * The contextual menu dedicated to the object implementing this interface.
     */
  virtual HRESULT GetContextualMenu(CATCmdContainer *& oMenu) = 0;
};

#endif

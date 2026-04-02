#ifndef __CATIContextualSubMenu_h
#define __CATIContextualSubMenu_h

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

#include "ApplicationFrame.h"
#include "CATBaseUnknown.h"


class CATCmdAccess;



#ifndef LOCAL_DEFINITION_FOR_IID
extern ExportedByApplicationFrame IID IID_CATIContextualSubMenu;
#else
extern "C" const IID IID_CATIContextualSubMenu;
#endif


/**
* Interface to add menu item in the contextual menu.
* <b>Role</b>:This interface allows you to add command which appears
* in the < xxx > object menu of the contextual menu. The xxx object must also implement the 
* @href CATIEdit interface.
* <br>To do this, we create and arrange command starters that we associate with 
*  commands using command headers. These command headers are defined in the 
*  workshop of the document. 
* <br>Each starter are chained together to form a sub menu. 
* <br><b>The life cycle of the sub menu</b>
*  <br>In each implementation of this interface, 
*  the sub menu must be a data member to manage its life cycle. It can be
*  identical or different from a call to <tt>GetContextualSubMenu</tt> to another.
*  <ul>
*  <li> If it is identical, it can be created in the constructor, returned in the
*    GetContextualSubMenu method, and deleted in the destructor. </li>
*  <li>Otherwise, it must be created in the GetContextualSubMenu method. To
*    correctly manage its life cycle, it must be deleted:
*    <ul>
*    <li>whenever calling GetContextualSubMenu</li>
*    <li>in the destructor when the class itself is deleted</li>
*    </ul>
*  </ul>
*/
class ExportedByApplicationFrame CATIContextualSubMenu : public CATBaseUnknown {

  CATDeclareInterface;

public:

  /**
  * Returns the sub menu access.
  */
  virtual CATCmdAccess * GetContextualSubMenu () = 0;

};

/** @nodoc */
CATDeclareHandler (CATIContextualSubMenu, CATBaseUnknown);


#endif//__CATIContextualSubMenu_h

#ifndef CATDLGMENU_H
#define CATDLGMENU_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

#include "CATDialog.h"

/**
 * Base class to create a menu.
 * <br>
 * This class can not be instantiated.
 * @see CATDlgBarMenu, CATDlgSubMenu, CATDlgContextualMenu
 */

class ExportedByDI0PANV2 CATDlgMenu : public CATDialog
{
 public:
   /**
   * @nodoc
   * Requests the ClassName, IsA, and IsAKindOf methods to be created.
   */
   CATDeclareClass ;

 protected:

   /**
   * Constructs a menu object.
   * @param iParent
   * The parent widget.
   * @param iObjectName
   * The internal name of the menu.
   * @param iStyle
   * The style of the menu. 
   */
   CATDlgMenu( CATDialog *iParent, const CATString& iObjectName, CATDlgStyle iStyle=NULL);
   virtual ~CATDlgMenu();
};
#endif

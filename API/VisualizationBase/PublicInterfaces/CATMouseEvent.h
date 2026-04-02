#ifndef CATMouseEvent_H
#define CATMouseEvent_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATViz.h"
#include "CATDeviceEvent.h"
#include "CATMathPoint2Df.h"

/**
* Event to notify of a mouse Interaction.
*
* <b>Role</b>: Notify of a mouse interaction.
* It informs the viewer and the manipulators of a mouse action, be it a
* motion or a button press/release
*/
class ExportedByCATViz CATMouseEvent : public CATDeviceEvent
{
//------------------------------------------------------------------------------
  CATDeclareClass;

  public :
  /** @nodoc */
    CATMouseEvent();
    virtual ~CATMouseEvent();

  /** @nodoc */
    CATMathPoint2Df Point; // Pixel coordinates pointed by the cursor on the window
  /** @nodoc */
    CATMathPoint2Df PtVpt;	// Pixel coordinates pointed by the cursor on the activated viewpoint
   /** @nodoc */
   int MouseModifiers;		// Status of mouse modifiers 
      // MouseModifier1On : A second mouse button is pressed ( the lefter non-pressed button )
      // MouseModifier1On : A third mouse button is pressed ( the lefter non-pressed button )
      #define MouseModifier1On	(1<<0)
      #define MouseModifier2On	(1<<1)
      #define MouseButtonLeft 	(1<<2)
      #define MouseButtonRight	(1<<3)

};


#endif

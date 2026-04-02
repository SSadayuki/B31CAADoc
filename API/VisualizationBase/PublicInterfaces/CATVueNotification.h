#ifndef _CATVueNotification
#define _CATVueNotification

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATViz.h"
#include "CATNotification.h"
#include <string.h>

class CATPickPath;

/**
  * Class to notify an event from the user interface.
  * <b>Role</b>: This notification is the base class for all notification
  * send by CATManipulator and its derived classes. They notify of the
  * different interactions from the user.
  */

class ExportedByCATViz CATVueNotification : public CATNotification
{
	CATDeclareClass;

  enum VueState { VueRefuse, VueAccept };

  public:
  /** 
    * Constructs a CATVueNotification notification.
    * @param iNotification 
    *   The device event notification.
    *   This notification contains the manipulation device 
    *   parameters like mouse position and move vector.
    */
    CATVueNotification(CATNotification *iNotification = NULL);

    virtual ~CATVueNotification();

    /** @nodoc */
    CATNotification *GetDataNotification() const;

    /** @nodoc */
    void SetDataNotification(CATNotification *);

    /**
	 * Sets the cursor on the 1st graphical element under the mouse.
	 * This element is the 1st of a list containing the graphical elements under the mouse.
	 * The list is sorted by the depth of element. The pick path returned by @href #GetPickPath is valuated
	 * with the pick path of this 1st lement under the mouse.
	 * @see CATPickPath.
     */
    void InitElementList();

    /** 
	 * Moves the cursor on the next element of the list containing the graphical elements under the mouse.
	 * The list is sorted by depth and thus, the cursor will be positionned on a deeper element.
	 * The pick path returned by @href #GetPickPath is valuated with the pick path of this next element under the mouse.
     * @return
     *	 1 when such a pick path exists.
     *	 0 if there is no element deeper under the mouse.
     */
    int MoveToNextElement();

    /**
      * Retrieves the PickPath associated to the VueNotification.
      *
      * @return
      * The CATPickPath constructed during the user interaction
      */
    CATPickPath *GetPickPath();

    /** @nodoc */
    void Accept();

    /** @nodoc */
    void Refuse();

    /** @nodoc */
    CATVueNotification::VueState GetState() const;
    

 protected:
	/** @nodoc */
    CATNotification *_notification;
    /** @nodoc */
    CATVueNotification::VueState _vueState;

};

#endif

#ifndef CATMotionEvent_H
#define CATMotionEvent_H

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

#include "CATViz.h"

#include "CATTimeStampedEvent.h"

/** @nodoc */
#define ButtonMask(i) ((1<<(i))-1)

class CATDevice;

/**
* Event notifying of a motion from any kind of device.
*
* <b>Role</b>: Notifies the viewer of any motion from devices 
*/
class ExportedByCATViz CATMotionEvent : public CATTimeStampedEvent
{
  CATDeclareClass;

  public :
  /** @nodoc */
    CATMotionEvent();
    virtual ~CATMotionEvent();

  /** @nodoc */
    int _buttons;

  /** @nodoc */
    CATDevice *Device;
  /** @nodoc */
    float V[6];
  /** @nodoc */
    float Vpt[2];
  /** @nodoc */
    int _drawPending;
  /** @nodoc */
    int _timeExpired;
  /** @nodoc */
    int _forceMotion;
};

#endif

#ifndef _CATEndPreactivate
#define _CATEndPreactivate

// COPYRIGHT DASSAULT SYSTEMES 1999

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */


//
// CATIA Version 5 Release 1 Framework VFW2
// Copyright Dassault Systemes 1996
//------------------------------------------------------------------------------
// Abstract :   defines the fact that an object manipulated is no more under
// ----------   mouse.
//
//------------------------------------------------------------------------------
// Usage :      is used by manipulator
// ------
//
//------------------------------------------------------------------------------
// Class :      CATEndPreactivate
// -------        CATManipulatorNotification
//                  CATManipulator
//------------------------------------------------------------------------------

#include "CATManipulatorNotification.h"
#include "CATViz.h"

/**
 * Class to notify the end of preselection of the representation.
 * <b>Role</b>: This notification sent by a @href CATManipulator indicates
 * that the mouse leaves the representation controlled by the manipulator.
 * It can be received by any @href CATCommand class by means of the callback
 * through the @href CATCommand#AddAnalyseNotificationCB method. 
 */

class ExportedByCATViz CATEndPreactivate : public CATManipulatorNotification
{
  CATDeclareClass;

  public:
/**
 * Constructs a CATEndPreactivate notification.
 * @param iNotification 
 *   The device event notification.
 *   This notification contains the manipulation device 
 *   parameters like mouse position.
 */
    CATEndPreactivate(CATNotification *iNotification);
    virtual ~CATEndPreactivate();
    
};

#endif

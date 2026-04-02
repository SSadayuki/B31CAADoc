#ifndef CATSchNotification_H
#define CATSchNotification_H
//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

/**
 * Schematic notification.
 * <b>Role</b>: Generic schematic notification.
 */

#include "CATNotification.h"
#include "CATSchItfCPP.h"

class ExportedByCATSchItfCPP CATSchNotification : public CATNotification
{
  CATDeclareClass;

  public:
  /**
   * Constructs an empty CATSchNotification.
   */
    CATSchNotification();
    virtual ~CATSchNotification();
};  

#endif

#ifndef CATSchRouteTerminateNotification_H
#define CATSchRouteTerminateNotification_H
//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Schematic application routing notification.
 * <b>Role</b>: To indicate that the routing dialog should be terminated.
 */

#include "IUnknown.h"
#include "CATSchRouteNotification.h"
#include "CATSchItfCPP.h"

class ExportedByCATSchItfCPP CATSchRouteTerminateNotification : public CATSchRouteNotification
{

  CATDeclareClass;

  public:

  /**
   * Constructs an empty CATSchRouteTerminateNotification.
   */
    CATSchRouteTerminateNotification();
    virtual ~CATSchRouteTerminateNotification();
};  

#endif

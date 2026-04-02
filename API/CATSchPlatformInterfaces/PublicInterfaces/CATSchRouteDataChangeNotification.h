#ifndef CATSchRouteDataChangeNotification_H
#define CATSchRouteDataChangeNotification_H
//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U1
 */

/**
 * Schematic application routing notification. 
 * <b>Role</b>: To notfify the generic command that some data has been changed.
 */

#include "IUnknown.h"
#include "CATSchRouteNotification.h"
#include "CATSchItfCPP.h"

class ExportedByCATSchItfCPP CATSchRouteDataChangeNotification : public CATSchRouteNotification
{
  CATDeclareClass;

  public:
  /**
   * Constructs an empty CATSchRouteDataChangeNotification.
   */
    CATSchRouteDataChangeNotification();
    virtual ~CATSchRouteDataChangeNotification();
};  

#endif

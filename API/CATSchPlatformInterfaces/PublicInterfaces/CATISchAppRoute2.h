#ifndef CATISchAppRoute2_H
#define CATISchAppRoute2_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATEASchAppRoute2
 */

// System
#include "IUnknown.h"

class CATISchRoute;
class CATISchAppConnectable;

extern "C" const IID IID_CATISchAppRoute2 ;

/**
 * Interface to manage an application route object.
 * Application must derived implementation of this interface 
 * from CATEASchAppRoute2.
 * <b>Role</b>: Defines application route object behaviors.
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */

class CATISchAppRoute2 : public IUnknown
{
  public:  

  /**
  * Post process after creating a route instance. 
  * @param iCntbleConnectedTo
  *   The connectable that the route is connected to this route
  *   It is optional
  */
  virtual HRESULT AppPostRouteProcess (
    CATISchAppConnectable *iCntblConnectedTo) = 0;
};
#endif

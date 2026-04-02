#ifndef CATEASchAppRoute2_H
#define CATEASchAppRoute2_H

// COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

// System
#include "CATBaseUnknown.h"
#include "CATSchItfCPP.h"

class CATISchRoute;
class CATISchAppConnectable;

/**
 * Super class to derive implementation for interface CATISchAppRoute2.
 * <b>Role</b>: Adaptor
 */

class ExportedByCATSchItfCPP CATEASchAppRoute2 : public CATBaseUnknown
{
  public:  

  CATDeclareClass;

  /**
   * Constructs an empty CATEASchAppRoute2.
   */
  CATEASchAppRoute2();
  virtual ~CATEASchAppRoute2();

  /**
  * Post process after creating a route instance. 
  * @param iCntbleConnectedTo
  *   The connectable that the route is connected to this route
  *   It is optional
  */
  virtual HRESULT AppPostRouteProcess (
    CATISchAppConnectable *iCntblConnectedTo);

  private:
  // do not implement
  CATEASchAppRoute2 (CATEASchAppRoute2 &);
  CATEASchAppRoute2& operator=(CATEASchAppRoute2&);

};

#endif

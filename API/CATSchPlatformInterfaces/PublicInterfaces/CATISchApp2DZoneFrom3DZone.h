#ifndef CATISchApp2DZoneFrom3DZone_H
#define CATISchApp2DZoneFrom3DZone_H

//	COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATEASchApp2DZoneFrom3DZone
 */

// System
#include "IUnknown.h"
//#include "CATBooleanDef.h"

extern "C" const IID IID_CATISchApp2DZoneFrom3DZone;


/**
 * Interface to create 2D application zone from 3D zone.
 * Application must derived implementation of this interface 
 * from CATEASchApp2DZoneFrom3DZone.
 * <b>Role</b>: To create 2D application zone to be
 * associated with Schematic zone objects.
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */

class CATISchApp2DZoneFrom3DZone : public IUnknown
{
  public:
  /**
  * Create an Application Zone.
  * @param i3DZone
  *   The Bounded Zone (3D) object
  * @param oAppZone
  *   The new Application zone object created (CATISchAppZone
  *   interface pointer).
  */
  virtual HRESULT Create2DAppZone(IUnknown **oAppZone) = 0; 

};
#endif

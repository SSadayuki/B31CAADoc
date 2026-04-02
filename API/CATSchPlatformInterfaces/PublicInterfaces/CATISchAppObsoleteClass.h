#ifndef CATISchAppObsoleteClass_H
#define CATISchAppObsoleteClass_H

//	COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATEASchAppObsoleteClass
 */

// System
#include "IUnknown.h"

class CATSchNotification;

extern "C" const IID IID_CATISchAppObsoleteClass ;

/**
 * Interface to manage obsoleted application object classes.
 * Application must derived implementation of this interface 
 * from CATEASchAppObsoleteClass.
 * <b>Role</b>: Declare that this class is obsolete to the schematic platform.
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */

class CATISchAppObsoleteClass : public IUnknown
{
  public:  

  /**
  * Create a specific notification for this obsolete class to be
  * dispatched by the schematic platform.
  * @param iSchNotif
  *   Application specific subclass of CATSchNotification to be
  *   be dispatched by the schematic platform.
  */
  virtual HRESULT AppCreateObsoleteNotif(CATSchNotification **oSchNotif) = 0;

};
#endif

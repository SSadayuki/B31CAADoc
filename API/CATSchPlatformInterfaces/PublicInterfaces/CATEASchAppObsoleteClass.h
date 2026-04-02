#ifndef CATEASchAppObsoleteClass_H
#define CATEASchAppObsoleteClass_H

//	COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

// System
#include "CATBaseUnknown.h"
#include "CATSchNotification.h"
#include "CATSchItfCPP.h"

/**
 * Super class to derive implementation for interface CATISchAppObsoleteClass.
 * <b>Role</b>: Adaptor
 */

class ExportedByCATSchItfCPP CATEASchAppObsoleteClass : public CATBaseUnknown
{
  public: 
      
  CATDeclareClass;

  /**
   * Constructs an empty CATEASchAppObsoleteClass.
   */
  CATEASchAppObsoleteClass();
  virtual ~CATEASchAppObsoleteClass();  

  /**
  * Create a specific notification for this obsolete class to be
  * dispatched by the schematic platform.
  * @param iSchNotif
  *   Application specific subclass of CATSchNotification to be
  *   be dispatched by the schematic platform.
  */
  virtual HRESULT AppCreateObsoleteNotif (CATSchNotification **oSchNotif);

  private:
  // do not implement
  CATEASchAppObsoleteClass (CATEASchAppObsoleteClass&);
  CATEASchAppObsoleteClass& operator=(CATEASchAppObsoleteClass&);
};

#endif

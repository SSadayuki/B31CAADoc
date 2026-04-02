#ifndef CATEASchApp2DZoneFrom3DZone_H
#define CATEASchApp2DZoneFrom3DZone_H

//	COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

// System
#include "CATBaseUnknown.h"
//#include "CATBooleanDef.h"
#include "CATSchItfCPP.h"

/**
 * Super class to derive implementation for interface CATISchApp2DZoneFrom3DZone.
 * <b>Role</b>: Adaptor
 */

class ExportedByCATSchItfCPP CATEASchApp2DZoneFrom3DZone : public CATBaseUnknown
{
  public: 
      
  CATDeclareClass;

  /**
   * Constructs an empty CATEASchApp2DZoneFrom3DZone.
   */
  CATEASchApp2DZoneFrom3DZone();
  virtual ~CATEASchApp2DZoneFrom3DZone();  

  /**
  * Create an Application Zone object.
  * @param i3DZone
  *   The Bounded Zone (3D) object
  * @param oAppZone
  *   The new Application Zone object created (CATISchAppZone
  *   interface pointer).
  * @return
  *   An HRESULT value.
  *   <br><b>Legal values</b>:
  *   <dl>
  *     <dt>S_OK</dt>
  *     <dd>operation is successful</dd>
  *     <dt>E_FAIL</dt>
  *     <dd>operation failed</dd>
  *   </dl>
  */
  virtual HRESULT Create2DAppZone(IUnknown **oAppZone); 

  private:
  // do not implement
  CATEASchApp2DZoneFrom3DZone (CATEASchApp2DZoneFrom3DZone&);
  CATEASchApp2DZoneFrom3DZone& operator=(CATEASchApp2DZoneFrom3DZone&);
};

#endif

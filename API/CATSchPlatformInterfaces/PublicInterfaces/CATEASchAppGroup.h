#ifndef CATEASchAppGroup_H
#define CATEASchAppGroup_H

//	COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U2
 */

// System
#include "CATBaseUnknown.h"
#include "CATSchItfCPP.h"

/**
 * Super class to derive implementation for interface CATISchAppGroup.
 * <b>Role</b>: Adaptor
 */

class CATIUnknownList;

class ExportedByCATSchItfCPP CATEASchAppGroup : public CATBaseUnknown
{
  public: 
      
  CATDeclareClass;

  /**
   * Constructs an empty CATEASchAppGroup.
   */
  CATEASchAppGroup();
  virtual ~CATEASchAppGroup();  

  /**
  * List application group objects.
  * @param iClassType
  *   Class type filter. If null, no filtering will be applied.
  * @param oLZones
  *  (members are CATISchAppZone interfaces pointers)
  *   A list of zones
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
  virtual HRESULT ListZones (const char *iClassType,
     CATIUnknownList **oLZones);

  private:
  // do not implement
  CATEASchAppGroup (CATEASchAppGroup&);
  CATEASchAppGroup& operator=(CATEASchAppGroup&);
};

#endif

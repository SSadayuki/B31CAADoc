#ifndef CATISchAppGroup_H
#define CATISchAppGroup_H

//	COPYRIGHT DASSAULT SYSTEMES 2002

/**
 * @CAA2Level L1
 * @CAA2Usage U4 CATEASchAppGroup
 */

// System
#include "IUnknown.h"
class CATIUnknownList;

extern "C" const IID IID_CATISchAppGroup;

/**
 * Interface to list application group objects found in 
 * the document.
 * Application must derive implementation of this interface 
 * from CATEASchAppGroup.
 * <b>Role</b>: List zones found in the diagram.
 * <p><b>BOA information</b>: this interface CANNOT be implemented
 * using the BOA (Basic Object Adapter).
 * To know more about the BOA, refer to the CAA Encyclopedia home page.
 * Click Middleware at the bottom left, then click the Object Modeler tab page.
 * Several articles deal with the BOA.</p>
 */
class CATISchAppGroup : public IUnknown
{
  public:
  /**
  * List application zone objects.
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
     CATIUnknownList **oLZones) = 0;

};
#endif

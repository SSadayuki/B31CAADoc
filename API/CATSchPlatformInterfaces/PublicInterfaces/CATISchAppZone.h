#ifndef CATISchAppZone_H
#define CATISchAppZone_H

//	COPYRIGHT DASSAULT SYSTEMES 2001

/**
 * @CAA2Level L1
 * @CAA2Usage U5
 */

// System
#include "IUnknown.h"

class CATISchAppConnectable;
class CATIUnknownList;

extern "C" const IID IID_CATISchAppZone ;

/**
 * Interface to manage a application zone object. 
 * <b>Role</b>: Defines application zone object behaviors
 */
class CATISchAppZone : public IUnknown
{
  public:
  
  /**
  * Add an application connectable object to the zone as member.
  * @param iAppCntblToAdd
  *   The application connectable object to be added to the zone.
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
  virtual HRESULT AppAddZoneMember (CATISchAppConnectable *iAppCntblToAdd) = 0;

  /**
  * Remove an application connectable object to the zone as member.
  * @param iAppCntblToRemove
  *   The application connectable object to be removed to the zone.
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
  virtual HRESULT AppRemoveZoneMember (CATISchAppConnectable *iAppCntblToRemove) = 0;

  /**
  * List all members of an application zone.
  * @param oLAppCntbl
  *   A list of zone members (application connectables).
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
  virtual HRESULT AppListZoneMembers (CATIUnknownList **oLAppCntbl) = 0;

};
#endif

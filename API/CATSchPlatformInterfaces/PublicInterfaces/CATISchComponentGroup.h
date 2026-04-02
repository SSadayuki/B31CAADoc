#ifndef CATISchComponentGroup_H
#define CATISchComponentGroup_H

//	COPYRIGHT DASSAULT SYSTEMES 2000

/**
 * @CAA2Level L1
 * @CAA2Usage U3
 */

// System
#include "IUnknown.h"
#include "CATBooleanDef.h"

class CATISchAppConnectable;
class CATIUnknownList;

extern "C" const IID IID_CATISchComponentGroup ;

/**
 * Interface to manage Schematic component's group membership.
 * <b>Role</b>: To add, remove, and list component group members.
 */
class CATISchComponentGroup : public IUnknown
{
  public:   
  
  /**
  * Add a member to the component group.
  * @param iCntblToAdd
  *   The application connectable to be added to the group
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
  virtual HRESULT AddMember (CATISchAppConnectable *iCntblToAdd) = 0;

  /**
  * Remove a member to the component group.
  * @param iCntbleToRemove
  *   The application connectable to be removed from the group
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
  virtual HRESULT RemoveMember (CATISchAppConnectable *iCntblToRemove) = 0;

  /**
  * List all connectable members in the group.
  * @param oLGRR
  *   A list of connectables.
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
  virtual HRESULT ListMembers (CATIUnknownList **oLCntbl) = 0;


};
#endif

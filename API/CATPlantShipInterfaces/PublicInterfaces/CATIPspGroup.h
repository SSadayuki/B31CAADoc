#ifndef CATIPspGroup_H
#define CATIPspGroup_H

//	COPYRIGHT DASSAULT SYSTEMES 2000
/**
  * @CAA2Level L1
  * @CAA2Usage U3
  */

// System
#include "IUnknown.h"

class CATIPspGroupable;
class CATIUnknownList;

extern "C" const IID IID_CATIPspGroup ;

/**
 * Interface to manage group members in making logical relationship. 
 * <b>Role</b>: To modify and query members of the group.
 */

class CATIPspGroup : public IUnknown
{
  public:  
  
  /**
  * Add member object to this group object.
  * @param iMember
  *   An object to be added
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
  virtual HRESULT AddMember ( CATIPspGroupable *iMember ) = 0;
  
  /**
  * Remove member object from this group object.
  * @param iMember
  *   An object to be removed
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
  virtual HRESULT RemoveMember ( CATIPspGroupable *iMember ) = 0;
  
  /**
  * Returns a list of member objects associated to this group object.
  * @param iClassType
  *   Class Type filter. If null, no filtering will be applied.
  * @param oListOfMembers [out, IUnknown#Release]
  *   A list of member objects
  * @param iReturnBranchCnx
  *   Optional parameter to indicate if branch connections are returned
  *   as members of the group.  Default is not to include branch connections.
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
  virtual HRESULT ListMembers ( const char *iClassType,
    CATIUnknownList **oListOfMembers, const int iReturnBranchCnx=0 ) = 0;

};
#endif
